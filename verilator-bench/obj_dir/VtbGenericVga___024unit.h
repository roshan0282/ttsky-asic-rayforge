// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VtbGenericVga.h for the primary calling header

#ifndef VERILATED_VTBGENERICVGA___024UNIT_H_
#define VERILATED_VTBGENERICVGA___024UNIT_H_  // guard

#include "verilated.h"


class VtbGenericVga__Syms;

class alignas(VL_CACHE_LINE_BYTES) VtbGenericVga___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VtbGenericVga__Syms* const vlSymsp;

    // CONSTRUCTORS
    VtbGenericVga___024unit(VtbGenericVga__Syms* symsp, const char* v__name);
    ~VtbGenericVga___024unit();
    VL_UNCOPYABLE(VtbGenericVga___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
