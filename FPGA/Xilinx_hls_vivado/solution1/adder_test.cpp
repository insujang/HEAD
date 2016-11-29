#include "adder.h"
#include <iostream>

using namespace std;

int main(){

	hls::stream<item> input;
	hls::stream<item> output;

	for(int i=0; i<4000; i++){
		item input;
		input.data = i;
		input.last = (i == 3999? 1: 0);
	}

	adder(input, output);

	int sum;
	for(int i=0; i<1000; i++){
		sum = 0;
		for(int j=0; j<4; j++){
			sum += j+i*4;
		}
		item output_from_hls = output.read();
		cout << "Expected " << sum << ", got " << output_from_hls.data << endl;
		if(sum != output_from_hls.data) return 1;
	}

	return 0;
}
