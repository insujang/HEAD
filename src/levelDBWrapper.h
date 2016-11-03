/*
 *
 *  Created by chikdol on 16. 11. 3.
 *  Usage:
 *      LevelDBWrapper* ldb;
 *      vector<string> values;
 *      string key = "abc";
 *      string value = "aaaaa";
 *
 *      ldb = LevelDBWrapper::getInstance();
 *      ldb->writeDB(key, value);
 *      ldb->readDB(key, values);
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


        static LevelDBWrapper* instance;
        leveldb_t *db = NULL;
        leveldb_writeoptions_t *write_opt = NULL;
        leveldb_readoptions_t *read_opt = NULL;

    public:
        int writeDB(string key, string value);
        int readDB(string key, vector <string>& values);

        void splitString(string &s, char delimeter, vector <string>& elems);

        static LevelDBWrapper* GetInstance() {
            if (instance == NULL) instance = new LevelDBWrapper();
            return instance;
        }
};


#endif //CS710_DEDUP_YADL_LEVELDBWRAPPER_H
