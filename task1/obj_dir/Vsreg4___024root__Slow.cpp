// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsreg4.h for the primary calling header

#include "verilated.h"

#include "Vsreg4__Syms.h"
#include "Vsreg4___024root.h"

void Vsreg4___024root___ctor_var_reset(Vsreg4___024root* vlSelf);

Vsreg4___024root::Vsreg4___024root(Vsreg4__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsreg4___024root___ctor_var_reset(this);
}

void Vsreg4___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsreg4___024root::~Vsreg4___024root() {
}
