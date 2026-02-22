// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_q16_basic.h for the primary calling header

#include "Vtb_q16_basic__pch.h"
#include "Vtb_q16_basic__Syms.h"
#include "Vtb_q16_basic___024root.h"

void Vtb_q16_basic___024root___ctor_var_reset(Vtb_q16_basic___024root* vlSelf);

Vtb_q16_basic___024root::Vtb_q16_basic___024root(Vtb_q16_basic__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_q16_basic___024root___ctor_var_reset(this);
}

void Vtb_q16_basic___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_q16_basic___024root::~Vtb_q16_basic___024root() {
}
