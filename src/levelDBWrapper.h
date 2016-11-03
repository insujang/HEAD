/*
 *
 *  Created by chikdol on 16. 11. 3.
 *  Usage:
 *      LevelDBWrapper* ldb;
 *      vector<string> values;
 *      string key = "abc";
 *      string value = "aaaaa";
 *      leveldb_t* ptrDb;
 *
 *      ldb = LevelDBWrapper::getInstance();
 *      ptrDb = ldb->getFileRestoreDB();
 *      ldb->writeDB(ptrDb, key, value);
 *      ldb->readDB(ptrDb, key, values);
 *
 */

#ifndef CS710_DEDUP_YADL_LEVELDBWRAPPER_H
#define CS710_DEDUP_YADL_LEVELDBWRAPPER_H

#include <string>
#include <vector>
#include <sstream>
#include <leveldb/c.h>

using namespace std;
using std::vector;

class LevelDBWrapper{
    private:
        LevelDBWrapper();
        LevelDBWrapper(const LevelDBWrapper& other);
        ~LevelDBWrapper();
        void splitString(string &s, char delimeter, vector <string>& elems);

        static LevelDBWrapper* instance;
        leveldb_t *fileRestoreDB = NULL, *hashListDB = NULL;
        leveldb_writeoptions_t *write_opt = NULL;
        leveldb_readoptions_t *read_opt = NULL;

    public:
        int writeDB(leveldb_t* db ,string key, string value);
        int readDB(leveldb_t* db, string key, vector<string>& values, char delimeter = '\0');
        int getKeyList(leveldb_t* db, vector<string>& keylist);

        leveldb_t* getFileListDB(){ return fileRestoreDB; }
        leveldb_t* getHashListDB(){ return hashListDB; }

        static LevelDBWrapper* getInstance() {
            if (instance == NULL) instance = new LevelDBWrapper();
            return instance;
        }
};


#endif //CS710_DEDUP_YADL_LEVELDBWRAPPER_H
