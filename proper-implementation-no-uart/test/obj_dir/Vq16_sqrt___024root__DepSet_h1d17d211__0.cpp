// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vq16_sqrt.h for the primary calling header

#include "Vq16_sqrt__pch.h"
#include "Vq16_sqrt__Syms.h"
#include "Vq16_sqrt___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vq16_sqrt___024root___dump_triggers__ico(Vq16_sqrt___024root* vlSelf);
#endif  // VL_DEBUG

void Vq16_sqrt___024root___eval_triggers__ico(Vq16_sqrt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vq16_sqrt___024root___eval_triggers__ico\n"); );
    Vq16_sqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vq16_sqrt___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vq16_sqrt___024root___dump_triggers__act(Vq16_sqrt___024root* vlSelf);
#endif  // VL_DEBUG

void Vq16_sqrt___024root___eval_triggers__act(Vq16_sqrt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vq16_sqrt___024root___eval_triggers__act\n"); );
    Vq16_sqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vq16_sqrt___024root___dump_triggers__act(vlSelf);
    }
#endif
}
