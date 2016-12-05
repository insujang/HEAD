#include "dedup.h"
#include <iostream>


void dedup(hls::stream<char>& inputData, hls::stream<ap_out>& outputData ){
#pragma HLS INTERFACE axis port=outputData
#pragma HLS INTERFACE axis port=inputData
#pragma HLS INTERFACE s_axilite port=return

	char buffer[BUFFER_LEN];
#pragma HLS RESOURCE variable=buffer core=RAM_2P_BRAM latency=1
#pragma HLS ARRAY_PARTITION variable=buffer block factor=128 dim=1

	int indices[INDICES_NUM];
#pragma HLS RESOURCE variable=indices latency=1
#pragma HLS ARRAY_PARTITION variable=indices complete dim=1
	memset(indices, 0, INDICES_NUM * sizeof(int));

		// read stream data and save it to BRAM
	readStream:
	for(int i=0; i<BUFFER_LEN; i++){
#pragma HLS PIPELINE II=1
		buffer[i] = inputData.read();
	}

	/*  ------------------------------------------------
	 *  Parse Data to create index
	 *  ------------------------------------------------
	 */
	calcHash(buffer, indices);

	/*  ------------------------------------------------
	 *  Create hash value using index
	 *  ------------------------------------------------
	 */

	int targetIndices[7];
	int numOfIndex = 0;
	int lastIndex = 0;

	// Extract appropriate 7 indices among 112 index candidates
	std::cout << "Index candidates ===========================" << std::endl;
	for(int i=0; i<INDICES_NUM; i++){
#pragma HLS PIPELINE
		std::cout << "[" << i << "] index: " << indices[i] << std::endl;
		if(indices[i] > 0 && indices[i] - lastIndex > WINDOW_LEN && numOfIndex < 7){
			targetIndices[numOfIndex] = indices[i];
			numOfIndex++;
			lastIndex = indices[i];
		}
	}

#ifndef __SYNTHESIS__
	std::cout << "Result ===========================" << std::endl;
	for(int i=0; i<7; i++){
		std::cout << "[" << i << "] selected index: " << targetIndices[i] << std::endl;
	}
#endif

	uint32_t hashes[7][4];
	murmurhash128_new(buffer, targetIndices, targetIndices[numOfIndex-1], 0, hashes);

	for(int i=0; i<7; i++){
#pragma HLS PIPELINE
		ap_out item;
		if(i < numOfIndex){
			item.data.index = targetIndices[i];
			for(int j=0; j<4; j++) item.data.hashData[j] = hashes[i][j];
		}
		else{
			item.data.index = -1;
			for(int j=0; j<4; j++) item.data.hashData[j] = -1;
		}

		for(int j=0; j<3; j++) item.data.dummy[j] = 0;
		item.last = 1;
		outputData.write(item);
	}
}
