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
#include <iostream>

#define DELIMITER ','

int RestoreFileDedup::restoreFile(string fileName){

    vector<string> f2hashValues;
    if(getFileHashValue(fileName, f2hashValues) == -1){
        return -1;
    }
    restoreContent(fileName, f2hashValues);
    return 0;
}

int RestoreFileDedup::restoreAllFiles(){

    LevelDBWrapper* ldb;
    DB* ptrFileDb;
    vector<string> fileList;

    ldb = LevelDBWrapper::getInstance();
    ldb->getKeyList(ptrFileDb, fileList);

    for (vector<string>::iterator it = fileList.begin() ; it != fileList.end(); ++it){
        this->restoreFile(*it);
    }

    return 0;
}

int RestoreFileDedup::getFileHashValue(string fileName, vector<string>& values){
    LevelDBWrapper* ldb;
    DB* ptrFileDb;
    ldb = LevelDBWrapper::getInstance();
    ptrFileDb = ldb->getFileListDB();
    if(ldb->readDB(ptrFileDb, fileName, values, DELIMITER) == -1){
        return -1;
    }

    return 0;
}

int RestoreFileDedup::restoreContent(string fileName, vector<string>& values){
    LevelDBWrapper* ldb;
    DB* ptrHashDB;
    ofstream ofs(fileName, ofstream::out);

    ldb = LevelDBWrapper::getInstance();
    ptrHashDB = ldb->getHashListDB();

    int test = 0;
    for (vector<string>::iterator it = values.begin() ; it != values.end(); ++it){
        test++;
        vector<string> content;
        if(ldb->readDB(ptrHashDB, *it, content) == -1){
            assert(0);
        }
        ofs << content[0];

        if(content[0].length() == 0)
        {
            cout << test << endl;
            assert(0);
        }
    }


    ofs.close();
    return 0;
}