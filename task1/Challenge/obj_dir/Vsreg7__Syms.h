// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSREG7__SYMS_H_
#define VERILATED_VSREG7__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vsreg7.h"

// INCLUDE MODULE CLASSES
#include "Vsreg7___024root.h"

// SYMS CLASS (contains all model state)
class Vsreg7__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsreg7* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsreg7___024root               TOP;

    // CONSTRUCTORS
    Vsreg7__Syms(VerilatedContext* contextp, const char* namep, Vsreg7* modelp);
    ~Vsreg7__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
