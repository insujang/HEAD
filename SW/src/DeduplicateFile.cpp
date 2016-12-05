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
#include "MurmurHash.hpp"

extern "C" {
#include <sys/stat.h>
#include <sys/time.h>
}

using namespace std;

#define BUFFER_LEN 8192
#define SUM_HASH

extern bool verbose;

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

int
DeduplicateFile::getVariableChunk(char *str, const unsigned int strLen) {
    int i;

    unsigned int strHash = 0;
    unsigned int power = 1;

#ifdef SUM_HASH
    if(windowLen > strLen) return strLen;

    for(i=0; i<windowLen; i++){
        strHash += str[i];
    }

    for(i=windowLen; i<strLen; i++){
        if ((strHash & 859) == 330) return i;
        strHash = strHash + str[i] - str[i-windowLen];
    }

#else
   for(i = 0; i < windowLen; i++){
        strHash = (prime * strHash + str[i]) % modulo;
        power = (power * prime) % modulo;
    }

    for(i = windowLen; i < strLen; i++){
        if(strHash == targetHash) return i;

        strHash = (prime * strHash - power * str[i-windowLen] + str[i]) % modulo;
        power = (power * prime) % modulo;
    }

#endif
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

    unsigned int fileSize = getFileSize(filePath);

    cout << "[INFO] Target: " << filePath << endl;
    cout << "       Size: " << fileSize << " bytes" << endl;

    char *buffer = new char[BUFFER_LEN];

    /* Dynamic chunking */
    cout << "[INFO] Dynamic chunking computation starts" << endl;

    unsigned int accumulatedChunkLength = 0;
    unsigned int chunkLength = 0;
    int readLength = 0;

    struct timeval tvStart, tvEnd;
    unsigned long long calcTime = 0;
    int iteration = 0;

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
        // Computation by SW
        // -----------------------------------------------------------------

        gettimeofday(&tvStart, NULL);

        // get a chunk with variable length
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

        // -----------------------------------------------------------------
        // Computation end
        // -----------------------------------------------------------------

        iteration++;
        if(verbose && (iteration % 10000) == 0){
            cout << "[DEBUG] [iter " << iteration << "] " <<
                 "handled data: " << accumulatedChunkLength / 1000000.0 << "MB. " <<
                 "Total chunking/hasing time: " << (calcTime / 1000000.0) << " s." << endl;
        }
    }

    cout << "[INFO] Accumulated chunk length: " << accumulatedChunkLength
        << " bytes" << endl;
    cout << "[INFO] Number of chunks: " << iteration << endl;
    assert(accumulatedChunkLength == fileSize);

    cout << "[INFO] Total chunking/hashing time: " << (calcTime / 1000000.0) << " s." << endl;

    // join hash_list vector to a string
    string hash_list_str = LevelDBWrapper::joinString(hash_list, DEDUP_DB_HASH_VALUE_DELIMETER);

    // add <filename, hash_list> key-value pair to fileListDB
    ldb->writeDB(fileListDB, filePath, hash_list_str);

    cout << "[INFO] Dynamic chunking computation is finished" << endl;

    delete[] buffer;

    return 0;
}
