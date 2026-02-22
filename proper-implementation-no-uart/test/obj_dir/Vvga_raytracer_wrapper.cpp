// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vvga_raytracer_wrapper__pch.h"

//============================================================
// Constructors

Vvga_raytracer_wrapper::Vvga_raytracer_wrapper(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vvga_raytracer_wrapper__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , pixel_valid{vlSymsp->TOP.pixel_valid}
    , rgb_r{vlSymsp->TOP.rgb_r}
    , rgb_g{vlSymsp->TOP.rgb_g}
    , rgb_b{vlSymsp->TOP.rgb_b}
    , output_valid{vlSymsp->TOP.output_valid}
    , hsync{vlSymsp->TOP.hsync}
    , vsync{vlSymsp->TOP.vsync}
    , r{vlSymsp->TOP.r}
    , g{vlSymsp->TOP.g}
    , b{vlSymsp->TOP.b}
    , pixel_x{vlSymsp->TOP.pixel_x}
    , pixel_y{vlSymsp->TOP.pixel_y}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vvga_raytracer_wrapper::Vvga_raytracer_wrapper(const char* _vcname__)
    : Vvga_raytracer_wrapper(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vvga_raytracer_wrapper::~Vvga_raytracer_wrapper() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vvga_raytracer_wrapper___024root___eval_debug_assertions(Vvga_raytracer_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
void Vvga_raytracer_wrapper___024root___eval_static(Vvga_raytracer_wrapper___024root* vlSelf);
void Vvga_raytracer_wrapper___024root___eval_initial(Vvga_raytracer_wrapper___024root* vlSelf);
void Vvga_raytracer_wrapper___024root___eval_settle(Vvga_raytracer_wrapper___024root* vlSelf);
void Vvga_raytracer_wrapper___024root___eval(Vvga_raytracer_wrapper___024root* vlSelf);

void Vvga_raytracer_wrapper::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vvga_raytracer_wrapper::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vvga_raytracer_wrapper___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vvga_raytracer_wrapper___024root___eval_static(&(vlSymsp->TOP));
        Vvga_raytracer_wrapper___024root___eval_initial(&(vlSymsp->TOP));
        Vvga_raytracer_wrapper___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vvga_raytracer_wrapper___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vvga_raytracer_wrapper::eventsPending() { return false; }

uint64_t Vvga_raytracer_wrapper::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vvga_raytracer_wrapper::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vvga_raytracer_wrapper___024root___eval_final(Vvga_raytracer_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vvga_raytracer_wrapper::final() {
    Vvga_raytracer_wrapper___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vvga_raytracer_wrapper::hierName() const { return vlSymsp->name(); }
const char* Vvga_raytracer_wrapper::modelName() const { return "Vvga_raytracer_wrapper"; }
unsigned Vvga_raytracer_wrapper::threads() const { return 1; }
void Vvga_raytracer_wrapper::prepareClone() const { contextp()->prepareClone(); }
void Vvga_raytracer_wrapper::atClone() const {
    contextp()->threadPoolpOnClone();
}
