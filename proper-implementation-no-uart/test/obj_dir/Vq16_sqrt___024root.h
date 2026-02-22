// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vq16_sqrt.h for the primary calling header

#ifndef VERILATED_VQ16_SQRT___024ROOT_H_
#define VERILATED_VQ16_SQRT___024ROOT_H_  // guard

#include "verilated.h"


class Vq16_sqrt__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vq16_sqrt___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN(a,31,0);
    VL_OUT(root,31,0);
    IData/*31:0*/ q16_sqrt__DOT__result;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vq16_sqrt__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vq16_sqrt___024root(Vq16_sqrt__Syms* symsp, const char* v__name);
    ~Vq16_sqrt___024root();
    VL_UNCOPYABLE(Vq16_sqrt___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
