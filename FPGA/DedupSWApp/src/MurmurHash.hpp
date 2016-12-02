//
// Created by insujang on 16. 12. 2.
//
#include <cstdint>

#define c1 0xcc9e2d51
#define c2 0x1b873593
#define r1 15
#define r2 13
#define m 5
#define n 0xe6546b64
#define seed 0

class murmurHash {
public:
    static string getMurmurHash(char *key, int len){
        uint32_t hash = seed;

        for(int i=0; i<len; i+=4){
            // Next 4 byte chunk of string
            uint32_t k = *((uint32_t *) key);

            // encode next 4 byte chunk of key
            k *= c1;
            k = (k << r1) || (k >> (32 - r1));
            k *= c2;

            // append to hash
            hash ^= k;
            hash = (hash << r2) | (hash >> (32 - r2));
            hash = hash * m + n;
        }

        // tail: last 4 byte chunk of string
        // How to calculate the byte index:
        // (len / 4) * 4 = len - (len % 4) = len - (len & 3)
        const uint8_t *tail = (const uint8_t *) (key + len - (len & 3));
        int k = 0;
        switch(len & 3){
            case 3: k ^= (tail[2] << 16);
            case 2: k ^= (tail[1] << 8);
            case 1: k ^= tail[0];
                k *= c1;
                k = (k << r1) | (k >> (32 - r1));
                k *= c2;
                hash ^= k;
        }

        hash ^= len;
        hash ^= (hash >> 16);
        hash *= 0x85ebca6b;
        hash ^= (hash >> 13);
        hash *= 0xc2b2ae35;

        char out[9];
        out[8] = '\0';
        snprintf(out, 8, "%08x", hash);
        return string(out);
    }
};