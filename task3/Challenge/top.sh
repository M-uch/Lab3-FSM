#!/bin/sh
rm -rf obj_dir
rm -f *.vcd

verilator --cc clktick.sv
verilator --cc f1.sv
verilator -Wall --cc --trace top.sv --exe top_tb.cpp

make -j -C obj_dir/ -f Vtop.mk Vtop

obj_dir/Vtop

# ./top.sh