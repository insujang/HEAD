############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
############################################################
open_project DedupHWMod_HLS
set_top dedupDriver
add_files DedupHWMod_HLS/Dedup/dedup.cpp
add_files DedupHWMod_HLS/Dedup/dedup.h
add_files -tb DedupHWMod_HLS/Dedup/dedup_test.cpp -cflags "-std=c++0x"
open_solution "Dedup"
set_part {xc7z020clg484-1} -tool vivado
create_clock -period 10 -name default
#source "./DedupHWMod_HLS/Dedup/directives.tcl"
csim_design -clean
csynth_design
cosim_design
export_design -format ip_catalog
