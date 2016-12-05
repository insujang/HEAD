//
// Created by chikdol on 16. 12. 1.
//

#ifndef HEAD_DMADEVICEDRIVERMGR_H
#define HEAD_DMADEVICEDRIVERMGR_H

#include <string>

extern "C" {
#include "libaxidma.h"
}

typedef struct {
    int length;
    //unsigned int hash[4];
    unsigned int hash[4];
    int dummy[3];
} rcvItem;
// 8 32-bit integers: 256-bit = 32 bytes

#define MODULE_NAME "/"
#define TX_BUFFER_SIZE  8192
//#define RX_BUFFER_SIZE 56
#define RX_BUFFER_SIZE  32
// for murmur32: (4+4) * 7 = 56
// for murmur128 revised: (256 bit = 32 byte) * 7 = 224

using namespace std;

class DMADeviceDriverMgr{
    public:
        DMADeviceDriverMgr(int rxBufferSize = RX_BUFFER_SIZE, int txBufferSize = TX_BUFFER_SIZE);
        ~DMADeviceDriverMgr();
        char* getTxBuffer();
        rcvItem** getRxBuffers();
        void sendData();
        void rcvData();
        void resetRcvBuffer();

    private:
        axidma_dev_t m_axidmaDev;

        int m_txBufferSize;
        int m_rxBufferSize;

        char *m_txBuffer;
        rcvItem *m_rxBuffer[7];

        int m_txChannel;
        int m_rxChannel;
};

#endif //HEAD_DMADEVICEDRIVERMGR_H
