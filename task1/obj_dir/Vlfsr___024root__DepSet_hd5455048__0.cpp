// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlfsr.h for the primary calling header

#include "verilated.h"

#include "Vlfsr___024root.h"

VL_INLINE_OPT void Vlfsr___024root___sequent__TOP__1(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->__Vdly__lfsr__DOT__shiftreg4__DOT__sreg 
        = vlSelf->lfsr__DOT__shiftreg4__DOT__sreg;
    if (vlSelf->rst) {
        vlSelf->__Vdly__lfsr__DOT__shiftreg4__DOT__sreg = 1U;
    } else if (vlSelf->en) {
        vlSelf->__Vdly__lfsr__DOT__shiftreg4__DOT__sreg 
            = ((0xeU & ((IData)(vlSelf->lfsr__DOT__shiftreg4__DOT__sreg) 
                        << 1U)) | (IData)(vlSelf->lfsr__DOT__data_in));
    }
}

VL_INLINE_OPT void Vlfsr___024root___sequent__TOP__2(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___sequent__TOP__2\n"); );
    // Body
    if (vlSelf->en) {
        vlSelf->lfsr__DOT__data_in = (1U & VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->lfsr__DOT__shiftreg4__DOT__sreg))));
    }
}

VL_INLINE_OPT void Vlfsr___024root___sequent__TOP__3(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___sequent__TOP__3\n"); );
    // Body
    vlSelf->lfsr__DOT__shiftreg4__DOT__sreg = vlSelf->__Vdly__lfsr__DOT__shiftreg4__DOT__sreg;
    vlSelf->data_out = vlSelf->lfsr__DOT__shiftreg4__DOT__sreg;
}

void Vlfsr___024root___eval(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vlfsr___024root___sequent__TOP__1(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vlfsr___024root___sequent__TOP__2(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vlfsr___024root___sequent__TOP__3(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vlfsr___024root___eval_debug_assertions(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
