// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vroot__Syms.h"


//======================

void Vroot::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vroot* t = (Vroot*)userthis;
    Vroot__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vroot::traceChgThis(Vroot__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vroot* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}
