// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvga_raytracer_wrapper.h for the primary calling header

#include "Vvga_raytracer_wrapper__pch.h"
#include "Vvga_raytracer_wrapper___024root.h"

VL_ATTR_COLD void Vvga_raytracer_wrapper___024root___eval_static(Vvga_raytracer_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_raytracer_wrapper___024root___eval_static\n"); );
    Vvga_raytracer_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vvga_raytracer_wrapper___024root___eval_initial__TOP(Vvga_raytracer_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vvga_raytracer_wrapper___024root___eval_initial(Vvga_raytracer_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_raytracer_wrapper___024root___eval_initial\n"); );
    Vvga_raytracer_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vvga_raytracer_wrapper___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vvga_raytracer_wrapper___024root___eval_initial__TOP(Vvga_raytracer_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_raytracer_wrapper___024root___eval_initial__TOP\n"); );
    Vvga_raytracer_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__colorB_arr[0U] = 0x3cU;
    vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__colorB_arr[1U] = 0xffU;
    vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__colorB_arr[2U] = 0xdcU;
    vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cx_arr[0U] = 0xfffe4000U;
    vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cx_arr[1U] = 0x1c000U;
    vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cx_arr[2U] = 0U;
    vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cy_arr[0U] = 0U;
    vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cy_arr[1U] = 0U;
    vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cy_arr[2U] = 0xfffc0000U;
    vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cz_arr[0U] = 0x60000U;
    vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cz_arr[1U] = 0x60000U;
    vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cz_arr[2U] = 0x68000U;
    vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__radius_arr[0U] = 0x18000U;
    vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__radius_arr[1U] = 0x18000U;
    vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__radius_arr[2U] = 0x30000U;
    vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__colorR_arr[0U] = 0xffU;
    vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__colorR_arr[1U] = 0x3cU;
    vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__colorR_arr[2U] = 0xdcU;
    vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__colorG_arr[0U] = 0x50U;
    vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__colorG_arr[1U] = 0xa0U;
    vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__colorG_arr[2U] = 0xdcU;
    vlSelfRef.hsync = 1U;
    vlSelfRef.vsync = 1U;
}

VL_ATTR_COLD void Vvga_raytracer_wrapper___024root___eval_final(Vvga_raytracer_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_raytracer_wrapper___024root___eval_final\n"); );
    Vvga_raytracer_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvga_raytracer_wrapper___024root___dump_triggers__stl(Vvga_raytracer_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vvga_raytracer_wrapper___024root___eval_phase__stl(Vvga_raytracer_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vvga_raytracer_wrapper___024root___eval_settle(Vvga_raytracer_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_raytracer_wrapper___024root___eval_settle\n"); );
    Vvga_raytracer_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vvga_raytracer_wrapper___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("..\\vga_raytracer_wrapper.sv", 10, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vvga_raytracer_wrapper___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvga_raytracer_wrapper___024root___dump_triggers__stl(Vvga_raytracer_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_raytracer_wrapper___024root___dump_triggers__stl\n"); );
    Vvga_raytracer_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vvga_raytracer_wrapper___024root___stl_sequent__TOP__0(Vvga_raytracer_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vvga_raytracer_wrapper___024root___eval_stl(Vvga_raytracer_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_raytracer_wrapper___024root___eval_stl\n"); );
    Vvga_raytracer_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vvga_raytracer_wrapper___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vvga_raytracer_wrapper___024root___stl_sequent__TOP__0(Vvga_raytracer_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_raytracer_wrapper___024root___stl_sequent__TOP__0\n"); );
    Vvga_raytracer_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_dx;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_dx = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_dy;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_dy = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_dz;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_dz = 0;
    CData/*0:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_hit;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_hit = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_t;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_t = 0;
    CData/*7:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_colorR;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_colorR = 0;
    CData/*7:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_colorG;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_colorG = 0;
    CData/*7:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_colorB;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_colorB = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_cx;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_cx = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_cy;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_cy = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_cz;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_cz = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__hit_x;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__hit_x = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__hit_y;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__hit_y = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__hit_z;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__hit_z = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_raw_x;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_raw_x = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_raw_y;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_raw_y = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_raw_z;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_raw_z = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__ndotl;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__ndotl = 0;
    CData/*7:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__ambient_r;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__ambient_r = 0;
    CData/*7:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__ambient_g;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__ambient_g = 0;
    CData/*7:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__ambient_b;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__ambient_b = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__ndotl_clamped;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__ndotl_clamped = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__diffuse_r;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__diffuse_r = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__diffuse_g;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__diffuse_g = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__diffuse_b;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__diffuse_b = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__0__KET____DOT__u_intersect__t;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__0__KET____DOT__u_intersect__t = 0;
    CData/*0:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__0__KET____DOT__u_intersect__hit;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__0__KET____DOT__u_intersect__hit = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__1__KET____DOT__u_intersect__t;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__1__KET____DOT__u_intersect__t = 0;
    CData/*0:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__1__KET____DOT__u_intersect__hit;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__1__KET____DOT__u_intersect__hit = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__2__KET____DOT__u_intersect__t;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__2__KET____DOT__u_intersect__t = 0;
    CData/*0:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__2__KET____DOT__u_intersect__hit;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__2__KET____DOT__u_intersect__hit = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__mag2;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__mag2 = 0;
    QData/*63:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__v;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__v = 0;
    QData/*63:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem = 0;
    QData/*63:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__mag2;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__mag2 = 0;
    QData/*63:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__v;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__v = 0;
    QData/*63:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem = 0;
    QData/*63:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__mag2;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__mag2 = 0;
    QData/*63:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__v;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__v = 0;
    QData/*63:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem = 0;
    QData/*63:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__a;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__a = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__halfB;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__halfB = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__disc;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__disc = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__num0;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__num0 = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__num1;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__num1 = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t0;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t0 = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t1;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t1 = 0;
    QData/*63:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v = 0;
    QData/*63:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem = 0;
    QData/*63:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__halfB;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__halfB = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__disc;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__disc = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__num0;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__num0 = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__num1;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__num1 = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t0;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t0 = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t1;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t1 = 0;
    QData/*63:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v = 0;
    QData/*63:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem = 0;
    QData/*63:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__halfB;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__halfB = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__disc;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__disc = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__num0;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__num0 = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__num1;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__num1 = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t0;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t0 = 0;
    IData/*31:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t1;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t1 = 0;
    QData/*63:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v = 0;
    QData/*63:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem = 0;
    QData/*63:0*/ vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r = 0;
    // Body
    vlSelfRef.r = (0xfU & ((IData)(vlSelfRef.rgb_r) 
                           >> 4U));
    vlSelfRef.g = (0xfU & ((IData)(vlSelfRef.rgb_g) 
                           >> 4U));
    vlSelfRef.b = (0xfU & ((IData)(vlSelfRef.rgb_b) 
                           >> 4U));
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__mag2 
        = ((IData)(0x27100000U) + ((IData)(VL_SHIFTRS_QQI(64,64,32, 
                                                          VL_MULS_QQQ(64, 
                                                                      VL_EXTENDS_QI(64,32, 
                                                                                VL_SHIFTL_III(32,32,32, 
                                                                                (VL_EXTENDS_II(32,11, (IData)(vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__px_reg)) 
                                                                                - (IData)(0x140U)), 0xeU)), 
                                                                      VL_EXTENDS_QI(64,32, 
                                                                                VL_SHIFTL_III(32,32,32, 
                                                                                (VL_EXTENDS_II(32,11, (IData)(vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__px_reg)) 
                                                                                - (IData)(0x140U)), 0xeU))), 0x10U)) 
                                   + (IData)(VL_SHIFTRS_QQI(64,64,32, 
                                                            VL_MULS_QQQ(64, 
                                                                        VL_EXTENDS_QI(64,32, 
                                                                                VL_SHIFTL_III(32,32,32, 
                                                                                ((IData)(0xf0U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,10, (IData)(vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__py_reg))), 0xeU)), 
                                                                        VL_EXTENDS_QI(64,32, 
                                                                                VL_SHIFTL_III(32,32,32, 
                                                                                ((IData)(0xf0U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,10, (IData)(vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__py_reg))), 0xeU))), 0x10U))));
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__v = 0ULL;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem = 0ULL;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r = 0ULL;
    if (VL_GTES_III(32, 0U, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__mag2)) {
        vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__result = 0U;
    } else {
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__v 
            = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__mag2)), 0x10U);
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r = 0ULL;
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0x2eU));
        if ((1ULL <= vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem)) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0x2cU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0x2aU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0x28U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0x26U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0x24U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0x22U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0x20U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0x1eU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0x1cU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0x1aU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0x18U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0x16U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0x14U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0x12U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0x10U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0xeU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0xcU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0xaU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 8U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 6U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 4U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 2U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__v));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__result 
            = (IData)(vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__r);
    }
    if ((0U == vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__result)) {
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_dz = 0x7fffffffU;
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_dx 
            = (VL_LTES_III(32, 0U, VL_SHIFTL_III(32,32,32, 
                                                 (VL_EXTENDS_II(32,11, (IData)(vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__px_reg)) 
                                                  - (IData)(0x140U)), 0xeU))
                ? 0x7fffffffU : 0x80000001U);
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_dy 
            = (VL_LTES_III(32, 0U, VL_SHIFTL_III(32,32,32, 
                                                 ((IData)(0xf0U) 
                                                  - 
                                                  VL_EXTENDS_II(32,10, (IData)(vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__py_reg))), 0xeU))
                ? 0x7fffffffU : 0x80000001U);
    } else {
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_dz 
            = (IData)(VL_DIVS_QQQ(64, 0x6400000000ULL, 
                                  VL_EXTENDS_QI(64,32, vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__result)));
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_dx 
            = (IData)(VL_DIVS_QQQ(64, VL_SHIFTL_QQI(64,64,32, 
                                                    VL_EXTENDS_QI(64,32, 
                                                                  VL_SHIFTL_III(32,32,32, 
                                                                                (VL_EXTENDS_II(32,11, (IData)(vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__px_reg)) 
                                                                                - (IData)(0x140U)), 0xeU)), 0x10U), 
                                  VL_EXTENDS_QI(64,32, vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__result)));
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_dy 
            = (IData)(VL_DIVS_QQQ(64, VL_SHIFTL_QQI(64,64,32, 
                                                    VL_EXTENDS_QI(64,32, 
                                                                  VL_SHIFTL_III(32,32,32, 
                                                                                ((IData)(0xf0U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,10, (IData)(vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__py_reg))), 0xeU)), 0x10U), 
                                  VL_EXTENDS_QI(64,32, vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__result)));
    }
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__halfB 
        = ((IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                        VL_EXTENDS_QI(64,32, 
                                                                      (- 
                                                                       vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cx_arr
                                                                       [0U])), 
                                                        VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_dx)), 0x10U)) 
           + ((IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                           VL_EXTENDS_QI(64,32, 
                                                                         (- 
                                                                          vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cy_arr
                                                                          [0U])), 
                                                           VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_dy)), 0x10U)) 
              + (IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                             VL_EXTENDS_QI(64,32, 
                                                                           (- 
                                                                            vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cz_arr
                                                                            [0U])), 
                                                             VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_dz)), 0x10U))));
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__halfB 
        = ((IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                        VL_EXTENDS_QI(64,32, 
                                                                      (- 
                                                                       vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cx_arr
                                                                       [1U])), 
                                                        VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_dx)), 0x10U)) 
           + ((IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                           VL_EXTENDS_QI(64,32, 
                                                                         (- 
                                                                          vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cy_arr
                                                                          [1U])), 
                                                           VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_dy)), 0x10U)) 
              + (IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                             VL_EXTENDS_QI(64,32, 
                                                                           (- 
                                                                            vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cz_arr
                                                                            [1U])), 
                                                             VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_dz)), 0x10U))));
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__halfB 
        = ((IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                        VL_EXTENDS_QI(64,32, 
                                                                      (- 
                                                                       vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cx_arr
                                                                       [2U])), 
                                                        VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_dx)), 0x10U)) 
           + ((IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                           VL_EXTENDS_QI(64,32, 
                                                                         (- 
                                                                          vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cy_arr
                                                                          [2U])), 
                                                           VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_dy)), 0x10U)) 
              + (IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                             VL_EXTENDS_QI(64,32, 
                                                                           (- 
                                                                            vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cz_arr
                                                                            [2U])), 
                                                             VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_dz)), 0x10U))));
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__a 
        = ((IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                        VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_dx), 
                                                        VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_dx)), 0x10U)) 
           + ((IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                           VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_dy), 
                                                           VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_dy)), 0x10U)) 
              + (IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                             VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_dz), 
                                                             VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_dz)), 0x10U))));
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__disc 
        = ((IData)(((0x8000ULL + VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__halfB), 
                                             VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__halfB))) 
                    >> 0x10U)) - (IData)(((0x8000ULL 
                                           + VL_MULS_QQQ(64, 
                                                         VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__a), 
                                                         VL_EXTENDS_QI(64,32, 
                                                                       (((IData)(
                                                                                VL_SHIFTRS_QQI(64,64,32, 
                                                                                VL_MULS_QQQ(64, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cx_arr
                                                                                [0U])), 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cx_arr
                                                                                [0U]))), 0x10U)) 
                                                                         + 
                                                                         ((IData)(
                                                                                VL_SHIFTRS_QQI(64,64,32, 
                                                                                VL_MULS_QQQ(64, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cy_arr
                                                                                [0U])), 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cy_arr
                                                                                [0U]))), 0x10U)) 
                                                                          + (IData)(
                                                                                VL_SHIFTRS_QQI(64,64,32, 
                                                                                VL_MULS_QQQ(64, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cz_arr
                                                                                [0U])), 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cz_arr
                                                                                [0U]))), 0x10U)))) 
                                                                        - (IData)(
                                                                                ((0x8000ULL 
                                                                                + 
                                                                                VL_MULS_QQQ(64, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__radius_arr
                                                                                [0U]), 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__radius_arr
                                                                                [0U]))) 
                                                                                >> 0x10U)))))) 
                                          >> 0x10U)));
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__disc 
        = ((IData)(((0x8000ULL + VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__halfB), 
                                             VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__halfB))) 
                    >> 0x10U)) - (IData)(((0x8000ULL 
                                           + VL_MULS_QQQ(64, 
                                                         VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__a), 
                                                         VL_EXTENDS_QI(64,32, 
                                                                       (((IData)(
                                                                                VL_SHIFTRS_QQI(64,64,32, 
                                                                                VL_MULS_QQQ(64, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cx_arr
                                                                                [1U])), 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cx_arr
                                                                                [1U]))), 0x10U)) 
                                                                         + 
                                                                         ((IData)(
                                                                                VL_SHIFTRS_QQI(64,64,32, 
                                                                                VL_MULS_QQQ(64, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cy_arr
                                                                                [1U])), 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cy_arr
                                                                                [1U]))), 0x10U)) 
                                                                          + (IData)(
                                                                                VL_SHIFTRS_QQI(64,64,32, 
                                                                                VL_MULS_QQQ(64, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cz_arr
                                                                                [1U])), 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cz_arr
                                                                                [1U]))), 0x10U)))) 
                                                                        - (IData)(
                                                                                ((0x8000ULL 
                                                                                + 
                                                                                VL_MULS_QQQ(64, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__radius_arr
                                                                                [1U]), 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__radius_arr
                                                                                [1U]))) 
                                                                                >> 0x10U)))))) 
                                          >> 0x10U)));
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__disc 
        = ((IData)(((0x8000ULL + VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__halfB), 
                                             VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__halfB))) 
                    >> 0x10U)) - (IData)(((0x8000ULL 
                                           + VL_MULS_QQQ(64, 
                                                         VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__a), 
                                                         VL_EXTENDS_QI(64,32, 
                                                                       (((IData)(
                                                                                VL_SHIFTRS_QQI(64,64,32, 
                                                                                VL_MULS_QQQ(64, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cx_arr
                                                                                [2U])), 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cx_arr
                                                                                [2U]))), 0x10U)) 
                                                                         + 
                                                                         ((IData)(
                                                                                VL_SHIFTRS_QQI(64,64,32, 
                                                                                VL_MULS_QQQ(64, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cy_arr
                                                                                [2U])), 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cy_arr
                                                                                [2U]))), 0x10U)) 
                                                                          + (IData)(
                                                                                VL_SHIFTRS_QQI(64,64,32, 
                                                                                VL_MULS_QQQ(64, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cz_arr
                                                                                [2U])), 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cz_arr
                                                                                [2U]))), 0x10U)))) 
                                                                        - (IData)(
                                                                                ((0x8000ULL 
                                                                                + 
                                                                                VL_MULS_QQQ(64, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__radius_arr
                                                                                [2U]), 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__radius_arr
                                                                                [2U]))) 
                                                                                >> 0x10U)))))) 
                                          >> 0x10U)));
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v = 0ULL;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem = 0ULL;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r = 0ULL;
    if (VL_GTES_III(32, 0U, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__disc)) {
        vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result = 0U;
    } else {
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v 
            = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__disc)), 0x10U);
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r = 0ULL;
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x2eU));
        if ((1ULL <= vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem)) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x2cU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x2aU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x28U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x26U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x24U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x22U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x20U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x1eU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x1cU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x1aU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x18U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x16U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x14U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x12U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x10U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0xeU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0xcU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0xaU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 8U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 6U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 4U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 2U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result 
            = (IData)(vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r);
    }
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v = 0ULL;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem = 0ULL;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r = 0ULL;
    if (VL_GTES_III(32, 0U, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__disc)) {
        vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result = 0U;
    } else {
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v 
            = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__disc)), 0x10U);
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r = 0ULL;
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x2eU));
        if ((1ULL <= vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem)) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x2cU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x2aU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x28U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x26U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x24U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x22U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x20U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x1eU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x1cU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x1aU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x18U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x16U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x14U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x12U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x10U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0xeU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0xcU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0xaU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 8U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 6U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 4U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 2U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result 
            = (IData)(vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r);
    }
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v = 0ULL;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem = 0ULL;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r = 0ULL;
    if (VL_GTES_III(32, 0U, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__disc)) {
        vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result = 0U;
    } else {
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v 
            = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__disc)), 0x10U);
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r = 0ULL;
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x2eU));
        if ((1ULL <= vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem)) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x2cU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x2aU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x28U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x26U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x24U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x22U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x20U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x1eU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x1cU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x1aU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x18U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x16U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x14U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x12U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x10U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0xeU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0xcU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0xaU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 8U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 6U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 4U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 2U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result 
            = (IData)(vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r);
    }
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__num0 
        = ((- vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__halfB) 
           - vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result);
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__num1 
        = ((- vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__halfB) 
           + vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result);
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__num0 
        = ((- vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__halfB) 
           - vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result);
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__num1 
        = ((- vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__halfB) 
           + vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result);
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__num0 
        = ((- vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__halfB) 
           - vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result);
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__num1 
        = ((- vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__halfB) 
           + vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result);
    if ((0U == vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__a)) {
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t0 
            = (VL_LTES_III(32, 0U, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__num0)
                ? 0x7fffffffU : 0x80000001U);
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t1 
            = (VL_LTES_III(32, 0U, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__num1)
                ? 0x7fffffffU : 0x80000001U);
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t0 
            = (VL_LTES_III(32, 0U, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__num0)
                ? 0x7fffffffU : 0x80000001U);
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t1 
            = (VL_LTES_III(32, 0U, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__num1)
                ? 0x7fffffffU : 0x80000001U);
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t0 
            = (VL_LTES_III(32, 0U, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__num0)
                ? 0x7fffffffU : 0x80000001U);
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t1 
            = (VL_LTES_III(32, 0U, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__num1)
                ? 0x7fffffffU : 0x80000001U);
    } else {
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t0 
            = (IData)(VL_DIVS_QQQ(64, VL_SHIFTL_QQI(64,64,32, 
                                                    VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__num0), 0x10U), 
                                  VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__a)));
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t1 
            = (IData)(VL_DIVS_QQQ(64, VL_SHIFTL_QQI(64,64,32, 
                                                    VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__num1), 0x10U), 
                                  VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__a)));
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t0 
            = (IData)(VL_DIVS_QQQ(64, VL_SHIFTL_QQI(64,64,32, 
                                                    VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__num0), 0x10U), 
                                  VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__a)));
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t1 
            = (IData)(VL_DIVS_QQQ(64, VL_SHIFTL_QQI(64,64,32, 
                                                    VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__num1), 0x10U), 
                                  VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__a)));
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t0 
            = (IData)(VL_DIVS_QQQ(64, VL_SHIFTL_QQI(64,64,32, 
                                                    VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__num0), 0x10U), 
                                  VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__a)));
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t1 
            = (IData)(VL_DIVS_QQQ(64, VL_SHIFTL_QQI(64,64,32, 
                                                    VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__num1), 0x10U), 
                                  VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__a)));
    }
    vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__0__KET____DOT__u_intersect__hit = 0U;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__0__KET____DOT__u_intersect__t = 0U;
    if ((VL_LTES_III(32, 0U, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__disc) 
         & (0U != vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__a))) {
        if ((VL_LTS_III(32, 0U, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t0) 
             & VL_LTS_III(32, 0U, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t1))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__0__KET____DOT__u_intersect__hit = 1U;
            vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__0__KET____DOT__u_intersect__t 
                = (VL_LTS_III(32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t0, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t1)
                    ? vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t0
                    : vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t1);
        } else if (VL_LTS_III(32, 0U, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t0)) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__0__KET____DOT__u_intersect__hit = 1U;
            vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__0__KET____DOT__u_intersect__t 
                = vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t0;
        } else if (VL_LTS_III(32, 0U, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t1)) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__0__KET____DOT__u_intersect__hit = 1U;
            vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__0__KET____DOT__u_intersect__t 
                = vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t1;
        }
    }
    vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__1__KET____DOT__u_intersect__hit = 0U;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__1__KET____DOT__u_intersect__t = 0U;
    if ((VL_LTES_III(32, 0U, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__disc) 
         & (0U != vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__a))) {
        if ((VL_LTS_III(32, 0U, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t0) 
             & VL_LTS_III(32, 0U, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t1))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__1__KET____DOT__u_intersect__hit = 1U;
            vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__1__KET____DOT__u_intersect__t 
                = (VL_LTS_III(32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t0, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t1)
                    ? vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t0
                    : vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t1);
        } else if (VL_LTS_III(32, 0U, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t0)) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__1__KET____DOT__u_intersect__hit = 1U;
            vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__1__KET____DOT__u_intersect__t 
                = vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t0;
        } else if (VL_LTS_III(32, 0U, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t1)) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__1__KET____DOT__u_intersect__hit = 1U;
            vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__1__KET____DOT__u_intersect__t 
                = vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t1;
        }
    }
    vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__2__KET____DOT__u_intersect__hit = 0U;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__2__KET____DOT__u_intersect__t = 0U;
    if ((VL_LTES_III(32, 0U, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__disc) 
         & (0U != vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__a))) {
        if ((VL_LTS_III(32, 0U, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t0) 
             & VL_LTS_III(32, 0U, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t1))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__2__KET____DOT__u_intersect__hit = 1U;
            vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__2__KET____DOT__u_intersect__t 
                = (VL_LTS_III(32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t0, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t1)
                    ? vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t0
                    : vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t1);
        } else if (VL_LTS_III(32, 0U, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t0)) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__2__KET____DOT__u_intersect__hit = 1U;
            vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__2__KET____DOT__u_intersect__t 
                = vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t0;
        } else if (VL_LTS_III(32, 0U, vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t1)) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__2__KET____DOT__u_intersect__hit = 1U;
            vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__2__KET____DOT__u_intersect__t 
                = vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t1;
        }
    }
    vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__hit_arr[0U] 
        = vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__0__KET____DOT__u_intersect__hit;
    vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__t_arr[0U] 
        = vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__0__KET____DOT__u_intersect__t;
    vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__hit_arr[1U] 
        = vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__1__KET____DOT__u_intersect__hit;
    vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__t_arr[1U] 
        = vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__1__KET____DOT__u_intersect__t;
    vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__hit_arr[2U] 
        = vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__2__KET____DOT__u_intersect__hit;
    vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__t_arr[2U] 
        = vga_raytracer_wrapper__DOT__u_raytracer__DOT____Vcellout__g_sphere__BRA__2__KET____DOT__u_intersect__t;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_hit = 0U;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_t = 0x7fffffffU;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_colorR = 0U;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_colorG = 0U;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_colorB = 0x20U;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_cx = 0U;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_cy = 0U;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_cz = 0U;
    if ((vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__hit_arr
         [0U] & VL_LTS_III(32, 0U, vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__t_arr
                           [0U]))) {
        if ((1U & ((~ (IData)(vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_hit)) 
                   | VL_LTS_III(32, vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__t_arr
                                [0U], vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_t)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_hit = 1U;
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_t 
                = vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__t_arr
                [0U];
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_colorR 
                = vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__colorR_arr
                [0U];
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_colorG 
                = vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__colorG_arr
                [0U];
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_colorB 
                = vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__colorB_arr
                [0U];
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_cx 
                = vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cx_arr
                [0U];
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_cy 
                = vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cy_arr
                [0U];
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_cz 
                = vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cz_arr
                [0U];
        }
    }
    if ((vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__hit_arr
         [1U] & VL_LTS_III(32, 0U, vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__t_arr
                           [1U]))) {
        if ((1U & ((~ (IData)(vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_hit)) 
                   | VL_LTS_III(32, vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__t_arr
                                [1U], vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_t)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_hit = 1U;
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_t 
                = vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__t_arr
                [1U];
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_colorR 
                = vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__colorR_arr
                [1U];
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_colorG 
                = vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__colorG_arr
                [1U];
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_colorB 
                = vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__colorB_arr
                [1U];
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_cx 
                = vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cx_arr
                [1U];
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_cy 
                = vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cy_arr
                [1U];
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_cz 
                = vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cz_arr
                [1U];
        }
    }
    if ((vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__hit_arr
         [2U] & VL_LTS_III(32, 0U, vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__t_arr
                           [2U]))) {
        if ((1U & ((~ (IData)(vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_hit)) 
                   | VL_LTS_III(32, vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__t_arr
                                [2U], vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_t)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_hit = 1U;
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_t 
                = vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__t_arr
                [2U];
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_colorR 
                = vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__colorR_arr
                [2U];
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_colorG 
                = vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__colorG_arr
                [2U];
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_colorB 
                = vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__colorB_arr
                [2U];
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_cx 
                = vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cx_arr
                [2U];
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_cy 
                = vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cy_arr
                [2U];
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_cz 
                = vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__cz_arr
                [2U];
        }
    }
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__hit_x 
        = (IData)(((0x8000ULL + VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_t), 
                                            VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_dx))) 
                   >> 0x10U));
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__hit_y 
        = (IData)(((0x8000ULL + VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_t), 
                                            VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_dy))) 
                   >> 0x10U));
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__hit_z 
        = (IData)(((0x8000ULL + VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_t), 
                                            VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_dz))) 
                   >> 0x10U));
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_raw_x 
        = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__hit_x 
           - vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_cx);
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_raw_y 
        = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__hit_y 
           - vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_cy);
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__mag2 
        = ((IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                        VL_EXTENDS_QI(64,32, 
                                                                      (- vga_raytracer_wrapper__DOT__u_raytracer__DOT__hit_x)), 
                                                        VL_EXTENDS_QI(64,32, 
                                                                      (- vga_raytracer_wrapper__DOT__u_raytracer__DOT__hit_x))), 0x10U)) 
           + ((IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                           VL_EXTENDS_QI(64,32, 
                                                                         ((IData)(0x50000U) 
                                                                          - vga_raytracer_wrapper__DOT__u_raytracer__DOT__hit_y)), 
                                                           VL_EXTENDS_QI(64,32, 
                                                                         ((IData)(0x50000U) 
                                                                          - vga_raytracer_wrapper__DOT__u_raytracer__DOT__hit_y))), 0x10U)) 
              + (IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                             VL_EXTENDS_QI(64,32, 
                                                                           ((IData)(0x60000U) 
                                                                            - vga_raytracer_wrapper__DOT__u_raytracer__DOT__hit_z)), 
                                                             VL_EXTENDS_QI(64,32, 
                                                                           ((IData)(0x60000U) 
                                                                            - vga_raytracer_wrapper__DOT__u_raytracer__DOT__hit_z))), 0x10U))));
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_raw_z 
        = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__hit_z 
           - vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_cz);
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__v = 0ULL;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem = 0ULL;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r = 0ULL;
    if (VL_GTES_III(32, 0U, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__mag2)) {
        vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__result = 0U;
    } else {
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__v 
            = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__mag2)), 0x10U);
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r = 0ULL;
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0x2eU));
        if ((1ULL <= vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem)) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0x2cU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0x2aU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0x28U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0x26U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0x24U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0x22U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0x20U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0x1eU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0x1cU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0x1aU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0x18U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0x16U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0x14U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0x12U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0x10U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0xeU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0xcU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0xaU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__v, 8U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__v, 6U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__v, 4U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__v, 2U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__v));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__result 
            = (IData)(vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__r);
    }
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__mag2 
        = ((IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                        VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_raw_x), 
                                                        VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_raw_x)), 0x10U)) 
           + ((IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                           VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_raw_y), 
                                                           VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_raw_y)), 0x10U)) 
              + (IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                             VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_raw_z), 
                                                             VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_raw_z)), 0x10U))));
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__v = 0ULL;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem = 0ULL;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r = 0ULL;
    if (VL_GTES_III(32, 0U, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__mag2)) {
        vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__result = 0U;
    } else {
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__v 
            = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__mag2)), 0x10U);
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r = 0ULL;
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__v, 0x2eU));
        if ((1ULL <= vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem)) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__v, 0x2cU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__v, 0x2aU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__v, 0x28U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__v, 0x26U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__v, 0x24U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__v, 0x22U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__v, 0x20U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__v, 0x1eU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__v, 0x1cU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__v, 0x1aU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__v, 0x18U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__v, 0x16U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__v, 0x14U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__v, 0x12U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__v, 0x10U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__v, 0xeU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__v, 0xcU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__v, 0xaU)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__v, 8U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__v, 6U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__v, 4U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__v, 2U)));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__v));
        if ((vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__result 
            = (IData)(vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__r);
    }
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__ndotl 
        = ((IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                        VL_EXTENDS_QI(64,32, 
                                                                      ((0U 
                                                                        == vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__result)
                                                                        ? 
                                                                       (VL_LTES_III(32, 0U, vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_raw_x)
                                                                         ? 0x7fffffffU
                                                                         : 0x80000001U)
                                                                        : (IData)(
                                                                                VL_DIVS_QQQ(64, 
                                                                                VL_SHIFTL_QQI(64,64,32, 
                                                                                VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_raw_x), 0x10U), 
                                                                                VL_EXTENDS_QI(64,32, vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__result))))), 
                                                        VL_EXTENDS_QI(64,32, 
                                                                      ((0U 
                                                                        == vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__result)
                                                                        ? 
                                                                       (VL_LTES_III(32, 0U, 
                                                                                (- vga_raytracer_wrapper__DOT__u_raytracer__DOT__hit_x))
                                                                         ? 0x7fffffffU
                                                                         : 0x80000001U)
                                                                        : (IData)(
                                                                                VL_DIVS_QQQ(64, 
                                                                                VL_SHIFTL_QQI(64,64,32, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- vga_raytracer_wrapper__DOT__u_raytracer__DOT__hit_x)), 0x10U), 
                                                                                VL_EXTENDS_QI(64,32, vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__result)))))), 0x10U)) 
           + ((IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                           VL_EXTENDS_QI(64,32, 
                                                                         ((0U 
                                                                           == vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__result)
                                                                           ? 
                                                                          (VL_LTES_III(32, 0U, vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_raw_y)
                                                                            ? 0x7fffffffU
                                                                            : 0x80000001U)
                                                                           : (IData)(
                                                                                VL_DIVS_QQQ(64, 
                                                                                VL_SHIFTL_QQI(64,64,32, 
                                                                                VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_raw_y), 0x10U), 
                                                                                VL_EXTENDS_QI(64,32, vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__result))))), 
                                                           VL_EXTENDS_QI(64,32, 
                                                                         ((0U 
                                                                           == vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__result)
                                                                           ? 
                                                                          (VL_LTES_III(32, 0U, 
                                                                                ((IData)(0x50000U) 
                                                                                - vga_raytracer_wrapper__DOT__u_raytracer__DOT__hit_y))
                                                                            ? 0x7fffffffU
                                                                            : 0x80000001U)
                                                                           : (IData)(
                                                                                VL_DIVS_QQQ(64, 
                                                                                VL_SHIFTL_QQI(64,64,32, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                ((IData)(0x50000U) 
                                                                                - vga_raytracer_wrapper__DOT__u_raytracer__DOT__hit_y)), 0x10U), 
                                                                                VL_EXTENDS_QI(64,32, vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__result)))))), 0x10U)) 
              + (IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                             VL_EXTENDS_QI(64,32, 
                                                                           ((0U 
                                                                             == vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__result)
                                                                             ? 
                                                                            (VL_LTES_III(32, 0U, vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_raw_z)
                                                                              ? 0x7fffffffU
                                                                              : 0x80000001U)
                                                                             : (IData)(
                                                                                VL_DIVS_QQQ(64, 
                                                                                VL_SHIFTL_QQI(64,64,32, 
                                                                                VL_EXTENDS_QI(64,32, vga_raytracer_wrapper__DOT__u_raytracer__DOT__norm_raw_z), 0x10U), 
                                                                                VL_EXTENDS_QI(64,32, vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__result))))), 
                                                             VL_EXTENDS_QI(64,32, 
                                                                           ((0U 
                                                                             == vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__result)
                                                                             ? 
                                                                            (VL_LTES_III(32, 0U, 
                                                                                ((IData)(0x60000U) 
                                                                                - vga_raytracer_wrapper__DOT__u_raytracer__DOT__hit_z))
                                                                              ? 0x7fffffffU
                                                                              : 0x80000001U)
                                                                             : (IData)(
                                                                                VL_DIVS_QQQ(64, 
                                                                                VL_SHIFTL_QQI(64,64,32, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                ((IData)(0x60000U) 
                                                                                - vga_raytracer_wrapper__DOT__u_raytracer__DOT__hit_z)), 0x10U), 
                                                                                VL_EXTENDS_QI(64,32, vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__result)))))), 0x10U))));
    vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__final_r = 0U;
    vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__final_g = 0U;
    vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__final_b = 0x20U;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__ambient_r = 0U;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__ambient_g = 0U;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__ambient_b = 0U;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__ndotl_clamped = 0U;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__diffuse_r = 0U;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__diffuse_g = 0U;
    vga_raytracer_wrapper__DOT__u_raytracer__DOT__diffuse_b = 0U;
    if (vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_hit) {
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__ambient_r 
            = (0xffU & VL_SHIFTR_III(8,8,32, (IData)(vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_colorR), 3U));
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__ambient_g 
            = (0xffU & VL_SHIFTR_III(8,8,32, (IData)(vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_colorG), 3U));
        vga_raytracer_wrapper__DOT__u_raytracer__DOT__ambient_b 
            = (0xffU & VL_SHIFTR_III(8,8,32, (IData)(vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_colorB), 3U));
        if (VL_LTS_III(32, 0U, vga_raytracer_wrapper__DOT__u_raytracer__DOT__ndotl)) {
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__ndotl_clamped 
                = (VL_LTS_III(32, 0x10000U, vga_raytracer_wrapper__DOT__u_raytracer__DOT__ndotl)
                    ? 0x10000U : vga_raytracer_wrapper__DOT__u_raytracer__DOT__ndotl);
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__diffuse_r 
                = VL_SHIFTR_III(32,32,32, ((IData)(vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_colorR) 
                                           * vga_raytracer_wrapper__DOT__u_raytracer__DOT__ndotl_clamped), 0x10U);
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__diffuse_g 
                = VL_SHIFTR_III(32,32,32, ((IData)(vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_colorG) 
                                           * vga_raytracer_wrapper__DOT__u_raytracer__DOT__ndotl_clamped), 0x10U);
            vga_raytracer_wrapper__DOT__u_raytracer__DOT__diffuse_b 
                = VL_SHIFTR_III(32,32,32, ((IData)(vga_raytracer_wrapper__DOT__u_raytracer__DOT__nearest_colorB) 
                                           * vga_raytracer_wrapper__DOT__u_raytracer__DOT__ndotl_clamped), 0x10U);
            vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__final_r 
                = (0xffffU & ((IData)(vga_raytracer_wrapper__DOT__u_raytracer__DOT__ambient_r) 
                              + vga_raytracer_wrapper__DOT__u_raytracer__DOT__diffuse_r));
            vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__final_g 
                = (0xffffU & ((IData)(vga_raytracer_wrapper__DOT__u_raytracer__DOT__ambient_g) 
                              + vga_raytracer_wrapper__DOT__u_raytracer__DOT__diffuse_g));
            vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__final_b 
                = (0xffffU & ((IData)(vga_raytracer_wrapper__DOT__u_raytracer__DOT__ambient_b) 
                              + vga_raytracer_wrapper__DOT__u_raytracer__DOT__diffuse_b));
        } else {
            vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__final_r 
                = vga_raytracer_wrapper__DOT__u_raytracer__DOT__ambient_r;
            vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__final_g 
                = vga_raytracer_wrapper__DOT__u_raytracer__DOT__ambient_g;
            vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__final_b 
                = vga_raytracer_wrapper__DOT__u_raytracer__DOT__ambient_b;
        }
    } else {
        vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__final_r = 0U;
        vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__final_g = 0U;
        vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__final_b = 0x20U;
    }
}

VL_ATTR_COLD void Vvga_raytracer_wrapper___024root___eval_triggers__stl(Vvga_raytracer_wrapper___024root* vlSelf);

VL_ATTR_COLD bool Vvga_raytracer_wrapper___024root___eval_phase__stl(Vvga_raytracer_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_raytracer_wrapper___024root___eval_phase__stl\n"); );
    Vvga_raytracer_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vvga_raytracer_wrapper___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vvga_raytracer_wrapper___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvga_raytracer_wrapper___024root___dump_triggers__act(Vvga_raytracer_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_raytracer_wrapper___024root___dump_triggers__act\n"); );
    Vvga_raytracer_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvga_raytracer_wrapper___024root___dump_triggers__nba(Vvga_raytracer_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_raytracer_wrapper___024root___dump_triggers__nba\n"); );
    Vvga_raytracer_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vvga_raytracer_wrapper___024root___ctor_var_reset(Vvga_raytracer_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_raytracer_wrapper___024root___ctor_var_reset\n"); );
    Vvga_raytracer_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->pixel_x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13974469888022793920ull);
    vlSelf->pixel_y = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2390262161722732155ull);
    vlSelf->pixel_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16257453768384203186ull);
    vlSelf->rgb_r = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18398562546323295495ull);
    vlSelf->rgb_g = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18086584724061731584ull);
    vlSelf->rgb_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9659784936192748467ull);
    vlSelf->output_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14078276386344907199ull);
    vlSelf->hsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2999247747110030874ull);
    vlSelf->vsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18337175696363507471ull);
    vlSelf->r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16978132545290669629ull);
    vlSelf->g = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13110760720460257827ull);
    vlSelf->b = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16900879642891266615ull);
    vlSelf->vga_raytracer_wrapper__DOT__u_raytracer__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8709669598213728185ull);
    vlSelf->vga_raytracer_wrapper__DOT__u_raytracer__DOT__px_reg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11406980171544370893ull);
    vlSelf->vga_raytracer_wrapper__DOT__u_raytracer__DOT__py_reg = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9397505185417299056ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->vga_raytracer_wrapper__DOT__u_raytracer__DOT__cx_arr[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9041443126259408365ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->vga_raytracer_wrapper__DOT__u_raytracer__DOT__cy_arr[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6264063512053590056ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->vga_raytracer_wrapper__DOT__u_raytracer__DOT__cz_arr[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2439382384697389097ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->vga_raytracer_wrapper__DOT__u_raytracer__DOT__radius_arr[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16624055939661092233ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->vga_raytracer_wrapper__DOT__u_raytracer__DOT__colorR_arr[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 355444294147025359ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->vga_raytracer_wrapper__DOT__u_raytracer__DOT__colorG_arr[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8246283115476311348ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->vga_raytracer_wrapper__DOT__u_raytracer__DOT__colorB_arr[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1703789363908181633ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->vga_raytracer_wrapper__DOT__u_raytracer__DOT__hit_arr[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12852881794196529159ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->vga_raytracer_wrapper__DOT__u_raytracer__DOT__t_arr[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1087341653399561304ull);
    }
    vlSelf->vga_raytracer_wrapper__DOT__u_raytracer__DOT__final_r = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9807392728193278247ull);
    vlSelf->vga_raytracer_wrapper__DOT__u_raytracer__DOT__final_g = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12448786465435314440ull);
    vlSelf->vga_raytracer_wrapper__DOT__u_raytracer__DOT__final_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7218205553122346829ull);
    vlSelf->vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_camera_norm__DOT__u_sqrt__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11834054577767575554ull);
    vlSelf->vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_normal__DOT__u_sqrt__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12032441573447977405ull);
    vlSelf->vga_raytracer_wrapper__DOT__u_raytracer__DOT__u_ldir__DOT__u_sqrt__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6473232193633323404ull);
    vlSelf->vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 140271609085860045ull);
    vlSelf->vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12366681785064555331ull);
    vlSelf->vga_raytracer_wrapper__DOT__u_raytracer__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16781375548445287940ull);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14803524876191471008ull);
}
