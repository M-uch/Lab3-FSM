// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsreg4.h for the primary calling header

#include "verilated.h"

#include "Vsreg4___024root.h"

VL_INLINE_OPT void Vsreg4___024root___sequent__TOP__0(Vsreg4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsreg4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsreg4___024root___sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vdly__sreg4__DOT__sreg;
    // Body
    __Vdly__sreg4__DOT__sreg = vlSelf->sreg4__DOT__sreg;
    if (vlSelf->rst) {
        __Vdly__sreg4__DOT__sreg = 1U;
    } else if (vlSelf->en) {
        __Vdly__sreg4__DOT__sreg = ((0xeU & ((IData)(vlSelf->sreg4__DOT__sreg) 
                                             << 1U)) 
                                    | (IData)(vlSelf->data_in));
    }
    vlSelf->sreg4__DOT__sreg = __Vdly__sreg4__DOT__sreg;
    vlSelf->data_out = vlSelf->sreg4__DOT__sreg;
}

void Vsreg4___024root___eval(Vsreg4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsreg4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsreg4___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vsreg4___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vsreg4___024root___eval_debug_assertions(Vsreg4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsreg4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsreg4___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
    if (VL_UNLIKELY((vlSelf->data_in & 0xfeU))) {
        Verilated::overWidthError("data_in");}
}
#endif  // VL_DEBUG
