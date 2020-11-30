// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vroot__Syms.h"


//======================

void Vroot::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vroot::traceInit, &Vroot::traceFull, &Vroot::traceChg, this);
}
void Vroot::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vroot* t = (Vroot*)userthis;
    Vroot__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vroot::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vroot* t = (Vroot*)userthis;
    Vroot__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vroot::traceInitThis(Vroot__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vroot* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vroot::traceFullThis(Vroot__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vroot* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vroot::traceInitThis__1(Vroot__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vroot* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
    }
}
