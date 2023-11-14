rm -rf obj_dir
rm -f lfsr.vcd

verilator --cc sreg4.sv
verilator -Wall --cc --trace lfsr.sv --exe lfsr_tb.cpp 

make -j -C obj_dir/ -f Vlfsr.mk Vlfsr

obj_dir/Vlfsr

# use source ./doit.sh to run