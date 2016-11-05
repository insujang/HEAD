#include <cstdlib>
#include "sha1.h"

string sha1(char *str, int len) {
    char *out = (char *) malloc(41);
    unsigned char hash[SHA_DIGEST_LENGTH];
    SHA_CTX sha;
    SHA_Init(&sha);
    SHA_Update(&sha, str, len);
    SHA_Final(hash, &sha);

    for(int i=0; i<SHA_DIGEST_LENGTH; i++){
        sprintf(&out[i<<1], "%02x", (unsigned int)hash[i]);
    }
    out[40] = '\0';
    return string(out);
}
