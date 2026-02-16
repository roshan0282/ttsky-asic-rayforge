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

void VtbGenericVga___024root___eval_nba(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_nba\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VtbGenericVga___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VtbGenericVga___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void VtbGenericVga___024root___nba_sequent__TOP__0(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___nba_sequent__TOP__0\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__spi_miso_buf_n 
        = (0xf0U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__spi_miso_buf_n) 
                    << 4U));
}

extern const VlUnpacked<CData/*1:0*/, 128> VtbGenericVga__ConstPool__TABLE_h7779f402_0;
extern const VlUnpacked<CData/*1:0*/, 128> VtbGenericVga__ConstPool__TABLE_h53e60f5e_0;
extern const VlUnpacked<CData/*1:0*/, 128> VtbGenericVga__ConstPool__TABLE_ha2a124cc_0;
extern const VlUnpacked<CData/*7:0*/, 128> VtbGenericVga__ConstPool__TABLE_h980e3843_0;
extern const VlUnpacked<CData/*5:0*/, 16> VtbGenericVga__ConstPool__TABLE_h7ea3c2be_0;

VL_INLINE_OPT void VtbGenericVga___024root___nba_sequent__TOP__1(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___nba_sequent__TOP__1\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlUnpacked<CData/*3:0*/, 4> tbGenericVga__DOT__dut__DOT__buffer;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        tbGenericVga__DOT__dut__DOT__buffer[__Vi0] = 0;
    }
    CData/*0:0*/ tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_2;
    tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_2 = 0;
    CData/*0:0*/ tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_6;
    tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_6 = 0;
    CData/*0:0*/ tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_7;
    tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_7 = 0;
    CData/*0:0*/ tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_10;
    tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_10 = 0;
    CData/*0:0*/ tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_11;
    tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_11 = 0;
    CData/*0:0*/ tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_12;
    tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_12 = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__driver__DOT__decoder__DOT____VdfgRegularize_h9433714a_0_0;
    tbGenericVga__DOT__dut__DOT__driver__DOT__decoder__DOT____VdfgRegularize_h9433714a_0_0 = 0;
    CData/*5:0*/ tbGenericVga__DOT__dut__DOT___color__DOT__mem;
    tbGenericVga__DOT__dut__DOT___color__DOT__mem = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*0:0*/ __Vdly__tbGenericVga__DOT__pixelClk;
    __Vdly__tbGenericVga__DOT__pixelClk = 0;
    SData/*9:0*/ __Vdly__tbGenericVga__DOT__yCounter;
    __Vdly__tbGenericVga__DOT__yCounter = 0;
    SData/*9:0*/ __Vdly__tbGenericVga__DOT__xCounter;
    __Vdly__tbGenericVga__DOT__xCounter = 0;
    CData/*4:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__fsm_state;
    __Vdly__tbGenericVga__DOT__dut__DOT__fsm_state = 0;
    IData/*17:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__numread;
    __Vdly__tbGenericVga__DOT__dut__DOT__numread = 0;
    CData/*4:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__read_delay;
    __Vdly__tbGenericVga__DOT__dut__DOT__read_delay = 0;
    CData/*0:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__has_tex;
    __Vdly__tbGenericVga__DOT__dut__DOT__has_tex = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__i_numtri_byte;
    __Vdly__tbGenericVga__DOT__dut__DOT__i_numtri_byte = 0;
    CData/*7:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__sub_frame;
    __Vdly__tbGenericVga__DOT__dut__DOT__sub_frame = 0;
    SData/*9:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__v__DOT__yc;
    __Vdly__tbGenericVga__DOT__dut__DOT__v__DOT__yc = 0;
    SData/*9:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__v__DOT__xc;
    __Vdly__tbGenericVga__DOT__dut__DOT__v__DOT__xc = 0;
    CData/*1:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_data_sync;
    __Vdly__tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_data_sync = 0;
    CData/*1:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_clk_sync;
    __Vdly__tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_clk_sync = 0;
    CData/*1:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_latch_sync;
    __Vdly__tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_latch_sync = 0;
    SData/*11:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__shift_reg;
    __Vdly__tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__shift_reg = 0;
    CData/*0:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__manualRot;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__manualRot = 0;
    CData/*0:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__do_swap;
    __Vdly__tbGenericVga__DOT__dut__DOT__do_swap = 0;
    CData/*7:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0;
    SData/*8:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle = 0;
    SData/*8:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle = 0;
    CData/*7:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__translate_z;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__translate_z = 0;
    SData/*8:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light = 0;
    SData/*8:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle_90;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle_90 = 0;
    SData/*8:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle_90;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle_90 = 0;
    SData/*8:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light_90;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light_90 = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinPhi;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinPhi = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosPhi;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosPhi = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta = 0;
    CData/*0:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_sinPhi;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_sinPhi = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_cosPhi;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_cosPhi = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_cosPhi;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_cosPhi = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_sinPhi;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_sinPhi = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_Tz;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_Tz = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_sinPhi_Tz;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_sinPhi_Tz = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_cosPhi_Tz;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_cosPhi_Tz = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinLight;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinLight = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosLight;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosLight = 0;
    CData/*0:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_x;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_x = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_y;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_y = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_z;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_z = 0;
    SData/*9:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_idx;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_idx = 0;
    IData/*17:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread = 0;
    CData/*4:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v0;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v0 = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v0;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v0 = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v0;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v0 = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v1;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v1 = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v1;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v1 = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v1;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v1 = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v2;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v2 = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v2;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v2 = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v2;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v2 = 0;
    CData/*1:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_color;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_color = 0;
    CData/*7:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v0_u;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v0_u = 0;
    CData/*7:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_u;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_u = 0;
    CData/*7:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_u;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_u = 0;
    CData/*7:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v0_v;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v0_v = 0;
    CData/*7:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_v;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_v = 0;
    CData/*7:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_v;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_v = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v0;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v0 = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v0;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v0 = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v0;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v0 = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v0;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v0 = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v1;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v1 = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v1;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v1 = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v1;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v1 = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v1;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v1 = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v2;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v2 = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v2;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v2 = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v2;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v2 = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v2;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v2 = 0;
    IData/*21:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v0;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v0 = 0;
    IData/*19:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v0;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v0 = 0;
    IData/*19:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v1;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v1 = 0;
    IData/*19:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v2;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v2 = 0;
    IData/*19:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v0;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v0 = 0;
    IData/*19:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v1;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v1 = 0;
    IData/*19:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v2;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v2 = 0;
    IData/*21:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v1;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v1 = 0;
    IData/*21:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v2;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v2 = 0;
    CData/*3:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__shade_color;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__shade_color = 0;
    IData/*19:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_X;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_X = 0;
    IData/*19:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_Y;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_Y = 0;
    IData/*19:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMax_X;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMax_X = 0;
    IData/*19:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMax_Y;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMax_Y = 0;
    IData/*19:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul1;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul1 = 0;
    IData/*19:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul2;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul2 = 0;
    IData/*19:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0_init;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0_init = 0;
    IData/*19:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1_init;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1_init = 0;
    IData/*19:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2_init;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2_init = 0;
    IData/*21:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__denom;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__denom = 0;
    IData/*21:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy = 0;
    IData/*21:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy_dy;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy_dy = 0;
    IData/*21:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy_dx;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy_dx = 0;
    IData/*21:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz = 0;
    IData/*21:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz_dy;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz_dy = 0;
    IData/*21:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix = 0;
    IData/*21:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz_dx;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz_dx = 0;
    IData/*21:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix_dy;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix_dy = 0;
    IData/*21:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix_dx;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix_dx = 0;
    IData/*21:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar = 0;
    IData/*21:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dx;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dx = 0;
    IData/*21:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dy;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dy = 0;
    SData/*9:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_y;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_y = 0;
    IData/*21:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar = 0;
    IData/*21:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dx;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dx = 0;
    IData/*21:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dy;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dy = 0;
    IData/*21:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar = 0;
    IData/*21:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dx;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dx = 0;
    IData/*21:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dy;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dy = 0;
    IData/*19:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0 = 0;
    IData/*21:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_z;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_z = 0;
    IData/*21:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u = 0;
    IData/*21:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_v;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_v = 0;
    SData/*9:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_x;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_x = 0;
    IData/*19:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1 = 0;
    IData/*19:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2 = 0;
    CData/*0:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u8;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u8 = 0;
    CData/*7:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel = 0;
    CData/*0:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_done;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_done = 0;
    CData/*2:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__state;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__state = 0;
    CData/*6:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__i;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__i = 0;
    IData/*30:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__quo;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__quo = 0;
    IData/*31:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_result;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_result = 0;
    CData/*0:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_done;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_done = 0;
    CData/*2:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__state;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__state = 0;
    CData/*6:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__i;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__i = 0;
    QData/*38:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo = 0;
    QData/*39:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_result;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_result = 0;
    CData/*0:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_busy;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_busy = 0;
    QData/*43:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__partial;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__partial = 0;
    CData/*4:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__count;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__count = 0;
    CData/*0:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_start;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_start = 0;
    CData/*2:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__state;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__state = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__tmp_vs_mul1;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__tmp_vs_mul1 = 0;
    CData/*0:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_busy;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_busy = 0;
    IData/*31:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__partial;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__partial = 0;
    CData/*3:0*/ __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__count;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__count = 0;
    CData/*2:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__fsm_state;
    __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__fsm_state = 0;
    CData/*0:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__is_writing;
    __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__is_writing = 0;
    CData/*4:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__bits_remaining;
    __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__bits_remaining = 0;
    CData/*0:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__spi_data_req;
    __Vdly__tbGenericVga__DOT__dut__DOT__spi_data_req = 0;
    CData/*0:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__spi_at_quadmode;
    __Vdly__tbGenericVga__DOT__dut__DOT__spi_at_quadmode = 0;
    CData/*0:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__doing_quadmode;
    __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__doing_quadmode = 0;
    CData/*3:0*/ __VdlyVal__tbGenericVga__DOT__dut__DOT__pixels__v0;
    __VdlyVal__tbGenericVga__DOT__dut__DOT__pixels__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tbGenericVga__DOT__dut__DOT__pixels__v0;
    __VdlyDim0__tbGenericVga__DOT__dut__DOT__pixels__v0 = 0;
    CData/*0:0*/ __VdlySet__tbGenericVga__DOT__dut__DOT__pixels__v0;
    __VdlySet__tbGenericVga__DOT__dut__DOT__pixels__v0 = 0;
    CData/*3:0*/ __VdlyVal__tbGenericVga__DOT__dut__DOT__pixels__v1;
    __VdlyVal__tbGenericVga__DOT__dut__DOT__pixels__v1 = 0;
    CData/*2:0*/ __VdlyDim0__tbGenericVga__DOT__dut__DOT__pixels__v1;
    __VdlyDim0__tbGenericVga__DOT__dut__DOT__pixels__v1 = 0;
    CData/*0:0*/ __VdlySet__tbGenericVga__DOT__dut__DOT__pixels__v1;
    __VdlySet__tbGenericVga__DOT__dut__DOT__pixels__v1 = 0;
    CData/*3:0*/ __VdlyVal__tbGenericVga__DOT__dut__DOT__buffer__v0;
    __VdlyVal__tbGenericVga__DOT__dut__DOT__buffer__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tbGenericVga__DOT__dut__DOT__buffer__v0;
    __VdlyDim0__tbGenericVga__DOT__dut__DOT__buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__tbGenericVga__DOT__dut__DOT__buffer__v0;
    __VdlySet__tbGenericVga__DOT__dut__DOT__buffer__v0 = 0;
    CData/*3:0*/ __VdlyVal__tbGenericVga__DOT__dut__DOT__buffer__v1;
    __VdlyVal__tbGenericVga__DOT__dut__DOT__buffer__v1 = 0;
    CData/*1:0*/ __VdlyDim0__tbGenericVga__DOT__dut__DOT__buffer__v1;
    __VdlyDim0__tbGenericVga__DOT__dut__DOT__buffer__v1 = 0;
    CData/*0:0*/ __VdlySet__tbGenericVga__DOT__dut__DOT__buffer__v1;
    __VdlySet__tbGenericVga__DOT__dut__DOT__buffer__v1 = 0;
    CData/*3:0*/ __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v0;
    __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v0 = 0;
    CData/*3:0*/ __VdlyLsb__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v0;
    __VdlyLsb__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v0;
    __VdlyDim0__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v0 = 0;
    CData/*0:0*/ __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v0;
    __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v0 = 0;
    CData/*3:0*/ __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v1;
    __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v1 = 0;
    CData/*3:0*/ __VdlyLsb__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v1;
    __VdlyLsb__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v1 = 0;
    CData/*3:0*/ __VdlyDim0__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v1;
    __VdlyDim0__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v1 = 0;
    CData/*0:0*/ __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v1;
    __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v1 = 0;
    CData/*3:0*/ __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v0;
    __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v0 = 0;
    CData/*2:0*/ __VdlyLsb__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v0;
    __VdlyLsb__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v0;
    __VdlyDim0__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v0;
    __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v0 = 0;
    CData/*3:0*/ __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v1;
    __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v1 = 0;
    CData/*2:0*/ __VdlyLsb__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v1;
    __VdlyLsb__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v1 = 0;
    CData/*1:0*/ __VdlyDim0__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v1;
    __VdlyDim0__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v1 = 0;
    CData/*0:0*/ __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v1;
    __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v1 = 0;
    CData/*3:0*/ __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v0;
    __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v0;
    __VdlyDim0__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v0;
    __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v0 = 0;
    CData/*3:0*/ __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v1;
    __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v1 = 0;
    CData/*1:0*/ __VdlyDim0__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v1;
    __VdlyDim0__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v1 = 0;
    CData/*0:0*/ __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v1;
    __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v1 = 0;
    CData/*3:0*/ __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v0;
    __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v0 = 0;
    CData/*0:0*/ __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v0;
    __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v0 = 0;
    CData/*3:0*/ __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v1;
    __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v1 = 0;
    CData/*0:0*/ __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v1;
    __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v1 = 0;
    CData/*3:0*/ __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v2;
    __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v2 = 0;
    CData/*0:0*/ __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v2;
    __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v2 = 0;
    CData/*3:0*/ __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v3;
    __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v3 = 0;
    CData/*0:0*/ __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v3;
    __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v3 = 0;
    CData/*3:0*/ __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v2;
    __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v2 = 0;
    CData/*0:0*/ __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v2;
    __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v2 = 0;
    CData/*7:0*/ __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v2;
    __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v2 = 0;
    CData/*3:0*/ __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v3;
    __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v3 = 0;
    CData/*0:0*/ __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v3;
    __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v3 = 0;
    CData/*7:0*/ __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v3;
    __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v3 = 0;
    CData/*3:0*/ __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v4;
    __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v4;
    __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v4 = 0;
    CData/*7:0*/ __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v4;
    __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v4 = 0;
    CData/*3:0*/ __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v5;
    __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v5 = 0;
    CData/*0:0*/ __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v5;
    __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v5 = 0;
    CData/*7:0*/ __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v5;
    __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v5 = 0;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    // Body
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__count 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__count;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__count 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__count;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__partial 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__partial;
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__partial 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__partial;
    __Vdly__tbGenericVga__DOT__pixelClk = vlSelfRef.tbGenericVga__DOT__pixelClk;
    __Vdly__tbGenericVga__DOT__yCounter = vlSelfRef.tbGenericVga__DOT__yCounter;
    __Vdly__tbGenericVga__DOT__xCounter = vlSelfRef.tbGenericVga__DOT__xCounter;
    __Vdly__tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_data_sync 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_data_sync;
    __Vdly__tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_clk_sync 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_clk_sync;
    __Vdly__tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_latch_sync 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_latch_sync;
    if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_busy) {
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_busy = 1U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_busy 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_busy;
        __Vdly__tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__shift_reg 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__shift_reg;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_start 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_start;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__state 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__state;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__tmp_vs_mul1 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__tmp_vs_mul1;
        __Vdly__tbGenericVga__DOT__dut__DOT__v__DOT__yc 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__yc;
        __Vdly__tbGenericVga__DOT__dut__DOT__v__DOT__xc 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__xc;
        __Vdly__tbGenericVga__DOT__dut__DOT__fsm_state 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state;
        __Vdly__tbGenericVga__DOT__dut__DOT__numread 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__numread;
        __Vdly__tbGenericVga__DOT__dut__DOT__read_delay 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__read_delay;
        __Vdly__tbGenericVga__DOT__dut__DOT__i_numtri_byte 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__i_numtri_byte;
        __VdlySet__tbGenericVga__DOT__dut__DOT__pixels__v0 = 0U;
        __VdlySet__tbGenericVga__DOT__dut__DOT__pixels__v1 = 0U;
        __VdlySet__tbGenericVga__DOT__dut__DOT__buffer__v0 = 0U;
        __VdlySet__tbGenericVga__DOT__dut__DOT__buffer__v1 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__has_tex 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex;
        __Vdly__tbGenericVga__DOT__dut__DOT__sub_frame 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__sub_frame;
        __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__fsm_state 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__fsm_state;
        __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__is_writing 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__is_writing;
        __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__bits_remaining 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__bits_remaining;
        __Vdly__tbGenericVga__DOT__dut__DOT__spi_data_req 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_data_req;
        __Vdly__tbGenericVga__DOT__dut__DOT__spi_at_quadmode 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_at_quadmode;
        __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__doing_quadmode 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__doing_quadmode;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__manualRot 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__manualRot;
        __Vdly__tbGenericVga__DOT__dut__DOT__do_swap 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__do_swap;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__translate_z 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__translate_z;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle_90 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle_90;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle_90 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle_90;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light_90 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light_90;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinPhi 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinPhi;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosPhi 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosPhi;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_sinPhi 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_sinPhi;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_cosPhi 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_cosPhi;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_cosPhi 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_cosPhi;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_sinPhi 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_sinPhi;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_Tz 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_Tz;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_sinPhi_Tz 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_sinPhi_Tz;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_cosPhi_Tz 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_cosPhi_Tz;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_x 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_x;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_y 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_y;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_z 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_z;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_color 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_color;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v0_u 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v0_u;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_u 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_u;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_u 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_u;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v0_v 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v0_v;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_v 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_v;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_v 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_v;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v0 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v0;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v0 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v0;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v0 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v0;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v0 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v0;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v1 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v1;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v1 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v1;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v1 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v1;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v1 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v1;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v2 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v2;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v2 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v2;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v2 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v2;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v2 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v2;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v0 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v0;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v0 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v0;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v1 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v1;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v2 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v2;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v0 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v0;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v1 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v1;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v2 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v2;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v1 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v1;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v2 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v2;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__shade_color 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__shade_color;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_X 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_X;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_Y 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_Y;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMax_X 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMax_X;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMax_Y 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMax_Y;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul1 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul1;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul2 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul2;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0_init 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0_init;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1_init 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1_init;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2_init 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2_init;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__denom 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__denom;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy_dy 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy_dy;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy_dx 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy_dx;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz_dy 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz_dy;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz_dx 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz_dx;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix_dy 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix_dy;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix_dx 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix_dx;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dx 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dx;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dy 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dy;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_y 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_y;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dx 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dx;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dy 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dy;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dx 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dx;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dy 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dy;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_z 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_z;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_v 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_v;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_x 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_x;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u8 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u8;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_idx 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_idx;
        __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v0 = 0U;
        __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v1 = 0U;
        __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v0 = 0U;
        __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v1 = 0U;
        __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v2 = 0U;
        __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v3 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v0 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v0;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v0 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v0;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v0 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v0;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v1 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v1;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v1 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v1;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v1 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v1;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v2 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v2;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v2 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v2;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v2 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v2;
        __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v0 = 0U;
        __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v1 = 0U;
        __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v0 = 0U;
        __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v1 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinLight 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinLight;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosLight 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosLight;
        __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v2 = 0U;
        __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v3 = 0U;
        __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v4 = 0U;
        __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v5 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_done 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_done;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__state 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__state;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__i 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__i;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_result 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_result;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_done 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_done;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__state 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__state;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__i 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__i;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_result 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_result;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__quo 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__quo;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__count 
            = (0x1fU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__count) 
                        - (IData)(1U)));
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__partial 
            = ((0xfffffe00000ULL & __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__partial) 
               | (IData)((IData)((0x1fffffU & (IData)(
                                                      (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__partial 
                                                       >> 1U))))));
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__partial 
            = ((0x1fffffULL & __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__partial) 
               | ((QData)((IData)((0x7fffffU & ((0U 
                                                 == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__count))
                                                 ? 
                                                ((0x3fffffU 
                                                  & (IData)(
                                                            (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__partial 
                                                             >> 0x16U))) 
                                                 + 
                                                 ((0x200000U 
                                                   & vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__pwire) 
                                                  | (0x1fffffU 
                                                     & (~ vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__pwire))))
                                                 : 
                                                ((0x3fffffU 
                                                  & (IData)(
                                                            (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__partial 
                                                             >> 0x16U))) 
                                                 + 
                                                 ((0x200000U 
                                                   & ((~ 
                                                       (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__pwire 
                                                        >> 0x15U)) 
                                                      << 0x15U)) 
                                                  | (0x1fffffU 
                                                     & vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__pwire))))))) 
                  << 0x15U));
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__p_b 
            = (0x3fffffU & VL_SHIFTR_III(22,22,32, vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__p_b, 1U));
    } else {
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_busy = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_busy 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_busy;
        __Vdly__tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__shift_reg 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__shift_reg;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_start 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_start;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__state 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__state;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__tmp_vs_mul1 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__tmp_vs_mul1;
        __Vdly__tbGenericVga__DOT__dut__DOT__v__DOT__yc 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__yc;
        __Vdly__tbGenericVga__DOT__dut__DOT__v__DOT__xc 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__xc;
        __Vdly__tbGenericVga__DOT__dut__DOT__fsm_state 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state;
        __Vdly__tbGenericVga__DOT__dut__DOT__numread 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__numread;
        __Vdly__tbGenericVga__DOT__dut__DOT__read_delay 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__read_delay;
        __Vdly__tbGenericVga__DOT__dut__DOT__i_numtri_byte 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__i_numtri_byte;
        __VdlySet__tbGenericVga__DOT__dut__DOT__pixels__v0 = 0U;
        __VdlySet__tbGenericVga__DOT__dut__DOT__pixels__v1 = 0U;
        __VdlySet__tbGenericVga__DOT__dut__DOT__buffer__v0 = 0U;
        __VdlySet__tbGenericVga__DOT__dut__DOT__buffer__v1 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__has_tex 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex;
        __Vdly__tbGenericVga__DOT__dut__DOT__sub_frame 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__sub_frame;
        __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__fsm_state 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__fsm_state;
        __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__is_writing 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__is_writing;
        __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__bits_remaining 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__bits_remaining;
        __Vdly__tbGenericVga__DOT__dut__DOT__spi_data_req 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_data_req;
        __Vdly__tbGenericVga__DOT__dut__DOT__spi_at_quadmode 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_at_quadmode;
        __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__doing_quadmode 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__doing_quadmode;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__manualRot 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__manualRot;
        __Vdly__tbGenericVga__DOT__dut__DOT__do_swap 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__do_swap;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__translate_z 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__translate_z;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle_90 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle_90;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle_90 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle_90;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light_90 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light_90;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinPhi 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinPhi;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosPhi 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosPhi;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_sinPhi 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_sinPhi;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_cosPhi 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_cosPhi;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_cosPhi 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_cosPhi;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_sinPhi 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_sinPhi;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_Tz 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_Tz;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_sinPhi_Tz 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_sinPhi_Tz;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_cosPhi_Tz 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_cosPhi_Tz;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_x 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_x;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_y 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_y;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_z 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_z;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_color 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_color;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v0_u 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v0_u;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_u 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_u;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_u 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_u;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v0_v 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v0_v;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_v 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_v;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_v 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_v;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v0 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v0;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v0 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v0;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v0 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v0;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v0 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v0;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v1 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v1;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v1 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v1;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v1 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v1;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v1 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v1;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v2 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v2;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v2 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v2;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v2 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v2;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v2 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v2;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v0 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v0;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v0 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v0;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v1 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v1;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v2 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v2;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v0 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v0;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v1 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v1;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v2 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v2;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v1 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v1;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v2 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v2;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__shade_color 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__shade_color;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_X 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_X;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_Y 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_Y;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMax_X 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMax_X;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMax_Y 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMax_Y;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul1 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul1;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul2 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul2;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0_init 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0_init;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1_init 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1_init;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2_init 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2_init;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__denom 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__denom;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy_dy 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy_dy;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy_dx 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy_dx;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz_dy 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz_dy;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz_dx 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz_dx;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix_dy 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix_dy;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix_dx 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix_dx;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dx 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dx;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dy 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dy;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_y 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_y;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dx 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dx;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dy 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dy;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dx 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dx;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dy 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dy;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_z 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_z;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_v 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_v;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_x 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_x;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u8 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u8;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_idx 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_idx;
        __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v0 = 0U;
        __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v1 = 0U;
        __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v0 = 0U;
        __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v1 = 0U;
        __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v2 = 0U;
        __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v3 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v0 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v0;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v0 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v0;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v0 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v0;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v1 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v1;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v1 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v1;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v1 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v1;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v2 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v2;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v2 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v2;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v2 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v2;
        __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v0 = 0U;
        __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v1 = 0U;
        __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v0 = 0U;
        __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v1 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinLight 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinLight;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosLight 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosLight;
        __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v2 = 0U;
        __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v3 = 0U;
        __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v4 = 0U;
        __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v5 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_done 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_done;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__state 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__state;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__i 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__i;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_result 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_result;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_done 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_done;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__state 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__state;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__i 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__i;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_result 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_result;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__quo 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__quo;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__count = 0x15U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__partial = 0ULL;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__p_b 
            = (0x3fffffU & vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b);
    }
    if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_busy) {
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__count 
            = (0xfU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__count) 
                       - (IData)(1U)));
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__partial 
            = ((0xffff8000U & __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__partial) 
               | (0x7fffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__partial 
                             >> 1U)));
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__partial 
            = ((0x7fffU & __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__partial) 
               | (((0U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__count))
                    ? ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__partial 
                        >> 0x10U) + ((0x8000U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__pwire)) 
                                     | (0x7fffU & (~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__pwire)))))
                    : ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__partial 
                        >> 0x10U) + ((0x8000U & ((~ 
                                                  ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__pwire) 
                                                   >> 0xfU)) 
                                                 << 0xfU)) 
                                     | (0x7fffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__pwire))))) 
                  << 0xfU));
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__p_b 
            = (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__p_b), 1U));
    } else {
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__count = 0xfU;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__partial = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__p_b 
            = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_b));
    }
    __Vdly__tbGenericVga__DOT__pixelClk = ((IData)(vlSelfRef.resetn) 
                                           && (1U & 
                                               (~ (IData)(vlSelfRef.tbGenericVga__DOT__pixelClk))));
    __Vtableidx1 = ((((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_latch_sync) 
                      << 5U) | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_clk_sync) 
                                << 3U)) | (((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_data_sync) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.resetn)));
    __Vdly__tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_data_sync 
        = VtbGenericVga__ConstPool__TABLE_h7779f402_0
        [__Vtableidx1];
    __Vdly__tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_clk_sync 
        = VtbGenericVga__ConstPool__TABLE_h53e60f5e_0
        [__Vtableidx1];
    __Vdly__tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_latch_sync 
        = VtbGenericVga__ConstPool__TABLE_ha2a124cc_0
        [__Vtableidx1];
    if ((1U & ((~ (IData)(vlSelfRef.resetn)) | (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_stop_txn)))) {
        __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__fsm_state = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__is_writing = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__bits_remaining = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__spi_data_req = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__spi_at_quadmode = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__doing_quadmode = 0U;
    } else {
        __Vdly__tbGenericVga__DOT__dut__DOT__spi_data_req = 0U;
        if ((0U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__fsm_state))) {
            if ((((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_start_read) 
                  | (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_start_write)) 
                 | (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_enter_quadmode))) {
                if (((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_select_ROM) 
                     | (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_enter_quadmode))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__bits_remaining = 7U;
                    __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__doing_quadmode 
                        = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_enter_quadmode)
                            ? 1U : 0U);
                } else {
                    __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__is_writing 
                        = (1U & (~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_start_read)));
                    __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__bits_remaining = 1U;
                }
                __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__fsm_state = 1U;
            }
        } else if ((7U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__fsm_state))) {
            __Vdly__tbGenericVga__DOT__dut__DOT__spi_data_req 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__is_writing;
        } else if ((0U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__bits_remaining))) {
            __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__fsm_state 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__fsm_state)));
            if ((1U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__fsm_state))) {
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__doing_quadmode) {
                    __Vdly__tbGenericVga__DOT__dut__DOT__spi_at_quadmode = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__fsm_state = 0U;
                } else {
                    __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__bits_remaining = 5U;
                }
            } else if ((2U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__fsm_state))) {
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_select_ROM) {
                    __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__bits_remaining = 5U;
                } else if (vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__is_writing) {
                    __Vdly__tbGenericVga__DOT__dut__DOT__spi_data_req = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__fsm_state = 7U;
                } else {
                    __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__bits_remaining = 3U;
                }
            } else if ((3U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__bits_remaining = 0U;
            } else if ((4U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__bits_remaining = 0U;
            } else if ((5U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__bits_remaining = 0U;
            }
        } else {
            __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__bits_remaining 
                = (0x1fU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__bits_remaining) 
                            - (IData)(1U)));
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.resetn)))) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__light_x = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__light_z = 0x100U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__driver__DOT__gamepad_pmod_data = 0xfffU;
        __Vdly__tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__shift_reg = 0xfffU;
    }
    if ((IData)((((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_latch_sync) 
                  >> 1U) & (~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_latch_prev))))) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__driver__DOT__gamepad_pmod_data 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__shift_reg;
    }
    if ((IData)((((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_clk_sync) 
                  >> 1U) & (~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_clk_prev))))) {
        __Vdly__tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__shift_reg 
            = ((0xffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__shift_reg) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_data_sync) 
                                           >> 1U)));
    }
    if ((1U & (~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_busy)))) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__p_a 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_a;
    }
    if ((1U & (~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_busy)))) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__p_a 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a;
    }
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_done = 0U;
    if ((1U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__state))) {
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__state = 2U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__i = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__acc 
            = (IData)(((QData)((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__au)) 
                       >> 0x1eU));
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__quo 
            = (0x7ffffffeU & ((IData)((QData)((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__au))) 
                              << 1U));
    } else if ((2U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__state))) {
        if (((0x1eU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__i)) 
             & (0U != (0xffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__quo_next 
                                  >> 0xfU))))) {
            __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__state = 0U;
            __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_done = 1U;
        } else {
            if ((0x2eU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__i))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__state = 3U;
            }
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__acc 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__acc_next;
            __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__quo 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__quo_next;
            __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__i 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__i)));
        }
    } else if ((3U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__state))) {
        if ((1U & vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__quo_next)) {
            if ((1U & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__quo 
                       | (0U != (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__acc_next 
                                 >> 1U))))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__quo 
                    = (0x7fffffffU & ((IData)(1U) + vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__quo));
            }
        }
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__state = 4U;
    } else if ((4U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__state))) {
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__state = 0U;
        if ((0U != vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__quo)) {
            __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_result 
                = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__sig_diff)
                    ? (0x80000000U | (0x7fffffffU & 
                                      (- vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__quo)))
                    : vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__quo);
        }
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_done = 1U;
    } else if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_start) {
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_result = 0U;
        if ((0U == vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_b)) {
            __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__state = 0U;
            __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_done = 1U;
        } else if (((0x80000000U == vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_a) 
                    | (0x80000000U == vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_b))) {
            __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__state = 0U;
            __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_done = 1U;
        } else {
            __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__state = 1U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__au 
                = (0x7fffffffU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_a 
                                   >> 0x1fU) ? (- vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_a)
                                   : vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_a));
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__bu 
                = (0x7fffffffU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_b 
                                   >> 0x1fU) ? (- vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_b)
                                   : vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_b));
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__sig_diff 
                = ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_a 
                    ^ vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_b) 
                   >> 0x1fU);
        }
    }
    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_done = 0U;
    if ((1U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__state))) {
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__state = 2U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__i = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__acc 
            = (0xffffffffffULL & ((QData)((IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__au 
                                                   >> 0x20U))) 
                                  >> 6U));
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo 
            = (0x7ffffffffeULL & (((QData)((IData)(
                                                   (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__au 
                                                    >> 0x20U))) 
                                   << 0x21U) | ((QData)((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__au)) 
                                                << 1U)));
    } else if ((2U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__state))) {
        if (((0x26U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__i)) 
             & (0U != (0xfffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo_next 
                                           >> 0x13U)))))) {
            __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__state = 0U;
            __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_done = 1U;
        } else {
            if ((0x3aU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__i))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__state = 3U;
            }
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__acc 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__acc_next;
            __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo_next;
            __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__i 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__i)));
        }
    } else if ((3U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo_next))) {
            if ((IData)((1ULL & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo 
                                 | (0ULL != (0xfffffffffeULL 
                                             & vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__acc_next)))))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo 
                    = (0x7fffffffffULL & (1ULL + vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo));
            }
        }
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__state = 4U;
    } else if ((4U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__state))) {
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__state = 0U;
        if ((0ULL != vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo)) {
            __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_result 
                = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__sig_diff)
                    ? (0x8000000000ULL | (0x7fffffffffULL 
                                          & (- vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo)))
                    : vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo);
        }
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_done = 1U;
    } else if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_start) {
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_result = 0ULL;
        if ((0ULL == vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_b)) {
            __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__state = 0U;
            __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_done = 1U;
        } else if (((0x8000000000ULL == vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_a) 
                    | (0x8000000000ULL == vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_b))) {
            __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__state = 0U;
            __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_done = 1U;
        } else {
            __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__state = 1U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__au 
                = (0x7fffffffffULL & ((1U & (IData)(
                                                    (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_a 
                                                     >> 0x27U)))
                                       ? (- vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_a)
                                       : vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_a));
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__bu 
                = (0x7fffffffffULL & ((1U & (IData)(
                                                    (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_b 
                                                     >> 0x27U)))
                                       ? (- vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_b)
                                       : vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_b));
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__sig_diff 
                = (1U & ((IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_a 
                                  >> 0x27U)) ^ (IData)(
                                                       (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_b 
                                                        >> 0x27U))));
        }
    }
    if (vlSelfRef.resetn) {
        if ((0x31fU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__xc))) {
            __Vdly__tbGenericVga__DOT__dut__DOT__v__DOT__yc 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__yc)));
            __Vdly__tbGenericVga__DOT__dut__DOT__v__DOT__xc = 0U;
        } else {
            __Vdly__tbGenericVga__DOT__dut__DOT__v__DOT__xc 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__xc)));
        }
        if (((0x20cU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__yc)) 
             & (0x31fU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__xc)))) {
            __Vdly__tbGenericVga__DOT__dut__DOT__v__DOT__yc = 0U;
        }
        if (vlSelfRef.tbGenericVga__DOT__pixelClk) {
            if ((0x31fU == (IData)(vlSelfRef.tbGenericVga__DOT__xCounter))) {
                __Vdly__tbGenericVga__DOT__yCounter 
                    = ((0x20cU == (IData)(vlSelfRef.tbGenericVga__DOT__yCounter))
                        ? 0U : (0x3ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tbGenericVga__DOT__yCounter))));
                __Vdly__tbGenericVga__DOT__xCounter = 0U;
            } else {
                __Vdly__tbGenericVga__DOT__xCounter 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__xCounter)));
            }
            vlSelfRef.tbGenericVga__DOT__pixelVisible 
                = ((0x280U > (IData)(vlSelfRef.tbGenericVga__DOT__xCounter)) 
                   & (0x1e0U > (IData)(vlSelfRef.tbGenericVga__DOT__yCounter)));
        }
        if (((((((((0U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)) 
                   | (1U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                  | (0x8cU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                 | (0x8dU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                | (0x8eU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
               | (0x8fU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
              | (0x90U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
             | (0x91U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)))) {
            if ((0U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                if (((~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__manualRot)) 
                     & (0U != (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__gamepad_input)))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__manualRot = 1U;
                }
                __Vdly__tbGenericVga__DOT__dut__DOT__do_swap = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_running = 0U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x8cU;
            } else if ((1U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 1U;
            } else if ((0x8cU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__manualRot) {
                    if ((1U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__gamepad_input))) {
                        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle 
                            = ((0x163U < (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle))
                                ? 0U : (0x1ffU & ((IData)(4U) 
                                                  + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle))));
                    } else if ((2U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__gamepad_input))) {
                        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle 
                            = ((0U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle))
                                ? 0x164U : (0x1ffU 
                                            & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle) 
                                               - (IData)(4U))));
                    }
                    if ((4U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__gamepad_input))) {
                        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle 
                            = ((0x163U < (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle))
                                ? 0U : (0x1ffU & ((IData)(4U) 
                                                  + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle))));
                    } else if ((8U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__gamepad_input))) {
                        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle 
                            = ((0U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle))
                                ? 0x164U : (0x1ffU 
                                            & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle) 
                                               - (IData)(4U))));
                    }
                    if ((0x10U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__gamepad_input))) {
                        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__translate_z 
                            = (VL_LTS_III(32, 0x78U, 
                                          VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__translate_z)))
                                ? 0x78U : (0xffU & 
                                           ((IData)(2U) 
                                            + VL_EXTENDS_II(8,8, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__translate_z)))));
                    } else if ((0x20U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__gamepad_input))) {
                        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__translate_z 
                            = (VL_GTS_III(32, 0xffffff88U, 
                                          VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__translate_z)))
                                ? 0x88U : (0xffU & 
                                           (VL_EXTENDS_II(8,8, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__translate_z)) 
                                            - (IData)(2U))));
                    }
                    if ((0x40U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__gamepad_input))) {
                        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light 
                            = ((0x163U < (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light))
                                ? 0U : (0x1ffU & ((IData)(4U) 
                                                  + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light))));
                    } else if ((0x80U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__gamepad_input))) {
                        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light 
                            = ((0U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light))
                                ? 0x164U : (0x1ffU 
                                            & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light) 
                                               - (IData)(4U))));
                    }
                } else {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle 
                        = ((0x163U < (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle))
                            ? 0U : (0x1ffU & ((IData)(4U) 
                                              + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle))));
                }
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x8dU;
            } else if ((0x8dU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle_90 
                    = (0x1ffU & ((0x10eU > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle))
                                  ? ((IData)(0x5aU) 
                                     + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle))
                                  : ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle) 
                                     - (IData)(0x10eU))));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle_90 
                    = (0x1ffU & ((0x10eU > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle))
                                  ? ((IData)(0x5aU) 
                                     + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle))
                                  : ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle) 
                                     - (IData)(0x10eU))));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light_90 
                    = (0x1ffU & ((0x10eU > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light))
                                  ? ((IData)(0x5aU) 
                                     + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light))
                                  : ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light) 
                                     - (IData)(0x10eU))));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x8eU;
            } else if ((0x8eU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                if ((0x5aU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinPhi = 0x100U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x92U;
                } else if ((0x10eU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinPhi = 0xff00U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x92U;
                } else {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x8fU;
                }
            } else if ((0x8fU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sine_angle 
                    = (0x1ffU & ((0x5aU > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle))
                                  ? (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle)
                                  : ((0xb4U > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle))
                                      ? ((IData)(0xb4U) 
                                         - (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle))
                                      : ((0x10eU > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle))
                                          ? ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle) 
                                             - (IData)(0xb4U))
                                          : ((IData)(0x168U) 
                                             - (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle))))));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x90U;
            } else if ((0x90U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinPhi 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sine_rom1__DOT__mem;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x91U;
            } else {
                if ((0xb4U <= (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinPhi 
                        = (0xffffU & ((IData)(1U) + 
                                      (~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinPhi))));
                }
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x92U;
            }
        } else if (((((((((0x92U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)) 
                          | (0x93U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                         | (0x94U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                        | (0x95U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                       | (0x97U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                      | (0x98U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                     | (0x99U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                    | (0x9aU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)))) {
            if ((0x92U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                if ((0x5aU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle_90))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosPhi = 0x100U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x97U;
                } else if ((0x10eU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle_90))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosPhi = 0xff00U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x97U;
                } else {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x93U;
                }
            } else if ((0x93U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sine_angle 
                    = (0x1ffU & ((0x5aU > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle_90))
                                  ? (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle_90)
                                  : ((0xb4U > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle_90))
                                      ? ((IData)(0xb4U) 
                                         - (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle_90))
                                      : ((0x10eU > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle_90))
                                          ? ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle_90) 
                                             - (IData)(0xb4U))
                                          : ((IData)(0x168U) 
                                             - (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle_90))))));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x94U;
            } else if ((0x94U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosPhi 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sine_rom1__DOT__mem;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x95U;
            } else if ((0x95U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                if ((0xb4U <= (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle_90))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosPhi 
                        = (0xffffU & ((IData)(1U) + 
                                      (~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosPhi))));
                }
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x97U;
            } else if ((0x97U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                if ((0x5aU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta = 0x100U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x9bU;
                } else if ((0x10eU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta = 0xff00U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x9bU;
                } else {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x98U;
                }
            } else if ((0x98U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sine_angle 
                    = (0x1ffU & ((0x5aU > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle))
                                  ? (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle)
                                  : ((0xb4U > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle))
                                      ? ((IData)(0xb4U) 
                                         - (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle))
                                      : ((0x10eU > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle))
                                          ? ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle) 
                                             - (IData)(0xb4U))
                                          : ((IData)(0x168U) 
                                             - (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle))))));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x99U;
            } else if ((0x99U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sine_rom1__DOT__mem;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x9aU;
            } else {
                if ((0xb4U <= (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta 
                        = (0xffffU & ((IData)(1U) + 
                                      (~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta))));
                }
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x9bU;
            }
        } else if (((((((((0x9bU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)) 
                          | (0x9cU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                         | (0x9dU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                        | (0x9eU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                       | (0x9fU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                      | (0xa0U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                     | (0xa1U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                    | (0xa2U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)))) {
            if ((0x9bU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                if ((0x5aU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle_90))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta = 0x100U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x9fU;
                } else if ((0x10eU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle_90))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta = 0xff00U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x9fU;
                } else {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x9cU;
                }
            } else if ((0x9cU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sine_angle 
                    = (0x1ffU & ((0x5aU > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle_90))
                                  ? (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle_90)
                                  : ((0xb4U > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle_90))
                                      ? ((IData)(0xb4U) 
                                         - (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle_90))
                                      : ((0x10eU > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle_90))
                                          ? ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle_90) 
                                             - (IData)(0xb4U))
                                          : ((IData)(0x168U) 
                                             - (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle_90))))));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x9dU;
            } else if ((0x9dU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sine_rom1__DOT__mem;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x9eU;
            } else if ((0x9eU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                if ((0xb4U <= (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle_90))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta 
                        = (0xffffU & ((IData)(1U) + 
                                      (~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta))));
                }
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x9fU;
            } else if ((0x9fU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                    = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta) 
                       << 6U);
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                    = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinPhi) 
                       << 6U);
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xa0U;
            } else if ((0xa0U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_sinPhi 
                        = (0xffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                              >> 0x14U)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta) 
                           << 6U);
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosPhi) 
                           << 6U);
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xa1U;
                }
            } else if ((0xa1U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_cosPhi 
                        = (0xffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                              >> 0x14U)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta) 
                           << 6U);
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosPhi) 
                           << 6U);
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xa2U;
                }
            } else {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_cosPhi 
                        = (0xffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                              >> 0x14U)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta) 
                           << 6U);
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinPhi) 
                           << 6U);
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xa3U;
                }
            }
        } else if (((((((((0xa3U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)) 
                          | (0xa4U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                         | (0xa5U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                        | (0xa6U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                       | (0xa7U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                      | (0xa8U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                     | (0xa9U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                    | (0xaaU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)))) {
            if ((0xa3U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_sinPhi 
                        = (0xffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                              >> 0x14U)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta) 
                           << 6U);
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__translate_z) 
                           << 0xeU);
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xa4U;
                }
            } else if ((0xa4U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_Tz 
                        = (0xffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                              >> 0x14U)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_sinPhi) 
                           << 6U);
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__translate_z) 
                           << 0xeU);
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xa5U;
                }
            } else if ((0xa5U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_sinPhi_Tz 
                        = (0xffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                              >> 0x14U)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_cosPhi) 
                           << 6U);
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__translate_z) 
                           << 0xeU);
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xa6U;
                }
            } else if ((0xa6U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_cosPhi_Tz 
                        = (0xffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                              >> 0x14U)));
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xa7U;
                }
            } else if ((0xa7U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_00 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_01 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_sinPhi;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_02 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_cosPhi;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_03 = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_10 = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_11 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosPhi;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_12 
                    = (0xffffU & ((IData)(1U) + (~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinPhi))));
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_13 = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_20 
                    = (0xffffU & ((IData)(1U) + (~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta))));
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_21 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_sinPhi;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_22 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_cosPhi;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_23 
                    = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__translate_z) 
                       << 8U);
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_30 = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_31 = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_32 = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_33 = 0x100U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xa8U;
            } else if ((0xa8U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                if ((0x5aU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinLight = 0x100U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xacU;
                } else if ((0x10eU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinLight = 0xff00U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xacU;
                } else {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xa9U;
                }
            } else if ((0xa9U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sine_angle 
                    = (0x1ffU & ((0x5aU > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light))
                                  ? (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light)
                                  : ((0xb4U > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light))
                                      ? ((IData)(0xb4U) 
                                         - (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light))
                                      : ((0x10eU > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light))
                                          ? ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light) 
                                             - (IData)(0xb4U))
                                          : ((IData)(0x168U) 
                                             - (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light))))));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xaaU;
            } else {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinLight 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sine_rom1__DOT__mem;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xabU;
            }
        } else if (((((((((0xabU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)) 
                          | (0xacU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                         | (0xadU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                        | (0xaeU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                       | (0xafU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                      | (0xb0U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                     | (0xb1U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                    | (0xb2U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)))) {
            if ((0xabU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                if ((0xb4U <= (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinLight 
                        = (0xffffU & ((IData)(1U) + 
                                      (~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinLight))));
                }
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xacU;
            } else if ((0xacU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                if ((0x5aU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light_90))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosLight = 0x100U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xb0U;
                } else if ((0x10eU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light_90))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosLight = 0xff00U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xb0U;
                } else {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xadU;
                }
            } else if ((0xadU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sine_angle 
                    = (0x1ffU & ((0x5aU > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light_90))
                                  ? (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light_90)
                                  : ((0xb4U > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light_90))
                                      ? ((IData)(0xb4U) 
                                         - (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light_90))
                                      : ((0x10eU > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light_90))
                                          ? ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light_90) 
                                             - (IData)(0xb4U))
                                          : ((IData)(0x168U) 
                                             - (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light_90))))));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xaeU;
            } else if ((0xaeU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosLight 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sine_rom1__DOT__mem;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xafU;
            } else if ((0xafU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                if ((0xb4U <= (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light_90))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosLight 
                        = (0xffffU & ((IData)(1U) + 
                                      (~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosLight))));
                }
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xb0U;
            } else if ((0xb0U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightW_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__light_y;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xb1U;
            } else if ((0xb1U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightW_x 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xb2U;
                }
            } else {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightW_z 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xbeU;
                }
            }
        } else if (((((((((0xbeU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)) 
                          | (0xbfU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                         | (0xc0U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                        | (0xc1U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                       | (0xc2U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                      | (0xc3U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                     | (0xc4U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                    | (0xc5U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)))) {
            if ((0xbeU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xbfU;
            } else if ((0xbfU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_00 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xc0U;
                }
            } else if ((0xc0U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_01 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xc1U;
                }
            } else if ((0xc1U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_02 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xc2U;
                }
            } else if ((0xc2U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_03 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xc3U;
                }
            } else if ((0xc3U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_10 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xc4U;
                }
            } else if ((0xc4U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_11 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xc5U;
                }
            } else {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_12 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xc6U;
                }
            }
        } else if (((((((((0xc6U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)) 
                          | (0xc7U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                         | (0xc8U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                        | (0xc9U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                       | (0xcaU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                      | (0xcbU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                     | (0xccU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                    | (0xcdU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)))) {
            if ((0xc6U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_13 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xc7U;
                }
            } else if ((0xc7U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_20 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xc8U;
                }
            } else if ((0xc8U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_21 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xc9U;
                }
            } else if ((0xc9U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_22 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xcaU;
                }
            } else if ((0xcaU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_23 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xcbU;
                }
            } else if ((0xcbU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_30 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xccU;
                }
            } else if ((0xccU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_31 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xcdU;
                }
            } else {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_32 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xceU;
                }
            }
        } else if (((((((((0xceU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)) 
                          | (0xd2U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                         | (0xe6U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                        | (0xe7U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                       | (0xe8U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                      | (0xf0U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                     | (0xf1U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                    | (0xf2U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)))) {
            if ((0xceU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_33 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xd2U;
                }
            } else if ((0xd2U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_00 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_01 = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_02 
                    = (0xffffU & ((IData)(1U) + (~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta))));
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_03 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_Tz;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_10 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_sinPhi;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_11 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosPhi;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_12 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_sinPhi;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_13 
                    = (0xffffU & ((IData)(1U) + (~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_sinPhi_Tz))));
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_20 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_cosPhi;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_21 
                    = (0xffffU & ((IData)(1U) + (~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinPhi))));
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_22 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_cosPhi;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_23 
                    = (0xffffU & ((IData)(1U) + (~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_cosPhi_Tz))));
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_30 = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_31 = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_32 = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_33 = 0x100U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xe6U;
            } else if ((0xe6U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_x 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xe7U;
                }
            } else if ((0xe7U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_y 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xe8U;
                }
            } else if ((0xe8U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_z 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xf0U;
                }
            } else if ((0xf0U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightM_x 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xf1U;
                }
            } else if ((0xf1U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightM_y 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xf2U;
                }
            } else {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightM_z 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xfaU;
                }
            }
        } else if (((((((((0xfaU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)) 
                          | (0x1fU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                         | (0x20U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                        | (0x21U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                       | (0x22U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                      | (0x23U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                     | (0x24U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                    | (0x25U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)))) {
            if ((0xfaU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT__start_vsfs) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_idx = 0U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_running = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x1fU;
                }
            } else if ((0x1fU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                if (((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_idx) 
                     == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__numtri))) {
                    if (((0x20cU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__yc)) 
                         & (0x302U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__xc)))) {
                        __Vdly__tbGenericVga__DOT__dut__DOT__do_swap = 1U;
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_running = 0U;
                        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0U;
                    }
                } else if (vlSelfRef.tbGenericVga__DOT__dut__DOT__ram_notbusy) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_stop_txn = 0U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_start_read = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread = 0U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay = 0U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x20U;
                }
            } else if ((0x20U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_start_read = 0U;
                if ((0x10U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay))) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT____Vlvbound_h0af86799__0 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay = 0U;
                    if ((0xdU >= (0xfU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread 
                                          >> 2U)))) {
                        __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v0 
                            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT____Vlvbound_h0af86799__0;
                        __VdlyLsb__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v0 
                            = (0xcU & ((~ vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread) 
                                       << 2U));
                        __VdlyDim0__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v0 
                            = (0xfU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread 
                                       >> 2U));
                        __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v0 = 1U;
                    }
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x21U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread = 1U;
                } else {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay)));
                }
            } else if ((0x21U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT____Vlvbound_h0af86799__1 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data;
                if ((0xdU >= (0xfU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread 
                                      >> 2U)))) {
                    __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v1 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT____Vlvbound_h0af86799__1;
                    __VdlyLsb__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v1 
                        = (0xcU & ((~ vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread) 
                                   << 2U));
                    __VdlyDim0__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v1 
                        = (0xfU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread 
                                   >> 2U));
                    __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v1 = 1U;
                }
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread 
                    = (0x3ffffU & ((IData)(1U) + vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread));
                if ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread 
                     == ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                          ? 0x37U : 0x2bU))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread = 0U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_stop_txn = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x22U;
                }
            } else if ((0x22U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_stop_txn = 0U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v0 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz
                    [0U];
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x23U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v0 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz
                    [1U];
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v0 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz
                    [2U];
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v1 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz
                    [3U];
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v1 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz
                    [4U];
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v1 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz
                    [5U];
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v2 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz
                    [6U];
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v2 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz
                    [7U];
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v2 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz
                    [8U];
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_color 
                    = (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz
                             [0xaU] >> 0xeU));
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__nz 
                    = ((0x2000U & vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz
                        [0xaU]) ? (0xfc00U | (0x3ffU 
                                              & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz
                                                 [0xaU] 
                                                 >> 4U)))
                        : (0x3ffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz
                                     [0xaU] >> 4U)));
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__ny 
                    = ((8U & vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz
                        [0xaU]) ? (0xfc00U | ((0x3c0U 
                                               & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz
                                                  [0xaU] 
                                                  << 6U)) 
                                              | (0x3fU 
                                                 & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz
                                                    [9U] 
                                                    >> 0xaU))))
                        : ((0x3c0U & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz
                                      [0xaU] << 6U)) 
                           | (0x3fU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz
                                       [9U] >> 0xaU))));
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__nx 
                    = ((0x200U & vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz
                        [9U]) ? (0xfc00U | (0x3ffU 
                                            & vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz
                                            [9U])) : 
                       (0x3ffU & vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz
                        [9U]));
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v0_u 
                        = (0xffU & vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz
                           [0xbU]);
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_u 
                        = (0xffU & vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz
                           [0xcU]);
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_u 
                        = (0xffU & vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz
                           [0xdU]);
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v0_v 
                        = (0xffU & ((IData)(0xffU) 
                                    - (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz
                                       [0xbU] >> 8U)));
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_v 
                        = (0xffU & ((IData)(0xffU) 
                                    - (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz
                                       [0xcU] >> 8U)));
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_v 
                        = (0xffU & ((IData)(0xffU) 
                                    - (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz
                                       [0xdU] >> 8U)));
                } else {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v0_u = 0U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v0_v = 0U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_u = 0U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_v = 0U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_u = 0U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_v = 0U;
                }
            } else if ((0x23U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__viewdir_x 
                    = (0xffffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_x) 
                                  - (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v0)));
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__viewdir_y 
                    = (0xffffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_y) 
                                  - (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v0)));
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__viewdir_z 
                    = (0xffffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_z) 
                                  - (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v0)));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x24U;
            } else if ((0x24U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    if ((0x8000U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result))) {
                        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_idx 
                            = (0x3ffU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_idx)));
                        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x1fU;
                    } else {
                        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x25U;
                    }
                }
            } else {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x26U;
            }
        } else if (((((((((0x26U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)) 
                          | (0x27U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                         | (0x28U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                        | (0x29U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                       | (0x2aU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                      | (0x2bU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                     | (0x2cU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                    | (0x2dU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)))) {
            if ((0x26U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v0 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x27U;
                }
            } else if ((0x27U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v0 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x28U;
                }
            } else if ((0x28U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v0 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x29U;
                }
            } else if ((0x29U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v0 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x2aU;
                }
            } else if ((0x2aU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v1 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x2bU;
                }
            } else if ((0x2bU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v1 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x2cU;
                }
            } else if ((0x2cU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v1 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x2dU;
                }
            } else {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v1 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x2eU;
                }
            }
        } else if (((((((((0x2eU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)) 
                          | (0x2fU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                         | (0x30U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                        | (0x31U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                       | (0x32U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                      | (0x33U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                     | (0x34U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                    | (0x35U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)))) {
            if ((0x2eU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v2 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x2fU;
                }
            } else if ((0x2fU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v2 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x30U;
                }
            } else if ((0x30U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v2 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x31U;
                }
            } else if ((0x31U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v2 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_a 
                        = (((- (IData)((1U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v0) 
                                              >> 0xfU)))) 
                            << 0x18U) | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v0) 
                                         << 8U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_b 
                        = (((- (IData)((1U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v0) 
                                              >> 0xfU)))) 
                            << 0x18U) | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v0) 
                                         << 8U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x32U;
                }
            } else if ((0x32U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v0 
                        = (0xffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_result 
                                      >> 2U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_a 
                        = (((- (IData)((1U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v0) 
                                              >> 0xfU)))) 
                            << 0x18U) | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v0) 
                                         << 8U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_b 
                        = (((- (IData)((1U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v0) 
                                              >> 0xfU)))) 
                            << 0x18U) | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v0) 
                                         << 8U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x33U;
                }
            } else if ((0x33U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v0 
                        = (0xffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_result 
                                      >> 2U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_a 
                        = (((- (IData)((1U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v0) 
                                              >> 0xfU)))) 
                            << 0x18U) | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v0) 
                                         << 8U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_b 
                        = (((- (IData)((1U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v0) 
                                              >> 0xfU)))) 
                            << 0x18U) | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v0) 
                                         << 8U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x34U;
                }
            } else if ((0x34U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v0 
                        = (0xffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_result 
                                      >> 2U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_a 
                        = (((- (IData)((1U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v1) 
                                              >> 0xfU)))) 
                            << 0x18U) | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v1) 
                                         << 8U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_b 
                        = (((- (IData)((1U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v1) 
                                              >> 0xfU)))) 
                            << 0x18U) | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v1) 
                                         << 8U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x35U;
                }
            } else {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v1 
                        = (0xffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_result 
                                      >> 2U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_a 
                        = (((- (IData)((1U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v1) 
                                              >> 0xfU)))) 
                            << 0x18U) | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v1) 
                                         << 8U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_b 
                        = (((- (IData)((1U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v1) 
                                              >> 0xfU)))) 
                            << 0x18U) | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v1) 
                                         << 8U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x36U;
                }
            }
        } else if (((((((((0x36U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)) 
                          | (0x37U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                         | (0x38U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                        | (0x39U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                       | (0x3aU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                      | (0x3bU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                     | (0x3cU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                    | (0x3dU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)))) {
            if ((0x36U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v1 
                        = (0xffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_result 
                                      >> 2U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_a 
                        = (((- (IData)((1U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v1) 
                                              >> 0xfU)))) 
                            << 0x18U) | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v1) 
                                         << 8U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_b 
                        = (((- (IData)((1U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v1) 
                                              >> 0xfU)))) 
                            << 0x18U) | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v1) 
                                         << 8U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x37U;
                }
            } else if ((0x37U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v1 
                        = (0xffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_result 
                                      >> 2U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_a 
                        = (((- (IData)((1U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v2) 
                                              >> 0xfU)))) 
                            << 0x18U) | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v2) 
                                         << 8U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_b 
                        = (((- (IData)((1U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v2) 
                                              >> 0xfU)))) 
                            << 0x18U) | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v2) 
                                         << 8U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x38U;
                }
            } else if ((0x38U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v2 
                        = (0xffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_result 
                                      >> 2U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_a 
                        = (((- (IData)((1U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v2) 
                                              >> 0xfU)))) 
                            << 0x18U) | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v2) 
                                         << 8U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_b 
                        = (((- (IData)((1U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v2) 
                                              >> 0xfU)))) 
                            << 0x18U) | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v2) 
                                         << 8U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x39U;
                }
            } else if ((0x39U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v2 
                        = (0xffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_result 
                                      >> 2U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_a 
                        = (((- (IData)((1U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v2) 
                                              >> 0xfU)))) 
                            << 0x18U) | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v2) 
                                         << 8U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_b 
                        = (((- (IData)((1U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v2) 
                                              >> 0xfU)))) 
                            << 0x18U) | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v2) 
                                         << 8U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x3aU;
                }
            } else if ((0x3aU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v2 
                        = (0xffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_result 
                                      >> 2U));
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x3bU;
                }
            } else if ((0x3bU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v0 
                    = (0xffffU & ((IData)(0x1400U) 
                                  + (((0xc000U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v0) 
                                                                 >> 0xfU)))) 
                                                  << 0xeU)) 
                                      | (0x3fffU & 
                                         ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v0) 
                                          >> 2U))) 
                                     + ((0xf000U & 
                                         ((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v0) 
                                                         >> 0xfU)))) 
                                          << 0xcU)) 
                                        | (0xfffU & 
                                           ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v0) 
                                            >> 4U))))));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v1 
                    = (0xffffU & ((IData)(0x1400U) 
                                  + (((0xc000U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v1) 
                                                                 >> 0xfU)))) 
                                                  << 0xeU)) 
                                      | (0x3fffU & 
                                         ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v1) 
                                          >> 2U))) 
                                     + ((0xf000U & 
                                         ((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v1) 
                                                         >> 0xfU)))) 
                                          << 0xcU)) 
                                        | (0xfffU & 
                                           ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v1) 
                                            >> 4U))))));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v2 
                    = (0xffffU & ((IData)(0x1400U) 
                                  + (((0xc000U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v2) 
                                                                 >> 0xfU)))) 
                                                  << 0xeU)) 
                                      | (0x3fffU & 
                                         ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v2) 
                                          >> 2U))) 
                                     + ((0xf000U & 
                                         ((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v2) 
                                                         >> 0xfU)))) 
                                          << 0xcU)) 
                                        | (0xfffU & 
                                           ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v2) 
                                            >> 4U))))));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v0 
                    = (0xffffU & (((0xc000U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v0) 
                                                              >> 0xfU)))) 
                                               << 0xeU)) 
                                   | (0x3fffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v0) 
                                                 >> 2U))) 
                                  - ((0xfc00U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v0) 
                                                                >> 0xfU)))) 
                                                 << 0xaU)) 
                                     | (0x3ffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v0) 
                                                  >> 6U)))));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v1 
                    = (0xffffU & (((0xc000U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v1) 
                                                              >> 0xfU)))) 
                                               << 0xeU)) 
                                   | (0x3fffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v1) 
                                                 >> 2U))) 
                                  - ((0xfc00U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v1) 
                                                                >> 0xfU)))) 
                                                 << 0xaU)) 
                                     | (0x3ffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v1) 
                                                  >> 6U)))));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v2 
                    = (0xffffU & (((0xc000U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v2) 
                                                              >> 0xfU)))) 
                                               << 0xeU)) 
                                   | (0x3fffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v2) 
                                                 >> 2U))) 
                                  - ((0xfc00U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v2) 
                                                                >> 0xfU)))) 
                                                 << 0xaU)) 
                                     | (0x3ffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v2) 
                                                  >> 6U)))));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v0 
                    = (0xffffU & ((IData)(0x2000U) 
                                  + ((0x8000U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v0)) 
                                     | (0x7fffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v0) 
                                                   >> 1U)))));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v1 
                    = (0xffffU & ((IData)(0x2000U) 
                                  + ((0x8000U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v1)) 
                                     | (0x7fffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v1) 
                                                   >> 1U)))));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v2 
                    = (0xffffU & ((IData)(0x2000U) 
                                  + ((0x8000U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v2)) 
                                     | (0x7fffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v2) 
                                                   >> 1U)))));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x3cU;
            } else if ((0x3cU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v0 
                    = (0xffffU & ((IData)(0xf00U) - (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v0)));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v1 
                    = (0xffffU & ((IData)(0xf00U) - (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v1)));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v2 
                    = (0xffffU & ((IData)(0xf00U) - (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v2)));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x3dU;
            } else {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v0 
                    = (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz
                       [2U] << 4U);
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v0 
                    = (0x7ffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v0) 
                                 >> 5U));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v1 
                    = (0x7ffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v1) 
                                 >> 5U));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v2 
                    = (0x7ffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v2) 
                                 >> 5U));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v0 
                    = (0x7ffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v0) 
                                 >> 5U));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v1 
                    = (0x7ffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v1) 
                                 >> 5U));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v2 
                    = (0x7ffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v2) 
                                 >> 5U));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v1 
                    = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v1) 
                       << 6U);
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v2 
                    = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v2) 
                       << 6U);
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x3eU;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v0 
                    = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v0) 
                       << 6U);
            }
        } else if (((((((((0x3eU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)) 
                          | (0x3fU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                         | (0x4aU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                        | (0x4bU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                       | (0x4cU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                      | (0x4dU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                     | (0x4eU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                    | (0x4fU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)))) {
            if ((0x3eU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x3fU;
            } else if ((0x3fU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__shade_color 
                        = ((0x200U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result))
                            ? 0U : ((8U == (0xfU & 
                                            ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result) 
                                             >> 5U)))
                                     ? (3U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_color) 
                                              << 2U))
                                     : (((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_color) 
                                         << 2U) | (3U 
                                                   & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result) 
                                                      >> 6U)))));
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x4aU;
                }
            } else if ((0x4aU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_X 
                    = (VL_LTS_III(20, vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v0, vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v1)
                        ? vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v0
                        : vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v1);
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_Y 
                    = (VL_LTS_III(20, vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v0, vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v1)
                        ? vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v0
                        : vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v1);
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x4bU;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMax_X 
                    = (VL_GTS_III(20, vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v0, vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v1)
                        ? vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v0
                        : vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v1);
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMax_Y 
                    = (VL_GTS_III(20, vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v0, vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v1)
                        ? vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v0
                        : vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v1);
            } else if ((0x4bU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_X 
                    = (VL_LTS_III(20, vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_X, vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v2)
                        ? vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_X
                        : vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v2);
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_Y 
                    = (VL_LTS_III(20, vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_Y, vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v2)
                        ? vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_Y
                        : vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v2);
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMax_X 
                    = (VL_GTS_III(20, vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMax_X, vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v2)
                        ? vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMax_X
                        : vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v2);
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMax_Y 
                    = (VL_GTS_III(20, vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMax_Y, vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v2)
                        ? vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMax_Y
                        : vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v2);
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x4cU;
            } else if ((0x4cU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_X 
                    = (0xffffcU & __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_X);
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMax_X 
                    = (0xffffcU & __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMax_X);
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x4dU;
            } else if ((0x4dU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                    = (0x3ffffcU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_X 
                                     - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v0) 
                                    << 2U));
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                    = (0x3ffffcU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v1 
                                     - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v0) 
                                    << 2U));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x4eU;
            } else if ((0x4eU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul1 
                        = (0xfffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                               >> 4U)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = (0x3ffffcU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v0 
                                         - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_Y) 
                                        << 2U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = (0x3ffffcU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v1 
                                         - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v0) 
                                        << 2U));
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x4fU;
                }
            } else {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul2 
                        = (0xfffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                               >> 4U)));
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x50U;
                }
            }
        } else if (((((((((0x50U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)) 
                          | (0x51U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                         | (0x52U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                        | (0x53U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                       | (0x54U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                      | (0x55U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                     | (0x56U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                    | (0x57U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)))) {
            if ((0x50U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0_init 
                    = (0xfffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul2 
                                   + vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul1));
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                    = (0x3ffffcU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_X 
                                     - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v1) 
                                    << 2U));
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                    = (0x3ffffcU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v2 
                                     - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v1) 
                                    << 2U));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x51U;
            } else if ((0x51U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul1 
                        = (0xfffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                               >> 4U)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = (0x3ffffcU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v1 
                                         - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_Y) 
                                        << 2U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = (0x3ffffcU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v2 
                                         - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v1) 
                                        << 2U));
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x52U;
                }
            } else if ((0x52U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul2 
                        = (0xfffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                               >> 4U)));
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x53U;
                }
            } else if ((0x53U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1_init 
                    = (0xfffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul2 
                                   + vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul1));
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                    = (0x3ffffcU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_X 
                                     - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v2) 
                                    << 2U));
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                    = (0x3ffffcU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v0 
                                     - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v2) 
                                    << 2U));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x54U;
            } else if ((0x54U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul1 
                        = (0xfffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                               >> 4U)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = (0x3ffffcU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v2 
                                         - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_Y) 
                                        << 2U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = (0x3ffffcU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v0 
                                         - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v2) 
                                        << 2U));
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x55U;
                }
            } else if ((0x55U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul2 
                        = (0xfffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                               >> 4U)));
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x56U;
                }
            } else if ((0x56U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2_init 
                    = (0xfffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul2 
                                   + vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul1));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x57U;
            } else {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                    = (0x3ffffcU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v1 
                                     - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v2) 
                                    << 2U));
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                    = (0x3ffffcU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v0 
                                     - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v2) 
                                    << 2U));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x58U;
            }
        } else if (((((((((0x58U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)) 
                          | (0x59U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                         | (0x5aU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                        | (0x5bU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                       | (0x5cU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                      | (0x5dU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                     | (0x5eU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                    | (0x5fU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)))) {
            if ((0x58U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul1 
                        = (0xfffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                               >> 4U)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = (0x3ffffcU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v0 
                                         - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v2) 
                                        << 2U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = (0x3ffffcU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v2 
                                         - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v1) 
                                        << 2U));
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x59U;
                }
            } else if ((0x59U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul2 
                        = (0xfffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul1 
                                       + (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                  >> 4U))));
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x5aU;
                }
            } else if ((0x5aU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_a = 0x100000ULL;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_b 
                    = ((QData)((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul2)) 
                       << 0x14U);
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_start = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x5bU;
            } else if ((0x5bU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__denom 
                        = (0x3fffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_result));
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x5cU;
                }
            } else if ((0x5cU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                    = (0x3ffffcU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v2 
                                     - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v0) 
                                    << 2U));
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                    = (0x3ffffcU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_X 
                                     - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v2) 
                                    << 2U));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x5dU;
            } else if ((0x5dU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul1 
                        = (0xfffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                               >> 4U)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = (0x3ffffcU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v0 
                                         - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v2) 
                                        << 2U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = (0x3ffffcU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_Y 
                                         - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v2) 
                                        << 2U));
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x5eU;
                }
            } else if ((0x5eU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = (0x3ffffcU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul1 
                                         + (IData)(
                                                   (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                    >> 4U))) 
                                        << 2U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__denom;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x5fU;
                }
            } else {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy 
                        = (0x3fffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                >> 6U)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = (0x3ffffcU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v0 
                                         - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v2) 
                                        << 2U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__denom;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x60U;
                }
            }
        } else if (((((((((0x60U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)) 
                          | (0x61U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                         | (0x62U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                        | (0x63U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                       | (0x64U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                      | (0x65U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                     | (0x66U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                    | (0x67U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)))) {
            if ((0x60U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy_dy 
                        = (0x3fffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                >> 6U)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = (0x3ffffcU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v2 
                                         - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v0) 
                                        << 2U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__denom;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x61U;
                }
            } else if ((0x61U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy_dx 
                        = (0x3fffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                >> 6U)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = (0x3ffffcU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v0 
                                         - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v1) 
                                        << 2U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = (0x3ffffcU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_X 
                                         - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v0) 
                                        << 2U));
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x62U;
                }
            } else if ((0x62U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul1 
                        = (0xfffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                               >> 4U)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = (0x3ffffcU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v1 
                                         - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v0) 
                                        << 2U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = (0x3ffffcU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_Y 
                                         - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v0) 
                                        << 2U));
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x63U;
                }
            } else if ((0x63U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = (0x3ffffcU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul1 
                                         + (IData)(
                                                   (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                    >> 4U))) 
                                        << 2U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__denom;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x64U;
                }
            } else if ((0x64U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz 
                        = (0x3fffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                >> 6U)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = (0x3ffffcU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v1 
                                         - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v0) 
                                        << 2U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__denom;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x65U;
                }
            } else if ((0x65U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz_dy 
                        = (0x3fffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                >> 6U)));
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix 
                        = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy 
                                        + vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = (0x3ffffcU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v0 
                                         - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v1) 
                                        << 2U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__denom;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x66U;
                }
            } else if ((0x66U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix 
                        = (0x3fffffU & ((IData)(0x10000U) 
                                        - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix));
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz_dx 
                        = (0x3fffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                >> 6U)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = (0x3ffffcU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v2 
                                         - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v1) 
                                        << 2U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__denom;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x67U;
                }
            } else {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix_dy 
                        = (0x3fffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                >> 6U)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = (0x3ffffcU & ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v1 
                                         - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v2) 
                                        << 2U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__denom;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x68U;
                }
            }
        } else if (((((((((0x68U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)) 
                          | (0x69U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                         | (0x6aU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                        | (0x6bU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                       | (0x6cU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                      | (0x6dU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                     | (0x6eU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                    | (0x6fU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)))) {
            if ((0x68U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix_dx 
                        = (0x3fffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                >> 6U)));
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x69U;
                }
            } else if ((0x69U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v0;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x6aU;
            } else if ((0x6aU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar 
                        = (0x3fffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                >> 0x14U)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v1;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x6bU;
                }
            } else if ((0x6bU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar 
                        = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar 
                                        + (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                   >> 0x14U))));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v2;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x6cU;
                }
            } else if ((0x6cU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar 
                        = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar 
                                        + (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                   >> 0x14U))));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v0;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix_dx;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x6dU;
                }
            } else if ((0x6dU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dx 
                        = (0x3fffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                >> 0x14U)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v1;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy_dx;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x6eU;
                }
            } else if ((0x6eU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dx 
                        = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dx 
                                        + (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                   >> 0x14U))));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v2;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz_dx;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x6fU;
                }
            } else {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dx 
                        = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dx 
                                        + (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                   >> 0x14U))));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v0;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix_dy;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x70U;
                }
            }
        } else if (((((((((0x70U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)) 
                          | (0x71U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                         | (0x72U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                        | (2U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                       | (3U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                      | (4U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                     | (5U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                    | (6U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)))) {
            if ((0x70U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dy 
                        = (0x3fffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                >> 0x14U)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v1;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy_dy;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x71U;
                }
            } else if ((0x71U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dy 
                        = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dy 
                                        + (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                   >> 0x14U))));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v2;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz_dy;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x72U;
                }
            } else if ((0x72U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dy 
                        = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dy 
                                        + (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                   >> 0x14U))));
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_y 
                        = (0x3ffU & vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_Y);
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state 
                        = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                            ? 2U : 0x73U);
                }
            } else if ((2U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                    = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v0_u) 
                       << 0xdU);
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 3U;
            } else if ((3U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar 
                        = (0x3fffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                >> 0x11U)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_u) 
                           << 0xdU);
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 4U;
                }
            } else if ((4U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar 
                        = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar 
                                        + (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                   >> 0x11U))));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_u) 
                           << 0xdU);
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 5U;
                }
            } else if ((5U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar 
                        = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar 
                                        + (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                   >> 0x11U))));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v0_u) 
                           << 0xdU);
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix_dx;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 6U;
                }
            } else {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dx 
                        = (0x3fffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                >> 0x11U)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_u) 
                           << 0xdU);
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy_dx;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 7U;
                }
            }
        } else if (((((((((7U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)) 
                          | (8U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                         | (9U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                        | (0xaU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                       | (0xbU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                      | (0xcU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                     | (0xdU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                    | (0xeU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)))) {
            if ((7U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dx 
                        = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dx 
                                        + (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                   >> 0x11U))));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_u) 
                           << 0xdU);
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz_dx;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 8U;
                }
            } else if ((8U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dx 
                        = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dx 
                                        + (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                   >> 0x11U))));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v0_u) 
                           << 0xdU);
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix_dy;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 9U;
                }
            } else if ((9U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dy 
                        = (0x3fffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                >> 0x11U)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_u) 
                           << 0xdU);
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy_dy;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xaU;
                }
            } else if ((0xaU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dy 
                        = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dy 
                                        + (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                   >> 0x11U))));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_u) 
                           << 0xdU);
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz_dy;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xbU;
                }
            } else if ((0xbU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dy 
                        = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dy 
                                        + (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                   >> 0x11U))));
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xcU;
                }
            } else if ((0xcU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                    = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v0_v) 
                       << 0xdU);
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xdU;
            } else if ((0xdU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar 
                        = (0x3fffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                >> 0x11U)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_v) 
                           << 0xdU);
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xeU;
                }
            } else {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar 
                        = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar 
                                        + (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                   >> 0x11U))));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_v) 
                           << 0xdU);
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xfU;
                }
            }
        } else if (((((((((0xfU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)) 
                          | (0x10U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                         | (0x11U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                        | (0x12U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                       | (0x13U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                      | (0x14U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                     | (0x15U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                    | (0x73U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)))) {
            if ((0xfU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar 
                        = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar 
                                        + (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                   >> 0x11U))));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v0_v) 
                           << 0xdU);
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix_dx;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x10U;
                }
            } else if ((0x10U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dx 
                        = (0x3fffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                >> 0x11U)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_v) 
                           << 0xdU);
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy_dx;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x11U;
                }
            } else if ((0x11U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dx 
                        = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dx 
                                        + (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                   >> 0x11U))));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_v) 
                           << 0xdU);
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz_dx;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x12U;
                }
            } else if ((0x12U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dx 
                        = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dx 
                                        + (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                   >> 0x11U))));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v0_v) 
                           << 0xdU);
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix_dy;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x13U;
                }
            } else if ((0x13U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dy 
                        = (0x3fffffU & (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                >> 0x11U)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_v) 
                           << 0xdU);
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy_dy;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x14U;
                }
            } else if ((0x14U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dy 
                        = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dy 
                                        + (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                   >> 0x11U))));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a 
                        = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_v) 
                           << 0xdU);
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz_dy;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x15U;
                }
            } else if ((0x15U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dy 
                        = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dy 
                                        + (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
                                                   >> 0x11U))));
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x73U;
                }
            } else if (((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_y) 
                        > (0x3ffU & vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMax_Y))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_idx 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_idx)));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x1fU;
            } else {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0_init;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_v 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_x 
                    = (0x3ffU & vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_X);
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x74U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1_init;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar 
                    = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar 
                                    + vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dy));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar 
                    = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar 
                                    + vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dy));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar 
                    = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar 
                                    + vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dy));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2_init;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0_init 
                    = (0xfffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0_init 
                                   - (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v1 
                                      - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v0)));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1_init 
                    = (0xfffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1_init 
                                   - (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v2 
                                      - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v1)));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2_init 
                    = (0xfffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2_init 
                                   - (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v0 
                                      - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v2)));
            }
        } else if (((((((((0x74U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)) 
                          | (0x75U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                         | (0x76U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                        | (0x77U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                       | (0x78U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                      | (0x79U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                     | (0xd3U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                    | (0xd4U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)))) {
            if ((0x74U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                if (((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_x) 
                     > (0x3ffU & vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMax_X))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xffU;
                } else if (vlSelfRef.tbGenericVga__DOT__dut__DOT__ram_notbusy) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_stop_txn = 0U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_start_read = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread = 0U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay = 0U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x75U;
                }
            } else if ((0x75U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_start_read = 0U;
                if ((0x10U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay = 0U;
                    __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v0 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data;
                    __VdlyLsb__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v0 
                        = (4U & ((~ vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread) 
                                 << 2U));
                    __VdlyDim0__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v0 
                        = (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread 
                                 >> 1U));
                    __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v0 = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x76U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread = 1U;
                } else {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay)));
                }
            } else if ((0x76U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v1 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data;
                __VdlyLsb__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v1 
                    = (4U & ((~ vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread) 
                             << 2U));
                __VdlyDim0__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v1 
                    = (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread 
                             >> 1U));
                __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v1 = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread 
                    = (0x3ffffU & ((IData)(1U) + vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread));
                if ((7U == vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread)) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread = 0U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_stop_txn = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x77U;
                }
            } else if ((0x77U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_stop_txn = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_start_read = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread = 0U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay = 0U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x78U;
            } else if ((0x78U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_start_read = 0U;
                if ((0x10U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay = 0U;
                    __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v0 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data;
                    __VdlyDim0__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v0 
                        = (3U & vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread);
                    __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v0 = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x79U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread = 1U;
                } else {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay)));
                }
            } else if ((0x79U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v1 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data;
                __VdlyDim0__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v1 
                    = (3U & vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread);
                __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v1 = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread 
                    = (0x3ffffU & ((IData)(1U) + vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread));
                if ((3U == vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread)) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread = 0U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_stop_txn = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state 
                        = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                            ? 0xd3U : 0x7aU);
                }
            } else if ((0xd3U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_stop_txn = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT__ram_notbusy) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_v 
                        = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_v 
                                        + vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dx));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_stop_txn = 0U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_start_read = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u8 
                        = (1U & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u 
                                 >> 0xcU));
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread = 0U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay = 0U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xd4U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u 
                        = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u 
                                        + vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dx));
                }
            } else {
                vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_start_read = 0U;
                if ((0x10U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay = 0U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel 
                        = ((0xfU & (IData)(__Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel)) 
                           | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data) 
                              << 4U));
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xd5U;
                } else {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay)));
                }
            }
        } else if (((((((((0xd5U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)) 
                          | (0xd6U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                         | (0xd7U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                        | (0xd8U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                       | (0xd9U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                      | (0xdaU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                     | (0xdbU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                    | (0xdcU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)))) {
            if ((0xd5U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel 
                    = ((0xf0U & (IData)(__Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel)) 
                       | (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_stop_txn = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xd6U;
            } else if ((0xd6U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_v 
                    = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_v 
                                    + vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dx));
                __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v0 
                    = (0xfU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u8)
                                ? ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel) 
                                   >> 4U) : (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel)));
                __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v0 = 1U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_stop_txn = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_start_read = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread = 0U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay = 0U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xd7U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u8 
                    = (1U & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u 
                             >> 0xcU));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u 
                    = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u 
                                    + vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dx));
            } else if ((0xd7U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_start_read = 0U;
                if ((0x10U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay = 0U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel 
                        = ((0xfU & (IData)(__Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel)) 
                           | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data) 
                              << 4U));
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xd8U;
                } else {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay)));
                }
            } else if ((0xd8U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel 
                    = ((0xf0U & (IData)(__Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel)) 
                       | (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_stop_txn = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xd9U;
            } else if ((0xd9U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v1 
                    = (0xfU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u8)
                                ? ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel) 
                                   >> 4U) : (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel)));
                __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v1 = 1U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_stop_txn = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT__ram_notbusy) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_v 
                        = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_v 
                                        + vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dx));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_stop_txn = 0U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_start_read = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u8 
                        = (1U & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u 
                                 >> 0xcU));
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread = 0U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay = 0U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xdaU;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u 
                        = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u 
                                        + vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dx));
                }
            } else if ((0xdaU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_start_read = 0U;
                if ((0x10U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay = 0U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel 
                        = ((0xfU & (IData)(__Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel)) 
                           | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data) 
                              << 4U));
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xdbU;
                } else {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay)));
                }
            } else if ((0xdbU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel 
                    = ((0xf0U & (IData)(__Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel)) 
                       | (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_stop_txn = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xdcU;
            } else {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_v 
                    = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_v 
                                    + vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dx));
                __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v2 
                    = (0xfU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u8)
                                ? ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel) 
                                   >> 4U) : (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel)));
                __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v2 = 1U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_stop_txn = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_start_read = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread = 0U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay = 0U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xddU;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u8 
                    = (1U & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u 
                             >> 0xcU));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u 
                    = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u 
                                    + vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dx));
            }
        } else if (((((((((0xddU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)) 
                          | (0xdeU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                         | (0xdfU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                        | (0x7aU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                       | (0x7bU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                      | (0x7cU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                     | (0x7dU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                    | (0x7eU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)))) {
            if ((0xddU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_start_read = 0U;
                if ((0x10U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay = 0U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel 
                        = ((0xfU & (IData)(__Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel)) 
                           | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data) 
                              << 4U));
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xdeU;
                } else {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay)));
                }
            } else if ((0xdeU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel 
                    = ((0xf0U & (IData)(__Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel)) 
                       | (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_stop_txn = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xdfU;
            } else if ((0xdfU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v3 
                    = (0xfU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u8)
                                ? ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel) 
                                   >> 4U) : (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel)));
                __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v3 = 1U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_stop_txn = 0U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x7aU;
            } else if ((0x7aU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                if (((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,20, vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0)) 
                      & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,20, vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1))) 
                     & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,20, vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2)))) {
                    if (((0U == (0x3f0000U & vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_z)) 
                         & ((0xffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_z 
                                      >> 8U)) < vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer
                            [0U]))) {
                        __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v2 
                            = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                                ? vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel
                               [0U] : (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__shade_color));
                        __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v2 
                            = (0xffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_z 
                                        >> 8U));
                    } else {
                        __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v2 
                            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer
                            [0U];
                        __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v2 
                            = (0xffU & vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer
                               [0U]);
                    }
                    __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v2 = 1U;
                }
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0 
                    = (0xfffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0 
                                   + (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v1 
                                      - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v0)));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x7bU;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_stop_txn = 0U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1 
                    = (0xfffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1 
                                   + (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v2 
                                      - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v1)));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2 
                    = (0xfffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2 
                                   + (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v0 
                                      - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v2)));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_z 
                    = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_z 
                                    + vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dx));
            } else if ((0x7bU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                if (((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,20, vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0)) 
                      & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,20, vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1))) 
                     & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,20, vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2)))) {
                    if (((0U == (0x3f0000U & vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_z)) 
                         & ((0xffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_z 
                                      >> 8U)) < vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer
                            [1U]))) {
                        __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v3 
                            = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                                ? vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel
                               [1U] : (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__shade_color));
                        __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v3 
                            = (0xffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_z 
                                        >> 8U));
                    } else {
                        __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v3 
                            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer
                            [1U];
                        __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v3 
                            = (0xffU & vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer
                               [1U]);
                    }
                    __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v3 = 1U;
                }
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0 
                    = (0xfffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0 
                                   + (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v1 
                                      - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v0)));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x7cU;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1 
                    = (0xfffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1 
                                   + (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v2 
                                      - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v1)));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2 
                    = (0xfffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2 
                                   + (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v0 
                                      - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v2)));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_z 
                    = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_z 
                                    + vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dx));
            } else if ((0x7cU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                if (((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,20, vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0)) 
                      & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,20, vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1))) 
                     & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,20, vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2)))) {
                    if (((0U == (0x3f0000U & vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_z)) 
                         & ((0xffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_z 
                                      >> 8U)) < vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer
                            [2U]))) {
                        __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v4 
                            = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                                ? vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel
                               [2U] : (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__shade_color));
                        __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v4 
                            = (0xffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_z 
                                        >> 8U));
                    } else {
                        __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v4 
                            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer
                            [2U];
                        __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v4 
                            = (0xffU & vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer
                               [2U]);
                    }
                    __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v4 = 1U;
                }
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0 
                    = (0xfffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0 
                                   + (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v1 
                                      - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v0)));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x7dU;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1 
                    = (0xfffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1 
                                   + (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v2 
                                      - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v1)));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2 
                    = (0xfffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2 
                                   + (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v0 
                                      - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v2)));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_z 
                    = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_z 
                                    + vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dx));
            } else if ((0x7dU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                if (((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,20, vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0)) 
                      & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,20, vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1))) 
                     & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,20, vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2)))) {
                    if (((0U == (0x3f0000U & vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_z)) 
                         & ((0xffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_z 
                                      >> 8U)) < vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer
                            [3U]))) {
                        __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v5 
                            = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                                ? vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel
                               [3U] : (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__shade_color));
                        __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v5 
                            = (0xffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_z 
                                        >> 8U));
                    } else {
                        __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v5 
                            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer
                            [3U];
                        __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v5 
                            = (0xffU & vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer
                               [3U]);
                    }
                    __VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v5 = 1U;
                }
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0 
                    = (0xfffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0 
                                   + (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v1 
                                      - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v0)));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x7eU;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1 
                    = (0xfffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1 
                                   + (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v2 
                                      - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v1)));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2 
                    = (0xfffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2 
                                   + (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v0 
                                      - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v2)));
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_z 
                    = (0x3fffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_z 
                                    + vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dx));
            } else if (vlSelfRef.tbGenericVga__DOT__dut__DOT__ram_notbusy) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread 
                    = (0x3ffffU & ((IData)(1U) + vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread));
                vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_stop_txn = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_start_write = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x7fU;
            }
        } else if ((0x7fU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_start_write = 0U;
            if (vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_data_req) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread 
                    = (0x3ffffU & ((IData)(1U) + vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread));
                if ((7U == vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread)) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread = 0U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_stop_txn = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x80U;
                }
            }
        } else if ((0x80U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread 
                = (0x3ffffU & ((IData)(1U) + vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread));
            vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_stop_txn = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_start_write = 1U;
            __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x81U;
        } else if ((0x81U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_start_write = 0U;
            if (vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_data_req) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread 
                    = (0x3ffffU & ((IData)(1U) + vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread));
                if ((3U == vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread)) {
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread = 0U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_stop_txn = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0xfeU;
                }
            }
        } else if ((0xfeU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_x 
                = (0x3ffU & ((IData)(4U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_x)));
            vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_stop_txn = 0U;
            __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x74U;
        } else if ((0xffU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_y 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_y)));
            __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0x73U;
        } else {
            __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0U;
        }
        if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_busy) {
            if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__almost_done) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_busy = 0U;
            } else {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done = 0U;
            }
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done = 0U;
            __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_busy 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start;
        }
        if ((0U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done = 0U;
            if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_a 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_b 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_start = 1U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done = 0U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__state))) {
            __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_start = 0U;
            if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_done) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__tmp_vs_mul1 
                    = (0xffffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_result 
                                  >> 8U));
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_a 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_b 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_start = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__state))) {
            __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_start = 0U;
            if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_done) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__tmp_vs_mul1 
                    = (0xffffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__tmp_vs_mul1) 
                                  + (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_result 
                                     >> 8U)));
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_a 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_b 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_start = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__state = 3U;
            }
        } else if ((3U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__state))) {
            __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_start = 0U;
            if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_done) {
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__tmp_vs_mul1 
                    = (0xffffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__tmp_vs_mul1) 
                                  + (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_result 
                                     >> 8U)));
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_a 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_b 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_start = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__state = 4U;
            }
        } else if ((4U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__state))) {
            __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_start = 0U;
            if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_done) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result 
                    = (0xffffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__tmp_vs_mul1) 
                                  + (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_result 
                                     >> 8U)));
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__state = 0U;
            }
        }
        if (((((((((0U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state)) 
                   | (1U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state))) 
                  | (2U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state))) 
                 | (3U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state))) 
                | (4U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state))) 
               | (5U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state))) 
              | (6U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state))) 
             | (7U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state)))) {
            if ((0U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state))) {
                if (((0x20cU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__yc)) 
                     & (0x307U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__xc)))) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_enter_quadmode = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT__fsm_state = 1U;
                }
            } else if ((1U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_enter_quadmode = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_at_quadmode) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__display_stop_txn = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT__fsm_state = 2U;
                }
            } else if ((2U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT__display_stop_txn = 0U;
                __Vdly__tbGenericVga__DOT__dut__DOT__numread = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_select_ROM = 1U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__display_start_read = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT__fsm_state = 3U;
            } else if ((3U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT__display_start_read = 0U;
                if ((0x18U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__read_delay))) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT____Vlvbound_hfc7abb36__0 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data;
                    __Vdly__tbGenericVga__DOT__dut__DOT__read_delay = 0U;
                    if ((5U >= (7U & vlSelfRef.tbGenericVga__DOT__dut__DOT__numread))) {
                        __VdlyVal__tbGenericVga__DOT__dut__DOT__pixels__v0 
                            = vlSelfRef.tbGenericVga__DOT__dut__DOT____Vlvbound_hfc7abb36__0;
                        __VdlyDim0__tbGenericVga__DOT__dut__DOT__pixels__v0 
                            = (7U & vlSelfRef.tbGenericVga__DOT__dut__DOT__numread);
                        __VdlySet__tbGenericVga__DOT__dut__DOT__pixels__v0 = 1U;
                    }
                    __Vdly__tbGenericVga__DOT__dut__DOT__fsm_state = 4U;
                    __Vdly__tbGenericVga__DOT__dut__DOT__numread = 1U;
                } else {
                    __Vdly__tbGenericVga__DOT__dut__DOT__read_delay 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__read_delay)));
                }
            } else if ((4U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT____Vlvbound_hfc7abb36__1 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data;
                if ((5U >= (7U & vlSelfRef.tbGenericVga__DOT__dut__DOT__numread))) {
                    __VdlyVal__tbGenericVga__DOT__dut__DOT__pixels__v1 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT____Vlvbound_hfc7abb36__1;
                    __VdlyDim0__tbGenericVga__DOT__dut__DOT__pixels__v1 
                        = (7U & vlSelfRef.tbGenericVga__DOT__dut__DOT__numread);
                    __VdlySet__tbGenericVga__DOT__dut__DOT__pixels__v1 = 1U;
                }
                __Vdly__tbGenericVga__DOT__dut__DOT__numread 
                    = (0x3ffffU & ((IData)(1U) + vlSelfRef.tbGenericVga__DOT__dut__DOT__numread));
                if ((5U == vlSelfRef.tbGenericVga__DOT__dut__DOT__numread)) {
                    __Vdly__tbGenericVga__DOT__dut__DOT__numread = 0U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__display_stop_txn = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT__fsm_state = 5U;
                }
            } else if ((5U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT__display_stop_txn = 0U;
                __Vdly__tbGenericVga__DOT__dut__DOT__has_tex 
                    = (1U & vlSelfRef.tbGenericVga__DOT__dut__DOT__pixels
                       [5U]);
                __Vdly__tbGenericVga__DOT__dut__DOT__i_numtri_byte = 0U;
                __Vdly__tbGenericVga__DOT__dut__DOT__fsm_state = 6U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__numtri 
                    = ((0x300U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__pixels
                                  [3U] << 8U)) | ((
                                                   vlSelfRef.tbGenericVga__DOT__dut__DOT__pixels
                                                   [0U] 
                                                   << 4U) 
                                                  | vlSelfRef.tbGenericVga__DOT__dut__DOT__pixels
                                                  [1U]));
            } else if ((6U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT__display_stop_txn = 0U;
                __Vdly__tbGenericVga__DOT__dut__DOT__numread = 0U;
                if (((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_numtri_byte) 
                     == ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                          ? (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__numtri_byte_tex)
                          : (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__numtri_byte)))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT__i_numtri_byte = 0U;
                    __Vdly__tbGenericVga__DOT__dut__DOT__fsm_state = 0xbU;
                } else {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_select_ROM = 1U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__display_start_read = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT__fsm_state = 7U;
                }
            } else {
                vlSelfRef.tbGenericVga__DOT__dut__DOT__display_start_read = 0U;
                if ((0x18U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__read_delay))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT__read_delay = 0U;
                    __VdlyVal__tbGenericVga__DOT__dut__DOT__buffer__v0 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data;
                    __VdlyDim0__tbGenericVga__DOT__dut__DOT__buffer__v0 
                        = (3U & vlSelfRef.tbGenericVga__DOT__dut__DOT__numread);
                    __VdlySet__tbGenericVga__DOT__dut__DOT__buffer__v0 = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT__fsm_state = 8U;
                    __Vdly__tbGenericVga__DOT__dut__DOT__numread = 1U;
                } else {
                    __Vdly__tbGenericVga__DOT__dut__DOT__read_delay 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__read_delay)));
                }
            }
        } else if (((((((((8U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state)) 
                          | (9U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state))) 
                         | (0xaU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state))) 
                        | (0xbU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state))) 
                       | (0xcU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state))) 
                      | (0xdU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state))) 
                     | (0xeU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state))) 
                    | (0xfU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state)))) {
            if ((8U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state))) {
                __VdlyVal__tbGenericVga__DOT__dut__DOT__buffer__v1 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data;
                __VdlyDim0__tbGenericVga__DOT__dut__DOT__buffer__v1 
                    = (3U & vlSelfRef.tbGenericVga__DOT__dut__DOT__numread);
                __VdlySet__tbGenericVga__DOT__dut__DOT__buffer__v1 = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT__numread 
                    = (0x3ffffU & ((IData)(1U) + vlSelfRef.tbGenericVga__DOT__dut__DOT__numread));
                if ((3U == vlSelfRef.tbGenericVga__DOT__dut__DOT__numread)) {
                    __Vdly__tbGenericVga__DOT__dut__DOT__numread = 0U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__display_stop_txn = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT__fsm_state = 9U;
                }
            } else if ((9U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT__numread 
                    = (0x3ffffU & ((IData)(1U) + vlSelfRef.tbGenericVga__DOT__dut__DOT__numread));
                vlSelfRef.tbGenericVga__DOT__dut__DOT__display_stop_txn = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_select_ROM = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__display_start_write = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT__fsm_state = 0xaU;
            } else if ((0xaU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT__display_start_write = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_data_req) {
                    __Vdly__tbGenericVga__DOT__dut__DOT__numread 
                        = (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.tbGenericVga__DOT__dut__DOT__numread));
                    if ((3U == vlSelfRef.tbGenericVga__DOT__dut__DOT__numread)) {
                        __Vdly__tbGenericVga__DOT__dut__DOT__i_numtri_byte 
                            = (0xffffU & ((IData)(2U) 
                                          + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_numtri_byte)));
                        __Vdly__tbGenericVga__DOT__dut__DOT__numread = 0U;
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__display_stop_txn = 1U;
                        __Vdly__tbGenericVga__DOT__dut__DOT__fsm_state = 6U;
                    }
                }
            } else if ((0xbU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT__display_stop_txn = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__start_vsfs = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT__do_swap) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__evenframe 
                        = (1U & (~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__evenframe)));
                    __Vdly__tbGenericVga__DOT__dut__DOT__sub_frame = 0U;
                } else if (((0x20cU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__yc)) 
                            & (0x30fU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__xc)))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT__sub_frame 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__sub_frame)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_select_ROM = 0U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__display_start_read = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT__fsm_state = 0xcU;
                }
            } else if ((0xcU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT__display_start_read = 0U;
                if ((0x10U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__read_delay))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT__read_delay = 0U;
                    __Vdly__tbGenericVga__DOT__dut__DOT__numread = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT__fsm_state = 0xdU;
                } else {
                    __Vdly__tbGenericVga__DOT__dut__DOT__read_delay 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__read_delay)));
                }
            } else if ((0xdU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT__numread 
                    = (0x3ffffU & ((IData)(1U) + vlSelfRef.tbGenericVga__DOT__dut__DOT__numread));
                if ((0x13fU == vlSelfRef.tbGenericVga__DOT__dut__DOT__numread)) {
                    __Vdly__tbGenericVga__DOT__dut__DOT__numread = 0U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__display_stop_txn = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT__fsm_state 
                        = ((1U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__sub_frame))
                            ? 0xeU : ((0xefU > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__yc))
                                       ? 0x10U : 0xbU));
                }
            } else if ((0xeU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state))) {
                __Vdly__tbGenericVga__DOT__dut__DOT__numread 
                    = (0x3ffffU & ((IData)(1U) + vlSelfRef.tbGenericVga__DOT__dut__DOT__numread));
                vlSelfRef.tbGenericVga__DOT__dut__DOT__display_stop_txn = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__display_start_write = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT__fsm_state = 0xfU;
            } else {
                vlSelfRef.tbGenericVga__DOT__dut__DOT__display_start_write = 0U;
                if (vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_data_req) {
                    __Vdly__tbGenericVga__DOT__dut__DOT__numread 
                        = (0x3ffffU & ((IData)(1U) 
                                       + vlSelfRef.tbGenericVga__DOT__dut__DOT__numread));
                    if ((0x13fU == vlSelfRef.tbGenericVga__DOT__dut__DOT__numread)) {
                        __Vdly__tbGenericVga__DOT__dut__DOT__numread = 0U;
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__display_stop_txn = 1U;
                        __Vdly__tbGenericVga__DOT__dut__DOT__fsm_state 
                            = ((0xefU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__yc))
                                ? 0x11U : 0x10U);
                    }
                }
            }
        } else if ((0x10U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__display_stop_txn = 0U;
            if ((0x30fU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__xc))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT__display_start_read = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT__fsm_state = 0xcU;
            }
        } else if ((0x11U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state))) {
            __Vdly__tbGenericVga__DOT__dut__DOT__numread 
                = (0x3ffffU & ((IData)(1U) + vlSelfRef.tbGenericVga__DOT__dut__DOT__numread));
            vlSelfRef.tbGenericVga__DOT__dut__DOT__display_stop_txn = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT__display_start_write = 1U;
            __Vdly__tbGenericVga__DOT__dut__DOT__fsm_state = 0x12U;
        } else if ((0x12U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__display_start_write = 0U;
            if (vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_data_req) {
                __Vdly__tbGenericVga__DOT__dut__DOT__numread 
                    = (0x3ffffU & ((IData)(1U) + vlSelfRef.tbGenericVga__DOT__dut__DOT__numread));
                if ((0x257ffU == vlSelfRef.tbGenericVga__DOT__dut__DOT__numread)) {
                    __Vdly__tbGenericVga__DOT__dut__DOT__numread = 0U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__display_stop_txn = 1U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__start_vsfs = 1U;
                    __Vdly__tbGenericVga__DOT__dut__DOT__fsm_state = 0xbU;
                }
            }
        } else {
            __Vdly__tbGenericVga__DOT__dut__DOT__fsm_state = 0U;
        }
        if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_busy) {
            if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__almost_done) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_done = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_busy = 0U;
            } else {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_done = 0U;
            }
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_done = 0U;
            __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_busy 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_start;
        }
    } else {
        __Vdly__tbGenericVga__DOT__dut__DOT__v__DOT__yc = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__v__DOT__xc = 0U;
        __Vdly__tbGenericVga__DOT__yCounter = 0U;
        __Vdly__tbGenericVga__DOT__xCounter = 0U;
        vlSelfRef.tbGenericVga__DOT__pixelVisible = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__manualRot = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__translate_z = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_start_read = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_start_write = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_stop_txn = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__do_swap = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_running = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_a = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_b = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_start = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_a = 0ULL;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_b = 0ULL;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_start = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_00 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_01 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_02 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_03 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_10 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_11 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_12 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_13 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_20 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_21 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_22 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_23 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_30 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_31 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_32 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_33 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_00 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_01 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_02 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_03 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_10 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_11 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_12 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_13 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_20 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_21 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_22 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_23 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_30 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_31 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_32 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_33 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sine_angle = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle_90 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle_90 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light_90 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosPhi = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinPhi = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosLight = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinLight = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_sinPhi = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_cosPhi = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_cosPhi = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_sinPhi = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_Tz = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_sinPhi_Tz = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_cosPhi_Tz = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_idx = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v0 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v1 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v2 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v0 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v1 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v2 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v0 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v1 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v2 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v0_u = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v0_v = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_u = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_v = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_u = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_v = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v0 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v1 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v2 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v0 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v1 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v2 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v0 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v1 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v2 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v0 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v1 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v2 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_x = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_y = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_z = 0x2800U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__nx = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__ny = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__nz = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightW_x = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightW_y = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightW_z = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightM_x = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightM_y = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightM_z = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__viewdir_x = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__viewdir_y = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__viewdir_z = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_color = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__shade_color = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v0 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v1 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v2 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v0 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v1 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v2 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v0 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v1 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v2 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_X = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_Y = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMax_X = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMax_Y = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0_init = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1_init = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2_init = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul1 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul2 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__denom = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix_dy = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix_dx = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy_dy = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy_dx = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz_dy = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz_dx = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dx = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dy = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dx = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dy = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dx = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dy = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_y = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_x = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_z = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_v = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u8 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1 = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_busy = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_a = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_b = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_start = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__state = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__tmp_vs_mul1 = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__sub_frame = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__evenframe = 1U;
        __Vdly__tbGenericVga__DOT__dut__DOT__has_tex = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__fsm_state = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__read_delay = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__numread = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__i_numtri_byte = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_select_ROM = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_enter_quadmode = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__display_start_read = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__display_start_write = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__display_stop_txn = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__start_vsfs = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__numtri = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_done = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_busy = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.resetn)))) {
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__state = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_done = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_result = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__state = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_done = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_result = 0ULL;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_latch_prev = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_clk_prev = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__light_y = 0U;
    }
    vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__fsm_state 
        = __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__fsm_state;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__is_writing 
        = __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__is_writing;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__bits_remaining 
        = __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__bits_remaining;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__doing_quadmode 
        = __Vdly__tbGenericVga__DOT__dut__DOT__i_spi__DOT__doing_quadmode;
    vlSelfRef.tbGenericVga__DOT__pixelClk = __Vdly__tbGenericVga__DOT__pixelClk;
    vlSelfRef.tbGenericVga__DOT__yCounter = __Vdly__tbGenericVga__DOT__yCounter;
    vlSelfRef.tbGenericVga__DOT__xCounter = __Vdly__tbGenericVga__DOT__xCounter;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__shift_reg 
        = __Vdly__tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__shift_reg;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_data_sync 
        = __Vdly__tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_data_sync;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__state 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__state;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__i 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__i;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__quo 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__quo;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__state 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__state;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__i 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__i;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo;
    vlSelfRef.yOrd = vlSelfRef.tbGenericVga__DOT__yCounter;
    vlSelfRef.xOrd = vlSelfRef.tbGenericVga__DOT__xCounter;
    vlSelfRef.visible = vlSelfRef.tbGenericVga__DOT__pixelVisible;
    tbGenericVga__DOT__dut__DOT__driver__DOT__decoder__DOT____VdfgRegularize_h9433714a_0_0 
        = ((0xfffU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__driver__DOT__gamepad_pmod_data))
            ? 0U : (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__driver__DOT__gamepad_pmod_data));
    vlSelfRef.tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_latch_prev 
        = (1U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_latch_sync) 
                 >> 1U));
    vlSelfRef.tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_clk_prev 
        = (1U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_clk_sync) 
                 >> 1U));
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__pwire 
        = ((1U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__p_b))
            ? (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__p_a)
            : 0U);
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__pwire 
        = ((1U & vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__p_b)
            ? vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__p_a
            : 0U);
    if ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__acc 
         >= vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__bu)) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__acc_next 
            = (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__acc 
               - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__bu);
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT____Vconcswap_1_hfa6d15fc__0 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__acc_next 
                << 1U) | (1U & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__quo 
                                >> 0x1eU)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__acc_next 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT____Vconcswap_1_hfa6d15fc__0;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT____Vconcswap_1_hfa6d5e4a__0 
            = (1U | (0x7ffffffeU & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__quo 
                                    << 1U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__quo_next 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT____Vconcswap_1_hfa6d5e4a__0;
    } else {
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__acc_next 
            = (IData)((0xffffffffULL & (VL_SHIFTL_QQI(63,63,32, 
                                                      (((QData)((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__acc)) 
                                                        << 0x1fU) 
                                                       | (QData)((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__quo))), 1U) 
                                        >> 0x1fU)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__quo_next 
            = (0x7fffffffU & (IData)((0x7fffffffffffffffULL 
                                      & VL_SHIFTL_QQI(63,63,32, 
                                                      (((QData)((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__acc)) 
                                                        << 0x1fU) 
                                                       | (QData)((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__quo))), 1U))));
    }
    if ((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__acc 
         >= vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__bu)) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__acc_next 
            = (0xffffffffffULL & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__acc 
                                  - vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__bu));
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT____Vconcswap_1_heb8cd72c__0 
            = ((0xfffffffffeULL & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__acc_next 
                                   << 1U)) | (QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo 
                                                                         >> 0x26U))))));
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__acc_next 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT____Vconcswap_1_heb8cd72c__0;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT____Vconcswap_1_heb8ccd80__0 
            = (1ULL | (0x7ffffffffeULL & (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo 
                                          << 1U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo_next 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT____Vconcswap_1_heb8ccd80__0;
    } else {
        __Vtemp_4[0U] = (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo);
        __Vtemp_4[1U] = (((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__acc) 
                          << 7U) | (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo 
                                            >> 0x20U)));
        __Vtemp_4[2U] = (((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__acc) 
                          >> 0x19U) | ((IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__acc 
                                                >> 0x20U)) 
                                       << 7U));
        VL_SHIFTL_WWI(79,79,32, __Vtemp_5, __Vtemp_4, 1U);
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__acc_next 
            = (0xffffffffffULL & (((QData)((IData)(
                                                   (0x7fffU 
                                                    & __Vtemp_5[2U]))) 
                                   << 0x19U) | ((QData)((IData)(
                                                                __Vtemp_5[1U])) 
                                                >> 7U)));
        __Vtemp_8[0U] = (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo);
        __Vtemp_8[1U] = (((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__acc) 
                          << 7U) | (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo 
                                            >> 0x20U)));
        __Vtemp_8[2U] = (((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__acc) 
                          >> 0x19U) | ((IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__acc 
                                                >> 0x20U)) 
                                       << 7U));
        VL_SHIFTL_WWI(79,79,32, __Vtemp_9, __Vtemp_8, 1U);
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo_next 
            = (0x7fffffffffULL & (((QData)((IData)(
                                                   __Vtemp_9[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               __Vtemp_9[0U]))));
    }
    vlSelfRef.tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_latch_sync 
        = __Vdly__tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_latch_sync;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_clk_sync 
        = __Vdly__tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_clk_sync;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__gamepad_input 
        = ((((0x80U & (tbGenericVga__DOT__dut__DOT__driver__DOT__decoder__DOT____VdfgRegularize_h9433714a_0_0 
                       >> 3U)) | (0x40U & (tbGenericVga__DOT__dut__DOT__driver__DOT__decoder__DOT____VdfgRegularize_h9433714a_0_0 
                                           << 4U))) 
            | ((0x20U & (tbGenericVga__DOT__dut__DOT__driver__DOT__decoder__DOT____VdfgRegularize_h9433714a_0_0 
                         >> 6U)) | (0x10U & (tbGenericVga__DOT__dut__DOT__driver__DOT__decoder__DOT____VdfgRegularize_h9433714a_0_0 
                                             << 1U)))) 
           | ((0xcU & (tbGenericVga__DOT__dut__DOT__driver__DOT__decoder__DOT____VdfgRegularize_h9433714a_0_0 
                       >> 2U)) | (3U & (tbGenericVga__DOT__dut__DOT__driver__DOT__decoder__DOT____VdfgRegularize_h9433714a_0_0 
                                        >> 6U))));
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_done 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_done;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_result 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_result;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_done 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_done;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_result 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_result;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__manualRot 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__manualRot;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__translate_z 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__translate_z;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle_90 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle_90;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle_90 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle_90;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light_90 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light_90;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinPhi 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinPhi;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosPhi 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosPhi;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_sinPhi 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_sinPhi;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_cosPhi 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_cosPhi;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_cosPhi 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_cosPhi;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_sinPhi 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_sinPhi;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_Tz 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_Tz;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_sinPhi_Tz 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_sinPhi_Tz;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_cosPhi_Tz 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_cosPhi_Tz;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_x 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_x;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_y 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_y;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_z 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_z;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_color 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_color;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v0_u 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v0_u;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_u 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_u;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_u 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_u;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v0_v 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v0_v;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_v 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_v;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_v 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_v;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v0 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v0;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v0 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v0;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v0 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v0;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v0 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v0;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v1 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v1;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v1 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v1;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v1 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v1;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v1 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v1;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v2 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v2;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v2 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v2;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v2 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v2;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v2 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v2;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v0 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v0;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v0 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v0;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v1 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v1;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v2 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v2;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v0 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v0;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v1 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v1;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v2 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v2;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v1 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v1;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v2 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v2;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__shade_color 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__shade_color;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_X 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_X;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_Y 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_Y;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMax_X 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMax_X;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMax_Y 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMax_Y;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul1 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul1;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul2 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul2;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0_init 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0_init;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1_init 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1_init;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2_init 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2_init;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__denom 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__denom;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy_dy 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy_dy;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy_dx 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy_dx;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz_dy 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz_dy;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz_dx 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz_dx;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix_dy 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix_dy;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix_dx 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix_dx;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dx 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dx;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dy 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dy;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_y 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_y;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dx 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dx;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dy 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dy;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dx 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dx;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dy 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dy;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_z 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_z;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_v 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_v;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_x 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_x;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u8 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u8;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_idx 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_idx;
    if (__VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v0) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz[__VdlyDim0__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v0] 
            = (((~ ((IData)(0xfU) << (IData)(__VdlyLsb__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v0))) 
                & vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz
                [__VdlyDim0__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v0]) 
               | (0xffffU & ((IData)(__VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v0) 
                             << (IData)(__VdlyLsb__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v0))));
    }
    if (__VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v1) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz[__VdlyDim0__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v1] 
            = (((~ ((IData)(0xfU) << (IData)(__VdlyLsb__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v1))) 
                & vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz
                [__VdlyDim0__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v1]) 
               | (0xffffU & ((IData)(__VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v1) 
                             << (IData)(__VdlyLsb__tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz__v1))));
    }
    if (__VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v0) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel[0U] 
            = __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v0;
    }
    if (__VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v1) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel[1U] 
            = __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v1;
    }
    if (__VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v2) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel[2U] 
            = __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v2;
    }
    if (__VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v3) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel[3U] 
            = __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel__v3;
    }
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v0 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v0;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v0 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v0;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v0 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v0;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v1 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v1;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v1 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v1;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v1 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v1;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v2 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v2;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v2 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v2;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v2 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v2;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinLight 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinLight;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosLight 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosLight;
    if (__VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v0) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer[__VdlyDim0__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v0] 
            = __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v0;
    }
    if (__VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v1) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer[__VdlyDim0__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v1] 
            = __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v1;
    }
    if (__VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v2) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer[0U] 
            = __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v2;
    }
    if (__VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v3) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer[1U] 
            = __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v3;
    }
    if (__VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v4) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer[2U] 
            = __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v4;
    }
    if (__VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v0) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer[__VdlyDim0__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v0] 
            = (((~ ((IData)(0xfU) << (IData)(__VdlyLsb__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v0))) 
                & vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer
                [__VdlyDim0__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v0]) 
               | (0xffU & ((IData)(__VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v0) 
                           << (IData)(__VdlyLsb__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v0))));
    }
    if (__VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v1) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer[__VdlyDim0__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v1] 
            = (((~ ((IData)(0xfU) << (IData)(__VdlyLsb__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v1))) 
                & vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer
                [__VdlyDim0__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v1]) 
               | (0xffU & ((IData)(__VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v1) 
                           << (IData)(__VdlyLsb__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v1))));
    }
    if (__VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v2) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer[0U] 
            = __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v2;
    }
    if (__VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v3) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer[1U] 
            = __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v3;
    }
    if (__VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v4) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer[2U] 
            = __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v4;
    }
    if (__VdlySet__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v5) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer[3U] 
            = __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer__v5;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer[3U] 
            = __VdlyVal__tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer__v5;
    }
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state;
    __Vtableidx2 = (0x7fU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sine_angle));
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sine_rom1__DOT__mem 
        = VtbGenericVga__ConstPool__TABLE_h980e3843_0
        [__Vtableidx2];
    if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__almost_done) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result 
            = (0xfffffffffffULL & (0x80000400000ULL 
                                   + vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__partial));
    }
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__partial 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__partial;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__state 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__state;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__tmp_vs_mul1 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__tmp_vs_mul1;
    if (((((((((0xe6U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)) 
               | (0xe7U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
              | (0xe8U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
             | (0xf0U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
            | (0xf1U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
           | (0xf2U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
          | (0x24U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
         | (0x3fU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)))) {
        if ((0xe6U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w = 0x100U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_03;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_01;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z = 0x2800U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_00));
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_02;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y = 0U;
        } else if ((0xe7U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w = 0x100U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_13;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_11;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z = 0x2800U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_10));
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_12;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y = 0U;
        } else if ((0xe8U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w = 0x100U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_23;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_21;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z = 0x2800U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_20));
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_22;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y = 0U;
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w = 0U;
            if ((0xf0U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_03;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_01;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightW_x;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightW_z;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                    = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_00));
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_02;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightW_y;
            } else if ((0xf1U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_13;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_11;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightW_x;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightW_z;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                    = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_10));
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_12;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightW_y;
            } else if ((0xf2U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_23;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_21;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightW_x;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightW_z;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                    = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_20));
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_22;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightW_y;
            } else {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w = 0U;
                if ((0x24U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__viewdir_y;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                        = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__viewdir_x));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__viewdir_z;
                } else {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightM_y;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                        = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightM_x));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightM_z;
                }
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__nx;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__nz;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__ny;
            }
        }
    } else if (((((((((0x26U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)) 
                      | (0x27U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                     | (0x28U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                    | (0x29U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                   | (0x2aU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                  | (0x2bU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                 | (0x2cU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                | (0x2dU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)))) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w = 0x100U;
        if ((0x26U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_03;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_01;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v0;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v0;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_00));
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_02;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v0;
        } else if ((0x27U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_13;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_11;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v0;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v0;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_10));
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_12;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v0;
        } else if ((0x28U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_23;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_21;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v0;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v0;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_20));
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_22;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v0;
        } else if ((0x29U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_33;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_31;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v0;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v0;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_30));
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_32;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v0;
        } else {
            if ((0x2aU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_03;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_01;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                    = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_00));
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_02;
            } else if ((0x2bU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_13;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_11;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                    = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_10));
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_12;
            } else if ((0x2cU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_23;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_21;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                    = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_20));
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_22;
            } else {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_33;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_31;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                    = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_30));
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_32;
            }
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v1;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v1;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v1;
        }
    } else if (((((((((0x2eU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)) 
                      | (0x2fU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                     | (0x30U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                    | (0x31U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                   | (0xb1U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                  | (0xb2U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                 | (0xbfU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                | (0xc0U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)))) {
        if ((0x2eU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w = 0x100U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_03;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_01;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v2;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v2;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_00));
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_02;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v2;
        } else if ((0x2fU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w = 0x100U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_13;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_11;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v2;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v2;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_10));
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_12;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v2;
        } else if ((0x30U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w = 0x100U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_23;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_21;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v2;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v2;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_20));
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_22;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v2;
        } else if ((0x31U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w = 0x100U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_33;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_31;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v2;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v2;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_30));
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_32;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v2;
        } else {
            if ((0xb1U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__light_x;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__light_z;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                    = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosLight));
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinLight;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__light_y;
            } else if ((0xb2U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__light_x;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__light_z;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                    = (0xffffU & ((IData)(1U) + (~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinLight))));
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosLight;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__light_y;
            } else {
                if ((0xbfU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_30;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_00;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_20;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_10;
                } else {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_31;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_01;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_21;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_11;
                }
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                    = (0xffffU & 0x20fU);
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z = 0U;
            }
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y = 0U;
        }
    } else if (((((((((0xc1U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)) 
                      | (0xc2U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                     | (0xc3U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                    | (0xc4U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                   | (0xc5U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                  | (0xc6U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                 | (0xc7U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) 
                | (0xc8U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state)))) {
        if ((0xc1U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_32;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_02;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_22;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                = (0xffffU & 0x20fU);
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_12;
        } else if ((0xc2U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_33;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_03;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_23;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                = (0xffffU & 0x20fU);
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_13;
        } else {
            if ((0xc3U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_30;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y = 0x2c0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_00;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_20;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_10;
            } else if ((0xc4U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_31;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y = 0x2c0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_01;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_21;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_11;
            } else if ((0xc5U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_32;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y = 0x2c0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_02;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_22;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_12;
            } else if ((0xc6U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_33;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y = 0x2c0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_03;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_23;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_13;
            } else {
                if ((0xc7U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_30;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_00;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_20;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_10;
                } else {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_31;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_01;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_21;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_11;
                }
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w = 0x1a57U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z = 0xfec9U;
            }
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                = (0xffffU & 0U);
        }
    } else {
        if ((0xc9U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_32;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w = 0x1a57U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_02;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_22;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z = 0xfec9U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_12;
        } else if ((0xcaU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_33;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w = 0x1a57U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_03;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_23;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z = 0xfec9U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_13;
        } else if ((0xcbU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_30;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w = 0x27d8U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_00;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_20;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z = 0xff01U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_10;
        } else if ((0xccU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_31;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w = 0x27d8U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_01;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_21;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z = 0xff01U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_11;
        } else if ((0xcdU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_32;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w = 0x27d8U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_02;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_22;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z = 0xff01U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_12;
        } else if ((0xceU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_33;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w = 0x27d8U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_03;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_23;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z = 0xff01U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_13;
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y = 0U;
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
            = (0xffffU & 0U);
    }
    vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_at_quadmode 
        = __Vdly__tbGenericVga__DOT__dut__DOT__spi_at_quadmode;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__do_swap 
        = __Vdly__tbGenericVga__DOT__dut__DOT__do_swap;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__fsm_state 
        = __Vdly__tbGenericVga__DOT__dut__DOT__fsm_state;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__numread 
        = __Vdly__tbGenericVga__DOT__dut__DOT__numread;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__read_delay 
        = __Vdly__tbGenericVga__DOT__dut__DOT__read_delay;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__i_numtri_byte 
        = __Vdly__tbGenericVga__DOT__dut__DOT__i_numtri_byte;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_data_req 
        = __Vdly__tbGenericVga__DOT__dut__DOT__spi_data_req;
    if (__VdlySet__tbGenericVga__DOT__dut__DOT__pixels__v0) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__pixels[__VdlyDim0__tbGenericVga__DOT__dut__DOT__pixels__v0] 
            = __VdlyVal__tbGenericVga__DOT__dut__DOT__pixels__v0;
    }
    if (__VdlySet__tbGenericVga__DOT__dut__DOT__pixels__v1) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__pixels[__VdlyDim0__tbGenericVga__DOT__dut__DOT__pixels__v1] 
            = __VdlyVal__tbGenericVga__DOT__dut__DOT__pixels__v1;
    }
    if (__VdlySet__tbGenericVga__DOT__dut__DOT__buffer__v0) {
        tbGenericVga__DOT__dut__DOT__buffer[__VdlyDim0__tbGenericVga__DOT__dut__DOT__buffer__v0] 
            = __VdlyVal__tbGenericVga__DOT__dut__DOT__buffer__v0;
    }
    if (__VdlySet__tbGenericVga__DOT__dut__DOT__buffer__v1) {
        tbGenericVga__DOT__dut__DOT__buffer[__VdlyDim0__tbGenericVga__DOT__dut__DOT__buffer__v1] 
            = __VdlyVal__tbGenericVga__DOT__dut__DOT__buffer__v1;
    }
    vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex 
        = __Vdly__tbGenericVga__DOT__dut__DOT__has_tex;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__sub_frame 
        = __Vdly__tbGenericVga__DOT__dut__DOT__sub_frame;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__yc 
        = __Vdly__tbGenericVga__DOT__dut__DOT__v__DOT__yc;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__xc 
        = __Vdly__tbGenericVga__DOT__dut__DOT__v__DOT__xc;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__almost_done 
        = (((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_busy)) 
           & (0U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__count)));
    if (vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__almost_done) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_result 
            = ((IData)(0x80010000U) + vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__partial);
    }
    vlSelfRef.tbGenericVga__DOT__dut__DOT__numtri_byte 
        = (0xffffU & (((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__numtri) 
                       << 4U) + (((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__numtri) 
                                  << 2U) + ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__numtri) 
                                            << 1U))));
    vlSelfRef.tbGenericVga__DOT__dut__DOT__numtri_byte_tex 
        = (0xffffU & ((IData)(0x8000U) + (((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__numtri) 
                                           << 4U) + 
                                          (((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__numtri) 
                                            << 3U) 
                                           + ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__numtri) 
                                              << 2U)))));
    vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data 
        = (0xfU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__spi_miso_buf_n) 
                   >> 4U));
    vlSelfRef.vSync = (1U & (~ ((0x1e9U < (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__yc)) 
                                & (0x1ecU > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__yc)))));
    vlSelfRef.hSync = (1U & (~ ((0x28fU < (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__xc)) 
                                & (0x2f0U > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__xc)))));
    tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_2 
        = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__xc) 
           > (0x3ffU & ((IData)(0x31fU) - ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                                            ? 0x61U
                                            : 0x55U))));
    tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_12 
        = (1U & (~ ((0x13fU < (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__xc)) 
                    | (0xefU < (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__yc)))));
    tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_10 
        = (1U & (~ ((0x20cU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__yc)) 
                    & (0x30eU < (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__xc)))));
    tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_6 
        = ((1U < (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__sub_frame)) 
           & ((0x140U < (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__xc)) 
              | (0xefU < (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__yc))));
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__count 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__count;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_busy 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_busy;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__partial 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__partial;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_start 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_start;
    tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_7 
        = (1U & (~ ((0x20cU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__yc)) 
                    & (IData)(tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_2))));
    tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_11 
        = ((((IData)(tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_6) 
             & ((~ ((0xefU > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__yc)) 
                    & ((0x30eU < (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__xc)) 
                       & (1U < (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__sub_frame))))) 
                & (IData)(tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_10))) 
            | ((2U > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__sub_frame)) 
               & ((IData)(tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_10) 
                  & (0x1afU < (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__yc))))) 
           & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_running));
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__almost_done 
        = (((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_busy)) 
           & (0U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__count)));
    __Vtableidx3 = vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data;
    tbGenericVga__DOT__dut__DOT___color__DOT__mem = 
        VtbGenericVga__ConstPool__TABLE_h7ea3c2be_0
        [__Vtableidx3];
    vlSelfRef.tbGenericVga__DOT__dut__DOT__ram_notbusy 
        = (((IData)(tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_6) 
            & ((~ ((0xefU > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__yc)) 
                   & ((IData)(tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_2) 
                      & (1U < (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__sub_frame))))) 
               & (IData)(tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_7))) 
           | ((2U > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__sub_frame)) 
              & ((IData)(tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_7) 
                 & (0x1afU < (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__yc)))));
    if (tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_11) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_start_read 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_start_read;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_start_write 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_start_write;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_stop_txn 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__vsfs_stop_txn;
    } else {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_start_read 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__display_start_read;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_start_write 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__display_start_write;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__spi_stop_txn 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__display_stop_txn;
    }
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__count 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__count;
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_busy 
        = __Vdly__tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_busy;
    vlSelfRef.red = (0xffU & (((((IData)(tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_12) 
                                 & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                                     ? (1U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data) 
                                              >> 3U))
                                     : (1U & ((IData)(tbGenericVga__DOT__dut__DOT___color__DOT__mem) 
                                              >> 5U)))) 
                                << 7U) | (((IData)(tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_12) 
                                           & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                                               ? (1U 
                                                  & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data) 
                                                     >> 3U))
                                               : (1U 
                                                  & ((IData)(tbGenericVga__DOT__dut__DOT___color__DOT__mem) 
                                                     >> 4U)))) 
                                          << 6U)) | 
                              (((((IData)(tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_12) 
                                  & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                                      ? (1U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data) 
                                               >> 3U))
                                      : (1U & ((IData)(tbGenericVga__DOT__dut__DOT___color__DOT__mem) 
                                               >> 5U)))) 
                                 << 5U) | (((IData)(tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_12) 
                                            & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                                                ? (1U 
                                                   & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data) 
                                                      >> 3U))
                                                : (1U 
                                                   & ((IData)(tbGenericVga__DOT__dut__DOT___color__DOT__mem) 
                                                      >> 4U)))) 
                                           << 4U)) 
                               | (((((IData)(tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_12) 
                                     & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                                         ? (1U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data) 
                                                  >> 3U))
                                         : (1U & ((IData)(tbGenericVga__DOT__dut__DOT___color__DOT__mem) 
                                                  >> 5U)))) 
                                    << 3U) | (((IData)(tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_12) 
                                               & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                                                   ? 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data) 
                                                      >> 3U))
                                                   : 
                                                  (1U 
                                                   & ((IData)(tbGenericVga__DOT__dut__DOT___color__DOT__mem) 
                                                      >> 4U)))) 
                                              << 2U)) 
                                  | ((((IData)(tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_12) 
                                       & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                                           ? (1U & 
                                              ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data) 
                                               >> 3U))
                                           : (1U & 
                                              ((IData)(tbGenericVga__DOT__dut__DOT___color__DOT__mem) 
                                               >> 5U)))) 
                                      << 1U) | ((IData)(tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_12) 
                                                & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                                                    ? 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data) 
                                                       >> 3U))
                                                    : 
                                                   (1U 
                                                    & ((IData)(tbGenericVga__DOT__dut__DOT___color__DOT__mem) 
                                                       >> 4U)))))))));
    vlSelfRef.green = (0xffU & (((((IData)(tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_12) 
                                   & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                                       ? (1U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data) 
                                                >> 2U))
                                       : (1U & ((IData)(tbGenericVga__DOT__dut__DOT___color__DOT__mem) 
                                                >> 3U)))) 
                                  << 7U) | (((IData)(tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_12) 
                                             & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                                                 ? 
                                                (1U 
                                                 & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data) 
                                                    >> 1U))
                                                 : 
                                                (1U 
                                                 & ((IData)(tbGenericVga__DOT__dut__DOT___color__DOT__mem) 
                                                    >> 2U)))) 
                                            << 6U)) 
                                | (((((IData)(tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_12) 
                                      & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                                          ? (1U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data) 
                                                   >> 2U))
                                          : (1U & ((IData)(tbGenericVga__DOT__dut__DOT___color__DOT__mem) 
                                                   >> 3U)))) 
                                     << 5U) | (((IData)(tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_12) 
                                                & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                                                    ? 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data) 
                                                       >> 1U))
                                                    : 
                                                   (1U 
                                                    & ((IData)(tbGenericVga__DOT__dut__DOT___color__DOT__mem) 
                                                       >> 2U)))) 
                                               << 4U)) 
                                   | (((((IData)(tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_12) 
                                         & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                                             ? (1U 
                                                & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data) 
                                                   >> 2U))
                                             : (1U 
                                                & ((IData)(tbGenericVga__DOT__dut__DOT___color__DOT__mem) 
                                                   >> 3U)))) 
                                        << 3U) | (((IData)(tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_12) 
                                                   & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                                                       ? 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data) 
                                                          >> 1U))
                                                       : 
                                                      (1U 
                                                       & ((IData)(tbGenericVga__DOT__dut__DOT___color__DOT__mem) 
                                                          >> 2U)))) 
                                                  << 2U)) 
                                      | ((((IData)(tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_12) 
                                           & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                                               ? (1U 
                                                  & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data) 
                                                     >> 2U))
                                               : (1U 
                                                  & ((IData)(tbGenericVga__DOT__dut__DOT___color__DOT__mem) 
                                                     >> 3U)))) 
                                          << 1U) | 
                                         ((IData)(tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_12) 
                                          & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                                              ? (1U 
                                                 & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data) 
                                                    >> 1U))
                                              : (1U 
                                                 & ((IData)(tbGenericVga__DOT__dut__DOT___color__DOT__mem) 
                                                    >> 2U)))))))));
    vlSelfRef.blue = (0xffU & (((((IData)(tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_12) 
                                  & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                                      ? (1U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data))
                                      : (1U & ((IData)(tbGenericVga__DOT__dut__DOT___color__DOT__mem) 
                                               >> 1U)))) 
                                 << 7U) | (((IData)(tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_12) 
                                            & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                                                ? (1U 
                                                   & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data))
                                                : (1U 
                                                   & (IData)(tbGenericVga__DOT__dut__DOT___color__DOT__mem)))) 
                                           << 6U)) 
                               | (((((IData)(tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_12) 
                                     & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                                         ? (1U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data))
                                         : (1U & ((IData)(tbGenericVga__DOT__dut__DOT___color__DOT__mem) 
                                                  >> 1U)))) 
                                    << 5U) | (((IData)(tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_12) 
                                               & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                                                   ? 
                                                  (1U 
                                                   & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data))
                                                   : 
                                                  (1U 
                                                   & (IData)(tbGenericVga__DOT__dut__DOT___color__DOT__mem)))) 
                                              << 4U)) 
                                  | (((((IData)(tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_12) 
                                        & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                                            ? (1U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data))
                                            : (1U & 
                                               ((IData)(tbGenericVga__DOT__dut__DOT___color__DOT__mem) 
                                                >> 1U)))) 
                                       << 3U) | (((IData)(tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_12) 
                                                  & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                                                      ? 
                                                     (1U 
                                                      & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data))
                                                      : 
                                                     (1U 
                                                      & (IData)(tbGenericVga__DOT__dut__DOT___color__DOT__mem)))) 
                                                 << 2U)) 
                                     | ((((IData)(tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_12) 
                                          & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                                              ? (1U 
                                                 & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data))
                                              : (1U 
                                                 & ((IData)(tbGenericVga__DOT__dut__DOT___color__DOT__mem) 
                                                    >> 1U)))) 
                                         << 1U) | ((IData)(tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_12) 
                                                   & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                                                       ? 
                                                      (1U 
                                                       & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data))
                                                       : 
                                                      (1U 
                                                       & (IData)(tbGenericVga__DOT__dut__DOT___color__DOT__mem)))))))));
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
            VL_FATAL_MT("tb\\tbGenericVga.v", 3, "", "NBA region did not converge.");
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
                VL_FATAL_MT("tb\\tbGenericVga.v", 3, "", "Active region did not converge.");
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
