

#include "dedup.h"

#include "hls_stream.h"
#include "ap_axi_sdata.h"

struct ap_out_item{
	int index;
	int hashData;
};

struct ap_out{
	ap_out_item data;
	ap_uint<1> last;
};

#define modulo 991
#define targetHash 337
#define prime 23


void extractIndices(int hash[BUFFER_LEN-WINDOW_LEN], int indices[INDICES_NUM]){
	int i, j;

	for(i=0; i<WINDOW_LEN; i++){
#pragma HLS PIPELINE
		for(j=0; j<INDICES_NUM; j++){
#pragma HLS UNROLL
			int offset = j * WINDOW_LEN + i;
			if((hash[offset] & 859) == 330) indices[j] = (offset+WINDOW_LEN);
		}
	}
}

void rollingHash(char str[BUFFER_LEN], int hash[BUFFER_LEN-WINDOW_LEN+1]){
	int i, j;
	int sum = 0;

	calculateFirstHash:
	for(i=0; i<WINDOW_LEN; i++){
#pragma HLS PIPELINE II=1
		sum += str[i];
	}
	hash[0] = sum;

	roleHash:
	for(i=1; i<BUFFER_LEN-WINDOW_LEN; i++){
#pragma HLS UNROLL factor=2
#pragma HLS PIPELINE II=1
		sum = sum + str[i+WINDOW_LEN-1] - str[i-1];
		hash[i] = sum;
	}
}
/*
void rollingHash(char str[BUFFER_LEN], int hash[BUFFER_LEN-WINDOW_LEN+1]){
	int i, j;
	int strHash = 0;
	int power = 1;

	calculateFirstHash:
	for(i=0; i<WINDOW_LEN; i++){
#pragma HLS PIPELINE II=1
		strHash = (prime * strHash + str[i]) % modulo;
		power = (power * prime) % modulo;
	}
	hash[0] = strHash;

	roleHash:
	for(i=1; i<BUFFER_LEN-WINDOW_LEN; i++){
#pragma HLS PIPELINE II=1
		strHash = (strHash * prime + str[i+WINDOW_LEN-1] - power * str[i-1]) % modulo;
		power = (power * prime) % modulo;
		hash[i] = strHash;
	}
}
*/

void calcHash(char str[BUFFER_LEN], int indices[INDICES_NUM]){

	int hash[BUFFER_LEN - WINDOW_LEN];
#pragma HLS RESOURCE variable=hash core=RAM_T2P_BRAM
#pragma HLS ARRAY_PARTITION variable=hash cyclic factor=128 dim=1

	// calculate all hashes
	rollingHash(str, hash);

	// extract condition satisfied index
	extractIndices(hash, indices);

}

#define c1 0xcc9e2d51
#define c2 0x1b873593
#define r1 15
#define r2 13
#define m 5
#define n 0xe6546b64


uint32_t murmurhash ( char* key, uint32_t len, uint32_t seed) {
#pragma HLS INLINE off
  uint32_t hash = seed;

  uint32_t kValues[BUFFER_LEN/4];
  int kItr = 0;

  murmurHashInit:
  // for each 4 byte chunk of `key'
  for(int i = 0; i < len; i+=4){
#pragma HLS LOOP_TRIPCOUNT max=2048
// UNROLL directive cannot be applied due to dependency to kItr.
//#pragma HLS UNROLL factor=16
#pragma HLS PIPELINE
	  // little endian
	  uint32_t k = (key[i+3] << 24) + (key[i+2] << 16) + (key[i+1] << 8) + (key[i]);
	  k *= c1;
	  k = (k << r1) | (k >> (32 - r1));
	  k *= c2;

	  kValues[kItr++] = k;
  }

  murmurHashCalc:
  for(int i = 0 ; i < kItr; i++){
#pragma HLS PIPELINE
// UNROLL directive cannot be applied due to dependency to hash.
#pragma HLS LOOP_TRIPCOUNT max=512
	  hash ^= kValues[i];
	  hash = (hash << r2) | (hash >> (32 - r2));
	  hash = hash * m + n;
  }

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

void dedup(hls::stream<char>& inputData, hls::stream<ap_out>& outputData ){
#pragma HLS INTERFACE axis port=outputData
#pragma HLS INTERFACE axis port=inputData
#pragma HLS INTERFACE s_axilite port=return

	char buffer[BUFFER_LEN];
#pragma HLS RESOURCE variable=buffer core=RAM_2P_LUTRAM
#pragma HLS ARRAY_PARTITION variable=buffer cyclic factor=128
	int indices[INDICES_NUM];
	memset(indices, 0, INDICES_NUM * sizeof(int));

		// read stream data and save it to BRAM
	readStream:
	for(int i=0; i<BUFFER_LEN; i++){
#pragma HLS PIPELINE II=1
		buffer[i] = inputData.read();
	}

	/*
	 *  Parse Data to create index
	 */
	calcHash(buffer, indices);

	/*
	 *  Create hash value using index
	 */
	unsigned int lastIndex = 0;
	unsigned int dataLen = 0;
	for(int i = 0; i < INDICES_NUM; i++){
		// This for loop cannot be pipelined
		// because murmurhash() cannot be partially unrolled due to this pipeline directive.
		// #pragma HLS PIPELINE II=1

		struct ap_out item;

		if(indices[i] != 0){
			dataLen = indices[i] - lastIndex;
			item.data.hashData = murmurhash(&buffer[lastIndex], dataLen, 0);
			lastIndex = indices[i];
		}else{
			item.data.hashData = 0;
		}
		item.data.index = indices[i];
		item.last = (i == INDICES_NUM - 1 ? 1 : 0);
		outputData.write(item);
	}

}
