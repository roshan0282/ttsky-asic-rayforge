// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vq16_sqrt.h for the primary calling header

#include "Vq16_sqrt__pch.h"
#include "Vq16_sqrt___024root.h"

VL_ATTR_COLD void Vq16_sqrt___024root___eval_static(Vq16_sqrt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vq16_sqrt___024root___eval_static\n"); );
    Vq16_sqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vq16_sqrt___024root___eval_initial(Vq16_sqrt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vq16_sqrt___024root___eval_initial\n"); );
    Vq16_sqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vq16_sqrt___024root___eval_final(Vq16_sqrt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vq16_sqrt___024root___eval_final\n"); );
    Vq16_sqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vq16_sqrt___024root___dump_triggers__stl(Vq16_sqrt___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vq16_sqrt___024root___eval_phase__stl(Vq16_sqrt___024root* vlSelf);

VL_ATTR_COLD void Vq16_sqrt___024root___eval_settle(Vq16_sqrt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vq16_sqrt___024root___eval_settle\n"); );
    Vq16_sqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vq16_sqrt___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("..\\primitives_q16.sv", 73, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vq16_sqrt___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vq16_sqrt___024root___dump_triggers__stl(Vq16_sqrt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vq16_sqrt___024root___dump_triggers__stl\n"); );
    Vq16_sqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vq16_sqrt___024root___ico_sequent__TOP__0(Vq16_sqrt___024root* vlSelf);

VL_ATTR_COLD void Vq16_sqrt___024root___eval_stl(Vq16_sqrt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vq16_sqrt___024root___eval_stl\n"); );
    Vq16_sqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vq16_sqrt___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vq16_sqrt___024root___eval_triggers__stl(Vq16_sqrt___024root* vlSelf);

VL_ATTR_COLD bool Vq16_sqrt___024root___eval_phase__stl(Vq16_sqrt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vq16_sqrt___024root___eval_phase__stl\n"); );
    Vq16_sqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vq16_sqrt___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vq16_sqrt___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vq16_sqrt___024root___dump_triggers__ico(Vq16_sqrt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vq16_sqrt___024root___dump_triggers__ico\n"); );
    Vq16_sqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vq16_sqrt___024root___dump_triggers__act(Vq16_sqrt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vq16_sqrt___024root___dump_triggers__act\n"); );
    Vq16_sqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vq16_sqrt___024root___dump_triggers__nba(Vq16_sqrt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vq16_sqrt___024root___dump_triggers__nba\n"); );
    Vq16_sqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vq16_sqrt___024root___ctor_var_reset(Vq16_sqrt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vq16_sqrt___024root___ctor_var_reset\n"); );
    Vq16_sqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 510903276987443985ull);
    vlSelf->root = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13605253415110525929ull);
    vlSelf->q16_sqrt__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14918739308820140809ull);
}
