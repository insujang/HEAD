extern "C" {
#include "main.h"
#include "string.h"
#include "namespace.h"
#include "catalog.h"
#include "block.h"
#include "hash.h"
#include "dedup.h"
#include "restore.h"
#include "delete.h"
#include "string.h"

#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>
//#include <string.h>
}

#include "levelDBWrapper.h"


/*Main program!*/
int
main (int argc, char *argv[])
{
//    cout << "Hello" << endl;
//    LevelDBWrapper* ldb;
//    string value("qwetrt");
//
//    ldb = LevelDBWrapper::GetInstance();
//
//    string values2;
//    ldb->writeDB("12345", value);
//
//    ldb->readDB("12345", values2);
//
//    return 0;
        int     ret                       = -1;
        char    namespace_path[FILE_SIZE] = "";
        DIR     *dp                       = NULL;

        char 	namespace_dest[256];
		char* 	dirhome;

		/*
			[chikdol]
			Create directory if (~/cs710/) does not exist
		*/

		if ((dirhome = getenv("HOME")) == NULL) {
	    	dirhome = getpwuid(getuid())->pw_dir;
		}

		strcpy (namespace_dest,dirhome);
		strcat (namespace_dest,"/cs710");

		dp = opendir(namespace_dest);
        if (NULL == dp) {
        	mkdir(namespace_dest, 0777);
        }


        //sprintf(namespace_path, "/var/lib/yadl");
        sprintf(namespace_path, "%s", namespace_dest);
        dp = opendir(namespace_path);
        if (NULL == dp) {

                ret = mkdir(namespace_path, 0777);
                if (ret < 0) {
                        fprintf(stderr, "%s\n", strerror(errno));
                        goto out;
                }
                ret = create_default_namespace(namespace_path);
                if (ret < 0) {
                        fprintf(stderr, "%s\n", strerror(errno));
                        goto out;
                }
        }
        ret = start_program(argc, argv, namespace_path);
        if (ret == -1) {
                goto out;
        }
        ret = 0;
out:
        if (dp != NULL)
                closedir(dp);
        return ret;
}
