extern "C" {
#include <sys/time.h>
#include <unistd.h>
}

#include "levelDBWrapper.h"
#include "RestoreFileDedup.h"
#include "deduplication.h"
#include "getopt_pp.h"
#include <iostream>

using namespace GetOpt;
using namespace std;

void usage ()
{
    cout << "Deduplicate a file:" << endl
         << "<app_name> -t/--type dedup -f/--filepath <file_path>" << endl << endl;
    cout << "Restore a file:" << endl
         << "<app_name> -t/--type restore -f/--filepath <file_path>" << endl << endl;
    cout << "Restore all files from the DB:" << endl
         << "<app_name> -t/--type restore_all" << endl << endl;
    cout << "Show usage:" << endl
         << "<app_name> -h/--help" << endl;
    exit(0);
}

/*Main program!*/
int
main (const int argc, const char **argv)
{
    struct timeval start, end;
    RestoreFileDedup* restoreFile = new RestoreFileDedup();

    GetOpt_pp ops(argc, argv);
    string type;        // should be either "dedup" or "restore"
    string filepath;    // file path to be deduped or restore or restore_all
    bool help;          // whether show usage or not
    ops >> Option('t', "type", type) >> Option('f', "filepath", filepath) >> OptionPresent('h', "help", help);

    // check type should be either "dedup" or "restore" or "restore_all"
    if(help || type.length() == 0 || filepath.length() == 0 ||
       (type.compare("dedup") != 0 && type.compare("restore") != 0 && type.compare("restore_all") != 0)) usage();

    gettimeofday(&start, NULL);
    if(type.compare("dedup") == 0) dedup_file(filepath);
    else if(type.compare("restore") == 0) restoreFile->restoreFile(filepath);
    else if(type.compare("restore_all") == 0) restoreFile->restoreAllFiles();

    gettimeofday(&end, NULL);

    cout << "Processing time: " << (end.tv_sec - start.tv_sec) << " seconds" << endl;

    return 0;
}
