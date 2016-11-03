//
// Created by chikdol on 16. 11. 3.
//

#include "levelDBWrapper.h"
#include <assert.h>


LevelDBWrapper* LevelDBWrapper::instance = NULL;

LevelDBWrapper::LevelDBWrapper() {

    leveldb_options_t *option       =       NULL;
    char *ret_value                 =       NULL;

    option = leveldb_options_create();
    leveldb_options_set_create_if_missing(option, 1);

    fileRestoreDB = leveldb_open(option, "fileRestoreDB", &ret_value);
    hashListDB = leveldb_open(option, "hashListDB", &ret_value);

    if (ret_value != NULL) {
        fprintf(stderr, "Error in opening\n");

    }
    write_opt = leveldb_writeoptions_create();
    read_opt = leveldb_readoptions_create();
}

LevelDBWrapper::~LevelDBWrapper() {
    leveldb_close(fileRestoreDB);
    leveldb_close(hashListDB);
    delete LevelDBWrapper::instance;
    LevelDBWrapper::instance = NULL;
};

int LevelDBWrapper::writeDB(leveldb_t* db ,string key, string value) {
    char *ret_value = NULL;

    leveldb_put(db, write_opt, key.c_str(), key.length(), value.c_str(), value.length(),
                &ret_value);

    if (ret_value != NULL) {
        fprintf(stderr, "Write fail.\n");
        assert(0);
    }

    return 0;
}

int LevelDBWrapper::readDB(leveldb_t* db, string key, vector<string>& values, char delimeter) {
    char *ret_value                 =       NULL;
    char *read                      =       NULL;
    size_t read_len                 =          0;

    read = leveldb_get(db, read_opt, key.c_str(), key.length(), &read_len, &ret_value);

    string strRet(read);
    if(delimeter != NULL) {
        splitString(strRet, delimeter, values);
    }else{
        values.push_back(strRet);
    }

    return 0;
}

void LevelDBWrapper::splitString(string &str, char delimeter, vector<string>& values){
    stringstream ss;
    ss.str(str);
    string item;
    while (getline(ss, item, delimeter)) {
        values.push_back(item);
    }
}


