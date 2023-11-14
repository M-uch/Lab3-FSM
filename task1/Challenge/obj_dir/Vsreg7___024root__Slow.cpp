// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsreg7.h for the primary calling header

#include "verilated.h"

#include "Vsreg7__Syms.h"
#include "Vsreg7___024root.h"

void Vsreg7___024root___ctor_var_reset(Vsreg7___024root* vlSelf);

Vsreg7___024root::Vsreg7___024root(Vsreg7__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsreg7___024root___ctor_var_reset(this);
}

void Vsreg7___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsreg7___024root::~Vsreg7___024root() {
}
