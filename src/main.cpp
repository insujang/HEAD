extern "C" {
#include <sys/time.h>
#include <unistd.h>
}

#include "levelDBWrapper.h"
#include "RestoreFileDedup.h"
#include "deduplication.h"
#include <iostream>

/*Main program!*/
int
main (int argc, char *argv[])
{
    struct timeval start, end;
    LevelDBWrapper* ldb;
    RestoreFileDedup* restoreFile = new RestoreFileDedup();

    gettimeofday(&start, NULL);
    dedup_file("/home/insujang/Downloads/openssl-1.0.2j.tar.gz");
//    restoreFile->restoreFile("/home/insujang/Downloads/cudnn-8.0-linux-x64-v5.1.tgz");
    gettimeofday(&end, NULL);

    cout << "Processing time: " << (end.tv_sec - start.tv_sec) << " seconds" << endl;

    return 0;
}
