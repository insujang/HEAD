extern "C" {
#include <sys/time.h>
}

#include "levelDBWrapper.h"
#include "RestoreFileDedup.h"
#include "DeduplicateFile.h"
#include "getopt_pp.h"
#include <iostream>
#include <dirent.h>
#include <vector>
#include <algorithm>

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

string type;        // should be either "dedup" or "restore"
string filepath;    // file path to be deduped or restore or restore_all
string dirpath;
string full_path;
vector<string> path_arr;
bool help;          // whether show usage or not
bool verbose;

/*Main program!*/
int
main (const int argc, const char **argv)
{
    struct timeval start, end;
    RestoreFileDedup* restoreFile = new RestoreFileDedup();
    DeduplicateFile* dedupFile = new DeduplicateFile();

    GetOpt_pp ops(argc, argv);

    ops >> Option('t', "type", type) >> Option('f', "filepath", filepath) >> Option('d', "dir", dirpath)
        >> OptionPresent('h', "help", help) >> OptionPresent('v', "verbose", verbose);

    DIR *dir;
    struct dirent *ent;
   
    // check type should be either "dedup" or "restore" or "restore_all"
    if(help || type.length() == 0 || (filepath.length() == 0 && dirpath.length()==0)||
       (type.compare("dedup") != 0 && type.compare("restore") != 0 && type.compare("restore_all") != 0)) usage();

    gettimeofday(&start, NULL);
    if(dirpath.length() != 0 ){
    //get file path in directory
        if ((dir = opendir (dirpath.c_str())) != NULL) {
          /* print all the files and directories within directory */
            while ((ent = readdir (dir)) != NULL) {
                  if (ent->d_name[0] == '.')
                      continue;
                //  printf ("%s\n", ent->d_name);
                  full_path = dirpath + ent->d_name;
                  path_arr.push_back(full_path);
                  sort(path_arr.begin(), path_arr.end());
            }
            for (std::vector<string>::iterator it=path_arr.begin(); it != path_arr.end(); ++it){
                  cout << *it << endl;
                  if(type.compare("dedup") == 0) dedupFile->dedupFile(*it);
                  else if(type.compare("restore_all") == 0) restoreFile->restoreAllFiles();
            }
            closedir (dir);
        }
        else {
          /* could not open directory */
            perror ("");
            return EXIT_FAILURE;
        }
    //
    } 
    else{
        if(type.compare("dedup") == 0) dedupFile->dedupFile(filepath);
        else if(type.compare("restore") == 0) restoreFile->restoreFile(filepath);
        else if(type.compare("restore_all") == 0) restoreFile->restoreAllFiles();
    }

    gettimeofday(&end, NULL);

    cout << "Processing time: " << (end.tv_sec - start.tv_sec) << " seconds" << endl;

    delete restoreFile;
    delete dedupFile;

    return 0;
}
