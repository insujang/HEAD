# Userspace AXI DMA application

### Compiling
To make it run in ARM based Zedboard, we need a cross-compiler, `arm-gnueabihf-g++`.
Following source command will load tools and development libraries which make compile successfuly.
```
$ source <petalinux_root_dir>/settings.sh
```
Do not be confused with settings64.sh located in Xilinx SDK directory.

To compile, we need headers that are in [AXI DMA library](https://github.com/bperez77/xilinx_axidma).
We use `DMADIR` variable to indicate this directory location.
```
$ export DMADIR=~/cs710/dma/xilinx_axidma
```