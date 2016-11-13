#include <string.h>
#include "get.h"

#define WINDOW_LEN 1024
#define BUFFER_LEN 4096

void rollingHash(char str[BUFFER_LEN], int indices[3]){
//#pragma HLS ARRAY_PARTITION variable=indices complete dim=1
//#pragma HLS RESOURCE variable=str core=RAM_2P_BRAM
//#pragma HLS ARRAY_PARTITION variable=str cyclic factor=128 dim=1
	int i, j;
	int sum = 0;
	int hash[BUFFER_LEN - WINDOW_LEN+1];
#pragma HLS RESOURCE variable=hash core=RAM_2P_BRAM
#pragma HLS ARRAY_PARTITION variable=hash cyclic factor=128 dim=1

	for(i=0; i<WINDOW_LEN; i++){
#pragma HLS UNROLL
		sum += str[i];
	}
	hash[0] = sum;

	for(i=1; i<BUFFER_LEN-WINDOW_LEN+1; i++){
#pragma HLS UNROLL skip_exit_check factor=128
#pragma HLS PIPELINE II=64
		sum = sum + str[i+WINDOW_LEN-1] - str[i-1];
		hash[i] = sum;
	}

	for(i=0; i<3; i++){
#pragma HLS UNROLL
		int offset = i * WINDOW_LEN;
		indices[i] = -1;
		for(j=0; j<WINDOW_LEN; j++){
#pragma HLS UNROLL skip_exit_check factor=128
#pragma HLS PIPELINE II=128
			int index = offset + j;
			if((hash[index] & 859) == 330) indices[i] = index;
		}
		if(indices[i] < 0) indices[i] = offset + WINDOW_LEN;
	}

//	int indices_num = 0;
//	for(i=0; i<BUFFER_LEN-WINDOW_LEN; i++){
//#pragma HLS LOOP_TRIPCOUNT max=3072
//		if((hash[i] & 859) == 330 && indices_num < 3){
//			indices[indices_num++] = i;
//			i+=WINDOW_LEN;
//		}
//	}

}


void calcHash(hls::stream<char> &strStream,
		hls::stream<ap_item> &indicesStream){
#pragma HLS INTERFACE ap_ctrl_none register port=return
#pragma HLS INTERFACE axis port=indicesStream
#pragma HLS INTERFACE axis port=strStream
	char str[BUFFER_LEN];
#pragma HLS RESOURCE variable=str core=RAM_2P_BRAM
#pragma HLS ARRAY_PARTITION variable=str cyclic factor=128 dim=1
	int indices[3];
#pragma HLS ARRAY_PARTITION variable=indices complete dim=1

	for(int i=0; i<BUFFER_LEN; i++){
#pragma HLS PIPELINE II=1
		str[i] = strStream.read();
	}

	rollingHash(str, indices);

	for(int i=0; i<3; i++){
#pragma HLS PIPELINE II=1
		struct ap_item item;
		item.data = indices[i];
		item.last = 1;
		indicesStream.write(item);
	}
}
