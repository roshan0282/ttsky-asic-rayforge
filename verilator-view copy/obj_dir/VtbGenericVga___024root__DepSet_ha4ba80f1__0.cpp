// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtbGenericVga.h for the primary calling header

#include "VtbGenericVga__pch.h"
#include "VtbGenericVga__Syms.h"
#include "VtbGenericVga___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VtbGenericVga___024root___dump_triggers__act(VtbGenericVga___024root* vlSelf);
#endif  // VL_DEBUG

void VtbGenericVga___024root___eval_triggers__act(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_triggers__act\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clock50MHz) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock50MHz__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.clock50MHz)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock50MHz__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__clock50MHz__0 
        = vlSelfRef.clock50MHz;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VtbGenericVga___024root___dump_triggers__act(vlSelf);
    }
#endif
}
