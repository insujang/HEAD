//
// Created by chikdol on 16. 12. 1.
//

#include "DeviceDriverMgr.h"
#include <cassert>
#include <cstring>
#include <iostream>

DMADeviceDriverMgr::DMADeviceDriverMgr(int rxBufferSize, int txBufferSize){
    m_txBufferSize = txBufferSize;
    m_rxBufferSize = rxBufferSize;

    m_axidmaDev = axidma_init();
    assert(m_axidmaDev != NULL);

    int txNumber, rxNumber;
    int* txChannels;
    int* rxChannels;

    m_txBuffer = (char *) axidma_malloc(m_axidmaDev, m_txBufferSize);

    for(int i=0; i<7; i++)
        m_rxBuffer[i] = (rcvItem *) axidma_malloc(m_axidmaDev, m_rxBufferSize);
    // m_rxBuffer = (rcvItem *) axidma_malloc(m_axidmaDev, m_rxBufferSize * 7);

    txChannels = axidma_get_dma_tx(m_axidmaDev, &txNumber);
    m_txChannel = txChannels[0];

    rxChannels = axidma_get_dma_rx(m_axidmaDev, &rxNumber);
    m_rxChannel = rxChannels[0];
}

using namespace std;
DMADeviceDriverMgr::~DMADeviceDriverMgr(){
    axidma_free(m_axidmaDev, m_txBuffer, m_txBufferSize);
    for(int i=0; i<7; i++)
        axidma_free(m_axidmaDev, m_rxBuffer[i], m_rxBufferSize);
    axidma_destroy(m_axidmaDev);
}

char* DMADeviceDriverMgr::getTxBuffer(){
    return m_txBuffer;
}

rcvItem** DMADeviceDriverMgr::getRxBuffers(){
    return m_rxBuffer;
}

void DMADeviceDriverMgr::sendData(){
    axidma_oneway_transfer(m_axidmaDev, AXIDMA_WRITE, m_txChannel, m_txBuffer, m_txBufferSize, false);
}

void DMADeviceDriverMgr::rcvData(){

    for(int i=0; i<7; i++){
        axidma_oneway_transfer(m_axidmaDev, AXIDMA_READ, m_rxChannel, m_rxBuffer[i], m_rxBufferSize, true);
    }

}

void DMADeviceDriverMgr::resetRcvBuffer(){
    memset(m_rxBuffer, 0, m_rxBufferSize);
}
