

#include "dedup.h"

#include "hls_stream.h"
#include "ap_axi_sdata.h"


struct rtn{
	int index;
	int hashData;
};

struct ap_item{
	rtn data;
	ap_uint<1> last;
};

void extractIndices(int hash[BUFFER_LEN-WINDOW_LEN+1], int indices[INDICES_NUM]){
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

	for(i=0; i<WINDOW_LEN; i++){
#pragma HLS PIPELINE II=1
		sum += str[i];
	}
	hash[0] = sum;

	for(i=1; i<BUFFER_LEN-WINDOW_LEN+1; i++){
#pragma HLS UNROLL skip_exit_check factor=2
#pragma HLS PIPELINE II=1
		sum = sum + str[i+WINDOW_LEN-1] - str[i-1];
		hash[i] = sum;
	}
}


void calcHash(char str[BUFFER_LEN], int indices[INDICES_NUM]){

	int hash[BUFFER_LEN - WINDOW_LEN + 1];
#pragma HLS RESOURCE variable=hash core=RAM_2P_BRAM
#pragma HLS ARRAY_PARTITION variable=hash cyclic factor=128 dim=1

	// calculate all hashes
	rollingHash(str, hash);

	// extract condition satisfied index
	extractIndices(hash, indices);


}



uint32_t
murmurhash ( char* key, uint32_t len, uint32_t seed) {
#pragma HLS INLINE off
  uint32_t c1 = 0xcc9e2d51;
  uint32_t c2 = 0x1b873593;
  uint32_t r1 = 15;
  uint32_t r2 = 13;
  uint32_t m = 5;
  uint32_t n = 0xe6546b64;
  uint32_t h = 0;
  uint32_t k = 0;
  uint8_t *d = (uint8_t *) key; // 32 bit extract from `key'
  const uint32_t *chunks = NULL;

  const uint8_t *tail = NULL; // tail - last 8 bytes
  int i = 0;

  uint32_t chunk;

  int l = len / 4; // chunk length
  int kValues[BUFFER_LEN/4];
  int kItr = 0;

  h = seed;

  tail = (const uint8_t *) (d + l * 4); // last 8 byte chunk of `key'

  murmurHashInit:
  // for each 4 byte chunk of `key'
  for(int j = 0; j < len; j+=4){
#pragma HLS LOOP_TRIPCOUNT max=2048
#pragma HLS UNROLL factor=64
#pragma HLS PIPELINE
	  k = (key[j] << 24) + (key[j+1] << 16) + (key[j+2] << 8) + (key[j+3]);
	  k *= c1;
	  k = (k << r1) | (k >> (32 - r1));
	  k *= c2;

	  kValues[kItr] = k;
	  kItr++;
  }

  for(i = 0 ; i < kItr; i++){
#pragma HLS LOOP_TRIPCOUNT max=512
	  h ^= kValues[i];
	  h = (h << r2) | (h >> (32 - r2));
	  h = h * m + n;
  }

  k = 0;

  // remainder
  switch (len & 3) { // `len % 4'
    case 3: k ^= (tail[2] << 16);
    case 2: k ^= (tail[1] << 8);
    case 1:
      k ^= tail[0];
      k *= c1;
      k = (k << r1) | (k >> (32 - r1));
      k *= c2;
      h ^= k;
  }

  h ^= len;

  h ^= (h >> 16);
  h *= 0x85ebca6b;
  h ^= (h >> 13);
  h *= 0xc2b2ae35;
  h ^= (h >> 16);

  return h;
}

void dedupDriver(hls::stream<char>& inputData, hls::stream<ap_item>& outputData ){
#pragma HLS INTERFACE axis port=outputData
#pragma HLS INTERFACE axis port=inputData
#pragma HLS INTERFACE s_axilite port=return

	char buffer[BUFFER_LEN];
#pragma HLS RESOURCE variable=buffer core=RAM_T2P_BRAM
#pragma HLS ARRAY_PARTITION variable=buffer cyclic factor=128
	int indices[INDICES_NUM];

		// read stream data and save it to BRAM
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
#pragma HLS PIPELINE II=1

		struct ap_item item;

		if(indices[i] != 0){
			dataLen = indices[i] - lastIndex;
			item.data.hashData = murmurhash(&buffer[lastIndex], dataLen, 0);
			item.data.index = indices[i];
			lastIndex = indices[i];
		}else{
			item.data.hashData = 0;
			item.data.index = 0;
		}
		item.last = (i == INDICES_NUM - 1 ? 1 : 0);
		outputData.write(item);

	}
}
