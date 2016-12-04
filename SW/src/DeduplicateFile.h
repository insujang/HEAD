//
// Created by insujang on 16. 11. 3.
//

#ifndef CS710_DEDUP_YADL_DEDUPLICATION_H
#define CS710_DEDUP_YADL_DEDUPLICATION_H

#include <string>
#define windowLen 1024
#define modulo 991
#define targetHash 337
#define prime 23

using namespace std;

class DeduplicateFile {
public:
    int dedupFile(string filePath);
    string getSHA1(char *str, int len);

private:
    int getVariableChunk(char *str, int strLen);
    unsigned int getFileSize(string &filePath);
};

#endif //CS710_DEDUP_YADL_DEDUPLICATION_H

