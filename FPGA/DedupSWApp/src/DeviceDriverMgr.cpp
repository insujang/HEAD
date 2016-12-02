//
// Created by chikdol on 16. 12. 1.
//

#include "DeviceDriverMgr.h"
#include <cassert>

DMADeviceDriverMgr::DMADeviceDriverMgr(int rxBufferSize, int txBufferSize){
    m_txBufferSize = txBufferSize;
    m_rxBufferSize = rxBufferSize;

    m_axidmaDev = axidma_init();
    assert(m_axidmaDev != NULL);

    int txNumber, rxNumber;
    int* txChannels;
    int* rxChannels;

    m_txBuffer = (char*) axidma_malloc(m_axidmaDev, txBufferSize);
    txChannels = axidma_get_dma_tx(m_axidmaDev, &txNumber);
    m_txChannel = txChannels[0];

    m_rxBuffer = (char*) axidma_malloc(m_axidmaDev, rxBufferSize);
    rxChannels = axidma_get_dma_rx(m_axidmaDev, &rxNumber);
    m_rxChannel = rxChannels[0];
}

DMADeviceDriverMgr::~DMADeviceDriverMgr(){
    axidma_free(m_axidmaDev, m_rxBuffer, m_rxBufferSize);
    axidma_free(m_axidmaDev, m_txBuffer, m_txBufferSize);
    axidma_destroy(m_axidmaDev);
}

char* DMADeviceDriverMgr::getTxBuffer(){
    return m_txBuffer;
}

char* DMADeviceDriverMgr::getRxBuffer(){
    return m_rxBuffer;
}

void DMADeviceDriverMgr::sendData(){
    axidma_oneway_transfer(m_axidmaDev, AXIDMA_WRITE, m_txChannel, m_txBuffer, m_txBufferSize,);
}

void DMADeviceDriverMgr::rcvData(){
    axidma_oneway_transfer(m_axidmaDev, AXIDMA_READ, m_rxChannel, m_rxBuffer, m_rxBufferSize, true);
}
