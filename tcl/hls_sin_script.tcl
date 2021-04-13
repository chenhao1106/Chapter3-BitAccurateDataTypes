############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project LABA
set_top hls_sin
add_files LABA/hls_sin.cpp
add_files LABA/hls_sin.h
add_files -tb LABA/sin_precision_tb.cpp -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xc7z020-clg400-1}
create_clock -period 5 -name default
source "./LABA/solution1/directives.tcl"
csim_design
csynth_design
cosim_design -setup -trace_level all -tool xsim
export_design -format ip_catalog
