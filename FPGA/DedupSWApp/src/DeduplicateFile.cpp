//
// Created by insujang on 16. 11. 3.
//

#include "DeduplicateFile.h"
#include "levelDBWrapper.h"
#include "../lib/sha1/TinySHA1.hpp"
#include <iostream>
#include <cassert>
#include <leveldb/write_batch.h>
#include <fstream>
#include "global.h"

extern "C" {
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#include "libaxidma.h"
#include "MurmurHash.hpp"
}

using namespace std;

struct rcvData{
    int length;
    int hash;
};

#define BUFFER_LEN 8192
#define NUM_HASH_FROM_HW 7

DeduplicateFile::DeduplicateFile(){
    m_dmaDriver = new DMADeviceDriverMgr(RX_BUFFER_SIZE, TX_BUFFER_SIZE);
    m_fdDedupHWModule = open(DEDUP_HW_MODULE, O_RDWR | O_SYNC);
}

DeduplicateFile::~DeduplicateFile() {
    close(m_fdDedupHWModule);
    delete m_dmaDriver;
}

unsigned int
DeduplicateFile::getFileSize(string &file_path){
    struct stat status;
    stat(file_path.c_str(), &status);
    return (unsigned int) status.st_size;
}

string
DeduplicateFile::getSHA1(char *str, int len) {
    sha1::SHA1 s;
    uint32_t digest[5];
    char out[41];

    s.processBytes(str, len);
    s.getDigest(digest);

    snprintf(out, 40, "%08x%08x%08x%08x%08x",
             digest[0], digest[1], digest[2], digest[3], digest[4]);

    out[40] = '\0';

    return string(out);
}

string
getMurmurHash(char *str, int len) {

}

int
DeduplicateFile::getVariableChunk(char *str, int strLen) {
    int i;

    unsigned int strHash = 0;
    unsigned int power = 1;

    if(windowLen > strLen) return strLen;

    for(i = 0; i < windowLen; i++){
        strHash = (prime * strHash + str[i]) % modulo;
        power = (power * prime) % modulo;
    }

    for(i = windowLen; i < strLen; i++){
        if(strHash == targetHash) return i;

        strHash = (prime * strHash - power * str[i-windowLen] + str[i]) % modulo;
        power = (power * prime) % modulo;
    }

    return strLen;
}


/**
 * hash_type: sha1
 * store_type: default
 * chunk_scheme: variable
 * @param filePath absolute filepath to dedup
 * @return
 */
int
DeduplicateFile::dedupFile(string filePath)
{
    LevelDBWrapper* ldb = LevelDBWrapper::getInstance();
    DB* hashListDB = ldb->getHashListDB();
    DB* fileListDB = ldb->getFileListDB();

    cout << "[INFO] Deduplication is in progress..." << endl;

    cout << "[INFO] Checking file information..." << endl;

    // File stream for the input file
    ifstream ifStream;
    ifStream.open(filePath, ios::in|ios::binary);
    // If you fail assertion in here, the filePath is inappropriate.
    assert(ifStream.is_open());

    // This is the list of hashes in this file.
    vector<string> hash_list;

    int fileSize = getFileSize(filePath);
    cout << "[DEBUG] Target: " << filePath << endl;
    cout << "        Size: " << fileSize << " bytes" << endl;

    /* Dynamic chunking */
    cout << "[INFO] Dynamic chunking computation starts" << endl;

    // 10KB buffer for Rabin Karp hash algorithm
    //char* buffer = new char[BUFFER_LEN];
    char* buffer = m_dmaDriver->getTxBuffer();
    char* rxBuffer = m_dmaDriver->getRxBuffer();
    int dedupHWTriggerInfo = 1;

    int accumulatedChunkLength = 0;
    int readLength = 0;
    int chunkLength = 0;



    while (accumulatedChunkLength != fileSize) {
        // This is the first time of read: just read 8KB
        if(accumulatedChunkLength == 0){
            // no memmove
            ifStream.read(buffer, BUFFER_LEN);
            readLength = ifStream.gcount();
        }
        // If stream reaches EOF,
        // just do chunking from the remaining buffer.
        else if(ifStream.eof()){
            memmove(buffer, &buffer[chunkLength],
                    (readLength - chunkLength) * sizeof(char));
            // no read
            readLength -= chunkLength;
        }
        // append additional data to the tail of the buffer.
        else{
            // remove first 'chunkLength' size of data
            // and slide data to the first position
            memmove(buffer, &buffer[chunkLength],
                    (BUFFER_LEN - chunkLength) * sizeof(char));
            ifStream.read(&buffer[BUFFER_LEN-chunkLength], chunkLength);
            readLength = readLength - chunkLength + ifStream.gcount();
        }

        /*
         * Chunking and hashing using HW Module
         * In HW module, chunking is only done with fixed 8192 bytes.
         * HW module will make 7 outputs, each of which contains two ints.
         * One is for string index (used to indicate chunk boundary)
         * The other is hash value (calculating murmurhash is accelerated by HW).
         */
        if(readLength == BUFFER_LEN) {
            m_dmaDriver->sendData();
            // cout << "[DEBUG] Data transferred." << endl;
            write(m_fdDedupHWModule, &dedupHWTriggerInfo, sizeof(dedupHWTriggerInfo));
            // cout << "[DEBUG] PL invoked. Waiting for hardware execution completed." << endl;
            // m_dmaDriver->resetRcvBuffer();
            m_dmaDriver->rcvData();

            rcvData* pRcvData = (rcvData*) rxBuffer;
            int lastLength = 0;
            for(int dataItr = 0; dataItr < NUM_HASH_FROM_HW; dataItr++){
                if(pRcvData[dataItr].length == 0)
                    continue;

                char out[9];
                snprintf(out, 8, "%08x",pRcvData[dataItr].hash);
                string outStr(out, sizeof(out));

                hash_list.push_back(outStr);

                ldb->writeDB(hashListDB, outStr, Slice( &buffer[lastLength], pRcvData[dataItr].length - lastLength));
                lastLength = pRcvData[dataItr].length;
            }
            chunkLength = lastLength;
            accumulatedChunkLength += lastLength;
        }

        /*
         * Chunking and hashing using SW Module
         * If remaining buffer size is less than 8192 bytes, it cannot be transferred
         * to HW module. In this case, SW handles calculating hashes.
         */
        else{
            // get a chunk with variable length
            chunkLength = getVariableChunk(buffer, readLength);
            // calculate getSHA1 hash algorithm
            //string hash = getSHA1(buffer, chunkLength);
            string hash = murmurHash::getMurmurHash(buffer, chunkLength);

            // add the hash into hash_list
            hash_list.push_back(hash);

            // add <hash, chunk> key-value pair to hashListDB
            ldb->writeDB(hashListDB, hash, Slice(buffer, chunkLength));
            accumulatedChunkLength += chunkLength;
        }


    }

    cout << "[DEBUG] Accumulated chunk length: " << accumulatedChunkLength
        << " bytes" << endl;
    assert(accumulatedChunkLength == fileSize);

    // join hash_list vector to a string
    string hash_list_str = LevelDBWrapper::joinString(hash_list, DEDUP_DB_HASH_VALUE_DELIMETER);

    // add <filename, hash_list> key-value pair to fileListDB
    ldb->writeDB(fileListDB, filePath, hash_list_str);

    cout << "[INFO] Dynamic chunking computation is finished" << endl;

    return 0;
}