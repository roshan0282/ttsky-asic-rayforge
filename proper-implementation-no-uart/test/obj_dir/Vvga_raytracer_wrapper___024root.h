// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvga_raytracer_wrapper.h for the primary calling header

#ifndef VERILATED_VVGA_RAYTRACER_WRAPPER___024ROOT_H_
#define VERILATED_VVGA_RAYTRACER_WRAPPER___024ROOT_H_  // guard

#include "verilated.h"


class Vvga_raytracer_wrapper__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvga_raytracer_wrapper___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(pixel_valid,0,0);
    VL_OUT8(rgb_r,7,0);
    VL_OUT8(rgb_g,7,0);
    VL_OUT8(rgb_b,7,0);
    VL_OUT8(output_valid,0,0);
    VL_OUT8(hsync,0,0);
    VL_OUT8(vsync,0,0);
    VL_OUT8(r,3,0);
    VL_OUT8(g,3,0);
    VL_OUT8(b,3,0);
    CData/*1:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__state;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(pixel_x,9,0);
    VL_IN16(pixel_y,8,0);
    SData/*9:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__px_reg;
    SData/*8:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__py_reg;
    SData/*15:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__final_r;
    SData/*15:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__final_g;
    SData/*15:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__final_b;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__result;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__result;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__result;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 3> vga_raytracer_wrapper__DOT__u_raytracer__DOT__cx_arr;
    VlUnpacked<IData/*31:0*/, 3> vga_raytracer_wrapper__DOT__u_raytracer__DOT__cy_arr;
    VlUnpacked<IData/*31:0*/, 3> vga_raytracer_wrapper__DOT__u_raytracer__DOT__cz_arr;
    VlUnpacked<IData/*31:0*/, 3> vga_raytracer_wrapper__DOT__u_raytracer__DOT__radius_arr;
    VlUnpacked<CData/*7:0*/, 3> vga_raytracer_wrapper__DOT__u_raytracer__DOT__colorR_arr;
    VlUnpacked<CData/*7:0*/, 3> vga_raytracer_wrapper__DOT__u_raytracer__DOT__colorG_arr;
    VlUnpacked<CData/*7:0*/, 3> vga_raytracer_wrapper__DOT__u_raytracer__DOT__colorB_arr;
    VlUnpacked<CData/*0:0*/, 3> vga_raytracer_wrapper__DOT__u_raytracer__DOT__hit_arr;
    VlUnpacked<IData/*31:0*/, 3> vga_raytracer_wrapper__DOT__u_raytracer__DOT__t_arr;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vvga_raytracer_wrapper__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vvga_raytracer_wrapper___024root(Vvga_raytracer_wrapper__Syms* symsp, const char* v__name);
    ~Vvga_raytracer_wrapper___024root();
    VL_UNCOPYABLE(Vvga_raytracer_wrapper___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
