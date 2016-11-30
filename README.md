# HEAD: HardwarE Accelerated Deduplication

## This is a CS710 project, Computing Acceleration with FPGA.

This repository contains SW only based, x86-compatible deduplication application and its Xilinx Zynq-7000 Zedboard based hardware accelerated application.



### SW
This directory contains a CLion project of SW only HEAD deduplication application. You can use it by importing this directory itself via `Import Project from Sources` in CLion welcome page. Or you just install `cmake` from any repository as follows.
```
HEAD/SW$ cmake .
HEAD/SW$ make
```

### FPGA
This directory contains
1. Xilinx Vivado HLS project: contains our custom IP to accelerate deduplication process
2. Xilinx Vivado project: contains our hardware description (bitstream)
3. Petalinux module source code: a character device driver for our custom hardware for Petalinux
4. Xilinx AXI DMA device driver: a submodule that is used for AXI DMA operation in Zedboard + Petalinux
5. User space application project: a CLion project that can be called in Petalinux shell.

We are making README.md and refactoring the directory continuously.
As this project is ongoing now (Nov 30, 2016), contents in this directory can be changed.