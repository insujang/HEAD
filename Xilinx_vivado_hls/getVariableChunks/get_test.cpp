#include "get.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	char test_str[4096];

	srand(2);
	int indices_answer[3];


	hls::stream<char> test_str_stream;
	for(int i=0; i<4096; i++) {
		test_str[i] = rand() % 64 + 1;
		test_str_stream.write(test_str[i]);
	}

	// HLS test
	// HLS should generate outputs 957, 1974, 3028
	hls::stream<ap_item> test_indices_output;
	calcHash(test_str_stream, test_indices_output);

	// C++ test
	// Check whether HLS code generates outputs well

	for(int i=3071; i>=0; i--){
		int sum = 0;
		for(int j=0; j<1024; j++){
			sum += test_str[i+j];
		}

		if((sum & 859) == 330){
			int index = i/1024;
			indices_answer[index] = i;
			if(index > 0) i = index * 1024 - 1;
			else break;
		}
	}

	for(int i=0; i<3; i++){
		int result = ((ap_item)test_indices_output.read()).data;
		cout << "[" << (i+1) << "] expected " << indices_answer[i] << ", got " << result << endl;
		if(result != indices_answer[i]) return 1;
	}

	return 0;
}
