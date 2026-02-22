// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtbGenericVga.h for the primary calling header

#include "VtbGenericVga__pch.h"
#include "VtbGenericVga___024root.h"

VL_ATTR_COLD void VtbGenericVga___024root___eval_static(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_static\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clock50MHz__0 
        = vlSelfRef.clock50MHz;
    vlSelfRef.__Vtrigprevexpr___TOP__resetn__0 = vlSelfRef.resetn;
}

VL_ATTR_COLD void VtbGenericVga___024root___eval_initial__TOP(VtbGenericVga___024root* vlSelf);

VL_ATTR_COLD void VtbGenericVga___024root___eval_initial(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_initial\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VtbGenericVga___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void VtbGenericVga___024root___eval_initial__TOP(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_initial__TOP\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tbGenericVga__DOT__dut__DOT__colorB_arr[0U] = 0x3cU;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__colorB_arr[1U] = 0xffU;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__colorB_arr[2U] = 0xdcU;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__cx_arr[0U] = 0xfffe4000U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__cx_arr[1U] = 0x1c000U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__cx_arr[2U] = 0U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__cy_arr[0U] = 0U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__cy_arr[1U] = 0U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__cy_arr[2U] = 0xfffc0000U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__cz_arr[0U] = 0x60000U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__cz_arr[1U] = 0x60000U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__cz_arr[2U] = 0x68000U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__radius_arr[0U] = 0x18000U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__radius_arr[1U] = 0x18000U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__radius_arr[2U] = 0x30000U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__colorR_arr[0U] = 0xffU;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__colorR_arr[1U] = 0x3cU;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__colorR_arr[2U] = 0xdcU;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__colorG_arr[0U] = 0x50U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__colorG_arr[1U] = 0xa0U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__colorG_arr[2U] = 0xdcU;
}

VL_ATTR_COLD void VtbGenericVga___024root___eval_final(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_final\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VtbGenericVga___024root___dump_triggers__stl(VtbGenericVga___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VtbGenericVga___024root___eval_phase__stl(VtbGenericVga___024root* vlSelf);

VL_ATTR_COLD void VtbGenericVga___024root___eval_settle(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_settle\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VtbGenericVga___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb\\tbGenericVga.v", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VtbGenericVga___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VtbGenericVga___024root___dump_triggers__stl(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___dump_triggers__stl\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void VtbGenericVga___024root___stl_sequent__TOP__0(VtbGenericVga___024root* vlSelf);

VL_ATTR_COLD void VtbGenericVga___024root___eval_stl(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_stl\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VtbGenericVga___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VtbGenericVga___024root___stl_sequent__TOP__0(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___stl_sequent__TOP__0\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__norm_dx;
    tbGenericVga__DOT__dut__DOT__norm_dx = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__norm_dy;
    tbGenericVga__DOT__dut__DOT__norm_dy = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__norm_dz;
    tbGenericVga__DOT__dut__DOT__norm_dz = 0;
    CData/*0:0*/ tbGenericVga__DOT__dut__DOT__nearest_hit;
    tbGenericVga__DOT__dut__DOT__nearest_hit = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__nearest_t;
    tbGenericVga__DOT__dut__DOT__nearest_t = 0;
    CData/*7:0*/ tbGenericVga__DOT__dut__DOT__nearest_colorR;
    tbGenericVga__DOT__dut__DOT__nearest_colorR = 0;
    CData/*7:0*/ tbGenericVga__DOT__dut__DOT__nearest_colorG;
    tbGenericVga__DOT__dut__DOT__nearest_colorG = 0;
    CData/*7:0*/ tbGenericVga__DOT__dut__DOT__nearest_colorB;
    tbGenericVga__DOT__dut__DOT__nearest_colorB = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__nearest_cx;
    tbGenericVga__DOT__dut__DOT__nearest_cx = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__nearest_cy;
    tbGenericVga__DOT__dut__DOT__nearest_cy = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__nearest_cz;
    tbGenericVga__DOT__dut__DOT__nearest_cz = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__hit_x;
    tbGenericVga__DOT__dut__DOT__hit_x = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__hit_y;
    tbGenericVga__DOT__dut__DOT__hit_y = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__hit_z;
    tbGenericVga__DOT__dut__DOT__hit_z = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__norm_raw_x;
    tbGenericVga__DOT__dut__DOT__norm_raw_x = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__norm_raw_y;
    tbGenericVga__DOT__dut__DOT__norm_raw_y = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__norm_raw_z;
    tbGenericVga__DOT__dut__DOT__norm_raw_z = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__ndotl;
    tbGenericVga__DOT__dut__DOT__ndotl = 0;
    CData/*7:0*/ tbGenericVga__DOT__dut__DOT__ambient_r;
    tbGenericVga__DOT__dut__DOT__ambient_r = 0;
    CData/*7:0*/ tbGenericVga__DOT__dut__DOT__ambient_g;
    tbGenericVga__DOT__dut__DOT__ambient_g = 0;
    CData/*7:0*/ tbGenericVga__DOT__dut__DOT__ambient_b;
    tbGenericVga__DOT__dut__DOT__ambient_b = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__ndotl_clamped;
    tbGenericVga__DOT__dut__DOT__ndotl_clamped = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__diffuse_r;
    tbGenericVga__DOT__dut__DOT__diffuse_r = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__diffuse_g;
    tbGenericVga__DOT__dut__DOT__diffuse_g = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__diffuse_b;
    tbGenericVga__DOT__dut__DOT__diffuse_b = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__0__KET____DOT__u_intersect__t;
    tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__0__KET____DOT__u_intersect__t = 0;
    CData/*0:0*/ tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__0__KET____DOT__u_intersect__hit;
    tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__0__KET____DOT__u_intersect__hit = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__1__KET____DOT__u_intersect__t;
    tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__1__KET____DOT__u_intersect__t = 0;
    CData/*0:0*/ tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__1__KET____DOT__u_intersect__hit;
    tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__1__KET____DOT__u_intersect__hit = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__2__KET____DOT__u_intersect__t;
    tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__2__KET____DOT__u_intersect__t = 0;
    CData/*0:0*/ tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__2__KET____DOT__u_intersect__hit;
    tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__2__KET____DOT__u_intersect__hit = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__mag2;
    tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__mag2 = 0;
    QData/*63:0*/ tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__v;
    tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__v = 0;
    QData/*63:0*/ tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem;
    tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem = 0;
    QData/*63:0*/ tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r;
    tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__u_normal__DOT__mag2;
    tbGenericVga__DOT__dut__DOT__u_normal__DOT__mag2 = 0;
    QData/*63:0*/ tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__v;
    tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__v = 0;
    QData/*63:0*/ tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem;
    tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem = 0;
    QData/*63:0*/ tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r;
    tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__u_ldir__DOT__mag2;
    tbGenericVga__DOT__dut__DOT__u_ldir__DOT__mag2 = 0;
    QData/*63:0*/ tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__v;
    tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__v = 0;
    QData/*63:0*/ tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem;
    tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem = 0;
    QData/*63:0*/ tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r;
    tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__a;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__a = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__halfB;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__halfB = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__disc;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__disc = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__num0;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__num0 = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__num1;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__num1 = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t0;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t0 = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t1;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t1 = 0;
    QData/*63:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v = 0;
    QData/*63:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem = 0;
    QData/*63:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__halfB;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__halfB = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__disc;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__disc = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__num0;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__num0 = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__num1;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__num1 = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t0;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t0 = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t1;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t1 = 0;
    QData/*63:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v = 0;
    QData/*63:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem = 0;
    QData/*63:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__halfB;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__halfB = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__disc;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__disc = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__num0;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__num0 = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__num1;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__num1 = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t0;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t0 = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t1;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t1 = 0;
    QData/*63:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v = 0;
    QData/*63:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem = 0;
    QData/*63:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r = 0;
    // Body
    vlSelfRef.hSync = vlSelfRef.tbGenericVga__DOT__hSyncReg;
    vlSelfRef.vSync = vlSelfRef.tbGenericVga__DOT__vSyncReg;
    vlSelfRef.xOrd = vlSelfRef.tbGenericVga__DOT__xReg;
    vlSelfRef.yOrd = vlSelfRef.tbGenericVga__DOT__yReg;
    vlSelfRef.visible = vlSelfRef.tbGenericVga__DOT__visibleReg;
    tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__mag2 
        = ((IData)(0x27100000U) + ((IData)(VL_SHIFTRS_QQI(64,64,32, 
                                                          VL_MULS_QQQ(64, 
                                                                      VL_EXTENDS_QI(64,32, 
                                                                                VL_SHIFTL_III(32,32,32, 
                                                                                (VL_EXTENDS_II(32,11, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__px_reg)) 
                                                                                - (IData)(0x140U)), 0xeU)), 
                                                                      VL_EXTENDS_QI(64,32, 
                                                                                VL_SHIFTL_III(32,32,32, 
                                                                                (VL_EXTENDS_II(32,11, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__px_reg)) 
                                                                                - (IData)(0x140U)), 0xeU))), 0x10U)) 
                                   + (IData)(VL_SHIFTRS_QQI(64,64,32, 
                                                            VL_MULS_QQQ(64, 
                                                                        VL_EXTENDS_QI(64,32, 
                                                                                VL_SHIFTL_III(32,32,32, 
                                                                                ((IData)(0xf0U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,10, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__py_reg))), 0xeU)), 
                                                                        VL_EXTENDS_QI(64,32, 
                                                                                VL_SHIFTL_III(32,32,32, 
                                                                                ((IData)(0xf0U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,10, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__py_reg))), 0xeU))), 0x10U))));
    tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__v = 0ULL;
    tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem = 0ULL;
    tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r = 0ULL;
    if (VL_GTES_III(32, 0U, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__mag2)) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__result = 0U;
    } else {
        tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__v 
            = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__mag2)), 0x10U);
        tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r = 0ULL;
        tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0x2eU));
        if ((1ULL <= tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem)) {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0x2cU)));
        if ((tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0x2aU)));
        if ((tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0x28U)));
        if ((tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0x26U)));
        if ((tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0x24U)));
        if ((tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0x22U)));
        if ((tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0x20U)));
        if ((tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0x1eU)));
        if ((tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0x1cU)));
        if ((tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0x1aU)));
        if ((tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0x18U)));
        if ((tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0x16U)));
        if ((tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0x14U)));
        if ((tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0x12U)));
        if ((tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0x10U)));
        if ((tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0xeU)));
        if ((tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0xcU)));
        if ((tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 0xaU)));
        if ((tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 8U)));
        if ((tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 6U)));
        if ((tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 4U)));
        if ((tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__v, 2U)));
        if ((tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__v));
        if ((tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r, 1U);
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__result 
            = (IData)(tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__r);
    }
    if ((0U == vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__result)) {
        tbGenericVga__DOT__dut__DOT__norm_dz = 0x7fffffffU;
        tbGenericVga__DOT__dut__DOT__norm_dx = (VL_LTES_III(32, 0U, 
                                                            VL_SHIFTL_III(32,32,32, 
                                                                          (VL_EXTENDS_II(32,11, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__px_reg)) 
                                                                           - (IData)(0x140U)), 0xeU))
                                                 ? 0x7fffffffU
                                                 : 0x80000001U);
        tbGenericVga__DOT__dut__DOT__norm_dy = (VL_LTES_III(32, 0U, 
                                                            VL_SHIFTL_III(32,32,32, 
                                                                          ((IData)(0xf0U) 
                                                                           - 
                                                                           VL_EXTENDS_II(32,10, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__py_reg))), 0xeU))
                                                 ? 0x7fffffffU
                                                 : 0x80000001U);
    } else {
        tbGenericVga__DOT__dut__DOT__norm_dz = (IData)(
                                                       VL_DIVS_QQQ(64, 0x6400000000ULL, 
                                                                   VL_EXTENDS_QI(64,32, vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__result)));
        tbGenericVga__DOT__dut__DOT__norm_dx = (IData)(
                                                       VL_DIVS_QQQ(64, 
                                                                   VL_SHIFTL_QQI(64,64,32, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                VL_SHIFTL_III(32,32,32, 
                                                                                (VL_EXTENDS_II(32,11, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__px_reg)) 
                                                                                - (IData)(0x140U)), 0xeU)), 0x10U), 
                                                                   VL_EXTENDS_QI(64,32, vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__result)));
        tbGenericVga__DOT__dut__DOT__norm_dy = (IData)(
                                                       VL_DIVS_QQQ(64, 
                                                                   VL_SHIFTL_QQI(64,64,32, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                VL_SHIFTL_III(32,32,32, 
                                                                                ((IData)(0xf0U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,10, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__py_reg))), 0xeU)), 0x10U), 
                                                                   VL_EXTENDS_QI(64,32, vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__result)));
    }
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__halfB 
        = ((IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                        VL_EXTENDS_QI(64,32, 
                                                                      (- 
                                                                       vlSelfRef.tbGenericVga__DOT__dut__DOT__cx_arr
                                                                       [0U])), 
                                                        VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__norm_dx)), 0x10U)) 
           + ((IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                           VL_EXTENDS_QI(64,32, 
                                                                         (- 
                                                                          vlSelfRef.tbGenericVga__DOT__dut__DOT__cy_arr
                                                                          [0U])), 
                                                           VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__norm_dy)), 0x10U)) 
              + (IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                             VL_EXTENDS_QI(64,32, 
                                                                           (- 
                                                                            vlSelfRef.tbGenericVga__DOT__dut__DOT__cz_arr
                                                                            [0U])), 
                                                             VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__norm_dz)), 0x10U))));
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__halfB 
        = ((IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                        VL_EXTENDS_QI(64,32, 
                                                                      (- 
                                                                       vlSelfRef.tbGenericVga__DOT__dut__DOT__cx_arr
                                                                       [1U])), 
                                                        VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__norm_dx)), 0x10U)) 
           + ((IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                           VL_EXTENDS_QI(64,32, 
                                                                         (- 
                                                                          vlSelfRef.tbGenericVga__DOT__dut__DOT__cy_arr
                                                                          [1U])), 
                                                           VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__norm_dy)), 0x10U)) 
              + (IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                             VL_EXTENDS_QI(64,32, 
                                                                           (- 
                                                                            vlSelfRef.tbGenericVga__DOT__dut__DOT__cz_arr
                                                                            [1U])), 
                                                             VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__norm_dz)), 0x10U))));
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__halfB 
        = ((IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                        VL_EXTENDS_QI(64,32, 
                                                                      (- 
                                                                       vlSelfRef.tbGenericVga__DOT__dut__DOT__cx_arr
                                                                       [2U])), 
                                                        VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__norm_dx)), 0x10U)) 
           + ((IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                           VL_EXTENDS_QI(64,32, 
                                                                         (- 
                                                                          vlSelfRef.tbGenericVga__DOT__dut__DOT__cy_arr
                                                                          [2U])), 
                                                           VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__norm_dy)), 0x10U)) 
              + (IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                             VL_EXTENDS_QI(64,32, 
                                                                           (- 
                                                                            vlSelfRef.tbGenericVga__DOT__dut__DOT__cz_arr
                                                                            [2U])), 
                                                             VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__norm_dz)), 0x10U))));
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__a 
        = ((IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                        VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__norm_dx), 
                                                        VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__norm_dx)), 0x10U)) 
           + ((IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                           VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__norm_dy), 
                                                           VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__norm_dy)), 0x10U)) 
              + (IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                             VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__norm_dz), 
                                                             VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__norm_dz)), 0x10U))));
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__disc 
        = ((IData)(((0x8000ULL + VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__halfB), 
                                             VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__halfB))) 
                    >> 0x10U)) - (IData)(((0x8000ULL 
                                           + VL_MULS_QQQ(64, 
                                                         VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__a), 
                                                         VL_EXTENDS_QI(64,32, 
                                                                       (((IData)(
                                                                                VL_SHIFTRS_QQI(64,64,32, 
                                                                                VL_MULS_QQQ(64, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.tbGenericVga__DOT__dut__DOT__cx_arr
                                                                                [0U])), 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.tbGenericVga__DOT__dut__DOT__cx_arr
                                                                                [0U]))), 0x10U)) 
                                                                         + 
                                                                         ((IData)(
                                                                                VL_SHIFTRS_QQI(64,64,32, 
                                                                                VL_MULS_QQQ(64, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.tbGenericVga__DOT__dut__DOT__cy_arr
                                                                                [0U])), 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.tbGenericVga__DOT__dut__DOT__cy_arr
                                                                                [0U]))), 0x10U)) 
                                                                          + (IData)(
                                                                                VL_SHIFTRS_QQI(64,64,32, 
                                                                                VL_MULS_QQQ(64, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.tbGenericVga__DOT__dut__DOT__cz_arr
                                                                                [0U])), 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.tbGenericVga__DOT__dut__DOT__cz_arr
                                                                                [0U]))), 0x10U)))) 
                                                                        - (IData)(
                                                                                ((0x8000ULL 
                                                                                + 
                                                                                VL_MULS_QQQ(64, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                vlSelfRef.tbGenericVga__DOT__dut__DOT__radius_arr
                                                                                [0U]), 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                vlSelfRef.tbGenericVga__DOT__dut__DOT__radius_arr
                                                                                [0U]))) 
                                                                                >> 0x10U)))))) 
                                          >> 0x10U)));
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__disc 
        = ((IData)(((0x8000ULL + VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__halfB), 
                                             VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__halfB))) 
                    >> 0x10U)) - (IData)(((0x8000ULL 
                                           + VL_MULS_QQQ(64, 
                                                         VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__a), 
                                                         VL_EXTENDS_QI(64,32, 
                                                                       (((IData)(
                                                                                VL_SHIFTRS_QQI(64,64,32, 
                                                                                VL_MULS_QQQ(64, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.tbGenericVga__DOT__dut__DOT__cx_arr
                                                                                [1U])), 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.tbGenericVga__DOT__dut__DOT__cx_arr
                                                                                [1U]))), 0x10U)) 
                                                                         + 
                                                                         ((IData)(
                                                                                VL_SHIFTRS_QQI(64,64,32, 
                                                                                VL_MULS_QQQ(64, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.tbGenericVga__DOT__dut__DOT__cy_arr
                                                                                [1U])), 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.tbGenericVga__DOT__dut__DOT__cy_arr
                                                                                [1U]))), 0x10U)) 
                                                                          + (IData)(
                                                                                VL_SHIFTRS_QQI(64,64,32, 
                                                                                VL_MULS_QQQ(64, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.tbGenericVga__DOT__dut__DOT__cz_arr
                                                                                [1U])), 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.tbGenericVga__DOT__dut__DOT__cz_arr
                                                                                [1U]))), 0x10U)))) 
                                                                        - (IData)(
                                                                                ((0x8000ULL 
                                                                                + 
                                                                                VL_MULS_QQQ(64, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                vlSelfRef.tbGenericVga__DOT__dut__DOT__radius_arr
                                                                                [1U]), 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                vlSelfRef.tbGenericVga__DOT__dut__DOT__radius_arr
                                                                                [1U]))) 
                                                                                >> 0x10U)))))) 
                                          >> 0x10U)));
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__disc 
        = ((IData)(((0x8000ULL + VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__halfB), 
                                             VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__halfB))) 
                    >> 0x10U)) - (IData)(((0x8000ULL 
                                           + VL_MULS_QQQ(64, 
                                                         VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__a), 
                                                         VL_EXTENDS_QI(64,32, 
                                                                       (((IData)(
                                                                                VL_SHIFTRS_QQI(64,64,32, 
                                                                                VL_MULS_QQQ(64, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.tbGenericVga__DOT__dut__DOT__cx_arr
                                                                                [2U])), 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.tbGenericVga__DOT__dut__DOT__cx_arr
                                                                                [2U]))), 0x10U)) 
                                                                         + 
                                                                         ((IData)(
                                                                                VL_SHIFTRS_QQI(64,64,32, 
                                                                                VL_MULS_QQQ(64, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.tbGenericVga__DOT__dut__DOT__cy_arr
                                                                                [2U])), 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.tbGenericVga__DOT__dut__DOT__cy_arr
                                                                                [2U]))), 0x10U)) 
                                                                          + (IData)(
                                                                                VL_SHIFTRS_QQI(64,64,32, 
                                                                                VL_MULS_QQQ(64, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.tbGenericVga__DOT__dut__DOT__cz_arr
                                                                                [2U])), 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- 
                                                                                vlSelfRef.tbGenericVga__DOT__dut__DOT__cz_arr
                                                                                [2U]))), 0x10U)))) 
                                                                        - (IData)(
                                                                                ((0x8000ULL 
                                                                                + 
                                                                                VL_MULS_QQQ(64, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                vlSelfRef.tbGenericVga__DOT__dut__DOT__radius_arr
                                                                                [2U]), 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                vlSelfRef.tbGenericVga__DOT__dut__DOT__radius_arr
                                                                                [2U]))) 
                                                                                >> 0x10U)))))) 
                                          >> 0x10U)));
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v = 0ULL;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem = 0ULL;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r = 0ULL;
    if (VL_GTES_III(32, 0U, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__disc)) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result = 0U;
    } else {
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v 
            = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__disc)), 0x10U);
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r = 0ULL;
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x2eU));
        if ((1ULL <= tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem)) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x2cU)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x2aU)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x28U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x26U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x24U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x22U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x20U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x1eU)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x1cU)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x1aU)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x18U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x16U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x14U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x12U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x10U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0xeU)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0xcU)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0xaU)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 8U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 6U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 4U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 2U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result 
            = (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r);
    }
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v = 0ULL;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem = 0ULL;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r = 0ULL;
    if (VL_GTES_III(32, 0U, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__disc)) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result = 0U;
    } else {
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v 
            = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__disc)), 0x10U);
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r = 0ULL;
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x2eU));
        if ((1ULL <= tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem)) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x2cU)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x2aU)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x28U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x26U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x24U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x22U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x20U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x1eU)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x1cU)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x1aU)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x18U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x16U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x14U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x12U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x10U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0xeU)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0xcU)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0xaU)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 8U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 6U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 4U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 2U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result 
            = (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r);
    }
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v = 0ULL;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem = 0ULL;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r = 0ULL;
    if (VL_GTES_III(32, 0U, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__disc)) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result = 0U;
    } else {
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v 
            = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__disc)), 0x10U);
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r = 0ULL;
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x2eU));
        if ((1ULL <= tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem)) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x2cU)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x2aU)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x28U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x26U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x24U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x22U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x20U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x1eU)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x1cU)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x1aU)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x18U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x16U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x14U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x12U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0x10U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0xeU)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0xcU)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 0xaU)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 8U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 6U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 4U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v, 2U)));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem, 2U) 
               | (3ULL & tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__v));
        if ((tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r, 1U);
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result 
            = (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__r);
    }
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__num0 
        = ((- tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__halfB) 
           - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result);
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__num1 
        = ((- tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__halfB) 
           + vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result);
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__num0 
        = ((- tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__halfB) 
           - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result);
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__num1 
        = ((- tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__halfB) 
           + vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result);
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__num0 
        = ((- tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__halfB) 
           - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result);
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__num1 
        = ((- tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__halfB) 
           + vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result);
    if ((0U == tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__a)) {
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t0 
            = (VL_LTES_III(32, 0U, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__num0)
                ? 0x7fffffffU : 0x80000001U);
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t1 
            = (VL_LTES_III(32, 0U, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__num1)
                ? 0x7fffffffU : 0x80000001U);
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t0 
            = (VL_LTES_III(32, 0U, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__num0)
                ? 0x7fffffffU : 0x80000001U);
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t1 
            = (VL_LTES_III(32, 0U, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__num1)
                ? 0x7fffffffU : 0x80000001U);
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t0 
            = (VL_LTES_III(32, 0U, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__num0)
                ? 0x7fffffffU : 0x80000001U);
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t1 
            = (VL_LTES_III(32, 0U, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__num1)
                ? 0x7fffffffU : 0x80000001U);
    } else {
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t0 
            = (IData)(VL_DIVS_QQQ(64, VL_SHIFTL_QQI(64,64,32, 
                                                    VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__num0), 0x10U), 
                                  VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__a)));
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t1 
            = (IData)(VL_DIVS_QQQ(64, VL_SHIFTL_QQI(64,64,32, 
                                                    VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__num1), 0x10U), 
                                  VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__a)));
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t0 
            = (IData)(VL_DIVS_QQQ(64, VL_SHIFTL_QQI(64,64,32, 
                                                    VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__num0), 0x10U), 
                                  VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__a)));
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t1 
            = (IData)(VL_DIVS_QQQ(64, VL_SHIFTL_QQI(64,64,32, 
                                                    VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__num1), 0x10U), 
                                  VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__a)));
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t0 
            = (IData)(VL_DIVS_QQQ(64, VL_SHIFTL_QQI(64,64,32, 
                                                    VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__num0), 0x10U), 
                                  VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__a)));
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t1 
            = (IData)(VL_DIVS_QQQ(64, VL_SHIFTL_QQI(64,64,32, 
                                                    VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__num1), 0x10U), 
                                  VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__a)));
    }
    tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__0__KET____DOT__u_intersect__hit = 0U;
    tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__0__KET____DOT__u_intersect__t = 0U;
    if ((VL_LTES_III(32, 0U, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__disc) 
         & (0U != tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__a))) {
        if ((VL_LTS_III(32, 0U, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t0) 
             & VL_LTS_III(32, 0U, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t1))) {
            tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__0__KET____DOT__u_intersect__hit = 1U;
            tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__0__KET____DOT__u_intersect__t 
                = (VL_LTS_III(32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t0, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t1)
                    ? tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t0
                    : tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t1);
        } else if (VL_LTS_III(32, 0U, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t0)) {
            tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__0__KET____DOT__u_intersect__hit = 1U;
            tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__0__KET____DOT__u_intersect__t 
                = tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t0;
        } else if (VL_LTS_III(32, 0U, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t1)) {
            tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__0__KET____DOT__u_intersect__hit = 1U;
            tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__0__KET____DOT__u_intersect__t 
                = tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t1;
        }
    }
    tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__1__KET____DOT__u_intersect__hit = 0U;
    tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__1__KET____DOT__u_intersect__t = 0U;
    if ((VL_LTES_III(32, 0U, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__disc) 
         & (0U != tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__a))) {
        if ((VL_LTS_III(32, 0U, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t0) 
             & VL_LTS_III(32, 0U, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t1))) {
            tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__1__KET____DOT__u_intersect__hit = 1U;
            tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__1__KET____DOT__u_intersect__t 
                = (VL_LTS_III(32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t0, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t1)
                    ? tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t0
                    : tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t1);
        } else if (VL_LTS_III(32, 0U, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t0)) {
            tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__1__KET____DOT__u_intersect__hit = 1U;
            tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__1__KET____DOT__u_intersect__t 
                = tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t0;
        } else if (VL_LTS_III(32, 0U, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t1)) {
            tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__1__KET____DOT__u_intersect__hit = 1U;
            tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__1__KET____DOT__u_intersect__t 
                = tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t1;
        }
    }
    tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__2__KET____DOT__u_intersect__hit = 0U;
    tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__2__KET____DOT__u_intersect__t = 0U;
    if ((VL_LTES_III(32, 0U, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__disc) 
         & (0U != tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__a))) {
        if ((VL_LTS_III(32, 0U, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t0) 
             & VL_LTS_III(32, 0U, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t1))) {
            tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__2__KET____DOT__u_intersect__hit = 1U;
            tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__2__KET____DOT__u_intersect__t 
                = (VL_LTS_III(32, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t0, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t1)
                    ? tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t0
                    : tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t1);
        } else if (VL_LTS_III(32, 0U, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t0)) {
            tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__2__KET____DOT__u_intersect__hit = 1U;
            tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__2__KET____DOT__u_intersect__t 
                = tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t0;
        } else if (VL_LTS_III(32, 0U, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t1)) {
            tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__2__KET____DOT__u_intersect__hit = 1U;
            tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__2__KET____DOT__u_intersect__t 
                = tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__t1;
        }
    }
    vlSelfRef.tbGenericVga__DOT__dut__DOT__hit_arr[0U] 
        = tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__0__KET____DOT__u_intersect__hit;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__t_arr[0U] 
        = tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__0__KET____DOT__u_intersect__t;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__hit_arr[1U] 
        = tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__1__KET____DOT__u_intersect__hit;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__t_arr[1U] 
        = tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__1__KET____DOT__u_intersect__t;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__hit_arr[2U] 
        = tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__2__KET____DOT__u_intersect__hit;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__t_arr[2U] 
        = tbGenericVga__DOT__dut__DOT____Vcellout__g_sphere__BRA__2__KET____DOT__u_intersect__t;
    tbGenericVga__DOT__dut__DOT__nearest_hit = 0U;
    tbGenericVga__DOT__dut__DOT__nearest_t = 0x7fffffffU;
    tbGenericVga__DOT__dut__DOT__nearest_colorR = 0U;
    tbGenericVga__DOT__dut__DOT__nearest_colorG = 0U;
    tbGenericVga__DOT__dut__DOT__nearest_colorB = 0x20U;
    tbGenericVga__DOT__dut__DOT__nearest_cx = 0U;
    tbGenericVga__DOT__dut__DOT__nearest_cy = 0U;
    tbGenericVga__DOT__dut__DOT__nearest_cz = 0U;
    if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__hit_arr
         [0U] & VL_LTS_III(32, 0U, vlSelfRef.tbGenericVga__DOT__dut__DOT__t_arr
                           [0U]))) {
        if ((1U & ((~ (IData)(tbGenericVga__DOT__dut__DOT__nearest_hit)) 
                   | VL_LTS_III(32, vlSelfRef.tbGenericVga__DOT__dut__DOT__t_arr
                                [0U], tbGenericVga__DOT__dut__DOT__nearest_t)))) {
            tbGenericVga__DOT__dut__DOT__nearest_hit = 1U;
            tbGenericVga__DOT__dut__DOT__nearest_t 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__t_arr
                [0U];
            tbGenericVga__DOT__dut__DOT__nearest_colorR 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__colorR_arr
                [0U];
            tbGenericVga__DOT__dut__DOT__nearest_colorG 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__colorG_arr
                [0U];
            tbGenericVga__DOT__dut__DOT__nearest_colorB 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__colorB_arr
                [0U];
            tbGenericVga__DOT__dut__DOT__nearest_cx 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__cx_arr
                [0U];
            tbGenericVga__DOT__dut__DOT__nearest_cy 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__cy_arr
                [0U];
            tbGenericVga__DOT__dut__DOT__nearest_cz 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__cz_arr
                [0U];
        }
    }
    if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__hit_arr
         [1U] & VL_LTS_III(32, 0U, vlSelfRef.tbGenericVga__DOT__dut__DOT__t_arr
                           [1U]))) {
        if ((1U & ((~ (IData)(tbGenericVga__DOT__dut__DOT__nearest_hit)) 
                   | VL_LTS_III(32, vlSelfRef.tbGenericVga__DOT__dut__DOT__t_arr
                                [1U], tbGenericVga__DOT__dut__DOT__nearest_t)))) {
            tbGenericVga__DOT__dut__DOT__nearest_hit = 1U;
            tbGenericVga__DOT__dut__DOT__nearest_t 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__t_arr
                [1U];
            tbGenericVga__DOT__dut__DOT__nearest_colorR 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__colorR_arr
                [1U];
            tbGenericVga__DOT__dut__DOT__nearest_colorG 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__colorG_arr
                [1U];
            tbGenericVga__DOT__dut__DOT__nearest_colorB 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__colorB_arr
                [1U];
            tbGenericVga__DOT__dut__DOT__nearest_cx 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__cx_arr
                [1U];
            tbGenericVga__DOT__dut__DOT__nearest_cy 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__cy_arr
                [1U];
            tbGenericVga__DOT__dut__DOT__nearest_cz 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__cz_arr
                [1U];
        }
    }
    if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__hit_arr
         [2U] & VL_LTS_III(32, 0U, vlSelfRef.tbGenericVga__DOT__dut__DOT__t_arr
                           [2U]))) {
        if ((1U & ((~ (IData)(tbGenericVga__DOT__dut__DOT__nearest_hit)) 
                   | VL_LTS_III(32, vlSelfRef.tbGenericVga__DOT__dut__DOT__t_arr
                                [2U], tbGenericVga__DOT__dut__DOT__nearest_t)))) {
            tbGenericVga__DOT__dut__DOT__nearest_hit = 1U;
            tbGenericVga__DOT__dut__DOT__nearest_t 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__t_arr
                [2U];
            tbGenericVga__DOT__dut__DOT__nearest_colorR 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__colorR_arr
                [2U];
            tbGenericVga__DOT__dut__DOT__nearest_colorG 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__colorG_arr
                [2U];
            tbGenericVga__DOT__dut__DOT__nearest_colorB 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__colorB_arr
                [2U];
            tbGenericVga__DOT__dut__DOT__nearest_cx 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__cx_arr
                [2U];
            tbGenericVga__DOT__dut__DOT__nearest_cy 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__cy_arr
                [2U];
            tbGenericVga__DOT__dut__DOT__nearest_cz 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__cz_arr
                [2U];
        }
    }
    tbGenericVga__DOT__dut__DOT__hit_x = (IData)(((0x8000ULL 
                                                   + 
                                                   VL_MULS_QQQ(64, 
                                                               VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__nearest_t), 
                                                               VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__norm_dx))) 
                                                  >> 0x10U));
    tbGenericVga__DOT__dut__DOT__hit_y = (IData)(((0x8000ULL 
                                                   + 
                                                   VL_MULS_QQQ(64, 
                                                               VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__nearest_t), 
                                                               VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__norm_dy))) 
                                                  >> 0x10U));
    tbGenericVga__DOT__dut__DOT__hit_z = (IData)(((0x8000ULL 
                                                   + 
                                                   VL_MULS_QQQ(64, 
                                                               VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__nearest_t), 
                                                               VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__norm_dz))) 
                                                  >> 0x10U));
    tbGenericVga__DOT__dut__DOT__norm_raw_x = (tbGenericVga__DOT__dut__DOT__hit_x 
                                               - tbGenericVga__DOT__dut__DOT__nearest_cx);
    tbGenericVga__DOT__dut__DOT__norm_raw_y = (tbGenericVga__DOT__dut__DOT__hit_y 
                                               - tbGenericVga__DOT__dut__DOT__nearest_cy);
    tbGenericVga__DOT__dut__DOT__u_ldir__DOT__mag2 
        = ((IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                        VL_EXTENDS_QI(64,32, 
                                                                      (- tbGenericVga__DOT__dut__DOT__hit_x)), 
                                                        VL_EXTENDS_QI(64,32, 
                                                                      (- tbGenericVga__DOT__dut__DOT__hit_x))), 0x10U)) 
           + ((IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                           VL_EXTENDS_QI(64,32, 
                                                                         ((IData)(0x50000U) 
                                                                          - tbGenericVga__DOT__dut__DOT__hit_y)), 
                                                           VL_EXTENDS_QI(64,32, 
                                                                         ((IData)(0x50000U) 
                                                                          - tbGenericVga__DOT__dut__DOT__hit_y))), 0x10U)) 
              + (IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                             VL_EXTENDS_QI(64,32, 
                                                                           ((IData)(0x60000U) 
                                                                            - tbGenericVga__DOT__dut__DOT__hit_z)), 
                                                             VL_EXTENDS_QI(64,32, 
                                                                           ((IData)(0x60000U) 
                                                                            - tbGenericVga__DOT__dut__DOT__hit_z))), 0x10U))));
    tbGenericVga__DOT__dut__DOT__norm_raw_z = (tbGenericVga__DOT__dut__DOT__hit_z 
                                               - tbGenericVga__DOT__dut__DOT__nearest_cz);
    tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__v = 0ULL;
    tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem = 0ULL;
    tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r = 0ULL;
    if (VL_GTES_III(32, 0U, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__mag2)) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__result = 0U;
    } else {
        tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__v 
            = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(tbGenericVga__DOT__dut__DOT__u_ldir__DOT__mag2)), 0x10U);
        tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r = 0ULL;
        tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0x2eU));
        if ((1ULL <= tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem)) {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0x2cU)));
        if ((tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0x2aU)));
        if ((tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0x28U)));
        if ((tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0x26U)));
        if ((tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0x24U)));
        if ((tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0x22U)));
        if ((tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0x20U)));
        if ((tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0x1eU)));
        if ((tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0x1cU)));
        if ((tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0x1aU)));
        if ((tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0x18U)));
        if ((tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0x16U)));
        if ((tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0x14U)));
        if ((tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0x12U)));
        if ((tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0x10U)));
        if ((tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0xeU)));
        if ((tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0xcU)));
        if ((tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__v, 0xaU)));
        if ((tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__v, 8U)));
        if ((tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__v, 6U)));
        if ((tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__v, 4U)));
        if ((tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__v, 2U)));
        if ((tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__v));
        if ((tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r, 1U);
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__result 
            = (IData)(tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__r);
    }
    tbGenericVga__DOT__dut__DOT__u_normal__DOT__mag2 
        = ((IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                        VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__norm_raw_x), 
                                                        VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__norm_raw_x)), 0x10U)) 
           + ((IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                           VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__norm_raw_y), 
                                                           VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__norm_raw_y)), 0x10U)) 
              + (IData)(VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                             VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__norm_raw_z), 
                                                             VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__norm_raw_z)), 0x10U))));
    tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__v = 0ULL;
    tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem = 0ULL;
    tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r = 0ULL;
    if (VL_GTES_III(32, 0U, tbGenericVga__DOT__dut__DOT__u_normal__DOT__mag2)) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__result = 0U;
    } else {
        tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__v 
            = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(tbGenericVga__DOT__dut__DOT__u_normal__DOT__mag2)), 0x10U);
        tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r = 0ULL;
        tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__v, 0x2eU));
        if ((1ULL <= tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem)) {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__v, 0x2cU)));
        if ((tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__v, 0x2aU)));
        if ((tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__v, 0x28U)));
        if ((tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__v, 0x26U)));
        if ((tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__v, 0x24U)));
        if ((tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__v, 0x22U)));
        if ((tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__v, 0x20U)));
        if ((tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__v, 0x1eU)));
        if ((tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__v, 0x1cU)));
        if ((tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__v, 0x1aU)));
        if ((tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__v, 0x18U)));
        if ((tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__v, 0x16U)));
        if ((tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__v, 0x14U)));
        if ((tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__v, 0x12U)));
        if ((tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__v, 0x10U)));
        if ((tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__v, 0xeU)));
        if ((tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__v, 0xcU)));
        if ((tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__v, 0xaU)));
        if ((tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__v, 8U)));
        if ((tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__v, 6U)));
        if ((tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__v, 4U)));
        if ((tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__v, 2U)));
        if ((tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__v));
        if ((tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)))) {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                = (tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 2U)));
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U));
        } else {
            tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r, 1U);
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__result 
            = (IData)(tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__r);
    }
    tbGenericVga__DOT__dut__DOT__ndotl = ((IData)(VL_SHIFTRS_QQI(64,64,32, 
                                                                 VL_MULS_QQQ(64, 
                                                                             VL_EXTENDS_QI(64,32, 
                                                                                ((0U 
                                                                                == vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__result)
                                                                                 ? 
                                                                                (VL_LTES_III(32, 0U, tbGenericVga__DOT__dut__DOT__norm_raw_x)
                                                                                 ? 0x7fffffffU
                                                                                 : 0x80000001U)
                                                                                 : (IData)(
                                                                                VL_DIVS_QQQ(64, 
                                                                                VL_SHIFTL_QQI(64,64,32, 
                                                                                VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__norm_raw_x), 0x10U), 
                                                                                VL_EXTENDS_QI(64,32, vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__result))))), 
                                                                             VL_EXTENDS_QI(64,32, 
                                                                                ((0U 
                                                                                == vlSelfRef.tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__result)
                                                                                 ? 
                                                                                (VL_LTES_III(32, 0U, 
                                                                                (- tbGenericVga__DOT__dut__DOT__hit_x))
                                                                                 ? 0x7fffffffU
                                                                                 : 0x80000001U)
                                                                                 : (IData)(
                                                                                VL_DIVS_QQQ(64, 
                                                                                VL_SHIFTL_QQI(64,64,32, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                (- tbGenericVga__DOT__dut__DOT__hit_x)), 0x10U), 
                                                                                VL_EXTENDS_QI(64,32, vlSelfRef.tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__result)))))), 0x10U)) 
                                          + ((IData)(
                                                     VL_SHIFTRS_QQI(64,64,32, 
                                                                    VL_MULS_QQQ(64, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                ((0U 
                                                                                == vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__result)
                                                                                 ? 
                                                                                (VL_LTES_III(32, 0U, tbGenericVga__DOT__dut__DOT__norm_raw_y)
                                                                                 ? 0x7fffffffU
                                                                                 : 0x80000001U)
                                                                                 : (IData)(
                                                                                VL_DIVS_QQQ(64, 
                                                                                VL_SHIFTL_QQI(64,64,32, 
                                                                                VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__norm_raw_y), 0x10U), 
                                                                                VL_EXTENDS_QI(64,32, vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__result))))), 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                ((0U 
                                                                                == vlSelfRef.tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__result)
                                                                                 ? 
                                                                                (VL_LTES_III(32, 0U, 
                                                                                ((IData)(0x50000U) 
                                                                                - tbGenericVga__DOT__dut__DOT__hit_y))
                                                                                 ? 0x7fffffffU
                                                                                 : 0x80000001U)
                                                                                 : (IData)(
                                                                                VL_DIVS_QQQ(64, 
                                                                                VL_SHIFTL_QQI(64,64,32, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                ((IData)(0x50000U) 
                                                                                - tbGenericVga__DOT__dut__DOT__hit_y)), 0x10U), 
                                                                                VL_EXTENDS_QI(64,32, vlSelfRef.tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__result)))))), 0x10U)) 
                                             + (IData)(
                                                       VL_SHIFTRS_QQI(64,64,32, 
                                                                      VL_MULS_QQQ(64, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                ((0U 
                                                                                == vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__result)
                                                                                 ? 
                                                                                (VL_LTES_III(32, 0U, tbGenericVga__DOT__dut__DOT__norm_raw_z)
                                                                                 ? 0x7fffffffU
                                                                                 : 0x80000001U)
                                                                                 : (IData)(
                                                                                VL_DIVS_QQQ(64, 
                                                                                VL_SHIFTL_QQI(64,64,32, 
                                                                                VL_EXTENDS_QI(64,32, tbGenericVga__DOT__dut__DOT__norm_raw_z), 0x10U), 
                                                                                VL_EXTENDS_QI(64,32, vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__result))))), 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                ((0U 
                                                                                == vlSelfRef.tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__result)
                                                                                 ? 
                                                                                (VL_LTES_III(32, 0U, 
                                                                                ((IData)(0x60000U) 
                                                                                - tbGenericVga__DOT__dut__DOT__hit_z))
                                                                                 ? 0x7fffffffU
                                                                                 : 0x80000001U)
                                                                                 : (IData)(
                                                                                VL_DIVS_QQQ(64, 
                                                                                VL_SHIFTL_QQI(64,64,32, 
                                                                                VL_EXTENDS_QI(64,32, 
                                                                                ((IData)(0x60000U) 
                                                                                - tbGenericVga__DOT__dut__DOT__hit_z)), 0x10U), 
                                                                                VL_EXTENDS_QI(64,32, vlSelfRef.tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__result)))))), 0x10U))));
    vlSelfRef.tbGenericVga__DOT__dut__DOT__final_r = 0U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__final_g = 0U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__final_b = 0x20U;
    tbGenericVga__DOT__dut__DOT__ambient_r = 0U;
    tbGenericVga__DOT__dut__DOT__ambient_g = 0U;
    tbGenericVga__DOT__dut__DOT__ambient_b = 0U;
    tbGenericVga__DOT__dut__DOT__ndotl_clamped = 0U;
    tbGenericVga__DOT__dut__DOT__diffuse_r = 0U;
    tbGenericVga__DOT__dut__DOT__diffuse_g = 0U;
    tbGenericVga__DOT__dut__DOT__diffuse_b = 0U;
    if (tbGenericVga__DOT__dut__DOT__nearest_hit) {
        tbGenericVga__DOT__dut__DOT__ambient_r = (0xffU 
                                                  & VL_SHIFTR_III(8,8,32, (IData)(tbGenericVga__DOT__dut__DOT__nearest_colorR), 3U));
        tbGenericVga__DOT__dut__DOT__ambient_g = (0xffU 
                                                  & VL_SHIFTR_III(8,8,32, (IData)(tbGenericVga__DOT__dut__DOT__nearest_colorG), 3U));
        tbGenericVga__DOT__dut__DOT__ambient_b = (0xffU 
                                                  & VL_SHIFTR_III(8,8,32, (IData)(tbGenericVga__DOT__dut__DOT__nearest_colorB), 3U));
        if (VL_LTS_III(32, 0U, tbGenericVga__DOT__dut__DOT__ndotl)) {
            tbGenericVga__DOT__dut__DOT__ndotl_clamped 
                = (VL_LTS_III(32, 0x10000U, tbGenericVga__DOT__dut__DOT__ndotl)
                    ? 0x10000U : tbGenericVga__DOT__dut__DOT__ndotl);
            tbGenericVga__DOT__dut__DOT__diffuse_r 
                = VL_SHIFTR_III(32,32,32, ((IData)(tbGenericVga__DOT__dut__DOT__nearest_colorR) 
                                           * tbGenericVga__DOT__dut__DOT__ndotl_clamped), 0x10U);
            tbGenericVga__DOT__dut__DOT__diffuse_g 
                = VL_SHIFTR_III(32,32,32, ((IData)(tbGenericVga__DOT__dut__DOT__nearest_colorG) 
                                           * tbGenericVga__DOT__dut__DOT__ndotl_clamped), 0x10U);
            tbGenericVga__DOT__dut__DOT__diffuse_b 
                = VL_SHIFTR_III(32,32,32, ((IData)(tbGenericVga__DOT__dut__DOT__nearest_colorB) 
                                           * tbGenericVga__DOT__dut__DOT__ndotl_clamped), 0x10U);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__final_r 
                = (0xffffU & ((IData)(tbGenericVga__DOT__dut__DOT__ambient_r) 
                              + tbGenericVga__DOT__dut__DOT__diffuse_r));
            vlSelfRef.tbGenericVga__DOT__dut__DOT__final_g 
                = (0xffffU & ((IData)(tbGenericVga__DOT__dut__DOT__ambient_g) 
                              + tbGenericVga__DOT__dut__DOT__diffuse_g));
            vlSelfRef.tbGenericVga__DOT__dut__DOT__final_b 
                = (0xffffU & ((IData)(tbGenericVga__DOT__dut__DOT__ambient_b) 
                              + tbGenericVga__DOT__dut__DOT__diffuse_b));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__final_r 
                = tbGenericVga__DOT__dut__DOT__ambient_r;
            vlSelfRef.tbGenericVga__DOT__dut__DOT__final_g 
                = tbGenericVga__DOT__dut__DOT__ambient_g;
            vlSelfRef.tbGenericVga__DOT__dut__DOT__final_b 
                = tbGenericVga__DOT__dut__DOT__ambient_b;
        }
    } else {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__final_r = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__final_g = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__final_b = 0x20U;
    }
}

VL_ATTR_COLD void VtbGenericVga___024root___eval_triggers__stl(VtbGenericVga___024root* vlSelf);

VL_ATTR_COLD bool VtbGenericVga___024root___eval_phase__stl(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_phase__stl\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VtbGenericVga___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VtbGenericVga___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VtbGenericVga___024root___dump_triggers__act(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___dump_triggers__act\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock50MHz)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge resetn)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VtbGenericVga___024root___dump_triggers__nba(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___dump_triggers__nba\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock50MHz)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge resetn)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VtbGenericVga___024root___ctor_var_reset(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___ctor_var_reset\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clock50MHz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16338176833659517881ull);
    vlSelf->resetn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8624841754543469506ull);
    vlSelf->hSync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10405095437869080945ull);
    vlSelf->vSync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13474973556749001514ull);
    vlSelf->xOrd = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2579758244528848228ull);
    vlSelf->yOrd = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7494390182599160760ull);
    vlSelf->visible = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2645716972831216280ull);
    vlSelf->red = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11208870015262361521ull);
    vlSelf->green = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5450689637559701443ull);
    vlSelf->blue = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 682173560715366168ull);
    vlSelf->tbGenericVga__DOT__xReg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3853948796521526597ull);
    vlSelf->tbGenericVga__DOT__yReg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3162497850089573160ull);
    vlSelf->tbGenericVga__DOT__hSyncReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7374664606162577954ull);
    vlSelf->tbGenericVga__DOT__vSyncReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6939879676752794004ull);
    vlSelf->tbGenericVga__DOT__visibleReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10713821438494026491ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7609707475054059943ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__px_reg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7219018932336722098ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__py_reg = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10467723549230958240ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__cx_arr[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7378292866638134318ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__cy_arr[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11830591611403194169ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__cz_arr[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16392725658098724284ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__radius_arr[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12912137356397226938ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__colorR_arr[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10276338491743566799ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__colorG_arr[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6850422849485968197ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__colorB_arr[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3292532880555991566ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__hit_arr[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4809558988238245754ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__t_arr[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15570861232080238119ull);
    }
    vlSelf->tbGenericVga__DOT__dut__DOT__final_r = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15091661961195794278ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__final_g = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13967829407751544757ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__final_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14283077309440003772ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__u_camera_norm__DOT__u_sqrt__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18184374970869168404ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__u_normal__DOT__u_sqrt__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17490485547824789346ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__u_ldir__DOT__u_sqrt__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5238603158798355140ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1080936256132885960ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7345719258428862232ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__g_sphere__BRA__2__KET____DOT__u_intersect__DOT__u_sqrtDisc__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3891600865782469658ull);
    vlSelf->__Vdly__tbGenericVga__DOT__yReg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17996261440504316600ull);
    vlSelf->__Vdly__tbGenericVga__DOT__xReg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10598295795538325089ull);
    vlSelf->__Vtrigprevexpr___TOP__clock50MHz__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 128179198767269375ull);
    vlSelf->__Vtrigprevexpr___TOP__resetn__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3478702576269267745ull);
}
