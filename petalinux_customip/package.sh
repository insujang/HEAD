#!/bin/bash

cd images/linux
petalinux-package --force --boot --fsbl zynq_fsbl.elf --fpga design_1_wrapper.bit --u-boot
cd ../..
