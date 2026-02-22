// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_q16_basic.h for the primary calling header

#ifndef VERILATED_VTB_Q16_BASIC___024ROOT_H_
#define VERILATED_VTB_Q16_BASIC___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_q16_basic__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_q16_basic___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_q16_basic__DOT__test_pass;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_q16_basic__DOT__a;
    IData/*31:0*/ tb_q16_basic__DOT__b;
    IData/*31:0*/ tb_q16_basic__DOT__sum;
    IData/*31:0*/ tb_q16_basic__DOT__diff;
    IData/*31:0*/ tb_q16_basic__DOT__expected;
    IData/*31:0*/ tb_q16_basic__DOT__u_div__DOT__quotient;
    IData/*31:0*/ tb_q16_basic__DOT__u_sqrt__DOT__result;
    IData/*31:0*/ tb_q16_basic__DOT__u_sqrt__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ tb_q16_basic__DOT__u_mul__DOT__full_prod;
    QData/*63:0*/ tb_q16_basic__DOT__u_sqrt__DOT__v;
    QData/*63:0*/ tb_q16_basic__DOT__u_sqrt__DOT__rem;
    QData/*63:0*/ tb_q16_basic__DOT__u_sqrt__DOT__r;
    QData/*63:0*/ tb_q16_basic__DOT__u_dot__DOT__px;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_q16_basic__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_q16_basic___024root(Vtb_q16_basic__Syms* symsp, const char* v__name);
    ~Vtb_q16_basic___024root();
    VL_UNCOPYABLE(Vtb_q16_basic___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
