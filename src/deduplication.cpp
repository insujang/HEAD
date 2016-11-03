//
// Created by insujang on 16. 11. 3.
//

#include "deduplication.h"
#include "levelDBWrapper.h"
#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <cassert>
#include "sha1.h"

using namespace std;

extern "C" {
#include "Rabin_Karp.h"
}


string join(vector<string> &vec, const char delim) {
    stringstream ss;
    copy(vec.begin(), vec.end(), ostream_iterator<string>(ss, &delim));
    return ss.str();
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
    int chunk_type  = 1;        // variable chunk size
    int hash_type   = 1;        // sha1
    int block_size  = 0;        // should be 0 in variable chunk size mode
    int store_type  = 0;        // default store
    LevelDBWrapper* ldb = LevelDBWrapper::getInstance();
    leveldb_t* hashListDB = ldb->getHashListDB();
    leveldb_t* fileListDB = ldb->getFileListDB();

    cout << "Deduplication is in progress..." << endl;

    // Open input file.
    int fd_input = open(file_path.c_str(), O_RDONLY, S_IRUSR|S_IWUSR);
    assert(fd_input >= 1);

    // Get file size and save it to size variable.
    struct stat st;
    fstat(fd_input, &st);
    int size = st.st_size;

    /* Dynamic chunking */
    if(chunk_type == 1) {
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
        string hash_list_str = join(hash_list, ',');

        // add <filename, hash_list> key-value pair to fileListDB
        ldb->writeDB(fileListDB, file_path, hash_list_str);
    }

    return 0;
}