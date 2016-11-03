/*
 *
 *  Created by chikdol on 16. 11. 3.
 *  Usage:
 *
 *      RestoreFileDedup* restoreFile = new RestoreFileDedup();
 *      string fileName("/home/seikwon/Development/testDedup.txt");
 *      restoreFile->RestoreFile(fileName);
 *
 */

#ifndef CS710_DEDUP_YADL_RESTOREFILEDEDUP_H
#define CS710_DEDUP_YADL_RESTOREFILEDEDUP_H

#include <string>
#include <vector>

using namespace std;
using std::vector;


class RestoreFileDedup{
    public:
        RestoreFileDedup(){}
        ~RestoreFileDedup(){}

        int RestoreFile(string fileName);

    private:
        int getFileHashValue(string fileName, vector<string>& values);
        int restoreContent(string fileName, vector<string>& values);
};

#endif //CS710_DEDUP_YADL_RESTOREFILEDEDUP_H
