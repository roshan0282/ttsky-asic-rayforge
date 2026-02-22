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
    CData/*1:0*/ tbGenericVga__DOT__dut__DOT__state;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clock50MHz__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__resetn__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(xOrd,9,0);
    VL_OUT16(yOrd,9,0);
    SData/*9:0*/ tbGenericVga__DOT__xReg;
    SData/*9:0*/ tbGenericVga__DOT__yReg;
    SData/*9:0*/ tbGenericVga__DOT__dut__DOT__px_reg;
    SData/*8:0*/ tbGenericVga__DOT__dut__DOT__py_reg;
    SData/*15:0*/ tbGenericVga__DOT__dut__DOT__final_r;
    SData/*15:0*/ tbGenericVga__DOT__dut__DOT__final_g;
    SData/*15:0*/ tbGenericVga__DOT__dut__DOT__final_b;
    SData/*9:0*/ __Vdly__tbGenericVga__DOT__yReg;
    SData/*9:0*/ __Vdly__tbGenericVga__DOT__xReg;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__result;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__result;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__result;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 3> tbGenericVga__DOT__dut__DOT__cx_arr;
    VlUnpacked<IData/*31:0*/, 3> tbGenericVga__DOT__dut__DOT__cy_arr;
    VlUnpacked<IData/*31:0*/, 3> tbGenericVga__DOT__dut__DOT__cz_arr;
    VlUnpacked<IData/*31:0*/, 3> tbGenericVga__DOT__dut__DOT__radius_arr;
    VlUnpacked<CData/*7:0*/, 3> tbGenericVga__DOT__dut__DOT__colorR_arr;
    VlUnpacked<CData/*7:0*/, 3> tbGenericVga__DOT__dut__DOT__colorG_arr;
    VlUnpacked<CData/*7:0*/, 3> tbGenericVga__DOT__dut__DOT__colorB_arr;
    VlUnpacked<CData/*0:0*/, 3> tbGenericVga__DOT__dut__DOT__hit_arr;
    VlUnpacked<IData/*31:0*/, 3> tbGenericVga__DOT__dut__DOT__t_arr;
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
