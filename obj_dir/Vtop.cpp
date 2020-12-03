// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop::~Vtop() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vtop::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval\n"); );
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("verilog/top.v", 2, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("verilog/top.v", 2, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void Vtop::_settle__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__L1_to_L2_out_index[2U] = vlTOPp->top__DOT____Vcellout__l1__out_index
        [2U];
    vlTOPp->top__DOT__L1_to_L2_out_index[1U] = vlTOPp->top__DOT____Vcellout__l1__out_index
        [1U];
    vlTOPp->top__DOT__L1_to_L2_out_index[0U] = vlTOPp->top__DOT____Vcellout__l1__out_index
        [0U];
}

VL_INLINE_OPT void Vtop::_sequent__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (VL_UNLIKELY(vlTOPp->input_write_weights)) {
        VL_WRITEF("TOP: = [%1#][%1#][%1#][%1#] = %f\n",
                  1,vlTOPp->input_index3,1,(IData)(vlTOPp->input_index2),
                  1,vlTOPp->input_index1,1,(IData)(vlTOPp->input_index0),
                  64,VL_CVT_D_Q(vlTOPp->input_data));
    }
    if (VL_UNLIKELY(vlTOPp->input_write_weights)) {
        VL_WRITEF("INPUT LAYER: = [%1#][%1#][%1#][%1#] = %f\n",
                  1,vlTOPp->input_index3,1,(IData)(vlTOPp->input_index2),
                  1,vlTOPp->input_index1,1,(IData)(vlTOPp->input_index0),
                  64,VL_CVT_D_Q(vlTOPp->input_data));
    }
    if (vlTOPp->input_write_act) {
        vlTOPp->top__DOT__l1__DOT__activation__DOT____Vlvbound1 
            = vlTOPp->input_data;
        if ((0xc3ffU >= (0xffffU & ((((IData)(0xc400U) 
                                      * (IData)(vlTOPp->input_index2)) 
                                     + (0xffffU & ((IData)(0x700U) 
                                                   * (IData)(vlTOPp->input_index1)))) 
                                    + (0x7ffU & ((IData)(vlTOPp->input_index0) 
                                                 << 6U)))))) {
            VL_ASSIGNSEL_WIIQ(64,(0xffffU & ((((IData)(0xc400U) 
                                               * (IData)(vlTOPp->input_index2)) 
                                              + (0xffffU 
                                                 & ((IData)(0x700U) 
                                                    * (IData)(vlTOPp->input_index1)))) 
                                             + (0x7ffU 
                                                & ((IData)(vlTOPp->input_index0) 
                                                   << 6U)))), vlTOPp->top__DOT__l1__DOT__activation__DOT__mem, vlTOPp->top__DOT__l1__DOT__activation__DOT____Vlvbound1);
        }
    }
    if (VL_UNLIKELY(vlTOPp->input_write_weights)) {
        vlTOPp->top__DOT__l1__DOT__weights__DOT____Vlvbound1 
            = vlTOPp->input_data;
        VL_WRITEF("INPUT LAYER WEIGHT_MEM : WRITE : mem[%1#][%1#][%1#][%1#] = %f\n",
                  1,vlTOPp->input_index3,1,(IData)(vlTOPp->input_index2),
                  1,vlTOPp->input_index1,1,(IData)(vlTOPp->input_index0),
                  64,VL_CVT_D_Q(vlTOPp->input_data));
        if ((0x23ffU >= (0x3fffU & (((((IData)(0x2400U) 
                                       * (IData)(vlTOPp->input_index3)) 
                                      + (0x3fffU & 
                                         ((IData)(0x240U) 
                                          * (IData)(vlTOPp->input_index2)))) 
                                     + (0x3ffU & ((IData)(0xc0U) 
                                                  * (IData)(vlTOPp->input_index1)))) 
                                    + (0xffU & ((IData)(vlTOPp->input_index0) 
                                                << 6U)))))) {
            VL_ASSIGNSEL_WIIQ(64,(0x3fffU & (((((IData)(0x2400U) 
                                                * (IData)(vlTOPp->input_index3)) 
                                               + (0x3fffU 
                                                  & ((IData)(0x240U) 
                                                     * (IData)(vlTOPp->input_index2)))) 
                                              + (0x3ffU 
                                                 & ((IData)(0xc0U) 
                                                    * (IData)(vlTOPp->input_index1)))) 
                                             + (0xffU 
                                                & ((IData)(vlTOPp->input_index0) 
                                                   << 6U)))), vlTOPp->top__DOT__l1__DOT__weights__DOT__mem, vlTOPp->top__DOT__l1__DOT__weights__DOT____Vlvbound1);
        }
    }
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vtop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_settle\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((input_index3 & 0xfeU))) {
        Verilated::overWidthError("input_index3");}
    if (VL_UNLIKELY((input_index2 & 0xfeU))) {
        Verilated::overWidthError("input_index2");}
    if (VL_UNLIKELY((input_index1 & 0xfeU))) {
        Verilated::overWidthError("input_index1");}
    if (VL_UNLIKELY((input_index0 & 0xfeU))) {
        Verilated::overWidthError("input_index0");}
    if (VL_UNLIKELY((input_write_act & 0xfeU))) {
        Verilated::overWidthError("input_write_act");}
    if (VL_UNLIKELY((input_write_weights & 0xfeU))) {
        Verilated::overWidthError("input_write_weights");}
}
#endif  // VL_DEBUG

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    input_data = VL_RAND_RESET_Q(64);
    input_index3 = VL_RAND_RESET_I(1);
    input_index2 = VL_RAND_RESET_I(1);
    input_index1 = VL_RAND_RESET_I(1);
    input_index0 = VL_RAND_RESET_I(1);
    input_write_act = VL_RAND_RESET_I(1);
    input_write_weights = VL_RAND_RESET_I(1);
    top__DOT__out_data = VL_RAND_RESET_Q(64);
    top__DOT__output_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            top__DOT__L1_to_L2_out_index[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            top__DOT____Vcellout__l1__out_index[__Vi0] = VL_RAND_RESET_I(16);
    }}
    VL_RAND_RESET_W(50176, top__DOT__l1__DOT__activation__DOT__mem);
    top__DOT__l1__DOT__activation__DOT____Vlvbound1 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(9216, top__DOT__l1__DOT__weights__DOT__mem);
    top__DOT__l1__DOT__weights__DOT____Vlvbound1 = VL_RAND_RESET_Q(64);
    __Vm_traceActivity = 0;
}
