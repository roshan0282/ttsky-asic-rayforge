// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_q16_basic.h for the primary calling header

#include "Vtb_q16_basic__pch.h"
#include "Vtb_q16_basic___024root.h"

VlCoroutine Vtb_q16_basic___024root___eval_initial__TOP__Vtiming__0(Vtb_q16_basic___024root* vlSelf);

void Vtb_q16_basic___024root___eval_initial(Vtb_q16_basic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_q16_basic___024root___eval_initial\n"); );
    Vtb_q16_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_q16_basic___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_q16_basic___024root___eval_initial__TOP__Vtiming__0(Vtb_q16_basic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_q16_basic___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_q16_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("=== Q16.16 Arithmetic Tests ===\n\n",0);
    vlSelfRef.tb_q16_basic__DOT__a = 0x10000U;
    vlSelfRef.tb_q16_basic__DOT__b = 0x20000U;
    vlSelfRef.tb_q16_basic__DOT__expected = 0x30000U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb_q16_basic.sv", 
                                         38);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_q16_basic__DOT__test_pass = (vlSelfRef.tb_q16_basic__DOT__sum 
                                              == vlSelfRef.tb_q16_basic__DOT__expected);
    VL_WRITEF_NX("Test 1: Addition\n  1.0 + 2.0 = %0d (expected %0d) [%s]\n",0,
                 32,vlSelfRef.tb_q16_basic__DOT__sum,
                 32,vlSelfRef.tb_q16_basic__DOT__expected,
                 32,((IData)(vlSelfRef.tb_q16_basic__DOT__test_pass)
                      ? 0x50415353U : 0x4641494cU));
    vlSelfRef.tb_q16_basic__DOT__a = 0x30000U;
    vlSelfRef.tb_q16_basic__DOT__b = 0x10000U;
    vlSelfRef.tb_q16_basic__DOT__expected = 0x20000U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb_q16_basic.sv", 
                                         48);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_q16_basic__DOT__test_pass = (vlSelfRef.tb_q16_basic__DOT__diff 
                                              == vlSelfRef.tb_q16_basic__DOT__expected);
    VL_WRITEF_NX("\nTest 2: Subtraction\n  3.0 - 1.0 = %0d (expected %0d) [%s]\n",0,
                 32,vlSelfRef.tb_q16_basic__DOT__diff,
                 32,vlSelfRef.tb_q16_basic__DOT__expected,
                 32,((IData)(vlSelfRef.tb_q16_basic__DOT__test_pass)
                      ? 0x50415353U : 0x4641494cU));
    vlSelfRef.tb_q16_basic__DOT__a = 0x18000U;
    vlSelfRef.tb_q16_basic__DOT__b = 0x20000U;
    vlSelfRef.tb_q16_basic__DOT__expected = 0x30000U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb_q16_basic.sv", 
                                         58);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_q16_basic__DOT__test_pass = ((IData)(
                                                      ((0x8000ULL 
                                                        + vlSelfRef.tb_q16_basic__DOT__u_mul__DOT__full_prod) 
                                                       >> 0x10U)) 
                                              == vlSelfRef.tb_q16_basic__DOT__expected);
    VL_WRITEF_NX("\nTest 3: Multiplication\n  1.5 * 2.0 = %0d (expected %0d) [%s]\n",0,
                 32,(IData)(((0x8000ULL + vlSelfRef.tb_q16_basic__DOT__u_mul__DOT__full_prod) 
                             >> 0x10U)),32,vlSelfRef.tb_q16_basic__DOT__expected,
                 32,((IData)(vlSelfRef.tb_q16_basic__DOT__test_pass)
                      ? 0x50415353U : 0x4641494cU));
    vlSelfRef.tb_q16_basic__DOT__a = 0x30000U;
    vlSelfRef.tb_q16_basic__DOT__b = 0x20000U;
    vlSelfRef.tb_q16_basic__DOT__expected = 0x18000U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb_q16_basic.sv", 
                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_q16_basic__DOT__test_pass = (vlSelfRef.tb_q16_basic__DOT__u_div__DOT__quotient 
                                              == vlSelfRef.tb_q16_basic__DOT__expected);
    VL_WRITEF_NX("\nTest 4: Division\n  3.0 / 2.0 = %0d (expected %0d) [%s]\n",0,
                 32,vlSelfRef.tb_q16_basic__DOT__u_div__DOT__quotient,
                 32,vlSelfRef.tb_q16_basic__DOT__expected,
                 32,((IData)(vlSelfRef.tb_q16_basic__DOT__test_pass)
                      ? 0x50415353U : 0x4641494cU));
    vlSelfRef.tb_q16_basic__DOT__a = 0x40000U;
    vlSelfRef.tb_q16_basic__DOT__expected = 0x20000U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb_q16_basic.sv", 
                                         77);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_q16_basic__DOT__test_pass = (vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__result 
                                              == vlSelfRef.tb_q16_basic__DOT__expected);
    VL_WRITEF_NX("\nTest 5: Square Root\n  sqrt(4.0) = %0d (expected %0d) [%s]\n",0,
                 32,vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__result,
                 32,vlSelfRef.tb_q16_basic__DOT__expected,
                 32,((IData)(vlSelfRef.tb_q16_basic__DOT__test_pass)
                      ? 0x50415353U : 0x4641494cU));
    vlSelfRef.tb_q16_basic__DOT__a = 0x20000U;
    vlSelfRef.tb_q16_basic__DOT__b = 0x10000U;
    vlSelfRef.tb_q16_basic__DOT__expected = 0x30000U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb_q16_basic.sv", 
                                         88);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_q16_basic__DOT__test_pass = (((IData)(0x10000U) 
                                               + (IData)(vlSelfRef.tb_q16_basic__DOT__u_dot__DOT__px)) 
                                              == vlSelfRef.tb_q16_basic__DOT__expected);
    VL_WRITEF_NX("\nTest 6: Dot Product\n  (2.0, 1.0, 1.0) \302\267 (1.0, 0.0, 1.0) = %0d (expected %0d) [%s]\n\n=== Tests Complete ===\n\n",0,
                 32,((IData)(0x10000U) + (IData)(vlSelfRef.tb_q16_basic__DOT__u_dot__DOT__px)),
                 32,vlSelfRef.tb_q16_basic__DOT__expected,
                 32,((IData)(vlSelfRef.tb_q16_basic__DOT__test_pass)
                      ? 0x50415353U : 0x4641494cU));
    VL_FINISH_MT("tb_q16_basic.sv", 95, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

void Vtb_q16_basic___024root___act_sequent__TOP__0(Vtb_q16_basic___024root* vlSelf);

void Vtb_q16_basic___024root___eval_act(Vtb_q16_basic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_q16_basic___024root___eval_act\n"); );
    Vtb_q16_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_q16_basic___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_q16_basic___024root___act_sequent__TOP__0(Vtb_q16_basic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_q16_basic___024root___act_sequent__TOP__0\n"); );
    Vtb_q16_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_LTS_III(32, 0U, vlSelfRef.tb_q16_basic__DOT__a)) {
        vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__unnamedblk1__DOT__i = 0xffffffffU;
    }
    vlSelfRef.tb_q16_basic__DOT__u_dot__DOT__px = VL_SHIFTRS_QQI(64,64,32, 
                                                                 VL_MULS_QQQ(64, 0x10000ULL, 
                                                                             VL_EXTENDS_QI(64,32, vlSelfRef.tb_q16_basic__DOT__a)), 0x10U);
    vlSelfRef.tb_q16_basic__DOT__sum = (vlSelfRef.tb_q16_basic__DOT__a 
                                        + vlSelfRef.tb_q16_basic__DOT__b);
    vlSelfRef.tb_q16_basic__DOT__diff = (vlSelfRef.tb_q16_basic__DOT__a 
                                         - vlSelfRef.tb_q16_basic__DOT__b);
    vlSelfRef.tb_q16_basic__DOT__u_mul__DOT__full_prod 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.tb_q16_basic__DOT__a), 
                      VL_EXTENDS_QI(64,32, vlSelfRef.tb_q16_basic__DOT__b));
    vlSelfRef.tb_q16_basic__DOT__u_div__DOT__quotient 
        = ((0U == vlSelfRef.tb_q16_basic__DOT__b) ? 
           (VL_LTES_III(32, 0U, vlSelfRef.tb_q16_basic__DOT__a)
             ? 0x7fffffffU : 0x80000001U) : (IData)(
                                                    VL_DIVS_QQQ(64, 
                                                                ((QData)((IData)(vlSelfRef.tb_q16_basic__DOT__a)) 
                                                                 << 0x10U), 
                                                                VL_EXTENDS_QI(64,32, vlSelfRef.tb_q16_basic__DOT__b))));
    vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__v = 0ULL;
    vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem = 0ULL;
    vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r = 0ULL;
    if (VL_GTES_III(32, 0U, vlSelfRef.tb_q16_basic__DOT__a)) {
        vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__result = 0U;
    } else {
        vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__v 
            = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_q16_basic__DOT__a)), 0x10U);
        vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r = 0ULL;
        vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
            = (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__v, 0x2eU));
        if ((1ULL <= vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem)) {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                = (vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)));
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U);
        }
        vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__v, 0x2cU)));
        if ((vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)))) {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                = (vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)));
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U);
        }
        vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__v, 0x2aU)));
        if ((vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)))) {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                = (vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)));
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U);
        }
        vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__v, 0x28U)));
        if ((vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)))) {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                = (vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)));
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U);
        }
        vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__v, 0x26U)));
        if ((vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)))) {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                = (vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)));
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U);
        }
        vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__v, 0x24U)));
        if ((vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)))) {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                = (vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)));
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U);
        }
        vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__v, 0x22U)));
        if ((vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)))) {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                = (vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)));
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U);
        }
        vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__v, 0x20U)));
        if ((vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)))) {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                = (vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)));
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U);
        }
        vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__v, 0x1eU)));
        if ((vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)))) {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                = (vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)));
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U);
        }
        vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__v, 0x1cU)));
        if ((vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)))) {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                = (vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)));
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U);
        }
        vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__v, 0x1aU)));
        if ((vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)))) {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                = (vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)));
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U);
        }
        vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__v, 0x18U)));
        if ((vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)))) {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                = (vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)));
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U);
        }
        vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__v, 0x16U)));
        if ((vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)))) {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                = (vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)));
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U);
        }
        vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__v, 0x14U)));
        if ((vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)))) {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                = (vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)));
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U);
        }
        vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__v, 0x12U)));
        if ((vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)))) {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                = (vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)));
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U);
        }
        vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__v, 0x10U)));
        if ((vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)))) {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                = (vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)));
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U);
        }
        vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__v, 0xeU)));
        if ((vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)))) {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                = (vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)));
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U);
        }
        vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__v, 0xcU)));
        if ((vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)))) {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                = (vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)));
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U);
        }
        vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__v, 0xaU)));
        if ((vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)))) {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                = (vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)));
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U);
        }
        vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__v, 8U)));
        if ((vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)))) {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                = (vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)));
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U);
        }
        vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__v, 6U)));
        if ((vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)))) {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                = (vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)));
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U);
        }
        vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__v, 4U)));
        if ((vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)))) {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                = (vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)));
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U);
        }
        vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__v, 2U)));
        if ((vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)))) {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                = (vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)));
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U);
        }
        vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem, 2U) 
               | (3ULL & vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__v));
        if ((vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)))) {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                = (vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 2U)));
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U));
        } else {
            vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r, 1U);
        }
        vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__result 
            = (IData)(vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r);
    }
}

void Vtb_q16_basic___024root___eval_nba(Vtb_q16_basic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_q16_basic___024root___eval_nba\n"); );
    Vtb_q16_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_q16_basic___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

void Vtb_q16_basic___024root___timing_resume(Vtb_q16_basic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_q16_basic___024root___timing_resume\n"); );
    Vtb_q16_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_q16_basic___024root___eval_triggers__act(Vtb_q16_basic___024root* vlSelf);

bool Vtb_q16_basic___024root___eval_phase__act(Vtb_q16_basic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_q16_basic___024root___eval_phase__act\n"); );
    Vtb_q16_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_q16_basic___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_q16_basic___024root___timing_resume(vlSelf);
        Vtb_q16_basic___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_q16_basic___024root___eval_phase__nba(Vtb_q16_basic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_q16_basic___024root___eval_phase__nba\n"); );
    Vtb_q16_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_q16_basic___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_q16_basic___024root___dump_triggers__nba(Vtb_q16_basic___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_q16_basic___024root___dump_triggers__act(Vtb_q16_basic___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_q16_basic___024root___eval(Vtb_q16_basic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_q16_basic___024root___eval\n"); );
    Vtb_q16_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_q16_basic___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_q16_basic.sv", 9, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_q16_basic___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_q16_basic.sv", 9, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_q16_basic___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_q16_basic___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_q16_basic___024root___eval_debug_assertions(Vtb_q16_basic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_q16_basic___024root___eval_debug_assertions\n"); );
    Vtb_q16_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
