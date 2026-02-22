// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtbGenericVga.h for the primary calling header

#include "VtbGenericVga__pch.h"
#include "VtbGenericVga__Syms.h"
#include "VtbGenericVga_scene_lut.h"

// Parameter definitions for VtbGenericVga_scene_lut
constexpr VlUnpacked<VlWide<5>/*151:0*/, 1> VtbGenericVga_scene_lut::LIGHTS;


void VtbGenericVga_scene_lut___ctor_var_reset(VtbGenericVga_scene_lut* vlSelf);

VtbGenericVga_scene_lut::VtbGenericVga_scene_lut(VtbGenericVga__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VtbGenericVga_scene_lut___ctor_var_reset(this);
}

void VtbGenericVga_scene_lut::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VtbGenericVga_scene_lut::~VtbGenericVga_scene_lut() {
}
