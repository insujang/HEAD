#include <string.h>
#include "get.h"

#define WINDOW_LEN 1024
#define BUFFER_LEN 8192
#define INDICES_NUM 7

void extractIndices(int hash[BUFFER_LEN-WINDOW_LEN+1], int indices[INDICES_NUM]){
	int i, j;
	for(i=0; i<WINDOW_LEN; i++){
#pragma HLS PIPELINE
		for(j=0; j<INDICES_NUM; j++){
#pragma HLS UNROLL
			int offset = j * WINDOW_LEN + i;
			if((hash[offset] & 859) == 330) indices[j] = offset;
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


void calcHash(hls::stream<char> &strStream,
		hls::stream<ap_item> &indicesStream){
#pragma HLS INTERFACE s_axilite register port=return
#pragma HLS INTERFACE axis port=indicesStream
#pragma HLS INTERFACE axis port=strStream

	char str[BUFFER_LEN];
#pragma HLS RESOURCE variable=str core=RAM_2P_BRAM
#pragma HLS ARRAY_PARTITION variable=str cyclic factor=128 dim=1

	int indices[INDICES_NUM];
#pragma HLS ARRAY_PARTITION variable=indices complete dim=1
int hash[BUFFER_LEN - WINDOW_LEN + 1];
#pragma HLS RESOURCE variable=hash core=RAM_2P_BRAM
#pragma HLS ARRAY_PARTITION variable=hash cyclic factor=128 dim=1

	// read stream data and save it to BRAM
	for(int i=0; i<BUFFER_LEN; i++){
#pragma HLS PIPELINE II=1
		str[i] = strStream.read();
	}

	// calculate all hashes
	rollingHash(str, indices);

	// extract condition satisfied index
	extractIndices(hash, indices);

	for(int i=0; i<INDICES_NUM; i++){
#pragma HLS PIPELINE II=1
		struct ap_item item;
		item.data = indices[i];
		item.last = 1;
		indicesStream.write(item);
	}
}
