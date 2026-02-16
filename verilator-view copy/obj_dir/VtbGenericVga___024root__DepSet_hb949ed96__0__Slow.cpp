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
}

VL_ATTR_COLD void VtbGenericVga___024root___eval_initial(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_initial\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
            VL_FATAL_MT("tb\\tbGenericVga.v", 3, "", "Settle region did not converge.");
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

extern const VlUnpacked<CData/*7:0*/, 128> VtbGenericVga__ConstPool__TABLE_h980e3843_0;
extern const VlUnpacked<CData/*5:0*/, 16> VtbGenericVga__ConstPool__TABLE_h7ea3c2be_0;

VL_ATTR_COLD void VtbGenericVga___024root___stl_sequent__TOP__0(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___stl_sequent__TOP__0\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
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
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    // Body
    vlSelfRef.hSync = (1U & (~ ((0x28fU < (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__xc)) 
                                & (0x2f0U > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__xc)))));
    vlSelfRef.vSync = (1U & (~ ((0x1e9U < (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__yc)) 
                                & (0x1ecU > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__yc)))));
    vlSelfRef.xOrd = vlSelfRef.tbGenericVga__DOT__xCounter;
    vlSelfRef.yOrd = vlSelfRef.tbGenericVga__DOT__yCounter;
    vlSelfRef.visible = vlSelfRef.tbGenericVga__DOT__pixelVisible;
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
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__pwire 
        = ((1U & vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__p_b)
            ? vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__p_a
            : 0U);
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__pwire 
        = ((1U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__p_b))
            ? (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__p_a)
            : 0U);
    __Vtableidx2 = (0x7fU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sine_angle));
    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sine_rom1__DOT__mem 
        = VtbGenericVga__ConstPool__TABLE_h980e3843_0
        [__Vtableidx2];
    tbGenericVga__DOT__dut__DOT__driver__DOT__decoder__DOT____VdfgRegularize_h9433714a_0_0 
        = ((0xfffU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__driver__DOT__gamepad_pmod_data))
            ? 0U : (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__driver__DOT__gamepad_pmod_data));
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
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z = 0x2800U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_02;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_00));
        } else if ((0xe7U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w = 0x100U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_13;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_11;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z = 0x2800U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_12;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_10));
        } else if ((0xe8U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w = 0x100U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_23;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_21;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z = 0x2800U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_22;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_20));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w = 0U;
            if ((0xf0U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_03;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_01;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightW_y;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightW_x;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightW_z;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_02;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                    = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_00));
            } else if ((0xf1U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_13;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_11;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightW_y;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightW_x;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightW_z;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_12;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                    = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_10));
            } else if ((0xf2U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_23;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_21;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightW_y;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightW_x;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightW_z;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_22;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                    = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_20));
            } else {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w = 0U;
                if ((0x24U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__viewdir_y;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__viewdir_z;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                        = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__viewdir_x));
                } else {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightM_y;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightM_z;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                        = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightM_x));
                }
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__ny;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__nx;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__nz;
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
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v0;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v0;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v0;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_02;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_00));
        } else if ((0x27U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_13;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_11;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v0;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v0;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v0;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_12;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_10));
        } else if ((0x28U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_23;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_21;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v0;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v0;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v0;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_22;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_20));
        } else if ((0x29U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_33;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_31;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v0;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v0;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v0;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_32;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_30));
        } else {
            if ((0x2aU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_03;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_01;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_02;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                    = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_00));
            } else if ((0x2bU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_13;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_11;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_12;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                    = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_10));
            } else if ((0x2cU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_23;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_21;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_22;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                    = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_20));
            } else {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_33;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_31;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_32;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                    = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_30));
            }
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v1;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v1;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v1;
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
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v2;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v2;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v2;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_02;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_00));
        } else if ((0x2fU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w = 0x100U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_13;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_11;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v2;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v2;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v2;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_12;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_10));
        } else if ((0x30U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w = 0x100U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_23;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_21;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v2;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v2;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v2;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_22;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_20));
        } else if ((0x31U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w = 0x100U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_33;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_31;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v2;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v2;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v2;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_32;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_30));
        } else {
            if ((0xb1U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__light_y;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__light_x;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__light_z;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinLight;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                    = (0xffffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosLight));
            } else if ((0xb2U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__light_y;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__light_x;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__light_z;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosLight;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                    = (0xffffU & ((IData)(1U) + (~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinLight))));
            } else {
                if ((0xbfU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_30;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_10;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_00;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_20;
                } else {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_31;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_11;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_01;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_21;
                }
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                    = (0xffffU & 0x20fU);
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
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_12;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_02;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_22;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                = (0xffffU & 0x20fU);
        } else if ((0xc2U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_33;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_13;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_03;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_23;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
                = (0xffffU & 0x20fU);
        } else {
            if ((0xc3U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_30;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y = 0x2c0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_10;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_00;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_20;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z = 0U;
            } else if ((0xc4U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_31;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y = 0x2c0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_11;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_01;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_21;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z = 0U;
            } else if ((0xc5U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_32;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y = 0x2c0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_12;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_02;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_22;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z = 0U;
            } else if ((0xc6U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_33;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y = 0x2c0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_13;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_03;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_23;
                vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z = 0U;
            } else {
                if ((0xc7U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_30;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_10;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_00;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_20;
                } else {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_31;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_11;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_01;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_21;
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
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_12;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_02;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_22;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z = 0xfec9U;
        } else if ((0xcaU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_33;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w = 0x1a57U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_13;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_03;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_23;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z = 0xfec9U;
        } else if ((0xcbU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_30;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w = 0x27d8U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_10;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_00;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_20;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z = 0xff01U;
        } else if ((0xccU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_31;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w = 0x27d8U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_11;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_01;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_21;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z = 0xff01U;
        } else if ((0xcdU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_32;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w = 0x27d8U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_12;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_02;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_22;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z = 0xff01U;
        } else if ((0xceU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_33;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w = 0x27d8U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_13;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_03;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_23;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z = 0xff01U;
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z = 0U;
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x 
            = (0xffffU & 0U);
    }
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
        __Vtemp_2[0U] = (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo);
        __Vtemp_2[1U] = (((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__acc) 
                          << 7U) | (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo 
                                            >> 0x20U)));
        __Vtemp_2[2U] = (((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__acc) 
                          >> 0x19U) | ((IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__acc 
                                                >> 0x20U)) 
                                       << 7U));
        VL_SHIFTL_WWI(79,79,32, __Vtemp_3, __Vtemp_2, 1U);
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__acc_next 
            = (0xffffffffffULL & (((QData)((IData)(
                                                   (0x7fffU 
                                                    & __Vtemp_3[2U]))) 
                                   << 0x19U) | ((QData)((IData)(
                                                                __Vtemp_3[1U])) 
                                                >> 7U)));
        __Vtemp_6[0U] = (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo);
        __Vtemp_6[1U] = (((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__acc) 
                          << 7U) | (IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo 
                                            >> 0x20U)));
        __Vtemp_6[2U] = (((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__acc) 
                          >> 0x19U) | ((IData)((vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__acc 
                                                >> 0x20U)) 
                                       << 7U));
        VL_SHIFTL_WWI(79,79,32, __Vtemp_7, __Vtemp_6, 1U);
        vlSelfRef.tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo_next 
            = (0x7fffffffffULL & (((QData)((IData)(
                                                   __Vtemp_7[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               __Vtemp_7[0U]))));
    }
    tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_2 
        = ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__xc) 
           > (0x3ffU & ((IData)(0x31fU) - ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__has_tex)
                                            ? 0x61U
                                            : 0x55U))));
    tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_12 
        = (1U & (~ ((0x13fU < (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__xc)) 
                    | (0xefU < (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__yc)))));
    __Vtableidx3 = vlSelfRef.tbGenericVga__DOT__dut__DOT__i_spi__DOT__data;
    tbGenericVga__DOT__dut__DOT___color__DOT__mem = 
        VtbGenericVga__ConstPool__TABLE_h7ea3c2be_0
        [__Vtableidx3];
    tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_10 
        = (1U & (~ ((0x20cU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__yc)) 
                    & (0x30eU < (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__xc)))));
    tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_6 
        = ((1U < (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__sub_frame)) 
           & ((0x140U < (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__xc)) 
              | (0xefU < (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__yc))));
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
    tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_7 
        = (1U & (~ ((0x20cU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__v__DOT__yc)) 
                    & (IData)(tbGenericVga__DOT__dut__DOT____VdfgRegularize_h0ed1188c_0_2))));
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
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge clock50MHz)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge clock50MHz)\n");
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
    vlSelf->tbGenericVga__DOT__xCounter = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8428678062822506124ull);
    vlSelf->tbGenericVga__DOT__yCounter = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3169662348176411452ull);
    vlSelf->tbGenericVga__DOT__pixelVisible = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9153113075003343271ull);
    vlSelf->tbGenericVga__DOT__pixelClk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1537532714039367365ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__spi_select_ROM = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9143742088150076554ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__spi_enter_quadmode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5406739341981966396ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__spi_start_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13086176805643523748ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__spi_start_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 214965748468309173ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__spi_stop_txn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11394224325075234251ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__spi_data_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9229537803499020901ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__spi_at_quadmode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16420290534302636161ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__vsfs_start_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12807405957422870994ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__vsfs_start_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 775110935809381678ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__vsfs_stop_txn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15690359805203068649ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__do_swap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3254678586143895690ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__start_vsfs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14270738259023966416ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__numtri = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15610728321650641092ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__has_tex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9239237857797727012ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__fsm_state = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17826472355225737875ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__read_delay = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14659435729708400893ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__numread = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 10235380573068202550ull);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__pixels[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9321203586357135667ull);
    }
    vlSelf->tbGenericVga__DOT__dut__DOT__sub_frame = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8458516494389315077ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__evenframe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15252785970901769503ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__i_numtri_byte = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5953050787616852125ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__numtri_byte = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1281922965951285912ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__numtri_byte_tex = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18350365822592971932ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__display_start_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4191233130582061657ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__display_start_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17377887576840713528ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__display_stop_txn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2638844238962021452ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__vsfs_running = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17968996552510719309ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__ram_notbusy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2472971891450073987ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__gamepad_input = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2212966561936359647ull);
    vlSelf->tbGenericVga__DOT__dut__DOT____Vlvbound_hfc7abb36__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7887602652344166253ull);
    vlSelf->tbGenericVga__DOT__dut__DOT____Vlvbound_hfc7abb36__1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2463411023449901435ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__v__DOT__xc = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16333336526005708203ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__v__DOT__yc = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15378868955394811581ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__driver__DOT__gamepad_pmod_data = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10048757765212172467ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_clk_prev = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2783346738312650747ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_latch_prev = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6057447639210600310ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__shift_reg = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7254022175020642645ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_data_sync = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4612413682557685288ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_clk_sync = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9961794777314307092ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__driver__DOT__driver__DOT__pmod_latch_sync = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11107251975594992733ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7651194994859699228ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8343583649173050230ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18413401382862072853ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4401479028411249873ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__div_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16640854716332785933ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_a = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 6701297432780168321ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_b = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 14237055422798657138ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_result = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 3723330743290445081ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13826682450884943664ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16772892667770678200ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_a = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 11826524239137259199ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_b = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 8743237550392076619ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_result = VL_SCOPED_RAND_RESET_Q(44, __VscopeHash, 17315052127671087768ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12496202095094267838ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1894911967171756393ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12544445127352661509ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2696294537435123789ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7158232291765912859ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_x = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9393480669774115903ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_y = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3432324895173052244ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_z = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7935913323399826857ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_w = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3379528407930036948ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_x = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1949558134627703574ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_y = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9742727294590796054ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_z = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4612050918501061921ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_w = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16263756292743502801ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot_result = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5823653318231608844ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__fsm_state = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3884320405079599893ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_00 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6038364822263564944ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_01 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3128495709002963299ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_02 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2903170329916184238ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_03 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6702017682324005603ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_10 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15690698783404882149ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_11 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14039270559176961466ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_12 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11045375224218585607ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_13 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18346512016620473077ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_20 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5804155762422727334ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_21 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4468450863892143338ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_22 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7426723323263614290ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_23 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14472461308813827587ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_30 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4702385639532875806ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_31 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2884649434686270295ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_32 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16215041013374424942ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__M_33 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14063204709371705432ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_00 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7159193453157887432ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_01 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11570595916611451551ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_02 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10155273027919139016ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_03 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14122740090285722637ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_10 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7309757170667837863ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_11 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8174554178006815426ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_12 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3465197575326139199ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_13 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4857826043020670362ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_20 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14453769721660337812ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_21 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2682137573743719301ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_22 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11053145527405506092ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_23 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16134832900690135544ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_30 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2673458034249449761ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_31 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 41160368558720376ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_32 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16126153361195694298ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__MVP_33 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12068506252254293886ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__read_delay = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15154173937011849090ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__numread = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 12872593068603732337ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_idx = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11424968283302726996ull);
    for (int __Vi0 = 0; __Vi0 < 14; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_xyz[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12163408447840986169ull);
    }
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11575555946151647481ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6510231731126715589ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_model_v2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9002523967151070709ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5429932671503975706ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13727653989141326768ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_model_v2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14436783931223297112ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13512156059417385280ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10733229282835388779ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_model_v2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8339123756944320969ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__v0_u = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7553365470456405086ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__v0_v = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16514647816870431446ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_u = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16588304800345331227ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__v1_v = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17666997314730568609ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_u = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1539348963834460134ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__v2_v = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6341768650713786902ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 939046416368870714ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3165338310673537851ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_clip_v2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4599299091937436197ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2004873361718088128ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11849673246526428305ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_clip_v2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6896682558102648322ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18404093124917142214ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9661348422970036269ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_clip_v2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1686902134653420230ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9448491213501058322ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6734849249236616509ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__w_clip_v2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 484817709585130628ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_x = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9713372705111591859ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_y = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9043074510345127450ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__campos_z = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14456389133298960048ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__nx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3765105039959655579ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__ny = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7636160398577613903ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__nz = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12243312164807405859ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__light_x = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4700106778662279632ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__light_y = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3788259328116057517ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__light_z = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11747307326056862938ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightW_x = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9285535458975777283ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightW_y = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14154524186490871813ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightW_z = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8757182905607874265ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightM_x = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5660440238945372648ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightM_y = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13653444070785209700ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__lightM_z = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5571428893299557932ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__viewdir_x = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10751125399700442869ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__viewdir_y = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11497808542037347887ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__viewdir_z = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13240187829683995703ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__tri_color = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10648372391020442623ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__shade_color = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12380911403764327198ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v0 = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 5218081815380545280ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v1 = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 11943383299954600583ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__x_screen_v2 = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 571406031644659294ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v0 = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 16903699553061496615ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v1 = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 9484527527059745188ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__y_screen_v2 = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 3661041705346576773ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5311760065171071308ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v1 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 9689456028137023656ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_screen_v2 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 17746626490478190588ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_X = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 16220377472734047935ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMin_Y = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 14618025100792169405ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMax_X = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 14628520847960951805ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__bboxMax_Y = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 10797937728657875624ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0_init = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 16167083821179454480ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1_init = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 15171076403347305109ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2_init = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 16326389850667224555ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul1 = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 13197748232108053341ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__tmp_ei_mul2 = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 13272904732394077906ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__denom = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 7956203260995128607ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 490678183082181458ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix_dx = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 2738104026286762758ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_ix_dy = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 3043561571254468746ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 14699961132963371617ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy_dx = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 16221423872922248134ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iy_dy = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 15995645618436253228ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 461565008560203435ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz_dx = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 14593836372298283203ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__bar_iz_dy = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 4287410811108624719ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 9670432945920901455ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dx = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 10519130121657966858ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__z_bar_dy = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 13106713236056792010ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 14752116427679707367ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dx = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 4157930452690575792ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__u_bar_dy = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 4752575680072895628ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 4149581359879109283ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dx = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 16491876702293688232ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__v_bar_dy = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 9859683483393501230ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7489322826343090751ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1038919757322030919ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_z = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 17071123316881570830ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 15578673474223666534ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_v = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 14427714930028041586ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__pixel_u8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6906623809480405743ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__e0 = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 17655770993934577990ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__e1 = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 679114133992143606ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__e2 = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 10972538734818867036ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__db_texel = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 524412835401935483ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__texel[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18313926461301386409ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__Z_buffer[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16989803443778042757ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__C_buffer[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3735630388598112530ull);
    }
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__manualRot = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 169917595775903488ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 83621448834451873ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_angle_90 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 933839181379446086ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14072960697537115455ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotX_angle_90 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4524317713198997578ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__translate_z = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8746590499688520210ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1232887944826319735ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__rotY_light_90 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 69937304211075330ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__sine_angle = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3990740008216979143ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2322864874507868065ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17070765451694963073ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosPhi = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16100781835948744581ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinPhi = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2706710128729559322ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosLight = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2007626385978861087ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinLight = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9050771445157215328ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_sinPhi = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8289888985501086109ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_cosPhi = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9976357799398857278ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_cosPhi = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4994762861741416328ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_sinPhi = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16617920135221506628ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__sinTheta_Tz = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7101864452357655397ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_sinPhi_Tz = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3940968988943108351ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__cosTheta_cosPhi_Tz = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3500138142686918473ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT____Vlvbound_h0af86799__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2707780610735843868ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT____Vlvbound_h0af86799__1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17780642216995828060ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__i = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3144302328825025430ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__sig_diff = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13956628609722344119ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__au = VL_SCOPED_RAND_RESET_I(31, __VscopeHash, 1795551865166025701ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__bu = VL_SCOPED_RAND_RESET_I(31, __VscopeHash, 521500613432822659ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__quo = VL_SCOPED_RAND_RESET_I(31, __VscopeHash, 7135930595661737433ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__quo_next = VL_SCOPED_RAND_RESET_I(31, __VscopeHash, 2068991344816811387ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__acc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13477021400448549954ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__acc_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14555684488278613057ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2703583058257660259ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT____Vconcswap_1_hfa6d15fc__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12027443427429519282ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__div1__DOT____Vconcswap_1_hfa6d5e4a__0 = VL_SCOPED_RAND_RESET_I(31, __VscopeHash, 749988479820244342ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__i = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5772020718056380642ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__sig_diff = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1754550373837617114ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__au = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 14967834235187447146ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__bu = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 5033369752098658498ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 18104050508328333607ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__quo_next = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 4336976336729223529ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__acc = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 3649307579878113432ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__acc_next = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 8784881694290888632ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9159127666947496932ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT____Vconcswap_1_heb8cd72c__0 = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 3073862696770253948ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__div2__DOT____Vconcswap_1_heb8ccd80__0 = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 4396463790157823301ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__count = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15620087707913732873ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__p_a = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 2233011245674646060ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__p_b = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 14317381250388137594ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__partial = VL_SCOPED_RAND_RESET_Q(44, __VscopeHash, 4512319109365234125ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__almost_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18234249437459770998ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__mul__DOT__pwire = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 11954302240747460664ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4369478702027448973ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13191417829831642653ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7740160873052096326ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 795978608373410740ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 875328447180796405ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17326605018781912582ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17322253890734521591ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__tmp_vs_mul1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14918803440502938004ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16444506828844486442ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__p_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15269586217042351383ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__p_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 999751730493773253ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__partial = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16753994953727133919ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__almost_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10300907397001880271ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__dot__DOT__mul2__DOT__pwire = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5951812287017719284ull);
    vlSelf->tbGenericVga__DOT__dut__DOT___vsfs__DOT__sine_rom1__DOT__mem = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12138365521984319689ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__i_spi__DOT__fsm_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 573197144246427418ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__i_spi__DOT__doing_quadmode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15287699305695936043ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__i_spi__DOT__is_writing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5392465169098801903ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__i_spi__DOT__spi_miso_buf_n = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4059986983905992364ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__i_spi__DOT__data = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18121760960571364316ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__i_spi__DOT__bits_remaining = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3896457411672781164ull);
    vlSelf->__Vtrigprevexpr___TOP__clock50MHz__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 128179198767269375ull);
}
