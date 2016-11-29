#include <iostream>
#include <cassert>

#include <fcntl.h>              // Flags for open()
#include <sys/stat.h>           // Open() system call
#include <sys/types.h>          // Types for open()
#include <sys/mman.h>           // Mmap system call
#include <sys/ioctl.h>          // IOCTL system call
#include <unistd.h>             // Close() system call
#include <sys/time.h>           // Timing functions and definitions
#include <getopt.h>             // Option parsing
#include <errno.h>              // Error codes

extern "C" {
#include <stdlib.h>
#include "libaxidma.h"
}

using namespace std;

#define DEFAULT_TRANSFER_SIZE 4000

int main() {

    // --------------------------------------------------
    // Invoke PL via UIO
    // --------------------------------------------------
    cout << "Opening /dev/hello" << endl;
    int adderFd = open("/dev/hello", O_RDWR | O_SYNC);
    assert(adderFd >= 0);

    cout << "Opening /dev/axidma" << endl;
    axidma_dev_t axidmaDev = axidma_init();
    assert(axidmaDev != NULL);

    int sizeBuffer = 5 * sizeof(int);
    int *txBuffer = (int *) axidma_malloc(axidmaDev, sizeBuffer);
    int txNumber;
    int *txChannels = axidma_get_dma_tx(axidmaDev, &txNumber);
    assert(txNumber >= 1);
    int txChannel = txChannels[0];

    for(int i=0; i<5; i++){
        txBuffer[i] = i;
    }

    // Transfer the data from memory to device
    axidma_oneway_transfer(axidmaDev, AXIDMA_WRITE, txChannel,
                           txBuffer, sizeBuffer, true);

    unsigned int info = 1; /* unmask */
    ssize_t nb = write(adderFd, &info, sizeof(info));
    cout << "write result: " << nb << endl;
    assert(nb == sizeof(info));

    cout << "PL device invocation completed." << endl;

    cout << "Waiting for the interrupt received" << endl;
    sleep(10);
    cout << "PL computation might finished." << endl;

    cout << "Getting data from device." << endl;
    int *rxBuffer = (int *) axidma_malloc(axidmaDev, sizeBuffer);
    int rxNumber;
    int *rxChannels = axidma_get_dma_rx(axidmaDev, &rxNumber);
    assert(rxNumber >= 1);
    int rxChannel = rxChannels[0];

    // Transfer the data from device to memory
    axidma_oneway_transfer(axidmaDev, AXIDMA_READ, rxChannel,
                        rxBuffer, sizeBuffer, true);

    for(int i=0; i<5; i++){
        cout << "Expected: " << (txBuffer[i] + i) << ", got: " << rxBuffer[i] << endl;
    }

    cout << "DMA transfer completed." << endl;

    axidma_free(axidmaDev, rxBuffer, sizeBuffer);
    axidma_free(axidmaDev, txBuffer, sizeBuffer);
    axidma_destroy(axidmaDev);
    close(adderFd);



//    XAdder xAdder;
//    XAdder_Initialize(&xAdder, "adder");
//    while(!XAdder_IsReady(&xAdder)) cout << "Waiting device to be initialized." << endl;
//
//    cout << "Beginning PL execution" << endl;
//    XAdder_Start(&xAdder);
//
//    while(!XAdder_IsDone(&xAdder)) cout << "Waiting device to be completed." << endl;
//
//    cout << "PL execution completed." << endl;
//    XAdder_Release(&xAdder);


//    axidma_dev_t axidma_dev;
//    int *txChannels, *rxChannels;
//    int txChannel, rxChannel;
//    int txNum, rxNum;
//    int *txBuffer, *rxBuffer;
//
//    srand(2);
//
//    // intiailize axidma device
//    axidma_dev = axidma_init();
//    assert(axidma_dev != NULL);
//
//    // initialize memory space to kernel space
//    txBuffer = (int *) axidma_malloc(axidma_dev, DEFAULT_TRANSFER_SIZE * sizeof(int));
//    rxBuffer = (int *) axidma_malloc(axidma_dev, DEFAULT_TRANSFER_SIZE * sizeof(int));
//    assert(txBuffer != NULL && txBuffer != MAP_FAILED);
//    assert(rxBuffer != NULL && rxBuffer != MAP_FAILED);
//
//    // initialize all tx/rx channels
//    // as we will have only 1 tx channel and 1 rx channel,
//    // txNum and rxNum should be 1.
//    txChannels = axidma_get_dma_tx(axidma_dev, &txNum);
//    rxChannels = axidma_get_dma_rx(axidma_dev, &rxNum);
//    assert(txNum == 1 && rxNum == 1);
//    txChannel = txChannels[0];
//    rxChannel = rxChannels[0];
//
//    cout << "Using transmit channel " << txChannel <<
//        " and receive channel " << rxChannel << endl;
//
//    // initialize tx data
//    for(int i=0; i<DEFAULT_TRANSFER_SIZE; i++) txBuffer[i] = rand() % 1024;
//
//
//    cout << "Beginning data transfer" << endl;
//
//    axidma_oneway_transfer(axidma_dev, AXIDMA_WRITE, txChannel,
//                           txBuffer, DEFAULT_TRANSFER_SIZE * sizeof(int), false);
//
//    cout << "Data transfer is being done asynchronously." << endl;
//    cout << "Beginning PL invocation" << endl;
//
//    XAdder xAdder;
//    XAdder_Initialize(&xAdder, "xAdder");
//    while(!XAdder_IsReady(&xAdder)) cout << "Waiting for PL ready.." << endl;
//    XAdder_Start(&xAdder);
//    while(!XAdder_IsDone(&xAdder)) cout << "Waiting for PL done.." << endl;
//
//    cout << "PL device completed execution." << endl;
//    cout << "Beginning data transfer back" << endl;
//
//    axidma_oneway_transfer(axidma_dev, AXIDMA_READ, rxChannel,
//            rxBuffer, DEFAULT_TRANSFER_SIZE * sizeof(int), true);
//
//    cout << "Data transfer completed." << endl;
//
//    // perform two-way DMA transfer
//    axidma_twoway_transfer(axidma_dev, txChannel, txBuffer, DEFAULT_TRANSFER_SIZE * sizeof(int),
//            rxChannel, rxBuffer, DEFAULT_TRANSFER_SIZE * sizeof(int), true);
//
//    cout << "Data communication completed." << endl;
//    cout << "Beginning verifiation" << endl;
//
//    for(int i=0; i<DEFAULT_TRANSFER_SIZE; i++){
//        assert(txBuffer[i] == rxBuffer[i]);
//    }
//
//    cout << "Verification finished!" << endl;

//    // --------------------------------------------------
//    // Invoke PL via UIO
//    // --------------------------------------------------
//    int adderFd = open("/dev/uio0", O_RDWR | O_SYNC);
//    assert(adderFd >= 0);
//
//    uint32_t info = 1; /* unmask */
//    ssize_t nb = write(adderFd, &info, sizeof(info));
//    assert(nb >= sizeof(info));
//
//    cout << "PL device invocation completed." << endl;
//    cout << "Beginning data transfer" << endl;
//
//    // perform one-way DMA transfer
//    // AXIDMA_WRITE: transmit from memory to a device
//    // Refer to axidma_ioctl.h
//    axidma_oneway_transfer(axidma_dev, AXIDMA_WRITE, txChannel,
//                    txBuffer, 4000 * sizeof(int), true);
//    // assert(transferResult == 0);
//
//    cout << "Data transfer to device completed." << endl;
//    cout << "Waiting for the interrupt received" << endl;
//
//    /* wait for interrupt */
//    nb = read(adderFd, &info, sizeof(info));
//    assert(nb == sizeof(info));
//
//    cout << "PL computation finished." << endl;
//    cout << "Beginning verification" << endl;
//
//    // --------------------------------------------------
//    /* Do something in response to the interrupt */
//    // --------------------------------------------------
//
//    // perform one-way RMA transfer
//    // AXIDMA_READ: transmit from a device to memory
//    int transferResult = axidma_oneway_transfer(axidma_dev, AXIDMA_READ, rxChannel,
//                    rxBuffer, 4000 * sizeof(int), true);
//    assert(transferResult == 0);
//
//    // Verification
//    for(int i=0; i<4000; i++){
//        cout << "[" << i << "] expected: " << txBuffer[i] << ", got: " << rxBuffer[i] << endl;
//        assert(txBuffer[i] != rxBuffer[i]);
//    }
//
//    cout << "Completed execution." << endl;
//
//    close(adderFd);
//
//    XAdder_Release(&xAdder);
//    axidma_free(axidma_dev, txBuffer, DEFAULT_TRANSFER_SIZE * sizeof(int));
//    axidma_free(axidma_dev, rxBuffer, DEFAULT_TRANSFER_SIZE * sizeof(int));
//    axidma_destroy(axidma_dev);


    return 0;
}