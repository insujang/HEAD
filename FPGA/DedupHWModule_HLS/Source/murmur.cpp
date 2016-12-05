#include "dedup.h"
#include <iostream>

#define c1 0xcc9e2d51
#define c2 0x1b873593
#define r1 15
#define r2 13
#define m 5
#define n 0xe6546b64


uint32_t murmurhash (char key[BUFFER_LEN], uint32_t len, uint32_t seed) {
#pragma HLS ARRAY_PARTITION variable=key block factor=128 dim=1
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
#undef n

inline uint32_t rotl32 (uint32_t x, int8_t r){
	return (x << r) | (x >> (32 - r));
};
/*
#define c1 0x239b961b
#define c2 0xab0e9789
#define c3 0x38b34ae5
#define c4 0xa1e38b93
#define m 5
#define n1 0x561ccd1b
#define n2 0x0bcaa747
#define n3 0x96cd1c35
#define n4 0x32ac3b17
*/

using namespace std;
void murmurhash128_new (char str[BUFFER_LEN], int indices[7], int lastIndex, int seed, uint32_t hash[7][4]){
#pragma HLS RESOURCE variable=str core=RAM_2P_BRAM
#pragma HLS ARRAY_PARTITION variable=str block factor=128 dim=1

	const uint32_t c[4] = {0x239b961b, 0xab0e9789, 0x38b34ae5, 0xa1e38b93};
	const uint32_t n[4] = {0x561ccd1b, 0x0bcaa747, 0x96cd1c35, 0x32ac3b17};

	int keys[BUFFER_LEN >> 2];
#pragma HLS ARRAY_PARTITION variable=keys block factor=128 dim=1

	for(int i=0; i<7; i++){
#pragma HLS UNROLL
		for(int j=0; j<4; j++){
#pragma HLS UNROLL
			hash[i][j] = seed;
		}
	}

	for(int i=0; i<64; i+=4){
#pragma HLS PIPELINE
		for(int j=0; j<BUFFER_LEN; j+=64){
			int offset = i + j;
			int index = offset >> 2;
#ifndef __SYNTHESIS__
			cout << "keys[" << index << "] = sum(" <<
					offset << " " << offset+1 << " " << offset+2 << " " << offset+3 <<
					") * c[" << (index & 3) << "], rotl32(x, " << 15 + (index & 3) <<
					") * c[" << ((index+1) & 3) << "]" << endl;
#endif
			keys[index] = (str[offset+3] << 24) + (str[offset+2] << 16) +
					(str[offset+1] << 8) + (str[offset]);
			keys[index] *= c[index & 3];
			keys[index] = rotl32(keys[index], 15 + (index & 3));
			keys[index] *= c[(index+1) & 3];
		}
#ifndef __SYNTHESIS__
		cout << "[end of inner loop] i = " << i << endl;
#endif
	}

	cout << "=========================================" << endl;
	cout << "End of block calculation" << endl;
	cout << "=========================================" << endl;

	// For 2048 keys, calculate hash values
	int offset = 0;

	for(int i=0; i<(BUFFER_LEN>>2); i+=4){
#pragma HLS LOOP_TRIPCOUNT min=2048 max=2048
#pragma HLS PIPELINE
		if((i << 2) > indices[offset]){
#ifndef __SYNTHESIS__
			cout << "Current ieration index : " << (i * 4) << " is bigger than " << indices[offset] <<
					", hence offset is increased to " << (offset+1) << endl;
#endif
			offset++;
		}
		if(indices[offset] == 0){
#ifndef __SYNTHESIS__
			cout << "Indices[" << offset << "] is 0; hence stop loop iteration." << endl;
			cout << "=========================================" << endl;
			cout << "Total 128-bit hash number: " << offset << endl;
			cout << "=========================================" << endl;
#endif
			break;
		}
		int hashOffset = i & 3;

		for(int j=0; j<4; j++){
			hash[offset][hashOffset+j] ^= keys[(i+j) & 3];
			hash[offset][hashOffset+j] = rotl32(hash[offset][hashOffset+j], 19 - (j << 1));
			hash[offset][hashOffset+j] ^= keys[(i+j+1) & 3];
			hash[offset][hashOffset+j] = hash[offset][hashOffset+j] * m + n[(i+j) & 3];
#ifndef __SYNTHESIS__
			cout << "hash[" << offset << "][" << hashOffset+j << "] ^= keys[" << ((i+j) & 3) <<
					"], rotl32(x, " << (19 - (j * 2)) << "), ^= keys[" << ((i+j+1) & 3) <<
					"]... * 5 + n[" << ((i+j) & 3) << "]" << endl;
#endif
		}
	}

	// Key finalization
	for(int i=0; i<7; i++){
#pragma HLS PIPELINE
		int len = indices[i] - (i == 0? 0 : indices[i-1]);
		for(int j=0; j<4; j++){
			hash[i][j] ^= len;
		}
		hash[i][0] += hash[i][1];
		hash[i][0] += hash[i][2];
		hash[i][0] += hash[i][3];

		hash[i][1] += hash[i][0];
		hash[i][2] += hash[i][0];
		hash[i][3] += hash[i][0];
	}

#ifndef __SYNHESIS__
	cout << "=========================================" << endl;
	cout << "Hash finalize completed" << endl;
	cout << "=========================================" << endl;

	for(int i=0; i<7; i++){
		for(int j=0; j<4; j++){
			cout << "hash[" << i+1 << "][" << j+1 << "] = " << hex << hash[i][j] << endl;
		}
	}
#endif
}

void murmurhash128(char key[BUFFER_LEN], int len, int seed, uint32_t hash[4]){
#pragma HLS RESOURCE variable=key core=RAM_2P_BRAM
#pragma HLS ARRAY_PARTITION variable=key block factor=128 dim=1

	const uint32_t c[4] = {0x239b961b, 0xab0e9789, 0x38b34ae5, 0xa1e38b93};
	const uint32_t n[4] = {0x561ccd1b, 0x0bcaa747, 0x96cd1c35, 0x32ac3b17};

	for(int i=0; i<4; i++)
#pragma HLS UNROLL
		hash[i] = seed;


	for(int i=0; i < (len >> 4); i++){
#pragma HLS PIPELINE II=8
#pragma HLS LOOP_TRIPCOUNT max=512
		int offset = (i << 4);
		uint32_t k[4];
		for(int i=0; i<4; i++){
			k[i] = (key[offset+3+(i<<2)] << 24);
			k[i] += (key[offset+2+(i<<2)] << 16);
			k[i] += (key[offset+1+(i<<2)] << 8);
			k[i] += (key[offset+0+(i<<2)] << 0);
		}

		for(int i=0; i<4; i++){
			k[i] *= c[i];
			k[i] = rotl32(k[i], 15+i);
			k[i] *= (i==3 ? c[0] : c[i+1]);
		}

		for(int i=0; i<4; i++){
			hash[i] ^= k[i];
			hash[i] = rotl32(hash[i], 19 - (i<<1));
			hash[i] += (i==3 ? hash[0] : hash[i+1]);
			hash[i] = hash[i] * m + n[i];
		}
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
		k4 *= c[3];
		k4 = rotl32(k4, 18);
		k4 *= c[0];
		hash[3] ^= k4;

		case 12: k3 ^= (tail[11] << 24);
		case 11: k3 ^= (tail[10] << 16);
		case 10: k3 ^= (tail[9]  << 8);
		case 9:  k3 ^= (tail[8]  << 0);
		k3 *= c[2];
		k3 = rotl32(k3, 17);
		k3 *= c[3];
		hash[2] ^= k3;

		case 8: k2 ^= (tail[7] << 24);
		case 7: k2 ^= (tail[6] << 16);
		case 6: k2 ^= (tail[5] << 8);
		case 5: k2 ^= (tail[4] << 0);
		k2 *= c[1];
		k2 = rotl32(k2, 16);
		k2 *= c[2];
		hash[1] ^= k2;

		case 4: k1 ^= (tail[3] << 24);
		case 3: k1 ^= (tail[2] << 16);
		case 2: k1 ^= (tail[1] << 8);
		case 1: k1 ^= (tail[0] << 0);
		k1 *= c[0];
		k1 = rotl32(k1, 15);
		k1 *= c[1];
		hash[0] ^= k1;
	}

	for(int i=0; i<4; i++) hash[i] ^= len;

	hash[0] += hash[1];
	hash[0] += hash[2];
	hash[0] += hash[3];
	hash[1] += hash[0];
	hash[2] += hash[0];
	hash[3] += hash[0];
}
