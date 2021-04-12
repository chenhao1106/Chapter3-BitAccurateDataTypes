############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project LABA
set_top signed_shift
add_files LABA/signed_shift.cpp
add_files LABA/signed_shift.h
add_files -tb LABA/signed_shift_tb.cpp
open_solution "solution1"
set_part {xc7z020-clg400-1}
create_clock -period 5 -name default
source "./LABA/solution1/directives.tcl"
csim_design
csynth_design
cosim_design -trace_level all -tool xsim
export_design -format ip_catalog
