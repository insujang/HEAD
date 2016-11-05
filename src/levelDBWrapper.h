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
#include <leveldb/db.h>

using namespace std;
using std::vector;
using namespace leveldb;

class LevelDBWrapper{
    private:
        LevelDBWrapper();
        LevelDBWrapper(const LevelDBWrapper& other);
        ~LevelDBWrapper();
        void splitString(string &s, char delimiter, vector <string>& elems);

        static LevelDBWrapper* instance;
        DB *fileRestoreDB = NULL, *hashListDB = NULL;
        WriteOptions writeOptions;
        ReadOptions readOptions;

    public:
        int writeDB(DB* db, Slice key, Slice value);
        int readDB(DB* db, Slice key, vector<string>& values, char delimeter = '\0');
        int getKeyList(DB* db, vector<string>& keylist);
        static string joinString(vector<string>& values, const char delimiter);

        DB* getFileListDB(){ return fileRestoreDB; }
        DB* getHashListDB(){ return hashListDB; }

        static LevelDBWrapper* getInstance() {
            if (instance == NULL) instance = new LevelDBWrapper();
            return instance;
        }
};


#endif //CS710_DEDUP_YADL_LEVELDBWRAPPER_H
