#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/insujang/cs710/xilinx_hls_workspace/sum/solution1/.autopilot/db/a.g.bc ${1+"$@"}