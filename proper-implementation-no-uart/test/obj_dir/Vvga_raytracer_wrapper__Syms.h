// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VVGA_RAYTRACER_WRAPPER__SYMS_H_
#define VERILATED_VVGA_RAYTRACER_WRAPPER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vvga_raytracer_wrapper.h"

// INCLUDE MODULE CLASSES
#include "Vvga_raytracer_wrapper___024root.h"
#include "Vvga_raytracer_wrapper___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vvga_raytracer_wrapper__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vvga_raytracer_wrapper* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vvga_raytracer_wrapper___024root TOP;

    // CONSTRUCTORS
    Vvga_raytracer_wrapper__Syms(VerilatedContext* contextp, const char* namep, Vvga_raytracer_wrapper* modelp);
    ~Vvga_raytracer_wrapper__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
