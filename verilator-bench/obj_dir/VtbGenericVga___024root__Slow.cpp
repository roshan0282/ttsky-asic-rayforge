// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtbGenericVga.h for the primary calling header

#include "VtbGenericVga__pch.h"
#include "VtbGenericVga__Syms.h"
#include "VtbGenericVga___024root.h"

void VtbGenericVga___024root___ctor_var_reset(VtbGenericVga___024root* vlSelf);

VtbGenericVga___024root::VtbGenericVga___024root(VtbGenericVga__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VtbGenericVga___024root___ctor_var_reset(this);
}

void VtbGenericVga___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VtbGenericVga___024root::~VtbGenericVga___024root() {
}
