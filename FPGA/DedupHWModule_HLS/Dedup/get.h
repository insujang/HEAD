#include "hls_stream.h"
#include "ap_axi_sdata.h"

struct ap_item{
	int data;
	ap_uint<1> last;
};

void calcHash(hls::stream<char> &strStream, hls::stream<ap_item> &indicesStream);
