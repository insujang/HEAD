#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/insujang/cs710/xilinx_hls_workspace/getVariableChunk_2/getVariableChunk2/solution1/.autopilot/db/a.g.bc ${1+"$@"}
