#include <openssl/sha.h>
#include <string>

using namespace std;

/*@description:Function to create hash using sha1.
@in: char str[]-Buffer to store block for which the hash is generated,int length-length of block
@out: char*-returns hash of block using sha1
@return: hash */
//char* sha1(vector_ptr list);
string sha1(char *str, int len);