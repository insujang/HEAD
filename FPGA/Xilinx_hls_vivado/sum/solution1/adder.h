#include "hls_stream.h"
#include "ap_int.h"
#include "ap_axi_sdata.h"

struct ap_item {
	int data;
	ap_uint<1> last;
};

typedef ap_axiu<32, 2, 5, 6> item;

void adder(hls::stream<ap_item> &inStream,
		hls::stream<ap_item> &outStream);


