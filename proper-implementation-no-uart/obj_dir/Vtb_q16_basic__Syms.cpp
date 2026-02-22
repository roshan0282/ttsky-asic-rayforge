// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_q16_basic__pch.h"
#include "Vtb_q16_basic.h"
#include "Vtb_q16_basic___024root.h"

// FUNCTIONS
Vtb_q16_basic__Syms::~Vtb_q16_basic__Syms()
{
}

Vtb_q16_basic__Syms::Vtb_q16_basic__Syms(VerilatedContext* contextp, const char* namep, Vtb_q16_basic* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(18);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
