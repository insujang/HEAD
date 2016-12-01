//
// Created by insujang on 16. 11. 3.
//

#ifndef CS710_DEDUP_YADL_DEDUPLICATION_H
#define CS710_DEDUP_YADL_DEDUPLICATION_H

#include <string>
#include "DeviceDriverMgr.h"

#define windowLen 1024
#define modulo 991
#define targetHash 337
#define prime 23

#define DEDUP_HW_MODULE "/dev/hello"

using namespace std;



class DeduplicateFile {
public:
    DeduplicateFile();
    ~DeduplicateFile();
    int dedupFile(string filePath);

private:
    string getSHA1(char *str, int len);
    int getVariableChunk(char *str, int strLen);
    unsigned int getFileSize(string &filePath);

    DMADeviceDriverMgr* m_dmaDriver;
    int m_fdDedupHWModule;
};

#endif //CS710_DEDUP_YADL_DEDUPLICATION_H

