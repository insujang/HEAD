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
#include "DeviceDriverMgr.h"
#include <thread>

extern "C" {
#include <sys/stat.h>
#include <sys/time.h>
#include <fcntl.h>
#include <unistd.h>

#include "libaxidma.h"
#include "MurmurHash.hpp"
}

using namespace std;

#define BUFFER_LEN 8192
#define NUM_HASH_FROM_HW 7

extern bool verbose;

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

/*
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
*/

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

    if(verbose) cout << "[INFO] Verbose option on." << endl;
    cout << "[INFO] Deduplication is in progress..." << endl;

    cout << "[INFO] Checking file information..." << endl;

    // File stream for the input file
    ifstream ifStream;
    ifStream.open(filePath, ios::in|ios::binary);
    // If you fail assertion in here, the filePath is inappropriate.
    assert(ifStream.is_open());

    // This is the list of hashes in this file.
    vector<string> hash_list;

    unsigned int fileSize = getFileSize(filePath);


    cout << "[INFO] Target: " << filePath << endl;
    cout << "       Size: " << fileSize << " bytes" << endl;

    /* Data buffer */
    char *buffer = m_dmaDriver->getTxBuffer();
    rcvItem** rxBuffer = m_dmaDriver->getRxBuffers();

    /* Dynamic chunking */
    cout << "[INFO] Dynamic chunking computation starts" << endl;

    unsigned int accumulatedChunkLength = 0;
    unsigned int chunkLength = 0;
    int readLength = 0;
    int dedupHWTriggerInfo = 1;

    struct timeval tvStart, tvEnd;
    unsigned long long calcTime = 0;
    unsigned numberOfChunks = 0;
    unsigned int iteration = 0;

    while(accumulatedChunkLength < fileSize){
        // -----------------------------------------------------------------
        // 8KB buffer read from file
        // -----------------------------------------------------------------

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

        // -----------------------------------------------------------------
        // 8KB buffer read from file end
        // Computation by HW or SW
        // -----------------------------------------------------------------

        /*
         * Chunking and hashing using HW Module
         * In HW module, chunking is only done with fixed 8192 bytes.
         * HW module will make 7 outputs, each of which contains two ints.
         * One is for string index (used to indicate chunk boundary)
         * The other is hash value (calculating murmurhash is accelerated by HW).
         */
        if(readLength == BUFFER_LEN){
            gettimeofday(&tvStart, NULL);
            //DMA transfer
            m_dmaDriver->sendData();

            // Inovke PL execution
            write(m_fdDedupHWModule, &dedupHWTriggerInfo, sizeof(dedupHWTriggerInfo));

            // Wait for PL execution completion
            m_dmaDriver->rcvData();
            gettimeofday(&tvEnd, NULL);
            calcTime += (tvEnd.tv_sec - tvStart.tv_sec) * 1000000 + (tvEnd.tv_usec - tvStart.tv_usec);

            // save up to 7 hash values and plaintext to levelDB
            int lastLength = 0;
            for(int dataItr = 0; dataItr < NUM_HASH_FROM_HW; dataItr++){
                if(rxBuffer[dataItr]->length < 0) break;

                char out[33];
                snprintf(out, 32, "%08x%08x%08x%08x", rxBuffer[dataItr]->hash[0], rxBuffer[dataItr]->hash[1],
                         rxBuffer[dataItr]->hash[2], rxBuffer[dataItr]->hash[3]); out[32] = '\0';
                string outStr(out);
                hash_list.push_back(outStr);

                ldb->writeDB(hashListDB, outStr,
                             Slice(&buffer[lastLength],
                                   rxBuffer[dataItr]->length - lastLength));

                lastLength = rxBuffer[dataItr]->length;
                numberOfChunks++;
            }

            // No chunking boundary from HW: calculate hash by software
            if(lastLength == 0){
                string hash = murmurHash::getMurmurHash128(buffer, BUFFER_LEN);

                // add the hash into hash_list
                hash_list.push_back(hash);

                // add <hash, chunk> key-value pair to hashListDB
                ldb->writeDB(hashListDB, hash, Slice(buffer, BUFFER_LEN));

                lastLength = BUFFER_LEN;
                numberOfChunks++;
            }

            chunkLength = lastLength;
            accumulatedChunkLength += chunkLength;
        }

        /*
         * Chunking and hashing using SW Module
         * If remaining buffer size is less than 8192 bytes, it cannot be transferred
         * to HW module. In this case, SW handles calculating hashes.
         */
        else{
            gettimeofday(&tvStart, NULL);

            // get chunk boundary by using rolling sum
            chunkLength = getVariableChunk(buffer, readLength);
            // calculate get Murmur hash algorithm
            string hash = murmurHash::getMurmurHash128(buffer, chunkLength);

            gettimeofday(&tvEnd, NULL);
            calcTime += (tvEnd.tv_sec - tvStart.tv_sec) * 1000000 + (tvEnd.tv_usec - tvStart.tv_usec);

            // add the hash into hash_list
            hash_list.push_back(hash);

            // add <hash, chunk> key-value pair to hashListDB
            ldb->writeDB(hashListDB, hash, Slice(buffer, chunkLength));

            accumulatedChunkLength += chunkLength;
            numberOfChunks++;
        }

        // -----------------------------------------------------------------
        // Computation end
        // -----------------------------------------------------------------

        iteration++;
        if(verbose && (iteration % 1000) == 0){
            cout << "[DEBUG] [# of chunks " << numberOfChunks << "] " <<
                 "handled data: " << accumulatedChunkLength / 1000000.0 << "MB. " <<
                 "Total chunking/hasing time: " << (calcTime / 1000000.0) << " s." << endl;
        }
    }

    cout << "[INFO] Accumulated chunk length: " << accumulatedChunkLength
         << " bytes" << endl;
    cout << "[INFO] Number of chunks: " << numberOfChunks << endl;
    assert(accumulatedChunkLength == fileSize);

    cout << "[INFO] Total chunking/hashing time: " << (calcTime / 1000000.0) << " s." << endl;

    // join hash_list vector to a string
    string hash_list_str = LevelDBWrapper::joinString(hash_list, DEDUP_DB_HASH_VALUE_DELIMETER);

    // add <filename, hash_list> key-value pair to fileListDB
    ldb->writeDB(fileListDB, filePath, hash_list_str);

    cout << "[INFO] Dynamic chunking computation is finished" << endl;

    return 0;
}