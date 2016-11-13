
xelab xil_defaultlib.apatb_calcHash_top -prj calcHash.prj --initfile "/opt/Xilinx/Vivado/2016.2/bin/../data/xsim/ip/xsim_ip.ini" --lib "ieee_proposed=./ieee_proposed" -s calcHash 
xsim --noieeewarnings calcHash -tclbatch calcHash.tcl

