// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vq16_sqrt.h for the primary calling header

#include "Vq16_sqrt__pch.h"
#include "Vq16_sqrt___024root.h"

void Vq16_sqrt___024root___ico_sequent__TOP__0(Vq16_sqrt___024root* vlSelf);

void Vq16_sqrt___024root___eval_ico(Vq16_sqrt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vq16_sqrt___024root___eval_ico\n"); );
    Vq16_sqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vq16_sqrt___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vq16_sqrt___024root___ico_sequent__TOP__0(Vq16_sqrt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vq16_sqrt___024root___ico_sequent__TOP__0\n"); );
    Vq16_sqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ q16_sqrt__DOT__v;
    q16_sqrt__DOT__v = 0;
    QData/*63:0*/ q16_sqrt__DOT__rem;
    q16_sqrt__DOT__rem = 0;
    QData/*63:0*/ q16_sqrt__DOT__r;
    q16_sqrt__DOT__r = 0;
    // Body
    q16_sqrt__DOT__v = 0ULL;
    q16_sqrt__DOT__rem = 0ULL;
    q16_sqrt__DOT__r = 0ULL;
    if (VL_GTES_III(32, 0U, vlSelfRef.a)) {
        vlSelfRef.q16_sqrt__DOT__result = 0U;
    } else {
        q16_sqrt__DOT__v = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.a)), 0x10U);
        q16_sqrt__DOT__r = 0ULL;
        q16_sqrt__DOT__rem = (3ULL & VL_SHIFTR_QQI(64,64,32, q16_sqrt__DOT__v, 0x2eU));
        if ((1ULL <= q16_sqrt__DOT__rem)) {
            q16_sqrt__DOT__rem = (q16_sqrt__DOT__rem 
                                  - (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)));
            q16_sqrt__DOT__r = (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U));
        } else {
            q16_sqrt__DOT__r = VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U);
        }
        q16_sqrt__DOT__rem = (VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__rem, 2U) 
                              | (3ULL & VL_SHIFTR_QQI(64,64,32, q16_sqrt__DOT__v, 0x2cU)));
        if ((q16_sqrt__DOT__rem >= (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)))) {
            q16_sqrt__DOT__rem = (q16_sqrt__DOT__rem 
                                  - (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)));
            q16_sqrt__DOT__r = (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U));
        } else {
            q16_sqrt__DOT__r = VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U);
        }
        q16_sqrt__DOT__rem = (VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__rem, 2U) 
                              | (3ULL & VL_SHIFTR_QQI(64,64,32, q16_sqrt__DOT__v, 0x2aU)));
        if ((q16_sqrt__DOT__rem >= (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)))) {
            q16_sqrt__DOT__rem = (q16_sqrt__DOT__rem 
                                  - (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)));
            q16_sqrt__DOT__r = (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U));
        } else {
            q16_sqrt__DOT__r = VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U);
        }
        q16_sqrt__DOT__rem = (VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__rem, 2U) 
                              | (3ULL & VL_SHIFTR_QQI(64,64,32, q16_sqrt__DOT__v, 0x28U)));
        if ((q16_sqrt__DOT__rem >= (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)))) {
            q16_sqrt__DOT__rem = (q16_sqrt__DOT__rem 
                                  - (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)));
            q16_sqrt__DOT__r = (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U));
        } else {
            q16_sqrt__DOT__r = VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U);
        }
        q16_sqrt__DOT__rem = (VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__rem, 2U) 
                              | (3ULL & VL_SHIFTR_QQI(64,64,32, q16_sqrt__DOT__v, 0x26U)));
        if ((q16_sqrt__DOT__rem >= (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)))) {
            q16_sqrt__DOT__rem = (q16_sqrt__DOT__rem 
                                  - (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)));
            q16_sqrt__DOT__r = (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U));
        } else {
            q16_sqrt__DOT__r = VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U);
        }
        q16_sqrt__DOT__rem = (VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__rem, 2U) 
                              | (3ULL & VL_SHIFTR_QQI(64,64,32, q16_sqrt__DOT__v, 0x24U)));
        if ((q16_sqrt__DOT__rem >= (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)))) {
            q16_sqrt__DOT__rem = (q16_sqrt__DOT__rem 
                                  - (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)));
            q16_sqrt__DOT__r = (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U));
        } else {
            q16_sqrt__DOT__r = VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U);
        }
        q16_sqrt__DOT__rem = (VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__rem, 2U) 
                              | (3ULL & VL_SHIFTR_QQI(64,64,32, q16_sqrt__DOT__v, 0x22U)));
        if ((q16_sqrt__DOT__rem >= (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)))) {
            q16_sqrt__DOT__rem = (q16_sqrt__DOT__rem 
                                  - (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)));
            q16_sqrt__DOT__r = (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U));
        } else {
            q16_sqrt__DOT__r = VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U);
        }
        q16_sqrt__DOT__rem = (VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__rem, 2U) 
                              | (3ULL & VL_SHIFTR_QQI(64,64,32, q16_sqrt__DOT__v, 0x20U)));
        if ((q16_sqrt__DOT__rem >= (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)))) {
            q16_sqrt__DOT__rem = (q16_sqrt__DOT__rem 
                                  - (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)));
            q16_sqrt__DOT__r = (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U));
        } else {
            q16_sqrt__DOT__r = VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U);
        }
        q16_sqrt__DOT__rem = (VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__rem, 2U) 
                              | (3ULL & VL_SHIFTR_QQI(64,64,32, q16_sqrt__DOT__v, 0x1eU)));
        if ((q16_sqrt__DOT__rem >= (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)))) {
            q16_sqrt__DOT__rem = (q16_sqrt__DOT__rem 
                                  - (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)));
            q16_sqrt__DOT__r = (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U));
        } else {
            q16_sqrt__DOT__r = VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U);
        }
        q16_sqrt__DOT__rem = (VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__rem, 2U) 
                              | (3ULL & VL_SHIFTR_QQI(64,64,32, q16_sqrt__DOT__v, 0x1cU)));
        if ((q16_sqrt__DOT__rem >= (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)))) {
            q16_sqrt__DOT__rem = (q16_sqrt__DOT__rem 
                                  - (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)));
            q16_sqrt__DOT__r = (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U));
        } else {
            q16_sqrt__DOT__r = VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U);
        }
        q16_sqrt__DOT__rem = (VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__rem, 2U) 
                              | (3ULL & VL_SHIFTR_QQI(64,64,32, q16_sqrt__DOT__v, 0x1aU)));
        if ((q16_sqrt__DOT__rem >= (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)))) {
            q16_sqrt__DOT__rem = (q16_sqrt__DOT__rem 
                                  - (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)));
            q16_sqrt__DOT__r = (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U));
        } else {
            q16_sqrt__DOT__r = VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U);
        }
        q16_sqrt__DOT__rem = (VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__rem, 2U) 
                              | (3ULL & VL_SHIFTR_QQI(64,64,32, q16_sqrt__DOT__v, 0x18U)));
        if ((q16_sqrt__DOT__rem >= (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)))) {
            q16_sqrt__DOT__rem = (q16_sqrt__DOT__rem 
                                  - (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)));
            q16_sqrt__DOT__r = (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U));
        } else {
            q16_sqrt__DOT__r = VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U);
        }
        q16_sqrt__DOT__rem = (VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__rem, 2U) 
                              | (3ULL & VL_SHIFTR_QQI(64,64,32, q16_sqrt__DOT__v, 0x16U)));
        if ((q16_sqrt__DOT__rem >= (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)))) {
            q16_sqrt__DOT__rem = (q16_sqrt__DOT__rem 
                                  - (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)));
            q16_sqrt__DOT__r = (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U));
        } else {
            q16_sqrt__DOT__r = VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U);
        }
        q16_sqrt__DOT__rem = (VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__rem, 2U) 
                              | (3ULL & VL_SHIFTR_QQI(64,64,32, q16_sqrt__DOT__v, 0x14U)));
        if ((q16_sqrt__DOT__rem >= (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)))) {
            q16_sqrt__DOT__rem = (q16_sqrt__DOT__rem 
                                  - (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)));
            q16_sqrt__DOT__r = (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U));
        } else {
            q16_sqrt__DOT__r = VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U);
        }
        q16_sqrt__DOT__rem = (VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__rem, 2U) 
                              | (3ULL & VL_SHIFTR_QQI(64,64,32, q16_sqrt__DOT__v, 0x12U)));
        if ((q16_sqrt__DOT__rem >= (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)))) {
            q16_sqrt__DOT__rem = (q16_sqrt__DOT__rem 
                                  - (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)));
            q16_sqrt__DOT__r = (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U));
        } else {
            q16_sqrt__DOT__r = VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U);
        }
        q16_sqrt__DOT__rem = (VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__rem, 2U) 
                              | (3ULL & VL_SHIFTR_QQI(64,64,32, q16_sqrt__DOT__v, 0x10U)));
        if ((q16_sqrt__DOT__rem >= (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)))) {
            q16_sqrt__DOT__rem = (q16_sqrt__DOT__rem 
                                  - (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)));
            q16_sqrt__DOT__r = (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U));
        } else {
            q16_sqrt__DOT__r = VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U);
        }
        q16_sqrt__DOT__rem = (VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__rem, 2U) 
                              | (3ULL & VL_SHIFTR_QQI(64,64,32, q16_sqrt__DOT__v, 0xeU)));
        if ((q16_sqrt__DOT__rem >= (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)))) {
            q16_sqrt__DOT__rem = (q16_sqrt__DOT__rem 
                                  - (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)));
            q16_sqrt__DOT__r = (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U));
        } else {
            q16_sqrt__DOT__r = VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U);
        }
        q16_sqrt__DOT__rem = (VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__rem, 2U) 
                              | (3ULL & VL_SHIFTR_QQI(64,64,32, q16_sqrt__DOT__v, 0xcU)));
        if ((q16_sqrt__DOT__rem >= (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)))) {
            q16_sqrt__DOT__rem = (q16_sqrt__DOT__rem 
                                  - (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)));
            q16_sqrt__DOT__r = (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U));
        } else {
            q16_sqrt__DOT__r = VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U);
        }
        q16_sqrt__DOT__rem = (VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__rem, 2U) 
                              | (3ULL & VL_SHIFTR_QQI(64,64,32, q16_sqrt__DOT__v, 0xaU)));
        if ((q16_sqrt__DOT__rem >= (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)))) {
            q16_sqrt__DOT__rem = (q16_sqrt__DOT__rem 
                                  - (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)));
            q16_sqrt__DOT__r = (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U));
        } else {
            q16_sqrt__DOT__r = VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U);
        }
        q16_sqrt__DOT__rem = (VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__rem, 2U) 
                              | (3ULL & VL_SHIFTR_QQI(64,64,32, q16_sqrt__DOT__v, 8U)));
        if ((q16_sqrt__DOT__rem >= (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)))) {
            q16_sqrt__DOT__rem = (q16_sqrt__DOT__rem 
                                  - (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)));
            q16_sqrt__DOT__r = (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U));
        } else {
            q16_sqrt__DOT__r = VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U);
        }
        q16_sqrt__DOT__rem = (VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__rem, 2U) 
                              | (3ULL & VL_SHIFTR_QQI(64,64,32, q16_sqrt__DOT__v, 6U)));
        if ((q16_sqrt__DOT__rem >= (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)))) {
            q16_sqrt__DOT__rem = (q16_sqrt__DOT__rem 
                                  - (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)));
            q16_sqrt__DOT__r = (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U));
        } else {
            q16_sqrt__DOT__r = VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U);
        }
        q16_sqrt__DOT__rem = (VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__rem, 2U) 
                              | (3ULL & VL_SHIFTR_QQI(64,64,32, q16_sqrt__DOT__v, 4U)));
        if ((q16_sqrt__DOT__rem >= (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)))) {
            q16_sqrt__DOT__rem = (q16_sqrt__DOT__rem 
                                  - (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)));
            q16_sqrt__DOT__r = (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U));
        } else {
            q16_sqrt__DOT__r = VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U);
        }
        q16_sqrt__DOT__rem = (VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__rem, 2U) 
                              | (3ULL & VL_SHIFTR_QQI(64,64,32, q16_sqrt__DOT__v, 2U)));
        if ((q16_sqrt__DOT__rem >= (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)))) {
            q16_sqrt__DOT__rem = (q16_sqrt__DOT__rem 
                                  - (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)));
            q16_sqrt__DOT__r = (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U));
        } else {
            q16_sqrt__DOT__r = VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U);
        }
        q16_sqrt__DOT__rem = (VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__rem, 2U) 
                              | (3ULL & q16_sqrt__DOT__v));
        if ((q16_sqrt__DOT__rem >= (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)))) {
            q16_sqrt__DOT__rem = (q16_sqrt__DOT__rem 
                                  - (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 2U)));
            q16_sqrt__DOT__r = (1ULL | VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U));
        } else {
            q16_sqrt__DOT__r = VL_SHIFTL_QQI(64,64,32, q16_sqrt__DOT__r, 1U);
        }
        vlSelfRef.q16_sqrt__DOT__result = (IData)(q16_sqrt__DOT__r);
    }
    vlSelfRef.root = vlSelfRef.q16_sqrt__DOT__result;
}

void Vq16_sqrt___024root___eval_triggers__ico(Vq16_sqrt___024root* vlSelf);

bool Vq16_sqrt___024root___eval_phase__ico(Vq16_sqrt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vq16_sqrt___024root___eval_phase__ico\n"); );
    Vq16_sqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vq16_sqrt___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vq16_sqrt___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vq16_sqrt___024root___eval_act(Vq16_sqrt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vq16_sqrt___024root___eval_act\n"); );
    Vq16_sqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vq16_sqrt___024root___eval_nba(Vq16_sqrt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vq16_sqrt___024root___eval_nba\n"); );
    Vq16_sqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vq16_sqrt___024root___eval_triggers__act(Vq16_sqrt___024root* vlSelf);

bool Vq16_sqrt___024root___eval_phase__act(Vq16_sqrt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vq16_sqrt___024root___eval_phase__act\n"); );
    Vq16_sqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vq16_sqrt___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vq16_sqrt___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vq16_sqrt___024root___eval_phase__nba(Vq16_sqrt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vq16_sqrt___024root___eval_phase__nba\n"); );
    Vq16_sqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vq16_sqrt___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vq16_sqrt___024root___dump_triggers__ico(Vq16_sqrt___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vq16_sqrt___024root___dump_triggers__nba(Vq16_sqrt___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vq16_sqrt___024root___dump_triggers__act(Vq16_sqrt___024root* vlSelf);
#endif  // VL_DEBUG

void Vq16_sqrt___024root___eval(Vq16_sqrt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vq16_sqrt___024root___eval\n"); );
    Vq16_sqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vq16_sqrt___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("..\\primitives_q16.sv", 73, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vq16_sqrt___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vq16_sqrt___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("..\\primitives_q16.sv", 73, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vq16_sqrt___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("..\\primitives_q16.sv", 73, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vq16_sqrt___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vq16_sqrt___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vq16_sqrt___024root___eval_debug_assertions(Vq16_sqrt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vq16_sqrt___024root___eval_debug_assertions\n"); );
    Vq16_sqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
