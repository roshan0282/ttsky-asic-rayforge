// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vq16_sqrt__pch.h"

//============================================================
// Constructors

Vq16_sqrt::Vq16_sqrt(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vq16_sqrt__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , root{vlSymsp->TOP.root}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vq16_sqrt::Vq16_sqrt(const char* _vcname__)
    : Vq16_sqrt(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vq16_sqrt::~Vq16_sqrt() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vq16_sqrt___024root___eval_debug_assertions(Vq16_sqrt___024root* vlSelf);
#endif  // VL_DEBUG
void Vq16_sqrt___024root___eval_static(Vq16_sqrt___024root* vlSelf);
void Vq16_sqrt___024root___eval_initial(Vq16_sqrt___024root* vlSelf);
void Vq16_sqrt___024root___eval_settle(Vq16_sqrt___024root* vlSelf);
void Vq16_sqrt___024root___eval(Vq16_sqrt___024root* vlSelf);

void Vq16_sqrt::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vq16_sqrt::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vq16_sqrt___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vq16_sqrt___024root___eval_static(&(vlSymsp->TOP));
        Vq16_sqrt___024root___eval_initial(&(vlSymsp->TOP));
        Vq16_sqrt___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vq16_sqrt___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vq16_sqrt::eventsPending() { return false; }

uint64_t Vq16_sqrt::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vq16_sqrt::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vq16_sqrt___024root___eval_final(Vq16_sqrt___024root* vlSelf);

VL_ATTR_COLD void Vq16_sqrt::final() {
    Vq16_sqrt___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vq16_sqrt::hierName() const { return vlSymsp->name(); }
const char* Vq16_sqrt::modelName() const { return "Vq16_sqrt"; }
unsigned Vq16_sqrt::threads() const { return 1; }
void Vq16_sqrt::prepareClone() const { contextp()->prepareClone(); }
void Vq16_sqrt::atClone() const {
    contextp()->threadPoolpOnClone();
}
