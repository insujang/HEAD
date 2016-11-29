// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

/***************************** Include Files *********************************/
#include "xadder.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XAdder_CfgInitialize(XAdder *InstancePtr, XAdder_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XAdder_Start(XAdder *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAdder_ReadReg(InstancePtr->Axilites_BaseAddress, XADDER_AXILITES_ADDR_AP_CTRL) & 0x80;
    XAdder_WriteReg(InstancePtr->Axilites_BaseAddress, XADDER_AXILITES_ADDR_AP_CTRL, Data | 0x01);
}

u32 XAdder_IsDone(XAdder *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAdder_ReadReg(InstancePtr->Axilites_BaseAddress, XADDER_AXILITES_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XAdder_IsIdle(XAdder *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAdder_ReadReg(InstancePtr->Axilites_BaseAddress, XADDER_AXILITES_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XAdder_IsReady(XAdder *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAdder_ReadReg(InstancePtr->Axilites_BaseAddress, XADDER_AXILITES_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XAdder_EnableAutoRestart(XAdder *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAdder_WriteReg(InstancePtr->Axilites_BaseAddress, XADDER_AXILITES_ADDR_AP_CTRL, 0x80);
}

void XAdder_DisableAutoRestart(XAdder *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAdder_WriteReg(InstancePtr->Axilites_BaseAddress, XADDER_AXILITES_ADDR_AP_CTRL, 0);
}

void XAdder_InterruptGlobalEnable(XAdder *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAdder_WriteReg(InstancePtr->Axilites_BaseAddress, XADDER_AXILITES_ADDR_GIE, 1);
}

void XAdder_InterruptGlobalDisable(XAdder *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAdder_WriteReg(InstancePtr->Axilites_BaseAddress, XADDER_AXILITES_ADDR_GIE, 0);
}

void XAdder_InterruptEnable(XAdder *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XAdder_ReadReg(InstancePtr->Axilites_BaseAddress, XADDER_AXILITES_ADDR_IER);
    XAdder_WriteReg(InstancePtr->Axilites_BaseAddress, XADDER_AXILITES_ADDR_IER, Register | Mask);
}

void XAdder_InterruptDisable(XAdder *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XAdder_ReadReg(InstancePtr->Axilites_BaseAddress, XADDER_AXILITES_ADDR_IER);
    XAdder_WriteReg(InstancePtr->Axilites_BaseAddress, XADDER_AXILITES_ADDR_IER, Register & (~Mask));
}

void XAdder_InterruptClear(XAdder *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAdder_WriteReg(InstancePtr->Axilites_BaseAddress, XADDER_AXILITES_ADDR_ISR, Mask);
}

u32 XAdder_InterruptGetEnabled(XAdder *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XAdder_ReadReg(InstancePtr->Axilites_BaseAddress, XADDER_AXILITES_ADDR_IER);
}

u32 XAdder_InterruptGetStatus(XAdder *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XAdder_ReadReg(InstancePtr->Axilites_BaseAddress, XADDER_AXILITES_ADDR_ISR);
}
