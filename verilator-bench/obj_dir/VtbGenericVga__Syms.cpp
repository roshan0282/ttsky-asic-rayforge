// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VtbGenericVga__pch.h"
#include "VtbGenericVga.h"
#include "VtbGenericVga___024root.h"
#include "VtbGenericVga___024unit.h"
#include "VtbGenericVga_scene_lut.h"

// FUNCTIONS
VtbGenericVga__Syms::~VtbGenericVga__Syms()
{
}

VtbGenericVga__Syms::VtbGenericVga__Syms(VerilatedContext* contextp, const char* namep, VtbGenericVga* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__scene_lut{this, Verilated::catName(namep, "scene_lut")}
{
        // Check resources
        Verilated::stackCheck(653);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__scene_lut = &TOP__scene_lut;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__scene_lut.__Vconfigure(true);
}
