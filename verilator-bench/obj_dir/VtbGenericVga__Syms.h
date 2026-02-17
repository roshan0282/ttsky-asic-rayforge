// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTBGENERICVGA__SYMS_H_
#define VERILATED_VTBGENERICVGA__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VtbGenericVga.h"

// INCLUDE MODULE CLASSES
#include "VtbGenericVga___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VtbGenericVga__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VtbGenericVga* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VtbGenericVga___024root        TOP;

    // CONSTRUCTORS
    VtbGenericVga__Syms(VerilatedContext* contextp, const char* namep, VtbGenericVga* modelp);
    ~VtbGenericVga__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
