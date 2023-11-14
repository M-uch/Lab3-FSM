// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsreg7.h for the primary calling header

#ifndef VERILATED_VSREG7___024ROOT_H_
#define VERILATED_VSREG7___024ROOT_H_  // guard

#include "verilated.h"

class Vsreg7__Syms;

class Vsreg7___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_IN8(data_in,0,0);
    VL_OUT8(data_out,7,1);
    CData/*6:0*/ sreg7__DOT__sreg;
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    Vsreg7__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsreg7___024root(Vsreg7__Syms* symsp, const char* name);
    ~Vsreg7___024root();
    VL_UNCOPYABLE(Vsreg7___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
