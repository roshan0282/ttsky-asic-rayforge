// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtbGenericVga.h for the primary calling header

#include "VtbGenericVga__pch.h"
#include "VtbGenericVga___024root.h"

void VtbGenericVga___024root___eval_act(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_act\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VtbGenericVga___024root___nba_sequent__TOP__0(VtbGenericVga___024root* vlSelf);
void VtbGenericVga___024root___nba_sequent__TOP__1(VtbGenericVga___024root* vlSelf);
void VtbGenericVga___024root___nba_comb__TOP__0(VtbGenericVga___024root* vlSelf);

void VtbGenericVga___024root___eval_nba(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_nba\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VtbGenericVga___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VtbGenericVga___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VtbGenericVga___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VtbGenericVga___024root___nba_sequent__TOP__0(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___nba_sequent__TOP__0\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__0__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__0__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__0__digit;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__0__digit = 0;
    CData/*6:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__1__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__1__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__1__digit;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__1__digit = 0;
    CData/*6:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__2__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__2__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__2__digit;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__2__digit = 0;
    CData/*6:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__3__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__3__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__3__digit;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__3__digit = 0;
    CData/*6:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__4__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__4__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__4__digit;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__4__digit = 0;
    CData/*6:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__5__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__5__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__5__digit;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__5__digit = 0;
    CData/*6:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__6__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__6__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__6__digit;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__6__digit = 0;
    CData/*6:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__7__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__7__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__7__digit;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__7__digit = 0;
    CData/*6:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__8__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__8__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__8__digit;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__8__digit = 0;
    CData/*6:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__9__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__9__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__9__digit;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__9__digit = 0;
    CData/*6:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__10__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__10__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__10__digit;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__10__digit = 0;
    SData/*9:0*/ __Vdly__tbGenericVga__DOT__yReg;
    __Vdly__tbGenericVga__DOT__yReg = 0;
    SData/*9:0*/ __Vdly__tbGenericVga__DOT__xReg;
    __Vdly__tbGenericVga__DOT__xReg = 0;
    CData/*5:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__hours;
    __Vdly__tbGenericVga__DOT__dut__DOT__hours = 0;
    CData/*5:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__minutes;
    __Vdly__tbGenericVga__DOT__dut__DOT__minutes = 0;
    CData/*5:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__seconds;
    __Vdly__tbGenericVga__DOT__dut__DOT__seconds = 0;
    IData/*16:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__subSeconds;
    __Vdly__tbGenericVga__DOT__dut__DOT__subSeconds = 0;
    SData/*8:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__clkCounter__DOT__tickCounter;
    __Vdly__tbGenericVga__DOT__dut__DOT__clkCounter__DOT__tickCounter = 0;
    IData/*19:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__updateCounter;
    __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__updateCounter = 0;
    CData/*3:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__state;
    __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__state = 0;
    CData/*3:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex;
    __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex = 0;
    CData/*6:0*/ __VdlyVal__tbGenericVga__DOT__dut__DOT__charRam__DOT__memory__v0;
    __VdlyVal__tbGenericVga__DOT__dut__DOT__charRam__DOT__memory__v0 = 0;
    SData/*12:0*/ __VdlyDim0__tbGenericVga__DOT__dut__DOT__charRam__DOT__memory__v0;
    __VdlyDim0__tbGenericVga__DOT__dut__DOT__charRam__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__tbGenericVga__DOT__dut__DOT__charRam__DOT__memory__v0;
    __VdlySet__tbGenericVga__DOT__dut__DOT__charRam__DOT__memory__v0 = 0;
    // Body
    __Vdly__tbGenericVga__DOT__dut__DOT__hours = vlSelfRef.tbGenericVga__DOT__dut__DOT__hours;
    __Vdly__tbGenericVga__DOT__dut__DOT__minutes = vlSelfRef.tbGenericVga__DOT__dut__DOT__minutes;
    __Vdly__tbGenericVga__DOT__dut__DOT__seconds = vlSelfRef.tbGenericVga__DOT__dut__DOT__seconds;
    __Vdly__tbGenericVga__DOT__dut__DOT__subSeconds 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__subSeconds;
    __Vdly__tbGenericVga__DOT__dut__DOT__clkCounter__DOT__tickCounter 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__clkCounter__DOT__tickCounter;
    __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__updateCounter 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__updateCounter;
    __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__state 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__state;
    __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex;
    __Vdly__tbGenericVga__DOT__yReg = vlSelfRef.tbGenericVga__DOT__yReg;
    __Vdly__tbGenericVga__DOT__xReg = vlSelfRef.tbGenericVga__DOT__xReg;
    __VdlySet__tbGenericVga__DOT__dut__DOT__charRam__DOT__memory__v0 = 0U;
    if (vlSelfRef.tbGenericVga__DOT__dut__DOT__timerWrEn) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__charRam__DOT____Vlvbound_h9db3a3ed__0 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData;
        if ((0x12bfU >= (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr))) {
            __VdlyVal__tbGenericVga__DOT__dut__DOT__charRam__DOT__memory__v0 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__charRam__DOT____Vlvbound_h9db3a3ed__0;
            __VdlyDim0__tbGenericVga__DOT__dut__DOT__charRam__DOT__memory__v0 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr;
            __VdlySet__tbGenericVga__DOT__dut__DOT__charRam__DOT__memory__v0 = 1U;
        }
    }
    if (vlSelfRef.resetn) {
        if ((0x1f3U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__clkCounter__DOT__tickCounter))) {
            if ((0x1869fU == vlSelfRef.tbGenericVga__DOT__dut__DOT__subSeconds)) {
                if ((0x3bU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__seconds))) {
                    if ((0x3bU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__minutes))) {
                        __Vdly__tbGenericVga__DOT__dut__DOT__hours 
                            = ((0x17U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__hours))
                                ? 0U : (0x3fU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__hours))));
                        __Vdly__tbGenericVga__DOT__dut__DOT__minutes = 0U;
                    } else {
                        __Vdly__tbGenericVga__DOT__dut__DOT__minutes 
                            = (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__minutes)));
                    }
                    __Vdly__tbGenericVga__DOT__dut__DOT__seconds = 0U;
                } else {
                    __Vdly__tbGenericVga__DOT__dut__DOT__seconds 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__seconds)));
                }
                __Vdly__tbGenericVga__DOT__dut__DOT__subSeconds = 0U;
            } else {
                __Vdly__tbGenericVga__DOT__dut__DOT__subSeconds 
                    = (0x1ffffU & ((IData)(1U) + vlSelfRef.tbGenericVga__DOT__dut__DOT__subSeconds));
            }
            __Vdly__tbGenericVga__DOT__dut__DOT__clkCounter__DOT__tickCounter = 0U;
        } else {
            __Vdly__tbGenericVga__DOT__dut__DOT__clkCounter__DOT__tickCounter 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__clkCounter__DOT__tickCounter)));
        }
        if ((0x31fU == (IData)(vlSelfRef.tbGenericVga__DOT__xReg))) {
            __Vdly__tbGenericVga__DOT__yReg = ((0x20cU 
                                                == (IData)(vlSelfRef.tbGenericVga__DOT__yReg))
                                                ? 0U
                                                : (0x3ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.tbGenericVga__DOT__yReg))));
            __Vdly__tbGenericVga__DOT__xReg = 0U;
        } else {
            __Vdly__tbGenericVga__DOT__xReg = (0x3ffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.tbGenericVga__DOT__xReg)));
        }
        vlSelfRef.tbGenericVga__DOT__hSyncReg = (1U 
                                                 & (~ 
                                                    ((0x290U 
                                                      <= (IData)(vlSelfRef.tbGenericVga__DOT__xReg)) 
                                                     & (0x2f0U 
                                                        > (IData)(vlSelfRef.tbGenericVga__DOT__xReg)))));
        vlSelfRef.tbGenericVga__DOT__vSyncReg = (1U 
                                                 & (~ 
                                                    ((0x1eaU 
                                                      <= (IData)(vlSelfRef.tbGenericVga__DOT__yReg)) 
                                                     & (0x1ecU 
                                                        > (IData)(vlSelfRef.tbGenericVga__DOT__yReg)))));
        vlSelfRef.tbGenericVga__DOT__visibleReg = (
                                                   (0x280U 
                                                    > (IData)(vlSelfRef.tbGenericVga__DOT__xReg)) 
                                                   & (0x1e0U 
                                                      > (IData)(vlSelfRef.tbGenericVga__DOT__yReg)));
        if ((0U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__timerWrEn = 0U;
            if ((0xc34ffU == vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__updateCounter)) {
                __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__updateCounter = 0U;
                __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__state = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex = 0U;
            } else {
                __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__updateCounter 
                    = (0xfffffU & ((IData)(1U) + vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__updateCounter));
            }
        } else if ((1U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__timerWrEn = 1U;
            if ((8U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex))) {
                if ((4U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex))) {
                    if ((2U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex))) {
                        __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__state = 0U;
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerWrEn = 0U;
                        __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex = 0U;
                    } else if ((1U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex))) {
                        __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__0__digit 
                            = (0xfU & VL_MODDIV_III(17, 
                                                    (0x1ffffU 
                                                     & VL_MODDIV_III(17, 
                                                                     (0x1ffffU 
                                                                      & VL_MODDIV_III(17, 
                                                                                (0x1ffffU 
                                                                                & VL_MODDIV_III(17, vlSelfRef.tbGenericVga__DOT__dut__DOT__subSeconds, (IData)(0x2710U))), (IData)(0x3e8U))), (IData)(0x64U))), (IData)(0xaU)));
                        __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__0__Vfuncout 
                            = (0x7fU & ((IData)(0x30U) 
                                        + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__0__digit)));
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0xfU;
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData 
                            = __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__0__Vfuncout;
                        __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex = 0U;
                        __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__state = 0U;
                    } else {
                        __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__1__digit 
                            = (0xfU & VL_DIV_III(17, 
                                                 (0x1ffffU 
                                                  & VL_MODDIV_III(17, 
                                                                  (0x1ffffU 
                                                                   & VL_MODDIV_III(17, 
                                                                                (0x1ffffU 
                                                                                & VL_MODDIV_III(17, vlSelfRef.tbGenericVga__DOT__dut__DOT__subSeconds, (IData)(0x2710U))), (IData)(0x3e8U))), (IData)(0x64U))), (IData)(0xaU)));
                        __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex)));
                        __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__1__Vfuncout 
                            = (0x7fU & ((IData)(0x30U) 
                                        + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__1__digit)));
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0xeU;
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData 
                            = __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__1__Vfuncout;
                    }
                } else if ((2U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex))) {
                    if ((1U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex))) {
                        __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__2__digit 
                            = (0xfU & VL_DIV_III(17, 
                                                 (0x1ffffU 
                                                  & VL_MODDIV_III(17, 
                                                                  (0x1ffffU 
                                                                   & VL_MODDIV_III(17, vlSelfRef.tbGenericVga__DOT__dut__DOT__subSeconds, (IData)(0x2710U))), (IData)(0x3e8U))), (IData)(0x64U)));
                        __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex)));
                        __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__2__Vfuncout 
                            = (0x7fU & ((IData)(0x30U) 
                                        + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__2__digit)));
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0xdU;
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData 
                            = __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__2__Vfuncout;
                    } else {
                        __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__3__digit 
                            = (0xfU & VL_DIV_III(17, 
                                                 (0x1ffffU 
                                                  & VL_MODDIV_III(17, vlSelfRef.tbGenericVga__DOT__dut__DOT__subSeconds, (IData)(0x2710U))), (IData)(0x3e8U)));
                        __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex)));
                        __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__3__Vfuncout 
                            = (0x7fU & ((IData)(0x30U) 
                                        + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__3__digit)));
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0xcU;
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData 
                            = __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__3__Vfuncout;
                    }
                } else if ((1U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex))) {
                    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__4__digit 
                        = (0xfU & VL_DIV_III(17, vlSelfRef.tbGenericVga__DOT__dut__DOT__subSeconds, (IData)(0x2710U)));
                    __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__4__Vfuncout 
                        = (0x7fU & ((IData)(0x30U) 
                                    + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__4__digit)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0xbU;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData 
                        = __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__4__Vfuncout;
                } else {
                    __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0xaU;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData = 0x2eU;
                }
            } else if ((4U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex))) {
                if ((2U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex))) {
                    if ((1U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex))) {
                        __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__5__digit 
                            = (0xfU & VL_MODDIV_III(6, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__seconds), (IData)(0xaU)));
                        __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex)));
                        __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__5__Vfuncout 
                            = (0x7fU & ((IData)(0x30U) 
                                        + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__5__digit)));
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 9U;
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData 
                            = __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__5__Vfuncout;
                    } else {
                        __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__6__digit 
                            = (0xfU & VL_DIV_III(6, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__seconds), (IData)(0xaU)));
                        __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex)));
                        __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__6__Vfuncout 
                            = (0x7fU & ((IData)(0x30U) 
                                        + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__6__digit)));
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 8U;
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData 
                            = __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__6__Vfuncout;
                    }
                } else if ((1U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 7U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData = 0x3aU;
                } else {
                    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__7__digit 
                        = (0xfU & VL_MODDIV_III(6, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__minutes), (IData)(0xaU)));
                    __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__7__Vfuncout 
                        = (0x7fU & ((IData)(0x30U) 
                                    + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__7__digit)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 6U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData 
                        = __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__7__Vfuncout;
                }
            } else if ((2U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex))) {
                if ((1U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex))) {
                    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__8__digit 
                        = (0xfU & VL_DIV_III(6, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__minutes), (IData)(0xaU)));
                    __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__8__Vfuncout 
                        = (0x7fU & ((IData)(0x30U) 
                                    + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__8__digit)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 5U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData 
                        = __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__8__Vfuncout;
                } else {
                    __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 4U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData = 0x3aU;
                }
            } else if ((1U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex))) {
                __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__9__digit 
                    = (0xfU & VL_MODDIV_III(6, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__hours), (IData)(0xaU)));
                __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__9__Vfuncout 
                    = (0x7fU & ((IData)(0x30U) + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__9__digit)));
                vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 3U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData 
                    = __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__9__Vfuncout;
            } else {
                __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__10__digit 
                    = (0xfU & VL_DIV_III(6, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__hours), (IData)(0xaU)));
                __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__10__Vfuncout 
                    = (0x7fU & ((IData)(0x30U) + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__10__digit)));
                vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 2U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData 
                    = __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__10__Vfuncout;
            }
        } else {
            __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__state = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT__timerWrEn = 0U;
        }
    } else {
        __Vdly__tbGenericVga__DOT__dut__DOT__subSeconds = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__seconds = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__minutes = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__hours = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__clkCounter__DOT__tickCounter = 0U;
        __Vdly__tbGenericVga__DOT__yReg = 0U;
        __Vdly__tbGenericVga__DOT__xReg = 0U;
        vlSelfRef.tbGenericVga__DOT__hSyncReg = 1U;
        vlSelfRef.tbGenericVga__DOT__vSyncReg = 1U;
        vlSelfRef.tbGenericVga__DOT__visibleReg = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__updateCounter = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__state = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerWrEn = 0U;
    }
    vlSelfRef.tbGenericVga__DOT__dut__DOT__charRamDataRdB 
        = ((0x12bfU >= (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__charRamAddrB))
            ? vlSelfRef.tbGenericVga__DOT__dut__DOT__charRam__DOT__memory
           [vlSelfRef.tbGenericVga__DOT__dut__DOT__charRamAddrB]
            : 0U);
    vlSelfRef.tbGenericVga__DOT__dut__DOT__clkCounter__DOT__tickCounter 
        = __Vdly__tbGenericVga__DOT__dut__DOT__clkCounter__DOT__tickCounter;
    if (__VdlySet__tbGenericVga__DOT__dut__DOT__charRam__DOT__memory__v0) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__charRam__DOT__memory[__VdlyDim0__tbGenericVga__DOT__dut__DOT__charRam__DOT__memory__v0] 
            = __VdlyVal__tbGenericVga__DOT__dut__DOT__charRam__DOT__memory__v0;
    }
    vlSelfRef.tbGenericVga__DOT__yReg = __Vdly__tbGenericVga__DOT__yReg;
    vlSelfRef.tbGenericVga__DOT__xReg = __Vdly__tbGenericVga__DOT__xReg;
    vlSelfRef.hSync = vlSelfRef.tbGenericVga__DOT__hSyncReg;
    vlSelfRef.vSync = vlSelfRef.tbGenericVga__DOT__vSyncReg;
    vlSelfRef.visible = vlSelfRef.tbGenericVga__DOT__visibleReg;
    vlSelfRef.yOrd = vlSelfRef.tbGenericVga__DOT__yReg;
    vlSelfRef.xOrd = vlSelfRef.tbGenericVga__DOT__xReg;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__charRamAddrB 
        = (0x1fffU & ((0xfc0U & ((IData)(vlSelfRef.tbGenericVga__DOT__yReg) 
                                 << 3U)) + ((0x3f0U 
                                             & ((IData)(vlSelfRef.tbGenericVga__DOT__yReg) 
                                                << 1U)) 
                                            + (0x7fU 
                                               & ((IData)(vlSelfRef.tbGenericVga__DOT__xReg) 
                                                  >> 3U)))));
    vlSelfRef.tbGenericVga__DOT__dut__DOT__textR = 
        (((IData)(vlSelfRef.tbGenericVga__DOT__visibleReg) 
          & (vlSelfRef.tbGenericVga__DOT__dut__DOT__textGen__DOT__font__DOT__fontMemory
             [(((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__charRamDataRdB) 
                << 3U) | (7U & (IData)(vlSelfRef.tbGenericVga__DOT__yReg)))] 
             >> (7U & ((IData)(7U) - (IData)(vlSelfRef.tbGenericVga__DOT__xReg)))))
          ? 0xffU : 0U);
    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__updateCounter 
        = __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__updateCounter;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__state 
        = __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__state;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex 
        = __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__subSeconds 
        = __Vdly__tbGenericVga__DOT__dut__DOT__subSeconds;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__seconds 
        = __Vdly__tbGenericVga__DOT__dut__DOT__seconds;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__minutes 
        = __Vdly__tbGenericVga__DOT__dut__DOT__minutes;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__hours = __Vdly__tbGenericVga__DOT__dut__DOT__hours;
}

VL_INLINE_OPT void VtbGenericVga___024root___nba_sequent__TOP__1(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___nba_sequent__TOP__1\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*24:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__bgGen__DOT__cycleCounter;
    __Vdly__tbGenericVga__DOT__dut__DOT__bgGen__DOT__cycleCounter = 0;
    // Body
    __Vdly__tbGenericVga__DOT__dut__DOT__bgGen__DOT__cycleCounter 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__bgGen__DOT__cycleCounter;
    if (vlSelfRef.resetn) {
        if ((0x17d783fU <= vlSelfRef.tbGenericVga__DOT__dut__DOT__bgGen__DOT__cycleCounter)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__bgGen__DOT__rotationState 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__bgGen__DOT__rotationState)));
            __Vdly__tbGenericVga__DOT__dut__DOT__bgGen__DOT__cycleCounter = 0U;
        } else {
            __Vdly__tbGenericVga__DOT__dut__DOT__bgGen__DOT__cycleCounter 
                = (0x1ffffffU & ((IData)(1U) + vlSelfRef.tbGenericVga__DOT__dut__DOT__bgGen__DOT__cycleCounter));
        }
    } else {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__bgGen__DOT__rotationState = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__bgGen__DOT__cycleCounter = 0U;
    }
    vlSelfRef.tbGenericVga__DOT__dut__DOT__bgGen__DOT__cycleCounter 
        = __Vdly__tbGenericVga__DOT__dut__DOT__bgGen__DOT__cycleCounter;
}

extern const VlUnpacked<CData/*7:0*/, 8> VtbGenericVga__ConstPool__TABLE_hb2d7fa48_0;
extern const VlUnpacked<CData/*7:0*/, 8> VtbGenericVga__ConstPool__TABLE_h188570f3_0;
extern const VlUnpacked<CData/*7:0*/, 8> VtbGenericVga__ConstPool__TABLE_h1517f2ed_0;

VL_INLINE_OPT void VtbGenericVga___024root___nba_comb__TOP__0(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___nba_comb__TOP__0\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ tbGenericVga__DOT__dut__DOT__bgR;
    tbGenericVga__DOT__dut__DOT__bgR = 0;
    CData/*7:0*/ tbGenericVga__DOT__dut__DOT__bgG;
    tbGenericVga__DOT__dut__DOT__bgG = 0;
    CData/*7:0*/ tbGenericVga__DOT__dut__DOT__bgB;
    tbGenericVga__DOT__dut__DOT__bgB = 0;
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = ((6U & (((((0xf0U > (IData)(vlSelfRef.tbGenericVga__DOT__yReg)) 
                              << 1U) | (0x140U > (IData)(vlSelfRef.tbGenericVga__DOT__xReg))) 
                            + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__bgGen__DOT__rotationState)) 
                           << 1U)) | (IData)(vlSelfRef.tbGenericVga__DOT__visibleReg));
    tbGenericVga__DOT__dut__DOT__bgR = VtbGenericVga__ConstPool__TABLE_hb2d7fa48_0
        [__Vtableidx1];
    tbGenericVga__DOT__dut__DOT__bgG = VtbGenericVga__ConstPool__TABLE_h188570f3_0
        [__Vtableidx1];
    tbGenericVga__DOT__dut__DOT__bgB = VtbGenericVga__ConstPool__TABLE_h1517f2ed_0
        [__Vtableidx1];
    if ((0U != (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__textR))) {
        vlSelfRef.red = vlSelfRef.tbGenericVga__DOT__dut__DOT__textR;
        vlSelfRef.green = vlSelfRef.tbGenericVga__DOT__dut__DOT__textR;
        vlSelfRef.blue = vlSelfRef.tbGenericVga__DOT__dut__DOT__textR;
    } else {
        vlSelfRef.red = tbGenericVga__DOT__dut__DOT__bgR;
        vlSelfRef.green = tbGenericVga__DOT__dut__DOT__bgG;
        vlSelfRef.blue = tbGenericVga__DOT__dut__DOT__bgB;
    }
}

void VtbGenericVga___024root___eval_triggers__act(VtbGenericVga___024root* vlSelf);

bool VtbGenericVga___024root___eval_phase__act(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_phase__act\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VtbGenericVga___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VtbGenericVga___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VtbGenericVga___024root___eval_phase__nba(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_phase__nba\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VtbGenericVga___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VtbGenericVga___024root___dump_triggers__nba(VtbGenericVga___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VtbGenericVga___024root___dump_triggers__act(VtbGenericVga___024root* vlSelf);
#endif  // VL_DEBUG

void VtbGenericVga___024root___eval(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VtbGenericVga___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb\\tbGenericVga.v", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VtbGenericVga___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb\\tbGenericVga.v", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VtbGenericVga___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VtbGenericVga___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VtbGenericVga___024root___eval_debug_assertions(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_debug_assertions\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clock50MHz & 0xfeU)))) {
        Verilated::overWidthError("clock50MHz");}
    if (VL_UNLIKELY(((vlSelfRef.resetn & 0xfeU)))) {
        Verilated::overWidthError("resetn");}
}
#endif  // VL_DEBUG
