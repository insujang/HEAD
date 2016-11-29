#include "adder.h"

void adder(hls::stream<ap_item> &inStream,
		hls::stream<ap_item> &outStream){
#pragma HLS INTERFACE axis port=outStream
#pragma HLS INTERFACE axis port=inStream
#pragma HLS INTERFACE s_axilite register port=return

	/*
	int sum;
	for(int i=0; i<1000; i++){
		sum = 0;
		for(int j=0; j<4; j++){
			sum += inStream.read().data;
		}
		ap_item item;
		item.data = sum;
		item.last = (i == 999 ? 1 : 0);
		outStream.write(item);
	}*/

	for(int i=0; i<5; i++){
		ap_item item = inStream.read();
		item.data += i;
		outStream.write(item);
	}
}

