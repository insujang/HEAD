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
#define seed 123

class murmurHash {
private:
    inline static uint32_t rotl32 (uint32_t x, int8_t r){
        return (x << r) | (x >> (32 - r));
    };

public:
    static string getMurmurHash(char *key, int len){
        uint32_t hash = seed;

        for(int i=0; i<len; i+=4){
            // Next 4 byte chunk of string
            uint32_t k = *((uint32_t *) (key + i));

            // encode next 4 byte chunk of key
            k *= c1;
            k = (k << r1) | (k >> (32 - r1));
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
        snprintf(out, 8, "%08x", hash);
        out[8] = '\0';
        return string(out);
    }
#undef c1
#undef c2
#undef r1
#undef r2
#undef m

#define c1 0x239b961b
#define c2 0xab0e9789
#define c3 0xab0e9789
#define c4 0xab0e9789
#define m 5
#define n1 0x561ccd1b
#define n2 0x0bcaa747
#define n3 0x96cd1c35
#define n4 0x32ac3b17

    static string getMurmurHash128(char *key, int len){
        uint32_t hash1 = seed;
        uint32_t hash2 = seed;
        uint32_t hash3 = seed;
        uint32_t hash4 = seed;

        for(int i=0; i<len; i+=16){
            // Next 4 * 4 byte chunk of string
            uint32_t k1 = *((uint32_t *) (key + i + 0));
            uint32_t k2 = *((uint32_t *) (key + i + 4));
            uint32_t k3 = *((uint32_t *) (key + i + 8));
            uint32_t k4 = *((uint32_t *) (key + i + 12));

            // encode 4 * 4 byte chunk of key
            k1 *= c1; k1 = rotl32(k1, 15); k1 *= c2;
            k2 *= c2; k2 = rotl32(k2, 16); k2 *= c3;
            k3 *= c3; k3 = rotl32(k3, 17); k3 *= c4;
            k4 *= c4; k4 = rotl32(k4, 18); k4 *= c1;

            hash1 ^= k1;
            hash1 = rotl32(hash1, 19);
            hash1 += hash2;
            hash1 = hash1 * m + n1;

            hash2 ^= k2;
            hash2 = rotl32(hash2, 17);
            hash2 += hash3;
            hash2 = hash2 * m + n2;

            hash3 ^= k3;
            hash3 = rotl32(hash3, 15);
            hash3 += hash4;
            hash3 = hash3 * m + n3;

            hash4 ^= k4;
            hash4 = rotl32(hash4, 13);
            hash4 += hash1;
            hash4 = hash4 * m + n4;
        }

        // (len / 16) * 16 = len - (len % 16) = len - (len & 15)
        const uint8_t *tail = (const uint8_t *) (key + len - (len & 15));
        uint32_t k1 = 0;
        uint32_t k2 = 0;
        uint32_t k3 = 0;
        uint32_t k4 = 0;
        switch(len & 15){
            case 15: k4 ^= (tail[14] << 16);
            case 14: k4 ^= (tail[13] << 8);
            case 13: k4 ^= (tail[12] << 0);
            k4 *= c4;
            k4 = rotl32(k4, 18);
            k4 *= c1;
            hash4 ^= k4;

            case 12: k3 ^= (tail[11] << 24);
            case 11: k3 ^= (tail[10] << 16);
            case 10: k3 ^= (tail[9]  << 8);
            case 9:  k3 ^= (tail[8]  << 0);
            k3 *= c3;
            k3 = rotl32(k3, 17);
            k3 *= c4;
            hash3 ^= k3;

            case 8: k2 ^= (tail[7] << 24);
            case 7: k2 ^= (tail[6] << 16);
            case 6: k2 ^= (tail[5] << 8);
            case 5: k2 ^= (tail[4] << 0);
            k2 *= c2;
            k2 = rotl32(k2, 16);
            k2 *= c3;
            hash2 ^= k2;

            case 4: k1 ^= (tail[3] << 24);
            case 3: k1 ^= (tail[2] << 16);
            case 2: k1 ^= (tail[1] << 8);
            case 1: k1 ^= (tail[0] << 0);
            k1 *= c1;
            k1 = rotl32(k1, 15);
            k1 *= c2;
            hash1 ^= k1;
        }

        hash1 ^= len;
        hash2 ^= len;
        hash3 ^= len;
        hash4 ^= len;

        hash1 += hash2;
        hash1 += hash3;
        hash1 += hash4;
        hash2 += hash1;
        hash3 += hash1;
        hash4 += hash1;

        char out[33];
        snprintf(out, 32, "%08x%08x%08x%08x", hash1, hash2, hash3, hash4);
        out[32] = '\0';
        return string(out);
    }
};