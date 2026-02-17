// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtbGenericVga.h for the primary calling header

#include "VtbGenericVga__pch.h"
#include "VtbGenericVga___024root.h"

VL_ATTR_COLD void VtbGenericVga___024root___eval_static(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_static\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clock50MHz__0 
        = vlSelfRef.clock50MHz;
    vlSelfRef.__Vtrigprevexpr___TOP__tbGenericVga__DOT__dut__DOT__reset__0 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__reset;
    vlSelfRef.__Vtrigprevexpr___TOP__tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__pixel_clock__0 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__pixel_clock;
}

VL_ATTR_COLD void VtbGenericVga___024root___eval_initial(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_initial\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VtbGenericVga___024root___eval_final(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_final\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VtbGenericVga___024root___dump_triggers__stl(VtbGenericVga___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VtbGenericVga___024root___eval_phase__stl(VtbGenericVga___024root* vlSelf);

VL_ATTR_COLD void VtbGenericVga___024root___eval_settle(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_settle\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VtbGenericVga___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb\\tbGenericVga.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VtbGenericVga___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VtbGenericVga___024root___dump_triggers__stl(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___dump_triggers__stl\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VtbGenericVga___024root___stl_sequent__TOP__0(VtbGenericVga___024root* vlSelf);

VL_ATTR_COLD void VtbGenericVga___024root___eval_stl(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_stl\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VtbGenericVga___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VtbGenericVga___024root___stl_sequent__TOP__0(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___stl_sequent__TOP__0\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tbGenericVga__DOT__dut__DOT__visible_int;
    tbGenericVga__DOT__dut__DOT__visible_int = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__dist_sq;
    tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__dist_sq = 0;
    // Body
    vlSelfRef.hSync = (1U & (~ ((0x290U <= (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__h_count)) 
                                & (0x2f0U > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__h_count)))));
    vlSelfRef.vSync = (1U & (~ ((0x1eaU <= (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__v_count)) 
                                & (0x1ecU > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__v_count)))));
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
    vlSelfRef.visible = vlSelfRef.tbGenericVga__DOT__visibleReg;
    vlSelfRef.xOrd = vlSelfRef.tbGenericVga__DOT__xReg;
    vlSelfRef.yOrd = vlSelfRef.tbGenericVga__DOT__yReg;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__reset = 
        (1U & (~ (IData)(vlSelfRef.resetn)));
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

VL_ATTR_COLD void VtbGenericVga___024root___eval_triggers__stl(VtbGenericVga___024root* vlSelf);

VL_ATTR_COLD bool VtbGenericVga___024root___eval_phase__stl(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_phase__stl\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VtbGenericVga___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VtbGenericVga___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VtbGenericVga___024root___dump_triggers__ico(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___dump_triggers__ico\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VtbGenericVga___024root___dump_triggers__act(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___dump_triggers__act\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock50MHz)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tbGenericVga.dut.reset)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge tbGenericVga.dut.raytracer_core.pixel_clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VtbGenericVga___024root___dump_triggers__nba(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___dump_triggers__nba\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock50MHz)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tbGenericVga.dut.reset)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge tbGenericVga.dut.raytracer_core.pixel_clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VtbGenericVga___024root___ctor_var_reset(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___ctor_var_reset\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clock50MHz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16338176833659517881ull);
    vlSelf->resetn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8624841754543469506ull);
    vlSelf->hSync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10405095437869080945ull);
    vlSelf->vSync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13474973556749001514ull);
    vlSelf->xOrd = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2579758244528848228ull);
    vlSelf->yOrd = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7494390182599160760ull);
    vlSelf->visible = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2645716972831216280ull);
    vlSelf->red = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11208870015262361521ull);
    vlSelf->green = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5450689637559701443ull);
    vlSelf->blue = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 682173560715366168ull);
    vlSelf->tbGenericVga__DOT__xReg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3853948796521526597ull);
    vlSelf->tbGenericVga__DOT__yReg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3162497850089573160ull);
    vlSelf->tbGenericVga__DOT__visibleReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10713821438494026491ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__red_int = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15516919437387237062ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__green_int = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14360877912506073030ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__blue_int = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9847001577775176668ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 439524694155387712ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__h_count = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4691676561086926008ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__v_count = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17148568764159777127ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__pixel_clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17589436713950016060ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__pixel_red = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 660881273756372091ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__pixel_green = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7280497232805766619ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__pixel_blue = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4428807030081630136ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__unnamedblk1__DOT__shade = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4377685743984408322ull);
    vlSelf->__Vtrigprevexpr___TOP__clock50MHz__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 128179198767269375ull);
    vlSelf->__Vtrigprevexpr___TOP__tbGenericVga__DOT__dut__DOT__reset__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15481310479156743489ull);
    vlSelf->__Vtrigprevexpr___TOP__tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__pixel_clock__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16163493670447031114ull);
}
