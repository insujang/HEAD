//
// Created by chikdol on 16. 11. 3.
//

#include "levelDBWrapper.h"
#include <assert.h>
#include <iterator>
#include <iostream>

using namespace std;

LevelDBWrapper* LevelDBWrapper::instance = NULL;

LevelDBWrapper::LevelDBWrapper() {

    Options options;
    options.create_if_missing = true;

    DB::Open(options, "fileRestoreDB", &fileRestoreDB);
    DB::Open(options, "hashListDB", &hashListDB);
}

LevelDBWrapper::~LevelDBWrapper() {
    delete fileRestoreDB;
    delete hashListDB;
    delete LevelDBWrapper::instance;
    LevelDBWrapper::instance = NULL;
};

int LevelDBWrapper::writeDB(DB* db, Slice key, Slice value) {
    Status status = db->Put(writeOptions, key, value);
    assert(status.ok());

    return 0;
}

int LevelDBWrapper::readDB(DB* db, Slice key, vector<string>& values, char delimeter) {
    string value;
    Status status = db->Get(readOptions, key, &value);
    assert(status.ok());

    if(delimeter != '\0') {
        splitString(value, delimeter, values);
    }else{
        values.push_back(value);
    }

    return 0;
}

int LevelDBWrapper::getKeyList(DB* db, vector<string>& keylist){

    Iterator* it = db->NewIterator(readOptions);

    string keyData;

    for(it->SeekToFirst(); it->Valid(); it->Next()){
        keyData = it->key().ToString();
        keylist.push_back(keyData);
    }
    cout << "KeyData: " << keyData << endl;
    assert(it->status().ok());

    return 0;
}

void LevelDBWrapper::splitString(string &str, char delimiter, vector<string>& values){
    stringstream ss;
    ss.str(str);
    string item;
    while (getline(ss, item, delimiter)) {
        values.push_back(item);
    }
}

string LevelDBWrapper::joinString(vector<string>& values, const char delimiter){
    string str;
    for(vector<string>::const_iterator p = values.begin();
            p != values.end(); p++){
        str += *p;
        if(p != values.end() - 1) str += delimiter;
    }
    return str;
}


