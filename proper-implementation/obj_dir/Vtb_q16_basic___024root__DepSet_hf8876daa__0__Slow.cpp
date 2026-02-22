// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_q16_basic.h for the primary calling header

#include "Vtb_q16_basic__pch.h"
#include "Vtb_q16_basic___024root.h"

VL_ATTR_COLD void Vtb_q16_basic___024root___eval_static(Vtb_q16_basic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_q16_basic___024root___eval_static\n"); );
    Vtb_q16_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_q16_basic___024root___eval_final(Vtb_q16_basic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_q16_basic___024root___eval_final\n"); );
    Vtb_q16_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_q16_basic___024root___dump_triggers__stl(Vtb_q16_basic___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_q16_basic___024root___eval_phase__stl(Vtb_q16_basic___024root* vlSelf);

VL_ATTR_COLD void Vtb_q16_basic___024root___eval_settle(Vtb_q16_basic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_q16_basic___024root___eval_settle\n"); );
    Vtb_q16_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_q16_basic___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_q16_basic.sv", 9, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_q16_basic___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_q16_basic___024root___dump_triggers__stl(Vtb_q16_basic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_q16_basic___024root___dump_triggers__stl\n"); );
    Vtb_q16_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vtb_q16_basic___024root___act_sequent__TOP__0(Vtb_q16_basic___024root* vlSelf);
VL_ATTR_COLD void Vtb_q16_basic___024root____Vm_traceActivitySetAll(Vtb_q16_basic___024root* vlSelf);

VL_ATTR_COLD void Vtb_q16_basic___024root___eval_stl(Vtb_q16_basic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_q16_basic___024root___eval_stl\n"); );
    Vtb_q16_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_q16_basic___024root___act_sequent__TOP__0(vlSelf);
        Vtb_q16_basic___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_q16_basic___024root___eval_triggers__stl(Vtb_q16_basic___024root* vlSelf);

VL_ATTR_COLD bool Vtb_q16_basic___024root___eval_phase__stl(Vtb_q16_basic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_q16_basic___024root___eval_phase__stl\n"); );
    Vtb_q16_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_q16_basic___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_q16_basic___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_q16_basic___024root___dump_triggers__act(Vtb_q16_basic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_q16_basic___024root___dump_triggers__act\n"); );
    Vtb_q16_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_q16_basic___024root___dump_triggers__nba(Vtb_q16_basic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_q16_basic___024root___dump_triggers__nba\n"); );
    Vtb_q16_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_q16_basic___024root____Vm_traceActivitySetAll(Vtb_q16_basic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_q16_basic___024root____Vm_traceActivitySetAll\n"); );
    Vtb_q16_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vtb_q16_basic___024root___ctor_var_reset(Vtb_q16_basic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_q16_basic___024root___ctor_var_reset\n"); );
    Vtb_q16_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_q16_basic__DOT__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14431625767667023687ull);
    vlSelf->tb_q16_basic__DOT__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6390446948974773577ull);
    vlSelf->tb_q16_basic__DOT__sum = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3701931959917383994ull);
    vlSelf->tb_q16_basic__DOT__diff = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7318324110354162489ull);
    vlSelf->tb_q16_basic__DOT__expected = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1969629808576935813ull);
    vlSelf->tb_q16_basic__DOT__test_pass = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2661081248728545379ull);
    vlSelf->tb_q16_basic__DOT__u_mul__DOT__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2819219303605476860ull);
    vlSelf->tb_q16_basic__DOT__u_div__DOT__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5069839017908646888ull);
    vlSelf->tb_q16_basic__DOT__u_sqrt__DOT__v = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6938841358369145383ull);
    vlSelf->tb_q16_basic__DOT__u_sqrt__DOT__rem = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6243927263567308301ull);
    vlSelf->tb_q16_basic__DOT__u_sqrt__DOT__r = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3931892984014968500ull);
    vlSelf->tb_q16_basic__DOT__u_sqrt__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18146901944169953208ull);
    vlSelf->tb_q16_basic__DOT__u_sqrt__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_q16_basic__DOT__u_dot__DOT__px = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3181565024057157947ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
