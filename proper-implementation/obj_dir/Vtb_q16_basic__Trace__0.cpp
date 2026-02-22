// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_q16_basic__Syms.h"


void Vtb_q16_basic___024root__trace_chg_0_sub_0(Vtb_q16_basic___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_q16_basic___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_q16_basic___024root__trace_chg_0\n"); );
    // Init
    Vtb_q16_basic___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_q16_basic___024root*>(voidSelf);
    Vtb_q16_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_q16_basic___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_q16_basic___024root__trace_chg_0_sub_0(Vtb_q16_basic___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_q16_basic___024root__trace_chg_0_sub_0\n"); );
    Vtb_q16_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb_q16_basic__DOT__a),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb_q16_basic__DOT__b),32);
        bufp->chgIData(oldp+2,((vlSelfRef.tb_q16_basic__DOT__a 
                                + vlSelfRef.tb_q16_basic__DOT__b)),32);
        bufp->chgIData(oldp+3,((vlSelfRef.tb_q16_basic__DOT__a 
                                - vlSelfRef.tb_q16_basic__DOT__b)),32);
        bufp->chgIData(oldp+4,((IData)(((0x8000ULL 
                                         + VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.tb_q16_basic__DOT__a), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.tb_q16_basic__DOT__b))) 
                                        >> 0x10U))),32);
        bufp->chgIData(oldp+5,(((0U == vlSelfRef.tb_q16_basic__DOT__b)
                                 ? (VL_LTES_III(32, 0U, vlSelfRef.tb_q16_basic__DOT__a)
                                     ? 0x7fffffffU : 0x80000001U)
                                 : (IData)(VL_DIVS_QQQ(64, 
                                                       ((QData)((IData)(vlSelfRef.tb_q16_basic__DOT__a)) 
                                                        << 0x10U), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.tb_q16_basic__DOT__b))))),32);
        bufp->chgIData(oldp+6,(((IData)(0x10000U) + (IData)(
                                                            VL_SHIFTRS_QQI(64,64,32, 
                                                                           VL_MULS_QQQ(64, 0x10000ULL, 
                                                                                VL_EXTENDS_QI(64,32, vlSelfRef.tb_q16_basic__DOT__a)), 0x10U)))),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_q16_basic__DOT__expected),32);
        bufp->chgBit(oldp+8,(vlSelfRef.tb_q16_basic__DOT__test_pass));
        bufp->chgQData(oldp+9,(((QData)((IData)(vlSelfRef.tb_q16_basic__DOT__a)) 
                                << 0x10U)),64);
        bufp->chgQData(oldp+11,(VL_SHIFTRS_QQI(64,64,32, 
                                               VL_MULS_QQQ(64, 0x10000ULL, 
                                                           VL_EXTENDS_QI(64,32, vlSelfRef.tb_q16_basic__DOT__a)), 0x10U)),64);
        bufp->chgQData(oldp+13,(VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.tb_q16_basic__DOT__a), 
                                            VL_EXTENDS_QI(64,32, vlSelfRef.tb_q16_basic__DOT__b))),64);
        bufp->chgQData(oldp+15,((0x8000ULL + VL_MULS_QQQ(64, 
                                                         VL_EXTENDS_QI(64,32, vlSelfRef.tb_q16_basic__DOT__a), 
                                                         VL_EXTENDS_QI(64,32, vlSelfRef.tb_q16_basic__DOT__b)))),64);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgIData(oldp+17,(vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__result),32);
        bufp->chgQData(oldp+18,(vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__v),64);
        bufp->chgQData(oldp+20,(vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem),64);
        bufp->chgQData(oldp+22,(vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r),64);
        bufp->chgIData(oldp+24,(vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__unnamedblk1__DOT__i),32);
    }
}

void Vtb_q16_basic___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_q16_basic___024root__trace_cleanup\n"); );
    // Init
    Vtb_q16_basic___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_q16_basic___024root*>(voidSelf);
    Vtb_q16_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
