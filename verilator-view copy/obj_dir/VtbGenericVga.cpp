// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VtbGenericVga__pch.h"

//============================================================
// Constructors

VtbGenericVga::VtbGenericVga(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VtbGenericVga__Syms(contextp(), _vcname__, this)}
    , clock50MHz{vlSymsp->TOP.clock50MHz}
    , resetn{vlSymsp->TOP.resetn}
    , hSync{vlSymsp->TOP.hSync}
    , vSync{vlSymsp->TOP.vSync}
    , visible{vlSymsp->TOP.visible}
    , red{vlSymsp->TOP.red}
    , green{vlSymsp->TOP.green}
    , blue{vlSymsp->TOP.blue}
    , xOrd{vlSymsp->TOP.xOrd}
    , yOrd{vlSymsp->TOP.yOrd}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VtbGenericVga::VtbGenericVga(const char* _vcname__)
    : VtbGenericVga(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VtbGenericVga::~VtbGenericVga() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VtbGenericVga___024root___eval_debug_assertions(VtbGenericVga___024root* vlSelf);
#endif  // VL_DEBUG
void VtbGenericVga___024root___eval_static(VtbGenericVga___024root* vlSelf);
void VtbGenericVga___024root___eval_initial(VtbGenericVga___024root* vlSelf);
void VtbGenericVga___024root___eval_settle(VtbGenericVga___024root* vlSelf);
void VtbGenericVga___024root___eval(VtbGenericVga___024root* vlSelf);

void VtbGenericVga::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VtbGenericVga::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VtbGenericVga___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VtbGenericVga___024root___eval_static(&(vlSymsp->TOP));
        VtbGenericVga___024root___eval_initial(&(vlSymsp->TOP));
        VtbGenericVga___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VtbGenericVga___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VtbGenericVga::eventsPending() { return false; }

uint64_t VtbGenericVga::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VtbGenericVga::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VtbGenericVga___024root___eval_final(VtbGenericVga___024root* vlSelf);

VL_ATTR_COLD void VtbGenericVga::final() {
    VtbGenericVga___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VtbGenericVga::hierName() const { return vlSymsp->name(); }
const char* VtbGenericVga::modelName() const { return "VtbGenericVga"; }
unsigned VtbGenericVga::threads() const { return 1; }
void VtbGenericVga::prepareClone() const { contextp()->prepareClone(); }
void VtbGenericVga::atClone() const {
    contextp()->threadPoolpOnClone();
}
