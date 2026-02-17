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
    vlSelfRef.__Vtrigprevexpr___TOP__resetn__0 = vlSelfRef.resetn;
}

VL_ATTR_COLD void VtbGenericVga___024root___eval_initial__TOP(VtbGenericVga___024root* vlSelf);

VL_ATTR_COLD void VtbGenericVga___024root___eval_initial(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_initial\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VtbGenericVga___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void VtbGenericVga___024root___eval_initial__TOP(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_initial__TOP\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__charRam__DOT__i;
    tbGenericVga__DOT__dut__DOT__charRam__DOT__i = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    tbGenericVga__DOT__dut__DOT__charRam__DOT__i = 0U;
    while (VL_GTS_III(32, 0x12c0U, tbGenericVga__DOT__dut__DOT__charRam__DOT__i)) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__charRam__DOT____Vlvbound_h044ee20f__0 = 0x20U;
        if (VL_LIKELY(((0x12bfU >= (0x1fffU & tbGenericVga__DOT__dut__DOT__charRam__DOT__i))))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__charRam__DOT__memory[(0x1fffU 
                                                                         & tbGenericVga__DOT__dut__DOT__charRam__DOT__i)] 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__charRam__DOT____Vlvbound_h044ee20f__0;
        }
        tbGenericVga__DOT__dut__DOT__charRam__DOT__i 
            = ((IData)(1U) + tbGenericVga__DOT__dut__DOT__charRam__DOT__i);
    }
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x74387838U;
    __Vtemp_1[2U] = 0x666f6eU;
    VL_READMEM_N(false, 8, 1024, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelfRef.tbGenericVga__DOT__dut__DOT__textGen__DOT__font__DOT__fontMemory)
                 , 0, ~0ULL);
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
            VL_FATAL_MT("tb\\tbGenericVga.v", 4, "", "Settle region did not converge.");
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

extern const VlUnpacked<CData/*7:0*/, 8> VtbGenericVga__ConstPool__TABLE_hb2d7fa48_0;
extern const VlUnpacked<CData/*7:0*/, 8> VtbGenericVga__ConstPool__TABLE_h188570f3_0;
extern const VlUnpacked<CData/*7:0*/, 8> VtbGenericVga__ConstPool__TABLE_h1517f2ed_0;

VL_ATTR_COLD void VtbGenericVga___024root___stl_sequent__TOP__0(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___stl_sequent__TOP__0\n"); );
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
    vlSelfRef.xOrd = vlSelfRef.tbGenericVga__DOT__xReg;
    vlSelfRef.yOrd = vlSelfRef.tbGenericVga__DOT__yReg;
    vlSelfRef.visible = vlSelfRef.tbGenericVga__DOT__visibleReg;
    vlSelfRef.hSync = vlSelfRef.tbGenericVga__DOT__hSyncReg;
    vlSelfRef.vSync = vlSelfRef.tbGenericVga__DOT__vSyncReg;
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
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge resetn)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge resetn)\n");
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
    vlSelf->tbGenericVga__DOT__hSyncReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7374664606162577954ull);
    vlSelf->tbGenericVga__DOT__vSyncReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6939879676752794004ull);
    vlSelf->tbGenericVga__DOT__visibleReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10713821438494026491ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__hours = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7988057406956029521ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__minutes = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7713325126008035019ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__seconds = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5505490747895323579ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__subSeconds = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 17483063821676433689ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__timerWrEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11924154759370711739ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__timerAddr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 6736080339559463047ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__timerData = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17287148638569101271ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__charRamAddrB = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 18027942665082243348ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__charRamDataRdB = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14114270621304948864ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__textR = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3549848039367791574ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__clkCounter__DOT__tickCounter = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7365142579556271994ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5224843156310338088ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__timerDisp__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2155930402027152259ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__timerDisp__DOT__updateCounter = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 8634171137825114994ull);
    for (int __Vi0 = 0; __Vi0 < 4800; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__charRam__DOT__memory[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5003027723508065693ull);
    }
    vlSelf->tbGenericVga__DOT__dut__DOT__charRam__DOT____Vlvbound_h9db3a3ed__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 560031574610008369ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__charRam__DOT____Vlvbound_h044ee20f__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5169143571303370220ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__textGen__DOT__font__DOT__fontMemory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3416516092440269548ull);
    }
    vlSelf->tbGenericVga__DOT__dut__DOT__bgGen__DOT__cycleCounter = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 10534784008031424417ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__bgGen__DOT__rotationState = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17105077152260078073ull);
    vlSelf->__Vtrigprevexpr___TOP__clock50MHz__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 128179198767269375ull);
    vlSelf->__Vtrigprevexpr___TOP__resetn__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3478702576269267745ull);
}
