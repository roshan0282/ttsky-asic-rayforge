// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_q16_basic__Syms.h"


VL_ATTR_COLD void Vtb_q16_basic___024root__trace_init_sub__TOP__0(Vtb_q16_basic___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_q16_basic___024root__trace_init_sub__TOP__0\n"); );
    Vtb_q16_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_q16_basic", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"diff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"prod",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"quot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"root",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"dot_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"expected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+9,0,"test_pass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_div", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"quot",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+10,0,"dividend_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+6,0,"quotient",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_dot", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"ax",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"ay",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"az",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"bx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"by",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"bz",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"dot",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+12,0,"px",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+28,0,"py",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+30,0,"pz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"prod",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+14,0,"full_prod",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+16,0,"rounded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_sqrt", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"root",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+19,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+21,0,"rem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+23,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+18,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+25,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_sub", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"diff",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_q16_basic___024root__trace_init_top(Vtb_q16_basic___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_q16_basic___024root__trace_init_top\n"); );
    Vtb_q16_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_q16_basic___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_q16_basic___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_q16_basic___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_q16_basic___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_q16_basic___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_q16_basic___024root__trace_register(Vtb_q16_basic___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_q16_basic___024root__trace_register\n"); );
    Vtb_q16_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_q16_basic___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_q16_basic___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_q16_basic___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_q16_basic___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_q16_basic___024root__trace_const_0_sub_0(Vtb_q16_basic___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_q16_basic___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_q16_basic___024root__trace_const_0\n"); );
    // Init
    Vtb_q16_basic___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_q16_basic___024root*>(voidSelf);
    Vtb_q16_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_q16_basic___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_q16_basic___024root__trace_const_0_sub_0(Vtb_q16_basic___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_q16_basic___024root__trace_const_0_sub_0\n"); );
    Vtb_q16_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+26,(0x10000U),32);
    bufp->fullIData(oldp+27,(0U),32);
    bufp->fullQData(oldp+28,(0ULL),64);
    bufp->fullQData(oldp+30,(0x10000ULL),64);
}

VL_ATTR_COLD void Vtb_q16_basic___024root__trace_full_0_sub_0(Vtb_q16_basic___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_q16_basic___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_q16_basic___024root__trace_full_0\n"); );
    // Init
    Vtb_q16_basic___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_q16_basic___024root*>(voidSelf);
    Vtb_q16_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_q16_basic___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_q16_basic___024root__trace_full_0_sub_0(Vtb_q16_basic___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_q16_basic___024root__trace_full_0_sub_0\n"); );
    Vtb_q16_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.tb_q16_basic__DOT__a),32);
    bufp->fullIData(oldp+2,(vlSelfRef.tb_q16_basic__DOT__b),32);
    bufp->fullIData(oldp+3,((vlSelfRef.tb_q16_basic__DOT__a 
                             + vlSelfRef.tb_q16_basic__DOT__b)),32);
    bufp->fullIData(oldp+4,((vlSelfRef.tb_q16_basic__DOT__a 
                             - vlSelfRef.tb_q16_basic__DOT__b)),32);
    bufp->fullIData(oldp+5,((IData)(((0x8000ULL + VL_MULS_QQQ(64, 
                                                              VL_EXTENDS_QI(64,32, vlSelfRef.tb_q16_basic__DOT__a), 
                                                              VL_EXTENDS_QI(64,32, vlSelfRef.tb_q16_basic__DOT__b))) 
                                     >> 0x10U))),32);
    bufp->fullIData(oldp+6,(((0U == vlSelfRef.tb_q16_basic__DOT__b)
                              ? (VL_LTES_III(32, 0U, vlSelfRef.tb_q16_basic__DOT__a)
                                  ? 0x7fffffffU : 0x80000001U)
                              : (IData)(VL_DIVS_QQQ(64, 
                                                    ((QData)((IData)(vlSelfRef.tb_q16_basic__DOT__a)) 
                                                     << 0x10U), 
                                                    VL_EXTENDS_QI(64,32, vlSelfRef.tb_q16_basic__DOT__b))))),32);
    bufp->fullIData(oldp+7,(((IData)(0x10000U) + (IData)(
                                                         VL_SHIFTRS_QQI(64,64,32, 
                                                                        VL_MULS_QQQ(64, 0x10000ULL, 
                                                                                VL_EXTENDS_QI(64,32, vlSelfRef.tb_q16_basic__DOT__a)), 0x10U)))),32);
    bufp->fullIData(oldp+8,(vlSelfRef.tb_q16_basic__DOT__expected),32);
    bufp->fullBit(oldp+9,(vlSelfRef.tb_q16_basic__DOT__test_pass));
    bufp->fullQData(oldp+10,(((QData)((IData)(vlSelfRef.tb_q16_basic__DOT__a)) 
                              << 0x10U)),64);
    bufp->fullQData(oldp+12,(VL_SHIFTRS_QQI(64,64,32, 
                                            VL_MULS_QQQ(64, 0x10000ULL, 
                                                        VL_EXTENDS_QI(64,32, vlSelfRef.tb_q16_basic__DOT__a)), 0x10U)),64);
    bufp->fullQData(oldp+14,(VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.tb_q16_basic__DOT__a), 
                                         VL_EXTENDS_QI(64,32, vlSelfRef.tb_q16_basic__DOT__b))),64);
    bufp->fullQData(oldp+16,((0x8000ULL + VL_MULS_QQQ(64, 
                                                      VL_EXTENDS_QI(64,32, vlSelfRef.tb_q16_basic__DOT__a), 
                                                      VL_EXTENDS_QI(64,32, vlSelfRef.tb_q16_basic__DOT__b)))),64);
    bufp->fullIData(oldp+18,(vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__result),32);
    bufp->fullQData(oldp+19,(vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__v),64);
    bufp->fullQData(oldp+21,(vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__rem),64);
    bufp->fullQData(oldp+23,(vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__r),64);
    bufp->fullIData(oldp+25,(vlSelfRef.tb_q16_basic__DOT__u_sqrt__DOT__unnamedblk1__DOT__i),32);
}
