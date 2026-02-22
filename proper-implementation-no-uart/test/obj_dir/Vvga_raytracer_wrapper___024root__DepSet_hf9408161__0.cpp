// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvga_raytracer_wrapper.h for the primary calling header

#include "Vvga_raytracer_wrapper__pch.h"
#include "Vvga_raytracer_wrapper__Syms.h"
#include "Vvga_raytracer_wrapper___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvga_raytracer_wrapper___024root___dump_triggers__act(Vvga_raytracer_wrapper___024root* vlSelf);
#endif  // VL_DEBUG

void Vvga_raytracer_wrapper___024root___eval_triggers__act(Vvga_raytracer_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_raytracer_wrapper___024root___eval_triggers__act\n"); );
    Vvga_raytracer_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vvga_raytracer_wrapper___024root___dump_triggers__act(vlSelf);
    }
#endif
}
