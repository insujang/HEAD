#include "get.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	char test_str[4096];

	srand(2);
	int indices_answer[3] = {957, 1974, 3028};

	hls::stream<char> test_str_stream;
	for(int i=0; i<4096; i++) {
		test_str[i] = rand() % 64 + 1;
		test_str_stream.write(test_str[i]);
	}

	hls::stream<ap_item> test_indices_output;

	calcHash(test_str_stream, test_indices_output);

	for(int i=0; i<3; i++){
		int result = ((ap_item)test_indices_output.read()).data;
		if(result != indices_answer[i]){
			cout << "[ERROR] expected " << indices_answer[i] << ", but got " << result << endl;
			return 1;
		}
	}

	return 0;
}
