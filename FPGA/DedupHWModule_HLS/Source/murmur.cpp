#include "dedup.h"
#include <iostream>

#define c1 0xcc9e2d51
#define c2 0x1b873593
#define r1 15
#define r2 13
#define m 5
#define n 0xe6546b64


uint32_t murmurhash (char key[BUFFER_LEN], uint32_t len, uint32_t seed) {
#pragma HLS ARRAY_PARTITION variable=key block factor=64 dim=1
  uint32_t hash = seed;


  //uint32_t kValues[BUFFER_LEN/4];
//  int kItr = 0;

  murmurHashInit:
  // for each 4 byte chunk of `key'
  for(int i = 0; i < (len >> 2); i++){
#pragma HLS PIPELINE
#pragma HLS LOOP_TRIPCOUNT max=2048
	  // little endian
	  int offset = (i << 2);
	  uint32_t k = (key[offset+3] << 24) + (key[offset+2] << 16) + (key[offset+1] << 8) + (key[offset]);
	  k *= c1;
	  k = (k << r1) | (k >> (32 - r1));
	  k *= c2;

	  hash ^= k;
	  hash = (hash << r2) | (hash >> (32 -r2));
	  hash = hash * m + n;

	  //kValues[i] = k;
  }

//  murmurHashCalc:
//  for(int i = 0 ; i < (len >> 2); i++){
//#pragma HLS PIPELINE
//#pragma HLS LOOP_TRIPCOUNT max=2048
//	  hash ^= kValues[i];
//	  hash = (hash << r2) | (hash >> (32 - r2));
//	  hash = hash * m + n;
//  }

  // tail: last 8 byte chunk of key
  // How to calculate the byte index:
  // (len / 4) * 4 = len - (len % 4) = len - (len & 3)
  const uint8_t *tail = (const uint8_t *) (key + len - (len & 3));
  int k = 0;
  // remainder
  switch (len & 3) { // `len % 4'
    case 3: k ^= (tail[2] << 16);
    /* no break */
    case 2: k ^= (tail[1] << 8);
    /* no break */
    case 1:
      k ^= tail[0];
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
  hash ^= (hash >> 16);

  return hash;
}

#undef c1
#undef c2
#undef r1
#undef r2

inline uint32_t rotl32 (uint32_t x, int8_t r){
	return (x << r) | (x >> (32 - r));
};

#define c1 0x239b961b
#define c2 0xab0e9789
#define c3 0xab0e9789
#define c4 0xab0e9789
#define m 5
#define n1 0x561ccd1b
#define n2 0x0bcaa747
#define n3 0x96cd1c35
#define n4 0x32ac3b17

void murmurhash128(char key[BUFFER_LEN], int len, int seed, uint32_t hash[4]){
#pragma HLS ARRAY_PARTITION variable=key block factor=64 dim=1
	for(int i=0; i<4; i++) hash[i] = seed;

	for(int i=0; i < (len >> 4); i++){
#pragma HLS PIPELINE
#pragma HLS LOOP_TRIPCOUNT max=512
		int offset = (i << 4);
		uint32_t k1 = (key[offset+3] << 24) + (key[offset+2] << 16) + (key[offset+1] << 8) + (key[offset+0]);
		uint32_t k2 = (key[offset+7] << 24) + (key[offset+6] << 16) + (key[offset+5] << 8) + (key[offset+4]);
		uint32_t k3 = (key[offset+11] << 24) + (key[offset+10] << 16) + (key[offset+9] << 8) + (key[offset+8]);
		uint32_t k4 = (key[offset+15] << 24) + (key[offset+14] << 16) + (key[offset+13] << 8) + (key[offset+12]);

		k1 *= c1; k1 = rotl32(k1, 15); k1 *= c2;
		k2 *= c2; k2 = rotl32(k2, 16); k2 *= c3;
		k3 *= c3; k3 = rotl32(k3, 17); k3 *= c4;
		k4 *= c4; k4 = rotl32(k4, 18); k4 *= c1;

		hash[0] ^= k1;
		hash[0] = rotl32(hash[0], 19);
		hash[0] += hash[1];
		hash[0] = hash[0] * m + n1;

		hash[1] ^= k2;
		hash[1] = rotl32(hash[1], 17);
		hash[1] += hash[2];
		hash[1] = hash[1] * m + n2;

		hash[2] ^= k3;
		hash[2] = rotl32(hash[2], 15);
		hash[2] += hash[3];
		hash[2] = hash[2] * m + n3;

		hash[3] ^= k4;
		hash[3] = rotl32(hash[3], 13);
		hash[3] += hash[0];
		hash[3] = hash[3] * m + n4;
	}

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
		hash[3] ^= k4;

		case 12: k3 ^= (tail[11] << 24);
		case 11: k3 ^= (tail[10] << 16);
		case 10: k3 ^= (tail[9]  << 8);
		case 9:  k3 ^= (tail[8]  << 0);
		k3 *= c3;
		k3 = rotl32(k3, 17);
		k3 *= c4;
		hash[2] ^= k3;

		case 8: k2 ^= (tail[7] << 24);
		case 7: k2 ^= (tail[6] << 16);
		case 6: k2 ^= (tail[5] << 8);
		case 5: k2 ^= (tail[4] << 0);
		k2 *= c2;
		k2 = rotl32(k2, 16);
		k2 *= c3;
		hash[1] ^= k2;

		case 4: k1 ^= (tail[3] << 24);
		case 3: k1 ^= (tail[2] << 16);
		case 2: k1 ^= (tail[1] << 8);
		case 1: k1 ^= (tail[0] << 0);
		k1 *= c1;
		k1 = rotl32(k1, 15);
		k1 *= c2;
		hash[0] ^= k1;
	}

	hash[0] ^= len;
	hash[1] ^= len;
	hash[2] ^= len;
	hash[3] ^= len;

	hash[0] += hash[1];
	hash[0] += hash[2];
	hash[0] += hash[3];
	hash[1] += hash[0];
	hash[2] += hash[0];
	hash[3] += hash[0];
}
