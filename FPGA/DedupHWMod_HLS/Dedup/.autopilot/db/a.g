#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/seikwon/Development/cs710/HEAD/FPGA/DedupHWMod_HLS/Dedup/.autopilot/db/a.g.bc ${1+"$@"}
