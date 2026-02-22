// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VQ16_SQRT__SYMS_H_
#define VERILATED_VQ16_SQRT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vq16_sqrt.h"

// INCLUDE MODULE CLASSES
#include "Vq16_sqrt___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vq16_sqrt__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vq16_sqrt* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vq16_sqrt___024root            TOP;

    // CONSTRUCTORS
    Vq16_sqrt__Syms(VerilatedContext* contextp, const char* namep, Vq16_sqrt* modelp);
    ~Vq16_sqrt__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
