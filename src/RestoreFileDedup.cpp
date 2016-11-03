/*
 *
 *  Created by chikdol on 16. 11. 3.
 *
 */

#include "RestoreFileDedup.h"
#include "levelDBWrapper.h"
#include <fstream>
#include <vector>
#include <cassert>

#define DELIMITER ','

int RestoreFileDedup::RestoreFile(string fileName){

    vector<string> f2hashValues;
    if(getFileHashValue(fileName, f2hashValues) == -1){
        return -1;
    }
    restoreContent(fileName, f2hashValues);
    return 0;
}

int RestoreFileDedup::getFileHashValue(string fileName, vector<string>& values){
    LevelDBWrapper* ldb;
    leveldb_t* ptrFileDb;
    ldb = LevelDBWrapper::getInstance();
    ptrFileDb = ldb->getFileListDB();
    if(ldb->readDB(ptrFileDb, fileName, values, DELIMITER) == -1){
        return -1;
    }

    return 0;
}

int RestoreFileDedup::restoreContent(string fileName, vector<string>& values){
    LevelDBWrapper* ldb;
    leveldb_t* ptrHashDB;
    ofstream ofs(fileName, ofstream::out);

    ldb = LevelDBWrapper::getInstance();
    ptrHashDB = ldb->getHashListDB();

    for (vector<string>::iterator it = values.begin() ; it != values.end(); ++it){
        vector<string> content;
        if(ldb->readDB(ptrHashDB, *it, content) == -1){
            assert(0);
        }
        ofs << content[0];
    }
    ofs.close();
    return 0;
}