//
// Created by insujang on 16. 11. 3.
//

#include "deduplication.h"
#include "levelDBWrapper.h"
#include <iostream>
#include <cassert>
#include "sha1.h"
#include <leveldb/write_batch.h>

using namespace std;

extern "C" {
#include "Rabin_Karp.h"
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

    // Open input file.
    int fd_input = open(file_path.c_str(), O_RDONLY, S_IRUSR|S_IWUSR);
    assert(fd_input >= 1);

    // Get file size and save it to size variable.
    struct stat st;
    fstat(fd_input, &st);
    int size = st.st_size;

    /* Dynamic chunking */
    cout << "[INFO] Dynamic chunking computation starts" << endl;
    FILE* fp = fopen("./Rabin_Karp.csv", "w+");
    assert(fp != NULL);

    char* chunk_buffer;
    int ret;
    int chunk_flag;
    int chunk_length;

    // This is the list of hashes in this file.
    vector<string> hash_list;

    while (true) {
        // get variable chunk by using Rabin-Karp
        chunk_buffer = get_variable_chunk(fd_input,
        &ret, &size, &chunk_flag, &chunk_length);

        if(chunk_buffer == NULL) break;

        // calculate sha1 hash algorithm
        string hash = sha1(chunk_buffer, chunk_length);

        // add the hash into hash_list
        hash_list.push_back(hash);

        // add <hash, chunk> key-value pair to hashListDB
        ldb->writeDB(hashListDB, hash, string(chunk_buffer));
    }

    // join hash_list vector to a string
    string hash_list_str = LevelDBWrapper::joinString(hash_list, ',');

    // add <filename, hash_list> key-value pair to fileListDB
    ldb->writeDB(fileListDB, file_path, hash_list_str);

    cout << "[INFO] Dynamic chunking computation is finshed" << endl;


    return 0;
}