// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vvga_raytracer_wrapper__pch.h"
#include "Vvga_raytracer_wrapper.h"
#include "Vvga_raytracer_wrapper___024root.h"
#include "Vvga_raytracer_wrapper___024unit.h"

// FUNCTIONS
Vvga_raytracer_wrapper__Syms::~Vvga_raytracer_wrapper__Syms()
{
}

Vvga_raytracer_wrapper__Syms::Vvga_raytracer_wrapper__Syms(VerilatedContext* contextp, const char* namep, Vvga_raytracer_wrapper* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(1324);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
