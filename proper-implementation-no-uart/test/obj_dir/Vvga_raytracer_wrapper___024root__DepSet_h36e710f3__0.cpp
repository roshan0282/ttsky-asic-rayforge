// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvga_raytracer_wrapper.h for the primary calling header

#include "Vvga_raytracer_wrapper__pch.h"
#include "Vvga_raytracer_wrapper___024root.h"

void Vvga_raytracer_wrapper___024root___eval_act(Vvga_raytracer_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_raytracer_wrapper___024root___eval_act\n"); );
    Vvga_raytracer_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vvga_raytracer_wrapper___024root___nba_sequent__TOP__0(Vvga_raytracer_wrapper___024root* vlSelf);

void Vvga_raytracer_wrapper___024root___eval_nba(Vvga_raytracer_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_raytracer_wrapper___024root___eval_nba\n"); );
    Vvga_raytracer_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vvga_raytracer_wrapper___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vvga_raytracer_wrapper___024root___nba_sequent__TOP__0(Vvga_raytracer_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_raytracer_wrapper___024root___nba_sequent__TOP__0\n"); );
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
    CData/*1:0*/ __Vdly__vga_raytracer_wrapper__DOT__u_raytracer__DOT__state;
    __Vdly__vga_raytracer_wrapper__DOT__u_raytracer__DOT__state = 0;
    // Body
    __Vdly__vga_raytracer_wrapper__DOT__u_raytracer__DOT__state 
        = vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__state;
    vlSelfRef.output_valid = ((IData)(vlSelfRef.rst_n) 
                              && (2U == (IData)(vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__state)));
    if (vlSelfRef.rst_n) {
        if ((2U == (IData)(vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__state))) {
            vlSelfRef.rgb_b = ((0xffU < (IData)(vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__final_b))
                                ? 0xffU : (0xffU & (IData)(vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__final_b)));
            vlSelfRef.rgb_r = ((0xffU < (IData)(vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__final_r))
                                ? 0xffU : (0xffU & (IData)(vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__final_r)));
            vlSelfRef.rgb_g = ((0xffU < (IData)(vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__final_g))
                                ? 0xffU : (0xffU & (IData)(vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__final_g)));
        }
        if ((0U == (IData)(vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__state))) {
            if (vlSelfRef.pixel_valid) {
                vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__px_reg 
                    = vlSelfRef.pixel_x;
                vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__py_reg 
                    = vlSelfRef.pixel_y;
                __Vdly__vga_raytracer_wrapper__DOT__u_raytracer__DOT__state = 1U;
            }
        } else {
            __Vdly__vga_raytracer_wrapper__DOT__u_raytracer__DOT__state 
                = ((1U == (IData)(vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__state))
                    ? 2U : 0U);
        }
    } else {
        vlSelfRef.rgb_b = 0x20U;
        vlSelfRef.rgb_r = 0U;
        vlSelfRef.rgb_g = 0U;
        __Vdly__vga_raytracer_wrapper__DOT__u_raytracer__DOT__state = 0U;
        vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__px_reg = 0U;
        vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__py_reg = 0U;
    }
    vlSelfRef.vga_raytracer_wrapper__DOT__u_raytracer__DOT__state 
        = __Vdly__vga_raytracer_wrapper__DOT__u_raytracer__DOT__state;
    vlSelfRef.b = (0xfU & ((IData)(vlSelfRef.rgb_b) 
                           >> 4U));
    vlSelfRef.r = (0xfU & ((IData)(vlSelfRef.rgb_r) 
                           >> 4U));
    vlSelfRef.g = (0xfU & ((IData)(vlSelfRef.rgb_g) 
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

void Vvga_raytracer_wrapper___024root___eval_triggers__act(Vvga_raytracer_wrapper___024root* vlSelf);

bool Vvga_raytracer_wrapper___024root___eval_phase__act(Vvga_raytracer_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_raytracer_wrapper___024root___eval_phase__act\n"); );
    Vvga_raytracer_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vvga_raytracer_wrapper___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vvga_raytracer_wrapper___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vvga_raytracer_wrapper___024root___eval_phase__nba(Vvga_raytracer_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_raytracer_wrapper___024root___eval_phase__nba\n"); );
    Vvga_raytracer_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vvga_raytracer_wrapper___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvga_raytracer_wrapper___024root___dump_triggers__nba(Vvga_raytracer_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vvga_raytracer_wrapper___024root___dump_triggers__act(Vvga_raytracer_wrapper___024root* vlSelf);
#endif  // VL_DEBUG

void Vvga_raytracer_wrapper___024root___eval(Vvga_raytracer_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_raytracer_wrapper___024root___eval\n"); );
    Vvga_raytracer_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vvga_raytracer_wrapper___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("..\\vga_raytracer_wrapper.sv", 10, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vvga_raytracer_wrapper___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("..\\vga_raytracer_wrapper.sv", 10, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vvga_raytracer_wrapper___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vvga_raytracer_wrapper___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vvga_raytracer_wrapper___024root___eval_debug_assertions(Vvga_raytracer_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_raytracer_wrapper___024root___eval_debug_assertions\n"); );
    Vvga_raytracer_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY(((vlSelfRef.pixel_x & 0xfc00U)))) {
        Verilated::overWidthError("pixel_x");}
    if (VL_UNLIKELY(((vlSelfRef.pixel_y & 0xfe00U)))) {
        Verilated::overWidthError("pixel_y");}
    if (VL_UNLIKELY(((vlSelfRef.pixel_valid & 0xfeU)))) {
        Verilated::overWidthError("pixel_valid");}
}
#endif  // VL_DEBUG
