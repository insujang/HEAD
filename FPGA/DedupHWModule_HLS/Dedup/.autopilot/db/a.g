#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/insujang/cs710/HEAD/FPGA/DedupHWModule_HLS/Dedup/.autopilot/db/a.g.bc ${1+"$@"}
