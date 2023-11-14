// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vf1.h"
#include "Vf1__Syms.h"

//============================================================
// Constructors

Vf1::Vf1(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vf1__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , en{vlSymsp->TOP.en}
    , rst{vlSymsp->TOP.rst}
    , data_out{vlSymsp->TOP.data_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vf1::Vf1(const char* _vcname__)
    : Vf1(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vf1::~Vf1() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vf1___024root___eval_initial(Vf1___024root* vlSelf);
void Vf1___024root___eval_settle(Vf1___024root* vlSelf);
void Vf1___024root___eval(Vf1___024root* vlSelf);
#ifdef VL_DEBUG
void Vf1___024root___eval_debug_assertions(Vf1___024root* vlSelf);
#endif  // VL_DEBUG
void Vf1___024root___final(Vf1___024root* vlSelf);

static void _eval_initial_loop(Vf1__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vf1___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vf1___024root___eval_settle(&(vlSymsp->TOP));
        Vf1___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vf1::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vf1::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vf1___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vf1___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vf1::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vf1::final() {
    Vf1___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vf1::hierName() const { return vlSymsp->name(); }
const char* Vf1::modelName() const { return "Vf1"; }
unsigned Vf1::threads() const { return 1; }
