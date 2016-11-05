//
// Created by insujang on 16. 11. 3.
//

#include "deduplication.h"
#include "levelDBWrapper.h"
#include "sha1.h"
#include "rabinKarp.h"
#include <iostream>
#include <cassert>
#include <leveldb/write_batch.h>
#include <fstream>

extern "C" {
#include <sys/stat.h>
}

using namespace std;

#define BUFFER_LEN 10240

unsigned int get_file_size(string& file_path){
    struct stat status;
    stat(file_path.c_str(), &status);
    return (unsigned int) status.st_size;
}


/**
 * hash_type: sha1
 * store_type: default
 * chunk_scheme: variable
 * @param file_path absolute filepath to dedup
 * @return
 */
int
dedup_file (string file_path)
{
    LevelDBWrapper* ldb = LevelDBWrapper::getInstance();
    DB* hashListDB = ldb->getHashListDB();
    DB* fileListDB = ldb->getFileListDB();

    cout << "Deduplication is in progress..." << endl;

    int fileSize = get_file_size(file_path);
    cout << "[DEBUG] Target: " << file_path << endl;
    cout << "        Size: " << fileSize << " bytes" << endl;

    /* Dynamic chunking */
    cout << "[INFO] Dynamic chunking computation starts" << endl;

    // This is the list of hashes in this file.
    vector<string> hash_list;

    // File stream for the input file
    ifstream ifStream;
    ifStream.open(file_path, ios::in|ios::binary);
    assert(ifStream.is_open());

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
        chunkLength = get_variable_chunk(buffer, readLength);

        // calculate sha1 hash algorithm
        string hash = sha1(buffer, chunkLength);

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
    string hash_list_str = LevelDBWrapper::joinString(hash_list, ',');

    // add <filename, hash_list> key-value pair to fileListDB
    ldb->writeDB(fileListDB, file_path, hash_list_str);

    cout << "[INFO] Dynamic chunking computation is finshed" << endl;

    delete[] buffer;

    return 0;
}