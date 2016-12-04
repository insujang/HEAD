//
// Created by chikdol on 16. 12. 1.
//

#ifndef HEAD_DMADEVICEDRIVERMGR_H
#define HEAD_DMADEVICEDRIVERMGR_H

#include <string>

extern "C" {
#include "libaxidma.h"
}

#define MODULE_NAME "/"
#define TX_BUFFER_SIZE  8192
#define RX_BUFFER_SIZE  252
// for murmur32: (4+4) * 7 = 56
// for murmur128: (4+32) * 7 = 252

using namespace std;

class DMADeviceDriverMgr{
    public:
        DMADeviceDriverMgr(int rxBufferSize = RX_BUFFER_SIZE, int txBufferSize = TX_BUFFER_SIZE);
        ~DMADeviceDriverMgr();
        char* getTxBuffer();
        char* getRxBuffer();
        void sendData();
        void rcvData();
        void resetRcvBuffer();

    private:
        axidma_dev_t m_axidmaDev;

        int m_txBufferSize;
        int m_rxBufferSize;

        char *m_txBuffer;
        char *m_rxBuffer;

        int m_txChannel;
        int m_rxChannel;
};

#endif //HEAD_DMADEVICEDRIVERMGR_H
