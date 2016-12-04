#include "hls_stream.h"
#include "ap_axi_sdata.h"

extern "C"{
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
}

#ifndef DEDUP_H
#define DEDUP_H

#define WINDOW_LEN 1024
#define BUFFER_LEN 8192
#define INDICES_NUM 112

uint32_t murmurhash ( char* key, uint32_t len, uint32_t seed);
void murmurhash128(char key[BUFFER_LEN], int len, int seed, uint32_t hash[4]);
void calcHash(char str[BUFFER_LEN], int indices[INDICES_NUM]);

struct ap_out_item{
	int index;
	uint32_t hashData[32];
};

struct ap_out{
	ap_out_item data;
	ap_uint<1> last;
};

void dedup(hls::stream<char>& inputData, hls::stream<ap_out>& outputData);

#endif
