#include "dedup.h"
#include <iostream>


void dedup(hls::stream<char>& inputData, hls::stream<ap_out>& outputData ){
#pragma HLS INTERFACE axis port=outputData
#pragma HLS INTERFACE axis port=inputData
#pragma HLS INTERFACE s_axilite port=return

	char buffer[BUFFER_LEN];
#pragma HLS RESOURCE variable=buffer latency=1
#pragma HLS ARRAY_PARTITION variable=buffer block factor=64 dim=1

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

	// Calculate murmur hashes based on extraced 7 indices;
	calcHash:
	for(int i=0; i<7; i++){
#pragma HLS LOOP_TRIPCOUNT max=7
#pragma HLS PIPELINE
		if(i >= numOfIndex) break;
		ap_out item;
		int offset = (i > 0 ? targetIndices[i-1] : 0);
		//item.data.hashData = murmurhash(&buffer[offset], targetIndices[i] - offset, 0);
		murmurhash128(&buffer[offset], targetIndices[i] - offset, 0, item.data.hashData);
		item.data.index = targetIndices[i];
		item.last = (i < 6? 0 : 1);
		outputData.write(item);
	}

	fillQueue:
	// Add remaining values to fit number of output data 7.
	for(int i=numOfIndex; i<7; i++){
#pragma HLS PIPELINE
#pragma HLS LOOP_TRIPCOUNT max=7
		ap_out item;
		//item.data.hashData = 0;
		for(int j=0; j<4; j++) item.data.hashData[j] = 0;
		item.data.index = 0;
		item.last = (i < 6? 0 : 1);
		outputData.write(item);
	}
}
