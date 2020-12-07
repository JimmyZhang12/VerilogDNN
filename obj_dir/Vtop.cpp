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
    vlTOPp->top__DOT__l1__DOT__weights_out_data = (
                                                   (0x23ffU 
                                                    >= 
                                                    (0x3fffU 
                                                     & (((((IData)(0x2400U) 
                                                           * 
                                                           (1U 
                                                            & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                            [3U])) 
                                                          + 
                                                          (0x3fffU 
                                                           & ((IData)(0x240U) 
                                                              * 
                                                              (1U 
                                                               & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                               [2U])))) 
                                                         + 
                                                         (0x3ffU 
                                                          & ((IData)(0xc0U) 
                                                             * 
                                                             (1U 
                                                              & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                              [1U])))) 
                                                        + 
                                                        (0x40U 
                                                         & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                            [0U] 
                                                            << 6U)))))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & (((((IData)(0x2400U) 
                                                             * 
                                                             (1U 
                                                              & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                              [3U])) 
                                                            + 
                                                            (0x3fffU 
                                                             & ((IData)(0x240U) 
                                                                * 
                                                                (1U 
                                                                 & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                 [2U])))) 
                                                           + 
                                                           (0x3ffU 
                                                            & ((IData)(0xc0U) 
                                                               * 
                                                               (1U 
                                                                & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                [1U])))) 
                                                          + 
                                                          (0x40U 
                                                           & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                              [0U] 
                                                              << 6U)))))
                                                      ? VL_ULL(0)
                                                      : 
                                                     ((QData)((IData)(
                                                                      vlTOPp->top__DOT__l1__DOT__weights__DOT__mem[
                                                                      ((IData)(2U) 
                                                                       + 
                                                                       (0x1ffU 
                                                                        & ((((((IData)(0x2400U) 
                                                                               * 
                                                                               (1U 
                                                                                & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                                [3U])) 
                                                                              + 
                                                                              (0x3fffU 
                                                                               & ((IData)(0x240U) 
                                                                                * 
                                                                                (1U 
                                                                                & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                                [2U])))) 
                                                                             + 
                                                                             (0x3ffU 
                                                                              & ((IData)(0xc0U) 
                                                                                * 
                                                                                (1U 
                                                                                & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                                [1U])))) 
                                                                            + 
                                                                            (0x40U 
                                                                             & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                                [0U] 
                                                                                << 6U))) 
                                                                           >> 5U)))])) 
                                                      << 
                                                      ((IData)(0x40U) 
                                                       - 
                                                       (0x1fU 
                                                        & (((((IData)(0x2400U) 
                                                              * 
                                                              (1U 
                                                               & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                               [3U])) 
                                                             + 
                                                             (0x3fffU 
                                                              & ((IData)(0x240U) 
                                                                 * 
                                                                 (1U 
                                                                  & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                  [2U])))) 
                                                            + 
                                                            (0x3ffU 
                                                             & ((IData)(0xc0U) 
                                                                * 
                                                                (1U 
                                                                 & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                 [1U])))) 
                                                           + 
                                                           (0x40U 
                                                            & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                               [0U] 
                                                               << 6U))))))) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->top__DOT__l1__DOT__weights__DOT__mem[
                                                                        ((IData)(1U) 
                                                                         + 
                                                                         (0x1ffU 
                                                                          & ((((((IData)(0x2400U) 
                                                                                * 
                                                                                (1U 
                                                                                & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                                [3U])) 
                                                                                + 
                                                                                (0x3fffU 
                                                                                & ((IData)(0x240U) 
                                                                                * 
                                                                                (1U 
                                                                                & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                                [2U])))) 
                                                                               + 
                                                                               (0x3ffU 
                                                                                & ((IData)(0xc0U) 
                                                                                * 
                                                                                (1U 
                                                                                & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                                [1U])))) 
                                                                              + 
                                                                              (0x40U 
                                                                               & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                                [0U] 
                                                                                << 6U))) 
                                                                             >> 5U)))])) 
                                                        << 
                                                        ((0U 
                                                          == 
                                                          (0x1fU 
                                                           & (((((IData)(0x2400U) 
                                                                 * 
                                                                 (1U 
                                                                  & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                  [3U])) 
                                                                + 
                                                                (0x3fffU 
                                                                 & ((IData)(0x240U) 
                                                                    * 
                                                                    (1U 
                                                                     & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                     [2U])))) 
                                                               + 
                                                               (0x3ffU 
                                                                & ((IData)(0xc0U) 
                                                                   * 
                                                                   (1U 
                                                                    & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                    [1U])))) 
                                                              + 
                                                              (0x40U 
                                                               & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                  [0U] 
                                                                  << 6U)))))
                                                          ? 0x20U
                                                          : 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & (((((IData)(0x2400U) 
                                                                 * 
                                                                 (1U 
                                                                  & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                  [3U])) 
                                                                + 
                                                                (0x3fffU 
                                                                 & ((IData)(0x240U) 
                                                                    * 
                                                                    (1U 
                                                                     & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                     [2U])))) 
                                                               + 
                                                               (0x3ffU 
                                                                & ((IData)(0xc0U) 
                                                                   * 
                                                                   (1U 
                                                                    & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                    [1U])))) 
                                                              + 
                                                              (0x40U 
                                                               & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                  [0U] 
                                                                  << 6U))))))) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->top__DOT__l1__DOT__weights__DOT__mem[
                                                                          (0x1ffU 
                                                                           & ((((((IData)(0x2400U) 
                                                                                * 
                                                                                (1U 
                                                                                & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                                [3U])) 
                                                                                + 
                                                                                (0x3fffU 
                                                                                & ((IData)(0x240U) 
                                                                                * 
                                                                                (1U 
                                                                                & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                                [2U])))) 
                                                                                + 
                                                                                (0x3ffU 
                                                                                & ((IData)(0xc0U) 
                                                                                * 
                                                                                (1U 
                                                                                & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                                [1U])))) 
                                                                               + 
                                                                               (0x40U 
                                                                                & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                                [0U] 
                                                                                << 6U))) 
                                                                              >> 5U))])) 
                                                          >> 
                                                          (0x1fU 
                                                           & (((((IData)(0x2400U) 
                                                                 * 
                                                                 (1U 
                                                                  & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                  [3U])) 
                                                                + 
                                                                (0x3fffU 
                                                                 & ((IData)(0x240U) 
                                                                    * 
                                                                    (1U 
                                                                     & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                     [2U])))) 
                                                               + 
                                                               (0x3ffU 
                                                                & ((IData)(0xc0U) 
                                                                   * 
                                                                   (1U 
                                                                    & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                    [1U])))) 
                                                              + 
                                                              (0x40U 
                                                               & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                  [0U] 
                                                                  << 6U)))))))
                                                    : VL_ULL(0));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__l1__DOT__weight_write = 0U;
}

VL_INLINE_OPT void Vtop::_sequent__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__3\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->input_write_weights) {
        if (VL_UNLIKELY(vlTOPp->top__DOT__output_valid)) {
            VL_FINISH_MT("verilog/top.v", 49, "");
        }
    }
    if (vlTOPp->input_write_weights) {
        vlTOPp->top__DOT__l1__DOT__weight_write = 1U;
    }
    if (VL_UNLIKELY(vlTOPp->compute)) {
        if (((2U == vlTOPp->top__DOT__l1__DOT__weight_read_index
              [1U]) & (2U == vlTOPp->top__DOT__l1__DOT__weight_read_index
                       [0U]))) {
            vlTOPp->top__DOT__l1__DOT__outmem_want_write = 1U;
        } else {
            vlTOPp->top__DOT__l1__DOT__outmem_want_write = 0U;
            if (((0U == vlTOPp->top__DOT__l1__DOT__weight_read_index
                  [1U]) & (0U == vlTOPp->top__DOT__l1__DOT__weight_read_index
                           [0U]))) {
                vlTOPp->top__DOT__l1__DOT__outmem_write_data = VL_ULL(0);
            }
        }
        if (vlTOPp->top__DOT__l1__DOT__state) {
            if (vlTOPp->top__DOT__l1__DOT__state) {
                if ((2U > vlTOPp->top__DOT__l1__DOT__weight_read_index
                     [0U])) {
                    vlTOPp->top__DOT__l1__DOT__weight_read_index[0U] 
                        = (0xffffU & ((IData)(1U) + 
                                      vlTOPp->top__DOT__l1__DOT__weight_read_index
                                      [0U]));
                } else {
                    vlTOPp->top__DOT__l1__DOT__weight_read_index[0U] = 0U;
                    vlTOPp->top__DOT__l1__DOT__weight_read_index[1U] 
                        = (0xffffU & ((IData)(1U) + 
                                      vlTOPp->top__DOT__l1__DOT__weight_read_index
                                      [1U]));
                }
                vlTOPp->top__DOT__l1__DOT__state = 0U;
                if ((3U == vlTOPp->top__DOT__l1__DOT__weight_read_index
                     [1U])) {
                    vlTOPp->top__DOT__l1__DOT__weight_read_index[1U] = 0U;
                    vlTOPp->top__DOT__l1__DOT__outmem_index[0U] 
                        = (0xffffU & ((IData)(1U) + 
                                      vlTOPp->top__DOT__l1__DOT__outmem_index
                                      [0U]));
                }
                if ((0x1aU == vlTOPp->top__DOT__l1__DOT__outmem_index
                     [0U])) {
                    vlTOPp->top__DOT__l1__DOT__outmem_index[0U] = 0U;
                    vlTOPp->top__DOT__l1__DOT__outmem_index[1U] 
                        = (0xffffU & ((IData)(1U) + 
                                      vlTOPp->top__DOT__l1__DOT__outmem_index
                                      [1U]));
                }
                if ((0x1aU == vlTOPp->top__DOT__l1__DOT__outmem_index
                     [1U])) {
                    vlTOPp->top__DOT__l1__DOT__weight_read_index[2U] 
                        = (0xffffU & ((IData)(1U) + 
                                      vlTOPp->top__DOT__l1__DOT__weight_read_index
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
                        = (0xffffU & ((IData)(1U) + 
                                      vlTOPp->top__DOT__l1__DOT__act_read_index
                                      [2U]));
                    vlTOPp->top__DOT__l1__DOT__weight_read_index[2U] = 0U;
                    vlTOPp->top__DOT__l1__DOT__weight_read_index[3U] 
                        = (0xffffU & ((IData)(1U) + 
                                      vlTOPp->top__DOT__l1__DOT__weight_read_index
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
            }
        } else {
            vlTOPp->top__DOT__l1__DOT__weight_read_index[3U] = 0U;
            vlTOPp->top__DOT__l1__DOT__act_read_index[2U] = 0U;
            vlTOPp->top__DOT__l1__DOT__outmem_index[0U] = 0U;
            vlTOPp->top__DOT__l1__DOT__state = 0U;
            vlTOPp->top__DOT__l1__DOT__weight_read_index[2U] = 0U;
            vlTOPp->top__DOT__l1__DOT__act_read_index[1U] = 0U;
            vlTOPp->top__DOT__l1__DOT__outmem_index[1U] = 0U;
            vlTOPp->top__DOT__l1__DOT__weight_read_index[1U] = 0U;
            vlTOPp->top__DOT__l1__DOT__act_read_index[0U] = 0U;
            vlTOPp->top__DOT__l1__DOT__weight_read_index[0U] = 0U;
        }
        VL_WRITEF("INPUT LAYER: STATE : %1#\n",1,vlTOPp->top__DOT__l1__DOT__state);
    }
    if (VL_UNLIKELY(vlTOPp->input_write_act)) {
        vlTOPp->top__DOT__l1__DOT__activation__DOT____Vlvbound1 
            = vlTOPp->input_data;
        VL_WRITEF("INPUT LAYER ACT_MEM : WRITE : mem[%5#][%5#][%5#] = %f\n",
                  16,vlTOPp->input_index[2U],16,vlTOPp->input_index
                  [1U],16,vlTOPp->input_index[0U],64,
                  VL_CVT_D_Q(vlTOPp->input_data));
        if ((0xc3ffU >= (0xffffU & ((((IData)(0xc400U) 
                                      * vlTOPp->input_index
                                      [2U]) + (0xffffU 
                                               & ((IData)(0x700U) 
                                                  * 
                                                  vlTOPp->input_index
                                                  [1U]))) 
                                    + (0x7ffU & (vlTOPp->input_index
                                                 [0U] 
                                                 << 6U)))))) {
            VL_ASSIGNSEL_WIIQ(64,(0xffffU & ((((IData)(0xc400U) 
                                               * vlTOPp->input_index
                                               [2U]) 
                                              + (0xffffU 
                                                 & ((IData)(0x700U) 
                                                    * 
                                                    vlTOPp->input_index
                                                    [1U]))) 
                                             + (0x7ffU 
                                                & (vlTOPp->input_index
                                                   [0U] 
                                                   << 6U)))), vlTOPp->top__DOT__l1__DOT__activation__DOT__mem, vlTOPp->top__DOT__l1__DOT__activation__DOT____Vlvbound1);
        }
    }
    if (VL_UNLIKELY(vlTOPp->top__DOT__l1__DOT__outmem_want_write)) {
        vlTOPp->top__DOT__l1__DOT__out_memory__DOT____Vlvbound1 
            = vlTOPp->top__DOT__l1__DOT__outmem_write_data;
        VL_WRITEF("INPUT LAYER OUT_MEM : WRITE : mem[%5#][%5#][%5#] = %f\n",
                  16,vlTOPp->top__DOT__l1__DOT__outmem_index
                  [2U],16,vlTOPp->top__DOT__l1__DOT__outmem_index
                  [1U],16,vlTOPp->top__DOT__l1__DOT__outmem_index
                  [0U],64,VL_CVT_D_Q(vlTOPp->top__DOT__l1__DOT__outmem_write_data));
        if ((0xc3ffU >= (0xffffU & ((((IData)(0xc400U) 
                                      * vlTOPp->top__DOT__l1__DOT__outmem_index
                                      [2U]) + (0xffffU 
                                               & ((IData)(0x700U) 
                                                  * 
                                                  vlTOPp->top__DOT__l1__DOT__outmem_index
                                                  [1U]))) 
                                    + (0x7ffU & (vlTOPp->top__DOT__l1__DOT__outmem_index
                                                 [0U] 
                                                 << 6U)))))) {
            VL_ASSIGNSEL_WIIQ(64,(0xffffU & ((((IData)(0xc400U) 
                                               * vlTOPp->top__DOT__l1__DOT__outmem_index
                                               [2U]) 
                                              + (0xffffU 
                                                 & ((IData)(0x700U) 
                                                    * 
                                                    vlTOPp->top__DOT__l1__DOT__outmem_index
                                                    [1U]))) 
                                             + (0x7ffU 
                                                & (vlTOPp->top__DOT__l1__DOT__outmem_index
                                                   [0U] 
                                                   << 6U)))), vlTOPp->top__DOT__l1__DOT__out_memory__DOT__mem, vlTOPp->top__DOT__l1__DOT__out_memory__DOT____Vlvbound1);
        }
    }
    if (VL_UNLIKELY(vlTOPp->top__DOT__l1__DOT__weight_write)) {
        vlTOPp->top__DOT__l1__DOT__weights__DOT____Vlvbound1 
            = vlTOPp->input_data;
        VL_WRITEF("INPUT LAYER WEIGHT_MEM : WRITE : mem[%1#][%1#][%1#][%1#] = %f\n",
                  1,vlTOPp->input_index[3U],1,vlTOPp->input_index
                  [2U],1,vlTOPp->input_index[1U],1,
                  vlTOPp->input_index[0U],64,VL_CVT_D_Q(vlTOPp->input_data));
        if ((0x23ffU >= (0x3fffU & (((((IData)(0x2400U) 
                                       * vlTOPp->input_index
                                       [3U]) + (0x3fffU 
                                                & ((IData)(0x240U) 
                                                   * 
                                                   vlTOPp->input_index
                                                   [2U]))) 
                                     + (0x3ffU & ((IData)(0xc0U) 
                                                  * 
                                                  vlTOPp->input_index
                                                  [1U]))) 
                                    + (0xffU & (vlTOPp->input_index
                                                [0U] 
                                                << 6U)))))) {
            VL_ASSIGNSEL_WIIQ(64,(0x3fffU & (((((IData)(0x2400U) 
                                                * vlTOPp->input_index
                                                [3U]) 
                                               + (0x3fffU 
                                                  & ((IData)(0x240U) 
                                                     * 
                                                     vlTOPp->input_index
                                                     [2U]))) 
                                              + (0x3ffU 
                                                 & ((IData)(0xc0U) 
                                                    * 
                                                    vlTOPp->input_index
                                                    [1U]))) 
                                             + (0xffU 
                                                & (vlTOPp->input_index
                                                   [0U] 
                                                   << 6U)))), vlTOPp->top__DOT__l1__DOT__weights__DOT__mem, vlTOPp->top__DOT__l1__DOT__weights__DOT____Vlvbound1);
        }
    }
    vlTOPp->top__DOT__l1__DOT__weights_out_data = (
                                                   (0x23ffU 
                                                    >= 
                                                    (0x3fffU 
                                                     & (((((IData)(0x2400U) 
                                                           * 
                                                           (1U 
                                                            & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                            [3U])) 
                                                          + 
                                                          (0x3fffU 
                                                           & ((IData)(0x240U) 
                                                              * 
                                                              (1U 
                                                               & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                               [2U])))) 
                                                         + 
                                                         (0x3ffU 
                                                          & ((IData)(0xc0U) 
                                                             * 
                                                             (1U 
                                                              & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                              [1U])))) 
                                                        + 
                                                        (0x40U 
                                                         & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                            [0U] 
                                                            << 6U)))))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & (((((IData)(0x2400U) 
                                                             * 
                                                             (1U 
                                                              & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                              [3U])) 
                                                            + 
                                                            (0x3fffU 
                                                             & ((IData)(0x240U) 
                                                                * 
                                                                (1U 
                                                                 & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                 [2U])))) 
                                                           + 
                                                           (0x3ffU 
                                                            & ((IData)(0xc0U) 
                                                               * 
                                                               (1U 
                                                                & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                [1U])))) 
                                                          + 
                                                          (0x40U 
                                                           & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                              [0U] 
                                                              << 6U)))))
                                                      ? VL_ULL(0)
                                                      : 
                                                     ((QData)((IData)(
                                                                      vlTOPp->top__DOT__l1__DOT__weights__DOT__mem[
                                                                      ((IData)(2U) 
                                                                       + 
                                                                       (0x1ffU 
                                                                        & ((((((IData)(0x2400U) 
                                                                               * 
                                                                               (1U 
                                                                                & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                                [3U])) 
                                                                              + 
                                                                              (0x3fffU 
                                                                               & ((IData)(0x240U) 
                                                                                * 
                                                                                (1U 
                                                                                & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                                [2U])))) 
                                                                             + 
                                                                             (0x3ffU 
                                                                              & ((IData)(0xc0U) 
                                                                                * 
                                                                                (1U 
                                                                                & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                                [1U])))) 
                                                                            + 
                                                                            (0x40U 
                                                                             & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                                [0U] 
                                                                                << 6U))) 
                                                                           >> 5U)))])) 
                                                      << 
                                                      ((IData)(0x40U) 
                                                       - 
                                                       (0x1fU 
                                                        & (((((IData)(0x2400U) 
                                                              * 
                                                              (1U 
                                                               & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                               [3U])) 
                                                             + 
                                                             (0x3fffU 
                                                              & ((IData)(0x240U) 
                                                                 * 
                                                                 (1U 
                                                                  & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                  [2U])))) 
                                                            + 
                                                            (0x3ffU 
                                                             & ((IData)(0xc0U) 
                                                                * 
                                                                (1U 
                                                                 & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                 [1U])))) 
                                                           + 
                                                           (0x40U 
                                                            & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                               [0U] 
                                                               << 6U))))))) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->top__DOT__l1__DOT__weights__DOT__mem[
                                                                        ((IData)(1U) 
                                                                         + 
                                                                         (0x1ffU 
                                                                          & ((((((IData)(0x2400U) 
                                                                                * 
                                                                                (1U 
                                                                                & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                                [3U])) 
                                                                                + 
                                                                                (0x3fffU 
                                                                                & ((IData)(0x240U) 
                                                                                * 
                                                                                (1U 
                                                                                & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                                [2U])))) 
                                                                               + 
                                                                               (0x3ffU 
                                                                                & ((IData)(0xc0U) 
                                                                                * 
                                                                                (1U 
                                                                                & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                                [1U])))) 
                                                                              + 
                                                                              (0x40U 
                                                                               & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                                [0U] 
                                                                                << 6U))) 
                                                                             >> 5U)))])) 
                                                        << 
                                                        ((0U 
                                                          == 
                                                          (0x1fU 
                                                           & (((((IData)(0x2400U) 
                                                                 * 
                                                                 (1U 
                                                                  & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                  [3U])) 
                                                                + 
                                                                (0x3fffU 
                                                                 & ((IData)(0x240U) 
                                                                    * 
                                                                    (1U 
                                                                     & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                     [2U])))) 
                                                               + 
                                                               (0x3ffU 
                                                                & ((IData)(0xc0U) 
                                                                   * 
                                                                   (1U 
                                                                    & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                    [1U])))) 
                                                              + 
                                                              (0x40U 
                                                               & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                  [0U] 
                                                                  << 6U)))))
                                                          ? 0x20U
                                                          : 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & (((((IData)(0x2400U) 
                                                                 * 
                                                                 (1U 
                                                                  & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                  [3U])) 
                                                                + 
                                                                (0x3fffU 
                                                                 & ((IData)(0x240U) 
                                                                    * 
                                                                    (1U 
                                                                     & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                     [2U])))) 
                                                               + 
                                                               (0x3ffU 
                                                                & ((IData)(0xc0U) 
                                                                   * 
                                                                   (1U 
                                                                    & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                    [1U])))) 
                                                              + 
                                                              (0x40U 
                                                               & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                  [0U] 
                                                                  << 6U))))))) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->top__DOT__l1__DOT__weights__DOT__mem[
                                                                          (0x1ffU 
                                                                           & ((((((IData)(0x2400U) 
                                                                                * 
                                                                                (1U 
                                                                                & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                                [3U])) 
                                                                                + 
                                                                                (0x3fffU 
                                                                                & ((IData)(0x240U) 
                                                                                * 
                                                                                (1U 
                                                                                & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                                [2U])))) 
                                                                                + 
                                                                                (0x3ffU 
                                                                                & ((IData)(0xc0U) 
                                                                                * 
                                                                                (1U 
                                                                                & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                                [1U])))) 
                                                                               + 
                                                                               (0x40U 
                                                                                & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                                [0U] 
                                                                                << 6U))) 
                                                                              >> 5U))])) 
                                                          >> 
                                                          (0x1fU 
                                                           & (((((IData)(0x2400U) 
                                                                 * 
                                                                 (1U 
                                                                  & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                  [3U])) 
                                                                + 
                                                                (0x3fffU 
                                                                 & ((IData)(0x240U) 
                                                                    * 
                                                                    (1U 
                                                                     & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                     [2U])))) 
                                                               + 
                                                               (0x3ffU 
                                                                & ((IData)(0xc0U) 
                                                                   * 
                                                                   (1U 
                                                                    & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                    [1U])))) 
                                                              + 
                                                              (0x40U 
                                                               & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                  [0U] 
                                                                  << 6U)))))))
                                                    : VL_ULL(0));
}

void Vtop::_initial__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_initial__TOP__4\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__l1__DOT__state = 0U;
    vlTOPp->top__DOT__l1__DOT__outmem_want_write = 0U;
    vlTOPp->top__DOT__l1__DOT__weight_write = 0U;
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->clk)) & (IData)(vlTOPp->__Vclklast__TOP__clk))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->_initial__TOP__4(vlSymsp);
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
    if (VL_UNLIKELY((input_write_act & 0xfeU))) {
        Verilated::overWidthError("input_write_act");}
    if (VL_UNLIKELY((input_write_weights & 0xfeU))) {
        Verilated::overWidthError("input_write_weights");}
    if (VL_UNLIKELY((compute & 0xfeU))) {
        Verilated::overWidthError("compute");}
}
#endif  // VL_DEBUG

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    input_data = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            input_index[__Vi0] = VL_RAND_RESET_I(1);
    }}
    input_write_act = VL_RAND_RESET_I(1);
    input_write_weights = VL_RAND_RESET_I(1);
    compute = VL_RAND_RESET_I(1);
    top__DOT__out_data = VL_RAND_RESET_Q(64);
    top__DOT__output_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            top__DOT__L1_to_L2_out_index[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            top__DOT____Vcellout__l1__out_index[__Vi0] = VL_RAND_RESET_I(16);
    }}
    top__DOT__l1__DOT__weight_write = VL_RAND_RESET_I(1);
    top__DOT__l1__DOT__weights_out_data = VL_RAND_RESET_Q(64);
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
    top__DOT__l1__DOT__state = VL_RAND_RESET_I(1);
    top__DOT__l1__DOT__temp = 0;
    VL_RAND_RESET_W(50176, top__DOT__l1__DOT__activation__DOT__mem);
    top__DOT__l1__DOT__activation__DOT____Vlvbound1 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(9216, top__DOT__l1__DOT__weights__DOT__mem);
    top__DOT__l1__DOT__weights__DOT____Vlvbound1 = VL_RAND_RESET_Q(64);
    top__DOT__l1__DOT__out_memory__DOT__read_index_entry = VL_RAND_RESET_I(16);
    top__DOT__l1__DOT__out_memory__DOT__read_index_y = VL_RAND_RESET_I(16);
    top__DOT__l1__DOT__out_memory__DOT__read_index_x = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(50176, top__DOT__l1__DOT__out_memory__DOT__mem);
    top__DOT__l1__DOT__out_memory__DOT____Vlvbound1 = VL_RAND_RESET_Q(64);
    __Vm_traceActivity = 0;
}
