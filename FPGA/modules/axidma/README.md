# Xilinx AXI DMA library for Zedboard

The Github subrepository `xilinx_axidma` is for DMA operation of our project.
If you follow steps described in there, you can get `axidma.ko` kernel module and `libaxidma.so` shared library.

After booting Petalinux in Zedboard, import the kernel module and add the path to `LD_LIBRARY_PATH` to load the shared library as follows.
```
$ insmod axidma.ko
$ export LD_LIBRARY_PATH=<path_to_libaxidma.so>
```