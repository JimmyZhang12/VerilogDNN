// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vroot.h for the primary calling header

#include "Vroot.h"
#include "Vroot__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vroot) {
    Vroot__Syms* __restrict vlSymsp = __VlSymsp = new Vroot__Syms(this, name());
    Vroot* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vroot::__Vconfigure(Vroot__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vroot::~Vroot() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vroot::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vroot::eval\n"); );
    Vroot__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vroot* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("root.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vroot::_eval_initial_loop(Vroot__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("root.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void Vroot::_initial__TOP__1(Vroot__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vroot::_initial__TOP__1\n"); );
    Vroot* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_WRITEF("Hello Wofdarld\n");
    VL_FINISH_MT("root.v", 4, "");
}

void Vroot::_eval(Vroot__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vroot::_eval\n"); );
    Vroot* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
}

void Vroot::_eval_initial(Vroot__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vroot::_eval_initial\n"); );
    Vroot* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void Vroot::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vroot::final\n"); );
    // Variables
    Vroot__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vroot* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vroot::_eval_settle(Vroot__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vroot::_eval_settle\n"); );
    Vroot* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

VL_INLINE_OPT QData Vroot::_change_request(Vroot__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vroot::_change_request\n"); );
    Vroot* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vroot::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vroot::_eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG

void Vroot::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vroot::_ctor_var_reset\n"); );
    // Body
    __Vm_traceActivity = 0;
}
