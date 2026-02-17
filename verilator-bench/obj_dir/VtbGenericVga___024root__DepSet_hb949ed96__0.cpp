// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtbGenericVga.h for the primary calling header

#include "VtbGenericVga__pch.h"
#include "VtbGenericVga___024root.h"

void VtbGenericVga___024root___ico_sequent__TOP__0(VtbGenericVga___024root* vlSelf);

void VtbGenericVga___024root___eval_ico(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_ico\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VtbGenericVga___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VtbGenericVga___024root___ico_sequent__TOP__0(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___ico_sequent__TOP__0\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tbGenericVga__DOT__dut__DOT__reset = 
        (1U & (~ (IData)(vlSelfRef.resetn)));
}

void VtbGenericVga___024root___eval_triggers__ico(VtbGenericVga___024root* vlSelf);

bool VtbGenericVga___024root___eval_phase__ico(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_phase__ico\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VtbGenericVga___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VtbGenericVga___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VtbGenericVga___024root___eval_act(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_act\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VtbGenericVga___024root___nba_sequent__TOP__0(VtbGenericVga___024root* vlSelf);
void VtbGenericVga___024root___nba_sequent__TOP__1(VtbGenericVga___024root* vlSelf);
void VtbGenericVga___024root___nba_sequent__TOP__2(VtbGenericVga___024root* vlSelf);

void VtbGenericVga___024root___eval_nba(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_nba\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VtbGenericVga___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VtbGenericVga___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VtbGenericVga___024root___nba_sequent__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void VtbGenericVga___024root___nba_sequent__TOP__0(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___nba_sequent__TOP__0\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__pixel_clock 
        = (1U & ((~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__reset)) 
                 & (~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__pixel_clock))));
    if (vlSelfRef.tbGenericVga__DOT__dut__DOT__reset) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__red_int = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__green_int = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__blue_int = 0U;
    } else {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__red_int 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__pixel_red;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__green_int 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__pixel_green;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__blue_int 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__pixel_blue;
    }
    vlSelfRef.red = (0xffU & ((0xc0U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__red_int)) 
                              | ((0x30U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__red_int) 
                                           >> 2U)) 
                                 | ((0xcU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__red_int) 
                                             >> 4U)) 
                                    | (3U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__red_int) 
                                             >> 6U))))));
    vlSelfRef.green = (0xffU & ((0xc0U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__green_int)) 
                                | ((0x30U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__green_int) 
                                             >> 2U)) 
                                   | ((0xcU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__green_int) 
                                               >> 4U)) 
                                      | (3U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__green_int) 
                                               >> 6U))))));
    vlSelfRef.blue = (0xffU & ((0xc0U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__blue_int)) 
                               | ((0x30U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__blue_int) 
                                            >> 2U)) 
                                  | ((0xcU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__blue_int) 
                                              >> 4U)) 
                                     | (3U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__blue_int) 
                                              >> 6U))))));
}

VL_INLINE_OPT void VtbGenericVga___024root___nba_sequent__TOP__1(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___nba_sequent__TOP__1\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*9:0*/ __Vdly__tbGenericVga__DOT__xReg;
    __Vdly__tbGenericVga__DOT__xReg = 0;
    SData/*9:0*/ __Vdly__tbGenericVga__DOT__yReg;
    __Vdly__tbGenericVga__DOT__yReg = 0;
    // Body
    __Vdly__tbGenericVga__DOT__xReg = vlSelfRef.tbGenericVga__DOT__xReg;
    __Vdly__tbGenericVga__DOT__yReg = vlSelfRef.tbGenericVga__DOT__yReg;
    if (vlSelfRef.resetn) {
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
    } else {
        __Vdly__tbGenericVga__DOT__xReg = 0U;
        __Vdly__tbGenericVga__DOT__yReg = 0U;
        vlSelfRef.tbGenericVga__DOT__visibleReg = 0U;
    }
    vlSelfRef.tbGenericVga__DOT__xReg = __Vdly__tbGenericVga__DOT__xReg;
    vlSelfRef.tbGenericVga__DOT__yReg = __Vdly__tbGenericVga__DOT__yReg;
    vlSelfRef.xOrd = vlSelfRef.tbGenericVga__DOT__xReg;
    vlSelfRef.yOrd = vlSelfRef.tbGenericVga__DOT__yReg;
    vlSelfRef.visible = vlSelfRef.tbGenericVga__DOT__visibleReg;
}

VL_INLINE_OPT void VtbGenericVga___024root___nba_sequent__TOP__2(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___nba_sequent__TOP__2\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tbGenericVga__DOT__dut__DOT__visible_int;
    tbGenericVga__DOT__dut__DOT__visible_int = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__dist_sq;
    tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__dist_sq = 0;
    SData/*9:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__h_count;
    __Vdly__tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__h_count = 0;
    SData/*9:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__v_count;
    __Vdly__tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__v_count = 0;
    // Body
    __Vdly__tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__h_count 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__h_count;
    __Vdly__tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__v_count 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__v_count;
    if (vlSelfRef.tbGenericVga__DOT__dut__DOT__reset) {
        __Vdly__tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__h_count = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__v_count = 0U;
    } else if ((0x31fU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__h_count))) {
        __Vdly__tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__h_count = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__v_count 
            = ((0x20cU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__v_count))
                ? 0U : (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__v_count))));
    } else {
        __Vdly__tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__h_count 
            = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__h_count)));
    }
    vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__v_count 
        = __Vdly__tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__v_count;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__h_count 
        = __Vdly__tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__h_count;
    vlSelfRef.vSync = (1U & (~ ((0x1eaU <= (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__v_count)) 
                                & (0x1ecU > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__v_count)))));
    vlSelfRef.hSync = (1U & (~ ((0x290U <= (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__h_count)) 
                                & (0x2f0U > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__h_count)))));
    tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__dist_sq 
        = VL_SHIFTRS_III(32,32,32, (VL_MULS_III(32, 
                                                VL_EXTENDS_II(32,18, 
                                                              (0x3ffffU 
                                                               & (VL_SHIFTL_III(18,18,32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__h_count), 8U) 
                                                                  - (IData)(0x14000U)))), 
                                                VL_EXTENDS_II(32,18, 
                                                              (0x3ffffU 
                                                               & (VL_SHIFTL_III(18,18,32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__h_count), 8U) 
                                                                  - (IData)(0x14000U))))) 
                                    + VL_MULS_III(32, 
                                                  VL_EXTENDS_II(32,18, 
                                                                (0x3ffffU 
                                                                 & (VL_SHIFTL_III(18,18,32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__v_count), 8U) 
                                                                    - (IData)(0xf000U)))), 
                                                  VL_EXTENDS_II(32,18, 
                                                                (0x3ffffU 
                                                                 & (VL_SHIFTL_III(18,18,32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__v_count), 8U) 
                                                                    - (IData)(0xf000U)))))), 8U);
    tbGenericVga__DOT__dut__DOT__visible_int = ((0x280U 
                                                 > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__h_count)) 
                                                & (0x1e0U 
                                                   > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__v_count)));
    if (tbGenericVga__DOT__dut__DOT__visible_int) {
        if (VL_GTS_III(32, 0x271000U, tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__dist_sq)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__unnamedblk1__DOT__shade 
                = (0xffU & ((IData)(0xffU) - (tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__dist_sq 
                                              >> 8U)));
            vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__pixel_red 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__unnamedblk1__DOT__shade;
            vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__pixel_green 
                = (0xffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__unnamedblk1__DOT__shade), 1U));
            vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__pixel_blue 
                = (0xffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__unnamedblk1__DOT__shade), 2U));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__pixel_red = 0x14U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__pixel_green = 0x1eU;
            vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__pixel_blue = 0x3cU;
        }
    } else {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__pixel_red = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__pixel_green = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__pixel_blue = 0U;
    }
}

void VtbGenericVga___024root___eval_triggers__act(VtbGenericVga___024root* vlSelf);

bool VtbGenericVga___024root___eval_phase__act(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_phase__act\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
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
VL_ATTR_COLD void VtbGenericVga___024root___dump_triggers__ico(VtbGenericVga___024root* vlSelf);
#endif  // VL_DEBUG
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
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VtbGenericVga___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("tb\\tbGenericVga.v", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VtbGenericVga___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
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
