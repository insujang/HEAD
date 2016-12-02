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
}

using namespace std;

#define BUFFER_LEN 8192
#define SUM_HASH
#define MURMUR

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
DeduplicateFile::murmurhash (const char *key, uint32_t len) {
    uint32_t h = 0;
    uint32_t k = 0;
    uint8_t *d = (uint8_t *) key; // 32 bit extract from `key'
    const uint32_t *chunks = NULL;
    const uint8_t *tail = NULL; // tail - last 8 bytes
    int i = 0;
    int l = len / 4; // chunk length

    char out[9];

    chunks = (const uint32_t *) (d + l * 4); // body
    tail = (const uint8_t *) (d + l * 4); // last 8 byte chunk of `key'

    // for each 4 byte chunk of `key'
    for (i = -l; i != 0; ++i) {

        // next 4 byte chunk of `key'
        k = chunks[i];

        // encode next 4 byte chunk of `key'
        k *= c1;
        k = (k << r1) | (k >> (32 - r1));
        k *= c2;

        // append to hash
        h ^= k;
        h = (h << r2) | (h >> (32 - r2));
        h = h * m + n;
    }

    k = 0;

    // remainder
    switch (len & 3) { // `len % 4'
        case 3: k ^= (tail[2] << 16);
        case 2: k ^= (tail[1] << 8);

        case 1:
            k ^= tail[0];
            k *= c1;
            k = (k << r1) | (k >> (32 - r1));
            k *= c2;
            h ^= k;
    }

    h ^= len;

    h ^= (h >> 16);
    h *= 0x85ebca6b;
    h ^= (h >> 13);
    h *= 0xc2b2ae35;
    h ^= (h >> 16);

    snprintf(out, 8, "%08x" ,h);

    out[8] = '\0';

    return string(out);
}


int
DeduplicateFile::getVariableChunk(char *str, int strLen) {
    int i;

    unsigned int strHash = 0;
    unsigned int power = 1;

#ifdef SUM_HASH
    if(windowLen > strLen) return strLen;

    for(i=0; i<windowLen; i++){
        strHash += str[i];
    }

    for(i=windowLen; i<strLen; i++){
        if (strHash & 859 == 330) return i;
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

    int fileSize = getFileSize(filePath);
    cout << "[DEBUG] Target: " << filePath << endl;
    cout << "        Size: " << fileSize << " bytes" << endl;

    /* Dynamic chunking */
    cout << "[INFO] Dynamic chunking computation starts" << endl;

    // 10KB buffer for Rabin Karp hash algorithm
    char* buffer = new char[BUFFER_LEN];
    int accumulatedChunkLength = 0;
    int readLength = 0;
    int chunkLength = 0;

    while (accumulatedChunkLength != fileSize) {
        // This is the first time of read: just read 10KB
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

        // get a chunk with variable length
        chunkLength = getVariableChunk(buffer, readLength);

#ifdef MURMUR
        // calculate get Murmur hash algorithm
        string hash = murmurHash::getMurmurHash(buffer, chunkLength);
        hash = murmurhash(buffer, chunkLength);
#else
        // calculate getSHA1 hash algorithm
        string hash = getSHA1(buffer, chunkLength);
#endif
        // add the hash into hash_list
        hash_list.push_back(hash);

        // add <hash, chunk> key-value pair to hashListDB
        ldb->writeDB(hashListDB, hash, Slice(buffer, chunkLength));

        accumulatedChunkLength += chunkLength;
    }

    cout << "[DEBUG] Accumulated chunk length: " << accumulatedChunkLength
        << " bytes" << endl;
    assert(accumulatedChunkLength == fileSize);

    // join hash_list vector to a string
    string hash_list_str = LevelDBWrapper::joinString(hash_list, DEDUP_DB_HASH_VALUE_DELIMETER);

    // add <filename, hash_list> key-value pair to fileListDB
    ldb->writeDB(fileListDB, filePath, hash_list_str);

    cout << "[INFO] Dynamic chunking computation is finished" << endl;

    delete[] buffer;

    return 0;
}
