// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsreg4.h for the primary calling header

#ifndef VERILATED_VSREG4___024ROOT_H_
#define VERILATED_VSREG4___024ROOT_H_  // guard

#include "verilated.h"

class Vsreg4__Syms;

class Vsreg4___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_IN8(data_in,0,0);
    VL_OUT8(data_out,4,1);
    CData/*3:0*/ sreg4__DOT__sreg;
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    Vsreg4__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsreg4___024root(Vsreg4__Syms* symsp, const char* name);
    ~Vsreg4___024root();
    VL_UNCOPYABLE(Vsreg4___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
