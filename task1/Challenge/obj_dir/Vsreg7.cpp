// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsreg7.h"
#include "Vsreg7__Syms.h"

//============================================================
// Constructors

Vsreg7::Vsreg7(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsreg7__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , en{vlSymsp->TOP.en}
    , data_in{vlSymsp->TOP.data_in}
    , data_out{vlSymsp->TOP.data_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsreg7::Vsreg7(const char* _vcname__)
    : Vsreg7(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsreg7::~Vsreg7() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vsreg7___024root___eval_initial(Vsreg7___024root* vlSelf);
void Vsreg7___024root___eval_settle(Vsreg7___024root* vlSelf);
void Vsreg7___024root___eval(Vsreg7___024root* vlSelf);
#ifdef VL_DEBUG
void Vsreg7___024root___eval_debug_assertions(Vsreg7___024root* vlSelf);
#endif  // VL_DEBUG
void Vsreg7___024root___final(Vsreg7___024root* vlSelf);

static void _eval_initial_loop(Vsreg7__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vsreg7___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vsreg7___024root___eval_settle(&(vlSymsp->TOP));
        Vsreg7___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vsreg7::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsreg7::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsreg7___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vsreg7___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vsreg7::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vsreg7::final() {
    Vsreg7___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsreg7::hierName() const { return vlSymsp->name(); }
const char* Vsreg7::modelName() const { return "Vsreg7"; }
unsigned Vsreg7::threads() const { return 1; }
