rm -rf obj_dir
rm -f f1.vcd

verilator -Wall --cc --trace f1.sv --exe f1_tb.cpp 

make -j -C obj_dir/ -f Vf1.mk Vf1

obj_dir/Vf1

# use source ./doit.sh to run