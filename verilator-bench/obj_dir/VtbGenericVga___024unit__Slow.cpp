// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtbGenericVga.h for the primary calling header

#include "VtbGenericVga__pch.h"
#include "VtbGenericVga__Syms.h"
#include "VtbGenericVga___024unit.h"

void VtbGenericVga___024unit___ctor_var_reset(VtbGenericVga___024unit* vlSelf);

VtbGenericVga___024unit::VtbGenericVga___024unit(VtbGenericVga__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VtbGenericVga___024unit___ctor_var_reset(this);
}

void VtbGenericVga___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VtbGenericVga___024unit::~VtbGenericVga___024unit() {
}
