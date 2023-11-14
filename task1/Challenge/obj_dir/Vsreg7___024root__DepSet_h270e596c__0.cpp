// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsreg7.h for the primary calling header

#include "verilated.h"

#include "Vsreg7___024root.h"

VL_INLINE_OPT void Vsreg7___024root___sequent__TOP__0(Vsreg7___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsreg7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsreg7___024root___sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vdly__sreg7__DOT__sreg;
    // Body
    __Vdly__sreg7__DOT__sreg = vlSelf->sreg7__DOT__sreg;
    if (vlSelf->rst) {
        __Vdly__sreg7__DOT__sreg = 1U;
    } else if (vlSelf->en) {
        __Vdly__sreg7__DOT__sreg = ((0x7eU & ((IData)(vlSelf->sreg7__DOT__sreg) 
                                              << 1U)) 
                                    | (IData)(vlSelf->data_in));
    }
    vlSelf->sreg7__DOT__sreg = __Vdly__sreg7__DOT__sreg;
    vlSelf->data_out = vlSelf->sreg7__DOT__sreg;
}

void Vsreg7___024root___eval(Vsreg7___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsreg7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsreg7___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vsreg7___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vsreg7___024root___eval_debug_assertions(Vsreg7___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsreg7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsreg7___024root___eval_debug_assertions\n"); );
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
