// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvga_raytracer_wrapper.h for the primary calling header

#ifndef VERILATED_VVGA_RAYTRACER_WRAPPER___024UNIT_H_
#define VERILATED_VVGA_RAYTRACER_WRAPPER___024UNIT_H_  // guard

#include "verilated.h"


class Vvga_raytracer_wrapper__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvga_raytracer_wrapper___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vvga_raytracer_wrapper__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vvga_raytracer_wrapper___024unit(Vvga_raytracer_wrapper__Syms* symsp, const char* v__name);
    ~Vvga_raytracer_wrapper___024unit();
    VL_UNCOPYABLE(Vvga_raytracer_wrapper___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
