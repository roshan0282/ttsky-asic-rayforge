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
    CData/*1:0*/ tbGenericVga__DOT__dut__DOT__colorSelect;
    tbGenericVga__DOT__dut__DOT__colorSelect = 0;
    // Body
    vlSelfRef.hSync = vlSelfRef.tbGenericVga__DOT__dut__DOT__hSync;
    vlSelfRef.vSync = vlSelfRef.tbGenericVga__DOT__dut__DOT__vSync;
    vlSelfRef.visible = vlSelfRef.tbGenericVga__DOT__visibleReg;
    vlSelfRef.xOrd = vlSelfRef.tbGenericVga__DOT__xReg;
    vlSelfRef.yOrd = vlSelfRef.tbGenericVga__DOT__yReg;
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
    vlSelf->tbGenericVga__DOT__dut__DOT__x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4105846862342686672ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11402708772472085251ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__hSync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14783987443992462470ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__vSync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11825359156515012981ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__visible = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5514498607533273580ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__slowCounter = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 1687088102624618666ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__colorRotate = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9096668055602870506ull);
    vlSelf->__Vtrigprevexpr___TOP__clock50MHz__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 128179198767269375ull);
}
