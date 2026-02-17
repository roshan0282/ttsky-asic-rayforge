// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VtbGenericVga.h for the primary calling header

#ifndef VERILATED_VTBGENERICVGA___024ROOT_H_
#define VERILATED_VTBGENERICVGA___024ROOT_H_  // guard

#include "verilated.h"


class VtbGenericVga__Syms;

class alignas(VL_CACHE_LINE_BYTES) VtbGenericVga___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock50MHz,0,0);
    CData/*0:0*/ tbGenericVga__DOT__dut__DOT__reset;
    CData/*0:0*/ tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__pixel_clock;
    VL_IN8(resetn,0,0);
    VL_OUT8(hSync,0,0);
    VL_OUT8(vSync,0,0);
    VL_OUT8(visible,0,0);
    VL_OUT8(red,7,0);
    VL_OUT8(green,7,0);
    VL_OUT8(blue,7,0);
    CData/*0:0*/ tbGenericVga__DOT__visibleReg;
    CData/*7:0*/ tbGenericVga__DOT__dut__DOT__red_int;
    CData/*7:0*/ tbGenericVga__DOT__dut__DOT__green_int;
    CData/*7:0*/ tbGenericVga__DOT__dut__DOT__blue_int;
    CData/*7:0*/ tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__pixel_red;
    CData/*7:0*/ tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__pixel_green;
    CData/*7:0*/ tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__pixel_blue;
    CData/*7:0*/ tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__unnamedblk1__DOT__shade;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clock50MHz__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tbGenericVga__DOT__dut__DOT__reset__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__pixel_clock__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(xOrd,9,0);
    VL_OUT16(yOrd,9,0);
    SData/*9:0*/ tbGenericVga__DOT__xReg;
    SData/*9:0*/ tbGenericVga__DOT__yReg;
    SData/*9:0*/ tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__h_count;
    SData/*9:0*/ tbGenericVga__DOT__dut__DOT__raytracer_core__DOT__v_count;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VtbGenericVga__Syms* const vlSymsp;

    // CONSTRUCTORS
    VtbGenericVga___024root(VtbGenericVga__Syms* symsp, const char* v__name);
    ~VtbGenericVga___024root();
    VL_UNCOPYABLE(VtbGenericVga___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
