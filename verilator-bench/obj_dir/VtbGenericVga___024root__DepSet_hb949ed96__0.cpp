// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtbGenericVga.h for the primary calling header

#include "VtbGenericVga__pch.h"
#include "VtbGenericVga___024root.h"

void VtbGenericVga___024root___eval_act(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_act\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VtbGenericVga___024root___nba_sequent__TOP__0(VtbGenericVga___024root* vlSelf);
void VtbGenericVga___024root___nba_sequent__TOP__1(VtbGenericVga___024root* vlSelf);
void VtbGenericVga___024root___nba_sequent__TOP__2(VtbGenericVga___024root* vlSelf);

void VtbGenericVga___024root___eval_nba(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_nba\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VtbGenericVga___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VtbGenericVga___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VtbGenericVga___024root___nba_sequent__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void VtbGenericVga___024root___nba_sequent__TOP__0(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___nba_sequent__TOP__0\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tbGenericVga__DOT__yReg = vlSelfRef.tbGenericVga__DOT__yReg;
    vlSelfRef.__Vdly__tbGenericVga__DOT__xReg = vlSelfRef.tbGenericVga__DOT__xReg;
}

VL_INLINE_OPT void VtbGenericVga___024root___nba_sequent__TOP__1(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___nba_sequent__TOP__1\n"); );
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
    CData/*1:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__state;
    __Vdly__tbGenericVga__DOT__dut__DOT__state = 0;
    // Body
    __Vdly__tbGenericVga__DOT__dut__DOT__state = vlSelfRef.tbGenericVga__DOT__dut__DOT__state;
    if (vlSelfRef.resetn) {
        if ((2U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__state))) {
            vlSelfRef.blue = ((0xffU < (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__final_b))
                               ? 0xffU : (0xffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__final_b)));
            vlSelfRef.red = ((0xffU < (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__final_r))
                              ? 0xffU : (0xffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__final_r)));
            vlSelfRef.green = ((0xffU < (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__final_g))
                                ? 0xffU : (0xffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__final_g)));
        }
        if ((0U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__state))) {
            if (vlSelfRef.tbGenericVga__DOT__visibleReg) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT__px_reg 
                    = vlSelfRef.tbGenericVga__DOT__xReg;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__py_reg 
                    = (0x1ffU & (IData)(vlSelfRef.tbGenericVga__DOT__yReg));
                __Vdly__tbGenericVga__DOT__dut__DOT__state = 1U;
            }
        } else {
            __Vdly__tbGenericVga__DOT__dut__DOT__state 
                = ((1U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__state))
                    ? 2U : 0U);
        }
    } else {
        vlSelfRef.blue = 0x20U;
        vlSelfRef.red = 0U;
        vlSelfRef.green = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__state = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__px_reg = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__py_reg = 0U;
    }
    vlSelfRef.tbGenericVga__DOT__dut__DOT__state = __Vdly__tbGenericVga__DOT__dut__DOT__state;
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

VL_INLINE_OPT void VtbGenericVga___024root___nba_sequent__TOP__2(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___nba_sequent__TOP__2\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.resetn) {
        if ((0x31fU == (IData)(vlSelfRef.tbGenericVga__DOT__xReg))) {
            vlSelfRef.__Vdly__tbGenericVga__DOT__yReg 
                = ((0x20cU == (IData)(vlSelfRef.tbGenericVga__DOT__yReg))
                    ? 0U : (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__yReg))));
            vlSelfRef.__Vdly__tbGenericVga__DOT__xReg = 0U;
        } else {
            vlSelfRef.__Vdly__tbGenericVga__DOT__xReg 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__xReg)));
        }
        vlSelfRef.tbGenericVga__DOT__hSyncReg = (1U 
                                                 & (~ 
                                                    ((0x290U 
                                                      <= (IData)(vlSelfRef.tbGenericVga__DOT__xReg)) 
                                                     & (0x2f0U 
                                                        > (IData)(vlSelfRef.tbGenericVga__DOT__xReg)))));
        vlSelfRef.tbGenericVga__DOT__vSyncReg = (1U 
                                                 & (~ 
                                                    ((0x1eaU 
                                                      <= (IData)(vlSelfRef.tbGenericVga__DOT__yReg)) 
                                                     & (0x1ecU 
                                                        > (IData)(vlSelfRef.tbGenericVga__DOT__yReg)))));
        vlSelfRef.tbGenericVga__DOT__visibleReg = (
                                                   (0x280U 
                                                    > (IData)(vlSelfRef.tbGenericVga__DOT__xReg)) 
                                                   & (0x1e0U 
                                                      > (IData)(vlSelfRef.tbGenericVga__DOT__yReg)));
    } else {
        vlSelfRef.__Vdly__tbGenericVga__DOT__yReg = 0U;
        vlSelfRef.__Vdly__tbGenericVga__DOT__xReg = 0U;
        vlSelfRef.tbGenericVga__DOT__hSyncReg = 1U;
        vlSelfRef.tbGenericVga__DOT__vSyncReg = 1U;
        vlSelfRef.tbGenericVga__DOT__visibleReg = 0U;
    }
    vlSelfRef.tbGenericVga__DOT__yReg = vlSelfRef.__Vdly__tbGenericVga__DOT__yReg;
    vlSelfRef.tbGenericVga__DOT__xReg = vlSelfRef.__Vdly__tbGenericVga__DOT__xReg;
    vlSelfRef.yOrd = vlSelfRef.tbGenericVga__DOT__yReg;
    vlSelfRef.xOrd = vlSelfRef.tbGenericVga__DOT__xReg;
    vlSelfRef.hSync = vlSelfRef.tbGenericVga__DOT__hSyncReg;
    vlSelfRef.vSync = vlSelfRef.tbGenericVga__DOT__vSyncReg;
    vlSelfRef.visible = vlSelfRef.tbGenericVga__DOT__visibleReg;
}

void VtbGenericVga___024root___eval_triggers__act(VtbGenericVga___024root* vlSelf);

bool VtbGenericVga___024root___eval_phase__act(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_phase__act\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VtbGenericVga___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VtbGenericVga___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VtbGenericVga___024root___eval_phase__nba(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_phase__nba\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VtbGenericVga___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VtbGenericVga___024root___dump_triggers__nba(VtbGenericVga___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VtbGenericVga___024root___dump_triggers__act(VtbGenericVga___024root* vlSelf);
#endif  // VL_DEBUG

void VtbGenericVga___024root___eval(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VtbGenericVga___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb\\tbGenericVga.v", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VtbGenericVga___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb\\tbGenericVga.v", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VtbGenericVga___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VtbGenericVga___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VtbGenericVga___024root___eval_debug_assertions(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_debug_assertions\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clock50MHz & 0xfeU)))) {
        Verilated::overWidthError("clock50MHz");}
    if (VL_UNLIKELY(((vlSelfRef.resetn & 0xfeU)))) {
        Verilated::overWidthError("resetn");}
}
#endif  // VL_DEBUG
