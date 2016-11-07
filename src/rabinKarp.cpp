//
// Created by insujang on 16. 11. 4.
//

#include "rabinKarp.h"

#define windowLen 2048
#define modulo 1021
#define targetHash 938
#define prime 23

int get_variable_chunk(char *str, int strLen) {
    int i;

    unsigned int strHash = 0;
    unsigned int power = 1;

    if(windowLen > strLen) return strLen;

    for(i = 0; i < windowLen; i++){
        strHash = (prime * strHash + str[i]) % modulo;
        power = (power * prime) % modulo;
    }

    for(i = windowLen; i < strLen; i++){
        if(strHash == targetHash)
            return i;

        strHash = (prime * strHash - power * str[i-windowLen] + str[i]) % modulo;
        power = (power * prime) % modulo;
    }

    return strLen;
}