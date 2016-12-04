#include "dedup.h"
#include <iostream>

void calcHash(char str[BUFFER_LEN], int indices[INDICES_NUM]){
#pragma HLS ARRAY_PARTITION variable=indices complete dim=1
#pragma HLS ARRAY_PARTITION variable=str block factor=64 dim=1

	int hash[112];
#pragma HLS ARRAY_PARTITION variable=hash complete dim=1

	// First 112 hashes initialize
	// Each hash calculates 64 hashes
	// hash[0] = sum(str[0...1023])
	// hash[1] = sum(str[64...1087])
	// hash[2] = sum(str[128...1151])
	// ...
	memset(hash, 0, 112 * sizeof(int));

	// The reason inner loop = # hashes is to fully unroll
	hash_initialize_outerloop:
	for(int i=0; i<1024; i++){
#pragma HLS PIPELINE
		hash_initialize_innerloop:
		for(int j=0; j<112; j++){
#pragma HLS UNROLL
			hash[j] += str[i + (j << 6)];
			//std::cout << "hash[" << j << "] += str[" << i + (j << 6) << "]" << std::endl;
		}
	}

	fisrt_hash_comparison:
	for(int j=0; j<112; j++){
#pragma HLS UNROLL
		if((hash[j] & 859) == 330)
		{
			int result = (j << 6) + 0 + WINDOW_LEN + 1;
			//std::cout << "Matched: " << result << std::endl;
			indices[j] = result;
		}
	}

	rolling_hash_calc_check_outerloop:
	for(int i=0; i<64; i++){
#pragma HLS PIPELINE
		rolling_hash_calc_check:
		for(int j=0; j<112; j++){
#pragma HLS UNROLL
			hash[j] += str[i + (j << 6) + WINDOW_LEN];
			hash[j] -= str[i + (j << 6)];
			//std::cout << "hash[" << j << "] += str[" << i + (j << 6) + WINDOW_LEN << "] -= str[" << i + (j << 6) << "]" << std::endl;
			if((hash[j] & 859) == 330){
				int result = (j << 6) + i + WINDOW_LEN + 1;
				//std::cout << "Matched: " << result << std::endl;
				if(indices[j] == 0) indices[j] = result;
			}
		}
	}

}
