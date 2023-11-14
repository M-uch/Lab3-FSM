#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"
#include "Vf1.h"

int main(int argc, char **argv, char **env) {
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);
    // init top verilog instance
    Vf1* top = new Vf1;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("f1.vcd");

    // init Vbuddy
    if (vbdOpen()!=1) return(-1);

    vbdSetMode(1);
    vbdHeader("lab 3: f1");

    // initialize simulation inputs 
    top->clk = 1;
    top->rst = 1;
    top->en = 1;
    
    // run simulation for many clock systems 
    for (i= 0; i<5000; i++) {

        // dump variables for many clock cycles
        for (clk=0; clk<2; clk++) {
            tfp->dump (2*i+clk); // in pico seconds
            top->clk = !top->clk;
            top->eval ();
        }

        vbdBar(top->data_out & 0xFF);

        vbdCycle(i);
        // end

        top->rst = (i<3);
        top->en = vbdFlag();

        if ((Verilated::gotFinish()) || (vbdGetkey()=='q')) 
            exit(0);                // ... exit if finish OR 'q' pressed
    }

    vbdClose();
    tfp->close();
    exit(0);
}