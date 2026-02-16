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

void VtbGenericVga___024root___eval_nba(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_nba\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VtbGenericVga___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VtbGenericVga___024root___nba_sequent__TOP__0(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___nba_sequent__TOP__0\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ tbGenericVga__DOT__dut__DOT__colorSelect;
    tbGenericVga__DOT__dut__DOT__colorSelect = 0;
    SData/*9:0*/ __Vdly__tbGenericVga__DOT__xReg;
    __Vdly__tbGenericVga__DOT__xReg = 0;
    SData/*9:0*/ __Vdly__tbGenericVga__DOT__yReg;
    __Vdly__tbGenericVga__DOT__yReg = 0;
    SData/*9:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__y;
    __Vdly__tbGenericVga__DOT__dut__DOT__y = 0;
    SData/*9:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__x;
    __Vdly__tbGenericVga__DOT__dut__DOT__x = 0;
    IData/*25:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__slowCounter;
    __Vdly__tbGenericVga__DOT__dut__DOT__slowCounter = 0;
    // Body
    __Vdly__tbGenericVga__DOT__xReg = vlSelfRef.tbGenericVga__DOT__xReg;
    __Vdly__tbGenericVga__DOT__yReg = vlSelfRef.tbGenericVga__DOT__yReg;
    __Vdly__tbGenericVga__DOT__dut__DOT__slowCounter 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__slowCounter;
    __Vdly__tbGenericVga__DOT__dut__DOT__y = vlSelfRef.tbGenericVga__DOT__dut__DOT__y;
    __Vdly__tbGenericVga__DOT__dut__DOT__x = vlSelfRef.tbGenericVga__DOT__dut__DOT__x;
    if (vlSelfRef.resetn) {
        if ((0x2faf07fU == vlSelfRef.tbGenericVga__DOT__dut__DOT__slowCounter)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__colorRotate 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__colorRotate)));
            __Vdly__tbGenericVga__DOT__dut__DOT__slowCounter = 0U;
        } else {
            __Vdly__tbGenericVga__DOT__dut__DOT__slowCounter 
                = (0x3ffffffU & ((IData)(1U) + vlSelfRef.tbGenericVga__DOT__dut__DOT__slowCounter));
        }
        if ((0x31fU == (IData)(vlSelfRef.tbGenericVga__DOT__xReg))) {
            __Vdly__tbGenericVga__DOT__xReg = 0U;
            __Vdly__tbGenericVga__DOT__yReg = ((0x20cU 
                                                == (IData)(vlSelfRef.tbGenericVga__DOT__yReg))
                                                ? 0U
                                                : (0x3ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.tbGenericVga__DOT__yReg))));
        } else {
            __Vdly__tbGenericVga__DOT__xReg = (0x3ffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.tbGenericVga__DOT__xReg)));
        }
        vlSelfRef.tbGenericVga__DOT__visibleReg = (
                                                   (0x280U 
                                                    > (IData)(vlSelfRef.tbGenericVga__DOT__xReg)) 
                                                   & (0x1e0U 
                                                      > (IData)(vlSelfRef.tbGenericVga__DOT__yReg)));
        if ((0x31fU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__x))) {
            __Vdly__tbGenericVga__DOT__dut__DOT__y 
                = ((0x20cU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__y))
                    ? 0U : (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__y))));
            __Vdly__tbGenericVga__DOT__dut__DOT__x = 0U;
        } else {
            __Vdly__tbGenericVga__DOT__dut__DOT__x 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__x)));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__hSync 
            = (1U & (~ ((0x290U <= (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__x)) 
                        & (0x2f0U > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__x)))));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__vSync 
            = (1U & (~ ((0x1eaU <= (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__y)) 
                        & (0x1ecU > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__y)))));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__visible 
            = ((0x280U > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__x)) 
               & (0x1e0U > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__y)));
    } else {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__colorRotate = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__slowCounter = 0U;
        __Vdly__tbGenericVga__DOT__xReg = 0U;
        __Vdly__tbGenericVga__DOT__yReg = 0U;
        vlSelfRef.tbGenericVga__DOT__visibleReg = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__y = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__x = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__hSync = 1U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__vSync = 1U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__visible = 0U;
    }
    vlSelfRef.tbGenericVga__DOT__dut__DOT__slowCounter 
        = __Vdly__tbGenericVga__DOT__dut__DOT__slowCounter;
    vlSelfRef.tbGenericVga__DOT__xReg = __Vdly__tbGenericVga__DOT__xReg;
    vlSelfRef.tbGenericVga__DOT__yReg = __Vdly__tbGenericVga__DOT__yReg;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__y = __Vdly__tbGenericVga__DOT__dut__DOT__y;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__x = __Vdly__tbGenericVga__DOT__dut__DOT__x;
    vlSelfRef.xOrd = vlSelfRef.tbGenericVga__DOT__xReg;
    vlSelfRef.yOrd = vlSelfRef.tbGenericVga__DOT__yReg;
    vlSelfRef.visible = vlSelfRef.tbGenericVga__DOT__visibleReg;
    vlSelfRef.hSync = vlSelfRef.tbGenericVga__DOT__dut__DOT__hSync;
    vlSelfRef.vSync = vlSelfRef.tbGenericVga__DOT__dut__DOT__vSync;
    tbGenericVga__DOT__dut__DOT__colorSelect = (3U 
                                                & (((0xf0U 
                                                     > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__y))
                                                     ? 
                                                    ((0x140U 
                                                      > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__x))
                                                      ? 0U
                                                      : 1U)
                                                     : 
                                                    ((0x140U 
                                                      > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__x))
                                                      ? 2U
                                                      : 3U)) 
                                                   + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__colorRotate)));
    vlSelfRef.red = (0xffU & ((((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__visible)
                                 ? (((1U == (IData)(tbGenericVga__DOT__dut__DOT__colorSelect)) 
                                     | (2U == (IData)(tbGenericVga__DOT__dut__DOT__colorSelect)))
                                     ? 3U : 0U) : 0U) 
                               << 6U) | ((((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__visible)
                                            ? (((1U 
                                                 == (IData)(tbGenericVga__DOT__dut__DOT__colorSelect)) 
                                                | (2U 
                                                   == (IData)(tbGenericVga__DOT__dut__DOT__colorSelect)))
                                                ? 3U
                                                : 0U)
                                            : 0U) << 4U) 
                                         | ((((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__visible)
                                               ? ((
                                                   (1U 
                                                    == (IData)(tbGenericVga__DOT__dut__DOT__colorSelect)) 
                                                   | (2U 
                                                      == (IData)(tbGenericVga__DOT__dut__DOT__colorSelect)))
                                                   ? 3U
                                                   : 0U)
                                               : 0U) 
                                             << 2U) 
                                            | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__visible)
                                                ? (
                                                   ((1U 
                                                     == (IData)(tbGenericVga__DOT__dut__DOT__colorSelect)) 
                                                    | (2U 
                                                       == (IData)(tbGenericVga__DOT__dut__DOT__colorSelect)))
                                                    ? 3U
                                                    : 0U)
                                                : 0U)))));
    vlSelfRef.green = (0xffU & ((((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__visible)
                                   ? (((0U == (IData)(tbGenericVga__DOT__dut__DOT__colorSelect)) 
                                       | (1U == (IData)(tbGenericVga__DOT__dut__DOT__colorSelect)))
                                       ? 3U : 0U) : 0U) 
                                 << 6U) | ((((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__visible)
                                              ? (((0U 
                                                   == (IData)(tbGenericVga__DOT__dut__DOT__colorSelect)) 
                                                  | (1U 
                                                     == (IData)(tbGenericVga__DOT__dut__DOT__colorSelect)))
                                                  ? 3U
                                                  : 0U)
                                              : 0U) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__visible)
                                                 ? 
                                                (((0U 
                                                   == (IData)(tbGenericVga__DOT__dut__DOT__colorSelect)) 
                                                  | (1U 
                                                     == (IData)(tbGenericVga__DOT__dut__DOT__colorSelect)))
                                                  ? 3U
                                                  : 0U)
                                                 : 0U) 
                                               << 2U) 
                                              | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__visible)
                                                  ? 
                                                 (((0U 
                                                    == (IData)(tbGenericVga__DOT__dut__DOT__colorSelect)) 
                                                   | (1U 
                                                      == (IData)(tbGenericVga__DOT__dut__DOT__colorSelect)))
                                                   ? 3U
                                                   : 0U)
                                                  : 0U)))));
    vlSelfRef.blue = (0xffU & ((((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__visible)
                                  ? ((3U == (IData)(tbGenericVga__DOT__dut__DOT__colorSelect))
                                      ? 3U : 0U) : 0U) 
                                << 6U) | ((((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__visible)
                                             ? ((3U 
                                                 == (IData)(tbGenericVga__DOT__dut__DOT__colorSelect))
                                                 ? 3U
                                                 : 0U)
                                             : 0U) 
                                           << 4U) | 
                                          ((((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__visible)
                                              ? ((3U 
                                                  == (IData)(tbGenericVga__DOT__dut__DOT__colorSelect))
                                                  ? 3U
                                                  : 0U)
                                              : 0U) 
                                            << 2U) 
                                           | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__visible)
                                               ? ((3U 
                                                   == (IData)(tbGenericVga__DOT__dut__DOT__colorSelect))
                                                   ? 3U
                                                   : 0U)
                                               : 0U)))));
}

void VtbGenericVga___024root___eval_triggers__act(VtbGenericVga___024root* vlSelf);

bool VtbGenericVga___024root___eval_phase__act(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_phase__act\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
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
            VL_FATAL_MT("tb\\tbGenericVga.v", 3, "", "NBA region did not converge.");
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
                VL_FATAL_MT("tb\\tbGenericVga.v", 3, "", "Active region did not converge.");
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
