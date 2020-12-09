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

VL_INLINE_OPT void Vtop::_sequent__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvdim0__top__DOT__l1__DOT__weights__DOT__mem_weight__v0;
    CData/*3:0*/ __Vdlyvdim1__top__DOT__l1__DOT__weights__DOT__mem_weight__v0;
    CData/*1:0*/ __Vdlyvdim2__top__DOT__l1__DOT__weights__DOT__mem_weight__v0;
    CData/*1:0*/ __Vdlyvdim3__top__DOT__l1__DOT__weights__DOT__mem_weight__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__l1__DOT__weights__DOT__mem_weight__v0;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__l1__DOT__weights__DOT__mem_bias__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__l1__DOT__weights__DOT__mem_bias__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__l1__DOT__weights__DOT__mem_weight__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__l1__DOT__weights__DOT__mem_bias__v0;
    // Body
    __Vdlyvset__top__DOT__l1__DOT__weights__DOT__mem_bias__v0 = 0U;
    __Vdlyvset__top__DOT__l1__DOT__weights__DOT__mem_weight__v0 = 0U;
    if (vlTOPp->top__DOT__l1__DOT__outmem_want_write) {
        vlTOPp->top__DOT__l1__DOT__out_memory__DOT____Vlvbound1 
            = vlTOPp->top__DOT__l1__DOT__outmem_write_data;
        if (((0x19U >= (0x1fU & vlTOPp->top__DOT__l1__DOT__outmem_index
                        [0U])) & (0x19U >= (0x1fU & 
                                            vlTOPp->top__DOT__l1__DOT__outmem_index
                                            [1U])))) {
            vlTOPp->top__DOT__l1__DOT__out_memory__DOT__mem[(0xfU 
                                                             & vlTOPp->top__DOT__l1__DOT__outmem_index
                                                             [2U])][(0x1fU 
                                                                     & vlTOPp->top__DOT__l1__DOT__outmem_index
                                                                     [1U])][(0x1fU 
                                                                             & vlTOPp->top__DOT__l1__DOT__outmem_index
                                                                             [0U])] 
                = vlTOPp->top__DOT__l1__DOT__out_memory__DOT____Vlvbound1;
        }
    }
    if (VL_UNLIKELY(vlTOPp->top__DOT__l2__DOT__outmem_want_write)) {
        vlTOPp->top__DOT__l2__DOT__out_memory__DOT____Vlvbound1 
            = vlTOPp->top__DOT__l2__DOT__outmem_write_data;
        if (((0x18U >= (0x1fU & vlTOPp->top__DOT__l2__DOT__outmem_write_index
                        [0U])) & (0x18U >= (0x1fU & 
                                            vlTOPp->top__DOT__l2__DOT__outmem_write_index
                                            [1U])))) {
            vlTOPp->top__DOT__l2__DOT__out_memory__DOT__mem[(0xfU 
                                                             & vlTOPp->top__DOT__l2__DOT__outmem_write_index
                                                             [2U])][(0x1fU 
                                                                     & vlTOPp->top__DOT__l2__DOT__outmem_write_index
                                                                     [1U])][(0x1fU 
                                                                             & vlTOPp->top__DOT__l2__DOT__outmem_write_index
                                                                             [0U])] 
                = vlTOPp->top__DOT__l2__DOT__out_memory__DOT____Vlvbound1;
        }
        VL_WRITEF("MAXPOOL1 OUT_MEM : WRITE : mem[%5#][%5#][%5#] = %f\n",
                  16,vlTOPp->top__DOT__l2__DOT__outmem_write_index
                  [2U],16,vlTOPp->top__DOT__l2__DOT__outmem_write_index
                  [1U],16,vlTOPp->top__DOT__l2__DOT__outmem_write_index
                  [0U],64,VL_CVT_D_Q(((0x18U >= (0x1fU 
                                                 & vlTOPp->top__DOT__l2__DOT__outmem_write_index
                                                 [0U]))
                                       ? vlTOPp->top__DOT__l2__DOT__out_memory__DOT__mem
                                      [(0xfU & vlTOPp->top__DOT__l2__DOT__outmem_write_index
                                        [2U])][((0x18U 
                                                 >= 
                                                 (0x1fU 
                                                  & vlTOPp->top__DOT__l2__DOT__outmem_write_index
                                                  [1U]))
                                                 ? 
                                                (0x1fU 
                                                 & vlTOPp->top__DOT__l2__DOT__outmem_write_index
                                                 [1U])
                                                 : 0U)]
                                      [(0x1fU & vlTOPp->top__DOT__l2__DOT__outmem_write_index
                                        [0U])] : VL_ULL(0))));
    }
    if (vlTOPp->input_write_act) {
        vlTOPp->top__DOT__l1__DOT__activation__DOT____Vlvbound1 
            = vlTOPp->input_data;
        if (((0x1bU >= (0x1fU & vlTOPp->input_index
                        [0U])) & ((0x1bU >= (0x1fU 
                                             & vlTOPp->input_index
                                             [1U])) 
                                  & (0U >= (1U & vlTOPp->input_index
                                            [2U]))))) {
            vlTOPp->top__DOT__l1__DOT__activation__DOT__mem[(1U 
                                                             & vlTOPp->input_index
                                                             [2U])][(0x1fU 
                                                                     & vlTOPp->input_index
                                                                     [1U])][(0x1fU 
                                                                             & vlTOPp->input_index
                                                                             [0U])] 
                = vlTOPp->top__DOT__l1__DOT__activation__DOT____Vlvbound1;
        }
    }
    if ((0U == (IData)(vlTOPp->top__DOT__l2__DOT__state))) {
        if (vlTOPp->top__DOT__l2_compute_start) {
            vlTOPp->top__DOT__l2__DOT__outmem_write_data = VL_ULL(0);
            vlTOPp->top__DOT__l2__DOT__outmem_want_write = 0U;
            vlTOPp->top__DOT__l2__DOT__inmem_read_index[2U] = 0U;
            vlTOPp->top__DOT__l2__DOT__outmem_write_index[0U] = 0U;
            vlTOPp->top__DOT__l2__DOT__k_state = 0U;
            vlTOPp->top__DOT__l2__DOT__state = 2U;
            vlTOPp->top__DOT__l2__DOT__inmem_read_index[1U] = 0U;
            vlTOPp->top__DOT__l2__DOT__outmem_write_index[1U] = 0U;
            vlTOPp->top__DOT__l2__DOT__inmem_read_index[0U] = 0U;
            vlTOPp->top__DOT__l2__DOT__outmem_write_index[2U] = 0U;
        }
    } else {
        if ((1U == (IData)(vlTOPp->top__DOT__l2__DOT__state))) {
            vlTOPp->top__DOT__l2__DOT__outmem_want_write = 0U;
            if ((3U == (IData)(vlTOPp->top__DOT__l2__DOT__k_state))) {
                vlTOPp->top__DOT__l2__DOT__outmem_write_data = VL_ULL(0);
                vlTOPp->top__DOT__l2__DOT__k_state = 0U;
                vlTOPp->top__DOT__l2__DOT__outmem_write_index[0U] 
                    = (0xffffU & ((IData)(1U) + vlTOPp->top__DOT__l2__DOT__outmem_write_index
                                  [0U]));
                if ((0xdU == vlTOPp->top__DOT__l2__DOT__outmem_write_index
                     [0U])) {
                    vlTOPp->top__DOT__l2__DOT__outmem_write_index[0U] = 0U;
                    vlTOPp->top__DOT__l2__DOT__outmem_write_index[1U] 
                        = (0xffffU & ((IData)(1U) + 
                                      vlTOPp->top__DOT__l2__DOT__outmem_write_index
                                      [1U]));
                }
                if ((0xdU == vlTOPp->top__DOT__l2__DOT__outmem_write_index
                     [1U])) {
                    vlTOPp->top__DOT__l2__DOT__outmem_write_index[1U] = 0U;
                    vlTOPp->top__DOT__l2__DOT__outmem_write_index[2U] 
                        = (0xffffU & ((IData)(1U) + 
                                      vlTOPp->top__DOT__l2__DOT__outmem_write_index
                                      [2U]));
                }
            } else {
                vlTOPp->top__DOT__l2__DOT__k_state 
                    = (0xffffU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__l2__DOT__k_state)));
            }
            vlTOPp->top__DOT__l2__DOT__state = 2U;
            vlTOPp->top__DOT__l2__DOT__inmem_read_index[0U] 
                = (0xffffU & ((vlTOPp->top__DOT__l2__DOT__outmem_write_index
                               [0U] << 1U) + (1U & (IData)(vlTOPp->top__DOT__l2__DOT__k_state))));
            vlTOPp->top__DOT__l2__DOT__inmem_read_index[1U] 
                = (0xffffU & ((vlTOPp->top__DOT__l2__DOT__outmem_write_index
                               [1U] << 1U) + ((IData)(vlTOPp->top__DOT__l2__DOT__k_state) 
                                              >> 1U)));
            vlTOPp->top__DOT__l2__DOT__inmem_read_index[2U] 
                = vlTOPp->top__DOT__l2__DOT__outmem_write_index
                [2U];
        } else {
            if ((2U == (IData)(vlTOPp->top__DOT__l2__DOT__state))) {
                if ((VL_CVT_D_Q(vlTOPp->top__DOT__l2__DOT__inmem_read_data) 
                     > VL_CVT_D_Q(vlTOPp->top__DOT__l2__DOT__outmem_write_data))) {
                    vlTOPp->top__DOT__l2__DOT__outmem_write_data 
                        = vlTOPp->top__DOT__l2__DOT__inmem_read_data;
                }
                vlTOPp->top__DOT__l2__DOT__state = 1U;
                if ((3U == (IData)(vlTOPp->top__DOT__l2__DOT__k_state))) {
                    vlTOPp->top__DOT__l2__DOT__outmem_want_write = 1U;
                    if ((((0xfU == vlTOPp->top__DOT__l2__DOT__outmem_write_index
                           [2U]) & (0xcU == vlTOPp->top__DOT__l2__DOT__outmem_write_index
                                    [1U])) & (0xcU 
                                              == vlTOPp->top__DOT__l2__DOT__outmem_write_index
                                              [0U]))) {
                        vlTOPp->top__DOT__l2__DOT__state = 3U;
                    }
                }
            } else {
                if (VL_UNLIKELY((3U == (IData)(vlTOPp->top__DOT__l2__DOT__state)))) {
                    VL_WRITEF("**********\n");
                    vlTOPp->top__DOT__l2_compute_done = 1U;
                    vlTOPp->top__DOT__l2__DOT__outmem_want_write = 0U;
                    if (vlTOPp->top__DOT__l2_compute_start) {
                        vlTOPp->top__DOT__l2__DOT__state = 0U;
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->top__DOT__l1__DOT__state))) {
        if (vlTOPp->top__DOT__scheduler_2_input_start) {
            vlTOPp->top__DOT__l1__DOT__outmem_write_data = VL_ULL(0);
            vlTOPp->top__DOT__l1__DOT__outmem_want_write = 0U;
            vlTOPp->top__DOT__l1__DOT__weight_read_index[3U] = 0U;
            vlTOPp->top__DOT__l1__DOT__act_read_index[2U] = 0U;
            vlTOPp->top__DOT__l1__DOT__outmem_index[0U] = 0U;
            vlTOPp->top__DOT__l1__DOT__state = 2U;
            vlTOPp->top__DOT__l1__DOT__weight_read_index[2U] = 0U;
            vlTOPp->top__DOT__l1__DOT__act_read_index[1U] = 0U;
            vlTOPp->top__DOT__l1__DOT__outmem_index[1U] = 0U;
            vlTOPp->top__DOT__l1__DOT__weight_read_index[1U] = 0U;
            vlTOPp->top__DOT__l1__DOT__act_read_index[0U] = 0U;
            vlTOPp->top__DOT__l1__DOT__outmem_index[2U] = 0U;
            vlTOPp->top__DOT__l1__DOT__weight_read_index[0U] = 0U;
        }
    } else {
        if ((1U == (IData)(vlTOPp->top__DOT__l1__DOT__state))) {
            vlTOPp->top__DOT__l1__DOT__outmem_want_write = 0U;
            if ((2U > vlTOPp->top__DOT__l1__DOT__weight_read_index
                 [0U])) {
                vlTOPp->top__DOT__l1__DOT__weight_read_index[0U] 
                    = (0xffffU & ((IData)(1U) + vlTOPp->top__DOT__l1__DOT__weight_read_index
                                  [0U]));
            } else {
                vlTOPp->top__DOT__l1__DOT__weight_read_index[0U] = 0U;
                vlTOPp->top__DOT__l1__DOT__weight_read_index[1U] 
                    = (0xffffU & ((IData)(1U) + vlTOPp->top__DOT__l1__DOT__weight_read_index
                                  [1U]));
            }
            vlTOPp->top__DOT__l1__DOT__state = 2U;
            if ((3U == vlTOPp->top__DOT__l1__DOT__weight_read_index
                 [1U])) {
                vlTOPp->top__DOT__l1__DOT__outmem_index[0U] 
                    = (0xffffU & ((IData)(1U) + vlTOPp->top__DOT__l1__DOT__outmem_index
                                  [0U]));
                vlTOPp->top__DOT__l1__DOT__weight_read_index[1U] = 0U;
            }
            if ((0x1aU == vlTOPp->top__DOT__l1__DOT__outmem_index
                 [0U])) {
                vlTOPp->top__DOT__l1__DOT__outmem_index[0U] = 0U;
                vlTOPp->top__DOT__l1__DOT__outmem_index[1U] 
                    = (0xffffU & ((IData)(1U) + vlTOPp->top__DOT__l1__DOT__outmem_index
                                  [1U]));
            }
            if ((0x1aU == vlTOPp->top__DOT__l1__DOT__outmem_index
                 [1U])) {
                vlTOPp->top__DOT__l1__DOT__weight_read_index[2U] 
                    = (0xffffU & ((IData)(1U) + vlTOPp->top__DOT__l1__DOT__weight_read_index
                                  [2U]));
                vlTOPp->top__DOT__l1__DOT__outmem_index[1U] = 0U;
            }
            vlTOPp->top__DOT__l1__DOT__act_read_index[1U] 
                = (0xffffU & (vlTOPp->top__DOT__l1__DOT__outmem_index
                              [1U] + vlTOPp->top__DOT__l1__DOT__weight_read_index
                              [1U]));
            vlTOPp->top__DOT__l1__DOT__act_read_index[0U] 
                = (0xffffU & (vlTOPp->top__DOT__l1__DOT__outmem_index
                              [0U] + vlTOPp->top__DOT__l1__DOT__weight_read_index
                              [0U]));
            if ((0x10U == vlTOPp->top__DOT__l1__DOT__weight_read_index
                 [2U])) {
                vlTOPp->top__DOT__l1__DOT__act_read_index[2U] 
                    = (0xffffU & ((IData)(1U) + vlTOPp->top__DOT__l1__DOT__act_read_index
                                  [2U]));
                vlTOPp->top__DOT__l1__DOT__weight_read_index[2U] = 0U;
                vlTOPp->top__DOT__l1__DOT__weight_read_index[3U] 
                    = (0xffffU & ((IData)(1U) + vlTOPp->top__DOT__l1__DOT__weight_read_index
                                  [3U]));
            }
            vlTOPp->top__DOT__l1__DOT__outmem_index[2U] 
                = vlTOPp->top__DOT__l1__DOT__weight_read_index
                [2U];
            if ((1U == vlTOPp->top__DOT__l1__DOT__weight_read_index
                 [3U])) {
                vlTOPp->top__DOT__l1__DOT__weight_read_index[3U] = 0U;
                vlTOPp->top__DOT__l1__DOT__act_read_index[2U] = 0U;
            }
            vlTOPp->top__DOT__l1__DOT__act_read_index[2U] 
                = vlTOPp->top__DOT__l1__DOT__weight_read_index
                [3U];
        } else {
            if ((2U == (IData)(vlTOPp->top__DOT__l1__DOT__state))) {
                if (((0U == vlTOPp->top__DOT__l1__DOT__weight_read_index
                      [1U]) & (0U == vlTOPp->top__DOT__l1__DOT__weight_read_index
                               [0U]))) {
                    vlTOPp->top__DOT__l1__DOT__outmem_write_data = VL_ULL(0);
                }
                vlTOPp->top__DOT__l1__DOT__state = 
                    (((2U == vlTOPp->top__DOT__l1__DOT__weight_read_index
                       [1U]) & (2U == vlTOPp->top__DOT__l1__DOT__weight_read_index
                                [0U])) ? 3U : 1U);
                vlTOPp->top__DOT__l1__DOT__outmem_write_data 
                    = VL_CVT_Q_D((VL_CVT_D_Q(vlTOPp->top__DOT__l1__DOT__outmem_write_data) 
                                  + (VL_CVT_D_Q(vlTOPp->top__DOT__l1__DOT__weights_out_data) 
                                     * VL_CVT_D_Q(vlTOPp->top__DOT__l1__DOT__act_out_data))));
            } else {
                if ((3U == (IData)(vlTOPp->top__DOT__l1__DOT__state))) {
                    vlTOPp->top__DOT__l1__DOT__outmem_write_data 
                        = VL_CVT_Q_D((VL_CVT_D_Q(vlTOPp->top__DOT__l1__DOT__outmem_write_data) 
                                      + VL_CVT_D_Q(vlTOPp->top__DOT__l1__DOT__bias_out_data)));
                    vlTOPp->top__DOT__l1__DOT__outmem_want_write = 1U;
                    vlTOPp->top__DOT__l1__DOT__state 
                        = ((((0x19U == vlTOPp->top__DOT__l1__DOT__outmem_index
                              [0U]) & (0x19U == vlTOPp->top__DOT__l1__DOT__outmem_index
                                       [1U])) & (0xfU 
                                                 == 
                                                 vlTOPp->top__DOT__l1__DOT__outmem_index
                                                 [2U]))
                            ? 4U : 1U);
                    if ((VL_CVT_D_Q(vlTOPp->top__DOT__l1__DOT__outmem_write_data) 
                         <= 0.0)) {
                        vlTOPp->top__DOT__l1__DOT__outmem_write_data = 0U;
                    }
                } else {
                    if ((4U == (IData)(vlTOPp->top__DOT__l1__DOT__state))) {
                        vlTOPp->top__DOT__input_2_scheduler_done = 1U;
                        vlTOPp->top__DOT__l1__DOT__outmem_want_write = 0U;
                        if (vlTOPp->top__DOT__scheduler_2_input_start) {
                            vlTOPp->top__DOT__l1__DOT__state = 0U;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->top__DOT__scheduler_2_l2_inmem_wantwrite) {
        vlTOPp->top__DOT__l2__DOT__in_memory__DOT____Vlvbound1 
            = ((0x19U >= (0x1fU & vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                          [0U])) ? vlTOPp->top__DOT__l1__DOT__out_memory__DOT__mem
               [(0xfU & vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                 [2U])][((0x19U >= (0x1fU & vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                    [1U])) ? (0x1fU 
                                              & vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                              [1U])
                          : 0U)][(0x1fU & vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                  [0U])] : VL_ULL(0));
        if (((0x19U >= (0x1fU & vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index
                        [0U])) & (0x19U >= (0x1fU & 
                                            vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index
                                            [1U])))) {
            vlTOPp->top__DOT__l2__DOT__in_memory__DOT__mem[(0xfU 
                                                            & vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index
                                                            [2U])][(0x1fU 
                                                                    & vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index
                                                                    [1U])][(0x1fU 
                                                                            & vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index
                                                                            [0U])] 
                = vlTOPp->top__DOT__l2__DOT__in_memory__DOT____Vlvbound1;
        }
    }
    if ((0U == (IData)(vlTOPp->top__DOT__scheduler__DOT__state))) {
        if (vlTOPp->compute) {
            vlTOPp->top__DOT__scheduler_2_input_start = 1U;
            vlTOPp->top__DOT__scheduler__DOT__state = 1U;
        } else {
            vlTOPp->top__DOT__scheduler__DOT__state = 0U;
        }
    } else {
        if ((1U == (IData)(vlTOPp->top__DOT__scheduler__DOT__state))) {
            vlTOPp->top__DOT__scheduler_2_input_start = 0U;
            if (vlTOPp->top__DOT__input_2_scheduler_done) {
                vlTOPp->top__DOT__scheduler__DOT__state = 2U;
                vlTOPp->top__DOT__scheduler_2_l2_inmem_wantwrite = 1U;
            } else {
                vlTOPp->top__DOT__scheduler__DOT__state = 1U;
            }
        } else {
            if ((2U == (IData)(vlTOPp->top__DOT__scheduler__DOT__state))) {
                if ((0x19U == vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index
                     [0U])) {
                    vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index[0U] = 0U;
                    vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index[1U] 
                        = (0xffffU & ((IData)(1U) + 
                                      vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index
                                      [1U]));
                } else {
                    vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index[0U] 
                        = (0xffffU & ((IData)(1U) + 
                                      vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index
                                      [0U]));
                }
                if ((0x19U == vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index
                     [1U])) {
                    vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index[1U] = 0U;
                    vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index[2U] 
                        = (0xffffU & ((IData)(1U) + 
                                      vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index
                                      [2U]));
                }
                if ((0xfU == vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index
                     [2U])) {
                    vlTOPp->top__DOT__l2_compute_start = 1U;
                    vlTOPp->top__DOT__scheduler__DOT__state = 3U;
                    vlTOPp->top__DOT__scheduler_2_l2_inmem_wantwrite = 0U;
                }
            } else {
                if ((3U == (IData)(vlTOPp->top__DOT__scheduler__DOT__state))) {
                    vlTOPp->top__DOT__l2_compute_start = 0U;
                    if (VL_UNLIKELY(vlTOPp->top__DOT__l2_compute_done)) {
                        VL_FINISH_MT("verilog/scheduler.v", 81, "");
                        vlTOPp->top__DOT__scheduler__DOT__state = 0xaU;
                    }
                    vlTOPp->top__DOT__scheduler__DOT__state = 3U;
                } else {
                    if (VL_UNLIKELY((0xaU == (IData)(vlTOPp->top__DOT__scheduler__DOT__state)))) {
                        VL_FINISH_MT("verilog/scheduler.v", 88, "");
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->input_write_weights)))) {
        if (vlTOPp->input_write_bias) {
            __Vdlyvval__top__DOT__l1__DOT__weights__DOT__mem_bias__v0 
                = vlTOPp->input_data;
            __Vdlyvset__top__DOT__l1__DOT__weights__DOT__mem_bias__v0 = 1U;
            __Vdlyvdim0__top__DOT__l1__DOT__weights__DOT__mem_bias__v0 
                = (0xfU & vlTOPp->input_index[0U]);
        }
    }
    if (vlTOPp->input_write_weights) {
        vlTOPp->top__DOT__l1__DOT__weights__DOT____Vlvbound1 
            = vlTOPp->input_data;
        if (((2U >= (3U & vlTOPp->input_index[0U])) 
             & ((2U >= (3U & vlTOPp->input_index[1U])) 
                & (0U >= (1U & vlTOPp->input_index[3U]))))) {
            __Vdlyvval__top__DOT__l1__DOT__weights__DOT__mem_weight__v0 
                = vlTOPp->top__DOT__l1__DOT__weights__DOT____Vlvbound1;
            __Vdlyvset__top__DOT__l1__DOT__weights__DOT__mem_weight__v0 = 1U;
            __Vdlyvdim3__top__DOT__l1__DOT__weights__DOT__mem_weight__v0 
                = (3U & vlTOPp->input_index[0U]);
            __Vdlyvdim2__top__DOT__l1__DOT__weights__DOT__mem_weight__v0 
                = (3U & vlTOPp->input_index[1U]);
            __Vdlyvdim1__top__DOT__l1__DOT__weights__DOT__mem_weight__v0 
                = (0xfU & vlTOPp->input_index[2U]);
            __Vdlyvdim0__top__DOT__l1__DOT__weights__DOT__mem_weight__v0 
                = (1U & vlTOPp->input_index[3U]);
        }
    }
    vlTOPp->top__DOT__l1__DOT__act_out_data = ((0x1bU 
                                                >= 
                                                (0x1fU 
                                                 & vlTOPp->top__DOT__l1__DOT__act_read_index
                                                 [0U]))
                                                ? vlTOPp->top__DOT__l1__DOT__activation__DOT__mem
                                               [((0U 
                                                  >= 
                                                  (1U 
                                                   & vlTOPp->top__DOT__l1__DOT__act_read_index
                                                   [2U])) 
                                                 & vlTOPp->top__DOT__l1__DOT__act_read_index
                                                 [2U])]
                                               [((0x1bU 
                                                  >= 
                                                  (0x1fU 
                                                   & vlTOPp->top__DOT__l1__DOT__act_read_index
                                                   [1U]))
                                                  ? 
                                                 (0x1fU 
                                                  & vlTOPp->top__DOT__l1__DOT__act_read_index
                                                  [1U])
                                                  : 0U)]
                                               [(0x1fU 
                                                 & vlTOPp->top__DOT__l1__DOT__act_read_index
                                                 [0U])]
                                                : VL_ULL(0));
    vlTOPp->top__DOT__l2__DOT__inmem_read_data = ((0x19U 
                                                   >= 
                                                   (0x1fU 
                                                    & vlTOPp->top__DOT__l2__DOT__inmem_read_index
                                                    [0U]))
                                                   ? 
                                                  vlTOPp->top__DOT__l2__DOT__in_memory__DOT__mem
                                                  [
                                                  (0xfU 
                                                   & vlTOPp->top__DOT__l2__DOT__inmem_read_index
                                                   [2U])]
                                                  [
                                                  ((0x19U 
                                                    >= 
                                                    (0x1fU 
                                                     & vlTOPp->top__DOT__l2__DOT__inmem_read_index
                                                     [1U]))
                                                    ? 
                                                   (0x1fU 
                                                    & vlTOPp->top__DOT__l2__DOT__inmem_read_index
                                                    [1U])
                                                    : 0U)]
                                                  [
                                                  (0x1fU 
                                                   & vlTOPp->top__DOT__l2__DOT__inmem_read_index
                                                   [0U])]
                                                   : VL_ULL(0));
    vlTOPp->top__DOT__scheduler_2_l1_index[2U] = vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index
        [2U];
    vlTOPp->top__DOT__scheduler_2_l1_index[1U] = vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index
        [1U];
    vlTOPp->top__DOT__scheduler_2_l1_index[0U] = vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index
        [0U];
    if (__Vdlyvset__top__DOT__l1__DOT__weights__DOT__mem_bias__v0) {
        vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[__Vdlyvdim0__top__DOT__l1__DOT__weights__DOT__mem_bias__v0] 
            = __Vdlyvval__top__DOT__l1__DOT__weights__DOT__mem_bias__v0;
    }
    if (__Vdlyvset__top__DOT__l1__DOT__weights__DOT__mem_weight__v0) {
        vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_weight[__Vdlyvdim0__top__DOT__l1__DOT__weights__DOT__mem_weight__v0][__Vdlyvdim1__top__DOT__l1__DOT__weights__DOT__mem_weight__v0][__Vdlyvdim2__top__DOT__l1__DOT__weights__DOT__mem_weight__v0][__Vdlyvdim3__top__DOT__l1__DOT__weights__DOT__mem_weight__v0] 
            = __Vdlyvval__top__DOT__l1__DOT__weights__DOT__mem_weight__v0;
    }
    vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index[2U] 
        = vlTOPp->top__DOT__scheduler_2_l1_index[2U];
    vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index[1U] 
        = vlTOPp->top__DOT__scheduler_2_l1_index[1U];
    vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index[0U] 
        = vlTOPp->top__DOT__scheduler_2_l1_index[0U];
    vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index[2U] 
        = vlTOPp->top__DOT__scheduler_2_l1_index[2U];
    vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index[1U] 
        = vlTOPp->top__DOT__scheduler_2_l1_index[1U];
    vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index[0U] 
        = vlTOPp->top__DOT__scheduler_2_l1_index[0U];
    vlTOPp->top__DOT__l1__DOT__bias_out_data = vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias
        [(0xfU & vlTOPp->top__DOT__l1__DOT__weight_read_index
          [2U])];
    vlTOPp->top__DOT__l1__DOT__weights_out_data = (
                                                   (2U 
                                                    >= 
                                                    (3U 
                                                     & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                     [0U]))
                                                    ? 
                                                   vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_weight
                                                   [
                                                   ((0U 
                                                     >= 
                                                     (1U 
                                                      & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                      [3U])) 
                                                    & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                    [3U])]
                                                   [
                                                   (0xfU 
                                                    & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                    [2U])]
                                                   [
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                      [1U]))
                                                     ? 
                                                    (3U 
                                                     & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                     [1U])
                                                     : 0U)]
                                                   [
                                                   (3U 
                                                    & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                    [0U])]
                                                    : VL_ULL(0));
}

void Vtop::_initial__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_initial__TOP__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__scheduler_2_input_start = 0U;
    vlTOPp->top__DOT__scheduler__DOT__state = 0U;
    vlTOPp->top__DOT__l1__DOT__outmem_want_write = 0U;
    vlTOPp->top__DOT__l1__DOT__state = 0U;
    vlTOPp->top__DOT__l2__DOT__outmem_write_data = VL_ULL(0);
    vlTOPp->top__DOT__l2__DOT__state = 0U;
    vlTOPp->top__DOT__l2__DOT__k_state = 0U;
}

void Vtop::_settle__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__3\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__l1__DOT__act_out_data = ((0x1bU 
                                                >= 
                                                (0x1fU 
                                                 & vlTOPp->top__DOT__l1__DOT__act_read_index
                                                 [0U]))
                                                ? vlTOPp->top__DOT__l1__DOT__activation__DOT__mem
                                               [((0U 
                                                  >= 
                                                  (1U 
                                                   & vlTOPp->top__DOT__l1__DOT__act_read_index
                                                   [2U])) 
                                                 & vlTOPp->top__DOT__l1__DOT__act_read_index
                                                 [2U])]
                                               [((0x1bU 
                                                  >= 
                                                  (0x1fU 
                                                   & vlTOPp->top__DOT__l1__DOT__act_read_index
                                                   [1U]))
                                                  ? 
                                                 (0x1fU 
                                                  & vlTOPp->top__DOT__l1__DOT__act_read_index
                                                  [1U])
                                                  : 0U)]
                                               [(0x1fU 
                                                 & vlTOPp->top__DOT__l1__DOT__act_read_index
                                                 [0U])]
                                                : VL_ULL(0));
    vlTOPp->top__DOT__l2__DOT__inmem_read_data = ((0x19U 
                                                   >= 
                                                   (0x1fU 
                                                    & vlTOPp->top__DOT__l2__DOT__inmem_read_index
                                                    [0U]))
                                                   ? 
                                                  vlTOPp->top__DOT__l2__DOT__in_memory__DOT__mem
                                                  [
                                                  (0xfU 
                                                   & vlTOPp->top__DOT__l2__DOT__inmem_read_index
                                                   [2U])]
                                                  [
                                                  ((0x19U 
                                                    >= 
                                                    (0x1fU 
                                                     & vlTOPp->top__DOT__l2__DOT__inmem_read_index
                                                     [1U]))
                                                    ? 
                                                   (0x1fU 
                                                    & vlTOPp->top__DOT__l2__DOT__inmem_read_index
                                                    [1U])
                                                    : 0U)]
                                                  [
                                                  (0x1fU 
                                                   & vlTOPp->top__DOT__l2__DOT__inmem_read_index
                                                   [0U])]
                                                   : VL_ULL(0));
    vlTOPp->top__DOT__scheduler_2_l1_index[2U] = vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index
        [2U];
    vlTOPp->top__DOT__scheduler_2_l1_index[1U] = vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index
        [1U];
    vlTOPp->top__DOT__scheduler_2_l1_index[0U] = vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index
        [0U];
    vlTOPp->top__DOT__l1__DOT__weights_out_data = (
                                                   (2U 
                                                    >= 
                                                    (3U 
                                                     & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                     [0U]))
                                                    ? 
                                                   vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_weight
                                                   [
                                                   ((0U 
                                                     >= 
                                                     (1U 
                                                      & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                      [3U])) 
                                                    & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                    [3U])]
                                                   [
                                                   (0xfU 
                                                    & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                    [2U])]
                                                   [
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                      [1U]))
                                                     ? 
                                                    (3U 
                                                     & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                     [1U])
                                                     : 0U)]
                                                   [
                                                   (3U 
                                                    & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                    [0U])]
                                                    : VL_ULL(0));
    vlTOPp->top__DOT__l1__DOT__bias_out_data = vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias
        [(0xfU & vlTOPp->top__DOT__l1__DOT__weight_read_index
          [2U])];
    vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index[2U] 
        = vlTOPp->top__DOT__scheduler_2_l1_index[2U];
    vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index[1U] 
        = vlTOPp->top__DOT__scheduler_2_l1_index[1U];
    vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index[0U] 
        = vlTOPp->top__DOT__scheduler_2_l1_index[0U];
    vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index[2U] 
        = vlTOPp->top__DOT__scheduler_2_l1_index[2U];
    vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index[1U] 
        = vlTOPp->top__DOT__scheduler_2_l1_index[1U];
    vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index[0U] 
        = vlTOPp->top__DOT__scheduler_2_l1_index[0U];
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
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
    vlTOPp->_initial__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
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
    vlTOPp->_settle__TOP__3(vlSymsp);
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
    if (VL_UNLIKELY((input_write_act & 0xfeU))) {
        Verilated::overWidthError("input_write_act");}
    if (VL_UNLIKELY((input_write_weights & 0xfeU))) {
        Verilated::overWidthError("input_write_weights");}
    if (VL_UNLIKELY((input_write_bias & 0xfeU))) {
        Verilated::overWidthError("input_write_bias");}
    if (VL_UNLIKELY((compute & 0xfeU))) {
        Verilated::overWidthError("compute");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    input_data = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            input_index[__Vi0] = VL_RAND_RESET_I(16);
    }}
    input_write_act = VL_RAND_RESET_I(1);
    input_write_weights = VL_RAND_RESET_I(1);
    input_write_bias = VL_RAND_RESET_I(1);
    compute = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            top__DOT__scheduler_2_l1_index[__Vi0] = VL_RAND_RESET_I(16);
    }}
    top__DOT__scheduler_2_l2_inmem_wantwrite = VL_RAND_RESET_I(1);
    top__DOT__scheduler_2_input_start = VL_RAND_RESET_I(1);
    top__DOT__input_2_scheduler_done = VL_RAND_RESET_I(1);
    top__DOT__l2_compute_start = VL_RAND_RESET_I(1);
    top__DOT__l2_compute_done = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            top__DOT____Vcellout__scheduler__l1_l2_index[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            top__DOT____Vcellinp__l1__read_outmem_index[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            top__DOT____Vcellinp__l2__inmem_write_index[__Vi0] = VL_RAND_RESET_I(16);
    }}
    top__DOT__scheduler__DOT__state = VL_RAND_RESET_I(16);
    top__DOT__l1__DOT__act_out_data = VL_RAND_RESET_Q(64);
    top__DOT__l1__DOT__weights_out_data = VL_RAND_RESET_Q(64);
    top__DOT__l1__DOT__bias_out_data = VL_RAND_RESET_Q(64);
    top__DOT__l1__DOT__outmem_write_data = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__l1__DOT__weight_read_index[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            top__DOT__l1__DOT__act_read_index[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            top__DOT__l1__DOT__outmem_index[__Vi0] = VL_RAND_RESET_I(16);
    }}
    top__DOT__l1__DOT__outmem_want_write = VL_RAND_RESET_I(1);
    top__DOT__l1__DOT__state = VL_RAND_RESET_I(16);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            { int __Vi1=0; for (; __Vi1<28; ++__Vi1) {
                    { int __Vi2=0; for (; __Vi2<28; ++__Vi2) {
                            top__DOT__l1__DOT__activation__DOT__mem[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_Q(64);
                    }}
            }}
    }}
    top__DOT__l1__DOT__activation__DOT____Vlvbound1 = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            { int __Vi1=0; for (; __Vi1<16; ++__Vi1) {
                    { int __Vi2=0; for (; __Vi2<3; ++__Vi2) {
                            { int __Vi3=0; for (; __Vi3<3; ++__Vi3) {
                                    top__DOT__l1__DOT__weights__DOT__mem_weight[__Vi0][__Vi1][__Vi2][__Vi3] = VL_RAND_RESET_Q(64);
                            }}
                    }}
            }}
    }}
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            top__DOT__l1__DOT__weights__DOT__mem_bias[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    top__DOT__l1__DOT__weights__DOT____Vlvbound1 = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            { int __Vi1=0; for (; __Vi1<26; ++__Vi1) {
                    { int __Vi2=0; for (; __Vi2<26; ++__Vi2) {
                            top__DOT__l1__DOT__out_memory__DOT__mem[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_Q(64);
                    }}
            }}
    }}
    top__DOT__l1__DOT__out_memory__DOT____Vlvbound1 = VL_RAND_RESET_Q(64);
    top__DOT__l2__DOT__read_data = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            top__DOT__l2__DOT__outmem_read_index[__Vi0] = VL_RAND_RESET_I(16);
    }}
    top__DOT__l2__DOT__outmem_write_data = VL_RAND_RESET_Q(64);
    top__DOT__l2__DOT__outmem_want_write = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            top__DOT__l2__DOT__outmem_write_index[__Vi0] = VL_RAND_RESET_I(16);
    }}
    top__DOT__l2__DOT__inmem_read_data = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            top__DOT__l2__DOT__inmem_read_index[__Vi0] = VL_RAND_RESET_I(16);
    }}
    top__DOT__l2__DOT__state = VL_RAND_RESET_I(16);
    top__DOT__l2__DOT__k_state = VL_RAND_RESET_I(16);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            { int __Vi1=0; for (; __Vi1<26; ++__Vi1) {
                    { int __Vi2=0; for (; __Vi2<26; ++__Vi2) {
                            top__DOT__l2__DOT__in_memory__DOT__mem[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_Q(64);
                    }}
            }}
    }}
    top__DOT__l2__DOT__in_memory__DOT____Vlvbound1 = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            { int __Vi1=0; for (; __Vi1<25; ++__Vi1) {
                    { int __Vi2=0; for (; __Vi2<25; ++__Vi2) {
                            top__DOT__l2__DOT__out_memory__DOT__mem[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_Q(64);
                    }}
            }}
    }}
    top__DOT__l2__DOT__out_memory__DOT____Vlvbound1 = VL_RAND_RESET_Q(64);
    __Vm_traceActivity = 0;
}
