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
    VL_IN8(resetn,0,0);
    VL_OUT8(hSync,0,0);
    VL_OUT8(vSync,0,0);
    VL_OUT8(visible,0,0);
    VL_OUT8(red,7,0);
    VL_OUT8(green,7,0);
    VL_OUT8(blue,7,0);
    CData/*0:0*/ tbGenericVga__DOT__hSyncReg;
    CData/*0:0*/ tbGenericVga__DOT__vSyncReg;
    CData/*0:0*/ tbGenericVga__DOT__visibleReg;
    CData/*5:0*/ tbGenericVga__DOT__dut__DOT__hours;
    CData/*5:0*/ tbGenericVga__DOT__dut__DOT__minutes;
    CData/*5:0*/ tbGenericVga__DOT__dut__DOT__seconds;
    CData/*0:0*/ tbGenericVga__DOT__dut__DOT__timerWrEn;
    CData/*6:0*/ tbGenericVga__DOT__dut__DOT__timerData;
    CData/*6:0*/ tbGenericVga__DOT__dut__DOT__charRamDataRdB;
    CData/*7:0*/ tbGenericVga__DOT__dut__DOT__textR;
    CData/*3:0*/ tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex;
    CData/*3:0*/ tbGenericVga__DOT__dut__DOT__timerDisp__DOT__state;
    CData/*6:0*/ tbGenericVga__DOT__dut__DOT__charRam__DOT____Vlvbound_h9db3a3ed__0;
    CData/*6:0*/ tbGenericVga__DOT__dut__DOT__charRam__DOT____Vlvbound_h044ee20f__0;
    CData/*1:0*/ tbGenericVga__DOT__dut__DOT__bgGen__DOT__rotationState;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clock50MHz__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__resetn__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(xOrd,9,0);
    VL_OUT16(yOrd,9,0);
    SData/*9:0*/ tbGenericVga__DOT__xReg;
    SData/*9:0*/ tbGenericVga__DOT__yReg;
    SData/*12:0*/ tbGenericVga__DOT__dut__DOT__timerAddr;
    SData/*12:0*/ tbGenericVga__DOT__dut__DOT__charRamAddrB;
    SData/*8:0*/ tbGenericVga__DOT__dut__DOT__clkCounter__DOT__tickCounter;
    IData/*16:0*/ tbGenericVga__DOT__dut__DOT__subSeconds;
    IData/*19:0*/ tbGenericVga__DOT__dut__DOT__timerDisp__DOT__updateCounter;
    IData/*24:0*/ tbGenericVga__DOT__dut__DOT__bgGen__DOT__cycleCounter;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*6:0*/, 4800> tbGenericVga__DOT__dut__DOT__charRam__DOT__memory;
    VlUnpacked<CData/*7:0*/, 1024> tbGenericVga__DOT__dut__DOT__textGen__DOT__font__DOT__fontMemory;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

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
