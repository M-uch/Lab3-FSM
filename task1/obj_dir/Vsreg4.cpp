// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsreg4.h"
#include "Vsreg4__Syms.h"

//============================================================
// Constructors

Vsreg4::Vsreg4(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsreg4__Syms(contextp(), _vcname__, this)}
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

Vsreg4::Vsreg4(const char* _vcname__)
    : Vsreg4(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsreg4::~Vsreg4() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vsreg4___024root___eval_initial(Vsreg4___024root* vlSelf);
void Vsreg4___024root___eval_settle(Vsreg4___024root* vlSelf);
void Vsreg4___024root___eval(Vsreg4___024root* vlSelf);
#ifdef VL_DEBUG
void Vsreg4___024root___eval_debug_assertions(Vsreg4___024root* vlSelf);
#endif  // VL_DEBUG
void Vsreg4___024root___final(Vsreg4___024root* vlSelf);

static void _eval_initial_loop(Vsreg4__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vsreg4___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vsreg4___024root___eval_settle(&(vlSymsp->TOP));
        Vsreg4___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vsreg4::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsreg4::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsreg4___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vsreg4___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vsreg4::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vsreg4::final() {
    Vsreg4___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsreg4::hierName() const { return vlSymsp->name(); }
const char* Vsreg4::modelName() const { return "Vsreg4"; }
unsigned Vsreg4::threads() const { return 1; }
