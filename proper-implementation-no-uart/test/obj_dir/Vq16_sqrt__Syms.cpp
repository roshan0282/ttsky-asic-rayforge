// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vq16_sqrt__pch.h"
#include "Vq16_sqrt.h"
#include "Vq16_sqrt___024root.h"

// FUNCTIONS
Vq16_sqrt__Syms::~Vq16_sqrt__Syms()
{
}

Vq16_sqrt__Syms::Vq16_sqrt__Syms(VerilatedContext* contextp, const char* namep, Vq16_sqrt* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(121);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
