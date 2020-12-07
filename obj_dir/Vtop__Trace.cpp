// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


//======================

void Vtop::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtop* t = (Vtop*)userthis;
    Vtop__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vtop::traceChgThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vtop::traceChgThis__2(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index[0]),16);
        vcdp->chgBus(c+2,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index[1]),16);
        vcdp->chgBus(c+3,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index[2]),16);
        vcdp->chgBus(c+25,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                           [2U]),16);
        vcdp->chgBus(c+33,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                           [1U]),16);
        vcdp->chgBus(c+41,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                           [0U]),16);
    }
}

void Vtop::traceChgThis__3(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgQuad(c+49,(((0xc3ffU >= (0xffffU & 
                                          ((((IData)(0xc400U) 
                                             * vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                             [2U]) 
                                            + (0xffffU 
                                               & ((IData)(0x700U) 
                                                  * 
                                                  vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                                  [1U]))) 
                                           + (0x7ffU 
                                              & (vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                                 [0U] 
                                                 << 6U)))))
                              ? (((0U == (0x1fU & (
                                                   (((IData)(0xc400U) 
                                                     * 
                                                     vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                                     [2U]) 
                                                    + 
                                                    (0xffffU 
                                                     & ((IData)(0x700U) 
                                                        * 
                                                        vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                                        [1U]))) 
                                                   + 
                                                   (0x7ffU 
                                                    & (vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                                       [0U] 
                                                       << 6U)))))
                                   ? VL_ULL(0) : ((QData)((IData)(
                                                                  vlTOPp->top__DOT__l1__DOT__out_memory__DOT__mem[
                                                                  ((IData)(2U) 
                                                                   + 
                                                                   (0x7ffU 
                                                                    & (((((IData)(0xc400U) 
                                                                          * 
                                                                          vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                                                          [2U]) 
                                                                         + 
                                                                         (0xffffU 
                                                                          & ((IData)(0x700U) 
                                                                             * 
                                                                             vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                                                             [1U]))) 
                                                                        + 
                                                                        (0x7ffU 
                                                                         & (vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                                                            [0U] 
                                                                            << 6U))) 
                                                                       >> 5U)))])) 
                                                  << 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((((IData)(0xc400U) 
                                                         * 
                                                         vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                                         [2U]) 
                                                        + 
                                                        (0xffffU 
                                                         & ((IData)(0x700U) 
                                                            * 
                                                            vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                                            [1U]))) 
                                                       + 
                                                       (0x7ffU 
                                                        & (vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                                           [0U] 
                                                           << 6U))))))) 
                                 | (((QData)((IData)(
                                                     vlTOPp->top__DOT__l1__DOT__out_memory__DOT__mem[
                                                     ((IData)(1U) 
                                                      + 
                                                      (0x7ffU 
                                                       & (((((IData)(0xc400U) 
                                                             * 
                                                             vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                                             [2U]) 
                                                            + 
                                                            (0xffffU 
                                                             & ((IData)(0x700U) 
                                                                * 
                                                                vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                                                [1U]))) 
                                                           + 
                                                           (0x7ffU 
                                                            & (vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                                               [0U] 
                                                               << 6U))) 
                                                          >> 5U)))])) 
                                     << ((0U == (0x1fU 
                                                 & ((((IData)(0xc400U) 
                                                      * 
                                                      vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                                      [2U]) 
                                                     + 
                                                     (0xffffU 
                                                      & ((IData)(0x700U) 
                                                         * 
                                                         vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                                         [1U]))) 
                                                    + 
                                                    (0x7ffU 
                                                     & (vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                                        [0U] 
                                                        << 6U)))))
                                          ? 0x20U : 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((((IData)(0xc400U) 
                                                  * 
                                                  vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                                  [2U]) 
                                                 + 
                                                 (0xffffU 
                                                  & ((IData)(0x700U) 
                                                     * 
                                                     vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                                     [1U]))) 
                                                + (0x7ffU 
                                                   & (vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                                      [0U] 
                                                      << 6U))))))) 
                                    | ((QData)((IData)(
                                                       vlTOPp->top__DOT__l1__DOT__out_memory__DOT__mem[
                                                       (0x7ffU 
                                                        & (((((IData)(0xc400U) 
                                                              * 
                                                              vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                                              [2U]) 
                                                             + 
                                                             (0xffffU 
                                                              & ((IData)(0x700U) 
                                                                 * 
                                                                 vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                                                 [1U]))) 
                                                            + 
                                                            (0x7ffU 
                                                             & (vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                                                [0U] 
                                                                << 6U))) 
                                                           >> 5U))])) 
                                       >> (0x1fU & 
                                           ((((IData)(0xc400U) 
                                              * vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                              [2U]) 
                                             + (0xffffU 
                                                & ((IData)(0x700U) 
                                                   * 
                                                   vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                                   [1U]))) 
                                            + (0x7ffU 
                                               & (vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                                  [0U] 
                                                  << 6U)))))))
                              : VL_ULL(0))),64);
        vcdp->chgBit(c+65,(vlTOPp->top__DOT__l1__DOT__outmem_want_write));
        vcdp->chgBus(c+73,(vlTOPp->top__DOT__l1__DOT__state),16);
    }
}

void Vtop::traceChgThis__4(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+81,(vlTOPp->top__DOT__scheduler_2_input_start));
        vcdp->chgBus(c+89,(vlTOPp->top__DOT__scheduler__DOT__state),16);
    }
}

void Vtop::traceChgThis__5(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+97,(vlTOPp->top__DOT__input_2_scheduler_done));
        vcdp->chgQuad(c+105,(((0xc3ffU >= (0xffffU 
                                           & ((((IData)(0xc400U) 
                                                * vlTOPp->top__DOT__l1__DOT__act_read_index
                                                [2U]) 
                                               + (0xffffU 
                                                  & ((IData)(0x700U) 
                                                     * 
                                                     vlTOPp->top__DOT__l1__DOT__act_read_index
                                                     [1U]))) 
                                              + (0x7ffU 
                                                 & (vlTOPp->top__DOT__l1__DOT__act_read_index
                                                    [0U] 
                                                    << 6U)))))
                               ? (((0U == (0x1fU & 
                                           ((((IData)(0xc400U) 
                                              * vlTOPp->top__DOT__l1__DOT__act_read_index
                                              [2U]) 
                                             + (0xffffU 
                                                & ((IData)(0x700U) 
                                                   * 
                                                   vlTOPp->top__DOT__l1__DOT__act_read_index
                                                   [1U]))) 
                                            + (0x7ffU 
                                               & (vlTOPp->top__DOT__l1__DOT__act_read_index
                                                  [0U] 
                                                  << 6U)))))
                                    ? VL_ULL(0) : ((QData)((IData)(
                                                                   vlTOPp->top__DOT__l1__DOT__activation__DOT__mem[
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (0x7ffU 
                                                                     & (((((IData)(0xc400U) 
                                                                           * 
                                                                           vlTOPp->top__DOT__l1__DOT__act_read_index
                                                                           [2U]) 
                                                                          + 
                                                                          (0xffffU 
                                                                           & ((IData)(0x700U) 
                                                                              * 
                                                                              vlTOPp->top__DOT__l1__DOT__act_read_index
                                                                              [1U]))) 
                                                                         + 
                                                                         (0x7ffU 
                                                                          & (vlTOPp->top__DOT__l1__DOT__act_read_index
                                                                             [0U] 
                                                                             << 6U))) 
                                                                        >> 5U)))])) 
                                                   << 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((((IData)(0xc400U) 
                                                          * 
                                                          vlTOPp->top__DOT__l1__DOT__act_read_index
                                                          [2U]) 
                                                         + 
                                                         (0xffffU 
                                                          & ((IData)(0x700U) 
                                                             * 
                                                             vlTOPp->top__DOT__l1__DOT__act_read_index
                                                             [1U]))) 
                                                        + 
                                                        (0x7ffU 
                                                         & (vlTOPp->top__DOT__l1__DOT__act_read_index
                                                            [0U] 
                                                            << 6U))))))) 
                                  | (((QData)((IData)(
                                                      vlTOPp->top__DOT__l1__DOT__activation__DOT__mem[
                                                      ((IData)(1U) 
                                                       + 
                                                       (0x7ffU 
                                                        & (((((IData)(0xc400U) 
                                                              * 
                                                              vlTOPp->top__DOT__l1__DOT__act_read_index
                                                              [2U]) 
                                                             + 
                                                             (0xffffU 
                                                              & ((IData)(0x700U) 
                                                                 * 
                                                                 vlTOPp->top__DOT__l1__DOT__act_read_index
                                                                 [1U]))) 
                                                            + 
                                                            (0x7ffU 
                                                             & (vlTOPp->top__DOT__l1__DOT__act_read_index
                                                                [0U] 
                                                                << 6U))) 
                                                           >> 5U)))])) 
                                      << ((0U == (0x1fU 
                                                  & ((((IData)(0xc400U) 
                                                       * 
                                                       vlTOPp->top__DOT__l1__DOT__act_read_index
                                                       [2U]) 
                                                      + 
                                                      (0xffffU 
                                                       & ((IData)(0x700U) 
                                                          * 
                                                          vlTOPp->top__DOT__l1__DOT__act_read_index
                                                          [1U]))) 
                                                     + 
                                                     (0x7ffU 
                                                      & (vlTOPp->top__DOT__l1__DOT__act_read_index
                                                         [0U] 
                                                         << 6U)))))
                                           ? 0x20U : 
                                          ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((((IData)(0xc400U) 
                                                   * 
                                                   vlTOPp->top__DOT__l1__DOT__act_read_index
                                                   [2U]) 
                                                  + 
                                                  (0xffffU 
                                                   & ((IData)(0x700U) 
                                                      * 
                                                      vlTOPp->top__DOT__l1__DOT__act_read_index
                                                      [1U]))) 
                                                 + 
                                                 (0x7ffU 
                                                  & (vlTOPp->top__DOT__l1__DOT__act_read_index
                                                     [0U] 
                                                     << 6U))))))) 
                                     | ((QData)((IData)(
                                                        vlTOPp->top__DOT__l1__DOT__activation__DOT__mem[
                                                        (0x7ffU 
                                                         & (((((IData)(0xc400U) 
                                                               * 
                                                               vlTOPp->top__DOT__l1__DOT__act_read_index
                                                               [2U]) 
                                                              + 
                                                              (0xffffU 
                                                               & ((IData)(0x700U) 
                                                                  * 
                                                                  vlTOPp->top__DOT__l1__DOT__act_read_index
                                                                  [1U]))) 
                                                             + 
                                                             (0x7ffU 
                                                              & (vlTOPp->top__DOT__l1__DOT__act_read_index
                                                                 [0U] 
                                                                 << 6U))) 
                                                            >> 5U))])) 
                                        >> (0x1fU & 
                                            ((((IData)(0xc400U) 
                                               * vlTOPp->top__DOT__l1__DOT__act_read_index
                                               [2U]) 
                                              + (0xffffU 
                                                 & ((IData)(0x700U) 
                                                    * 
                                                    vlTOPp->top__DOT__l1__DOT__act_read_index
                                                    [1U]))) 
                                             + (0x7ffU 
                                                & (vlTOPp->top__DOT__l1__DOT__act_read_index
                                                   [0U] 
                                                   << 6U)))))))
                               : VL_ULL(0))),64);
        vcdp->chgQuad(c+121,(((0x23ffU >= (0x3fffU 
                                           & (((((IData)(0x2400U) 
                                                 * 
                                                 vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                 [3U]) 
                                                + (0x3fffU 
                                                   & ((IData)(0x240U) 
                                                      * 
                                                      vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                      [2U]))) 
                                               + (0x3ffU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                     [1U]))) 
                                              + (0xffU 
                                                 & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                    [0U] 
                                                    << 6U)))))
                               ? (((0U == (0x1fU & 
                                           (((((IData)(0x2400U) 
                                               * vlTOPp->top__DOT__l1__DOT__weight_read_index
                                               [3U]) 
                                              + (0x3fffU 
                                                 & ((IData)(0x240U) 
                                                    * 
                                                    vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                    [2U]))) 
                                             + (0x3ffU 
                                                & ((IData)(0xc0U) 
                                                   * 
                                                   vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                   [1U]))) 
                                            + (0xffU 
                                               & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                  [0U] 
                                                  << 6U)))))
                                    ? VL_ULL(0) : ((QData)((IData)(
                                                                   vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_weight[
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (0x1ffU 
                                                                     & ((((((IData)(0x2400U) 
                                                                            * 
                                                                            vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                            [3U]) 
                                                                           + 
                                                                           (0x3fffU 
                                                                            & ((IData)(0x240U) 
                                                                               * 
                                                                               vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                               [2U]))) 
                                                                          + 
                                                                          (0x3ffU 
                                                                           & ((IData)(0xc0U) 
                                                                              * 
                                                                              vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                              [1U]))) 
                                                                         + 
                                                                         (0xffU 
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
                                                           vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                           [3U]) 
                                                          + 
                                                          (0x3fffU 
                                                           & ((IData)(0x240U) 
                                                              * 
                                                              vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                              [2U]))) 
                                                         + 
                                                         (0x3ffU 
                                                          & ((IData)(0xc0U) 
                                                             * 
                                                             vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                             [1U]))) 
                                                        + 
                                                        (0xffU 
                                                         & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                            [0U] 
                                                            << 6U))))))) 
                                  | (((QData)((IData)(
                                                      vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_weight[
                                                      ((IData)(1U) 
                                                       + 
                                                       (0x1ffU 
                                                        & ((((((IData)(0x2400U) 
                                                               * 
                                                               vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                               [3U]) 
                                                              + 
                                                              (0x3fffU 
                                                               & ((IData)(0x240U) 
                                                                  * 
                                                                  vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                  [2U]))) 
                                                             + 
                                                             (0x3ffU 
                                                              & ((IData)(0xc0U) 
                                                                 * 
                                                                 vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                 [1U]))) 
                                                            + 
                                                            (0xffU 
                                                             & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                [0U] 
                                                                << 6U))) 
                                                           >> 5U)))])) 
                                      << ((0U == (0x1fU 
                                                  & (((((IData)(0x2400U) 
                                                        * 
                                                        vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                        [3U]) 
                                                       + 
                                                       (0x3fffU 
                                                        & ((IData)(0x240U) 
                                                           * 
                                                           vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                           [2U]))) 
                                                      + 
                                                      (0x3ffU 
                                                       & ((IData)(0xc0U) 
                                                          * 
                                                          vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                          [1U]))) 
                                                     + 
                                                     (0xffU 
                                                      & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                         [0U] 
                                                         << 6U)))))
                                           ? 0x20U : 
                                          ((IData)(0x20U) 
                                           - (0x1fU 
                                              & (((((IData)(0x2400U) 
                                                    * 
                                                    vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                    [3U]) 
                                                   + 
                                                   (0x3fffU 
                                                    & ((IData)(0x240U) 
                                                       * 
                                                       vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                       [2U]))) 
                                                  + 
                                                  (0x3ffU 
                                                   & ((IData)(0xc0U) 
                                                      * 
                                                      vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                      [1U]))) 
                                                 + 
                                                 (0xffU 
                                                  & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                     [0U] 
                                                     << 6U))))))) 
                                     | ((QData)((IData)(
                                                        vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_weight[
                                                        (0x1ffU 
                                                         & ((((((IData)(0x2400U) 
                                                                * 
                                                                vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                [3U]) 
                                                               + 
                                                               (0x3fffU 
                                                                & ((IData)(0x240U) 
                                                                   * 
                                                                   vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                   [2U]))) 
                                                              + 
                                                              (0x3ffU 
                                                               & ((IData)(0xc0U) 
                                                                  * 
                                                                  vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                  [1U]))) 
                                                             + 
                                                             (0xffU 
                                                              & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                 [0U] 
                                                                 << 6U))) 
                                                            >> 5U))])) 
                                        >> (0x1fU & 
                                            (((((IData)(0x2400U) 
                                                * vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                [3U]) 
                                               + (0x3fffU 
                                                  & ((IData)(0x240U) 
                                                     * 
                                                     vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                     [2U]))) 
                                              + (0x3ffU 
                                                 & ((IData)(0xc0U) 
                                                    * 
                                                    vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                    [1U]))) 
                                             + (0xffU 
                                                & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                   [0U] 
                                                   << 6U)))))))
                               : VL_ULL(0))),64);
        vcdp->chgQuad(c+137,((((0U == (0x1fU & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                [2U] 
                                                << 6U)))
                                ? VL_ULL(0) : ((QData)((IData)(
                                                               vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[
                                                               ((IData)(2U) 
                                                                + 
                                                                (0x1eU 
                                                                 & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                                    [2U] 
                                                                    << 1U)))])) 
                                               << ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                       [2U] 
                                                       << 6U))))) 
                              | (((QData)((IData)(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x1eU 
                                                    & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                       [2U] 
                                                       << 1U)))])) 
                                  << ((0U == (0x1fU 
                                              & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                 [2U] 
                                                 << 6U)))
                                       ? 0x20U : ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                      [2U] 
                                                      << 6U))))) 
                                 | ((QData)((IData)(
                                                    vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[
                                                    (0x1eU 
                                                     & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                        [2U] 
                                                        << 1U))])) 
                                    >> (0x1fU & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                 [2U] 
                                                 << 6U)))))),64);
        vcdp->chgQuad(c+153,(vlTOPp->top__DOT__l1__DOT__outmem_write_data),64);
        vcdp->chgBus(c+169,(vlTOPp->top__DOT__l1__DOT__weight_read_index[0]),16);
        vcdp->chgBus(c+170,(vlTOPp->top__DOT__l1__DOT__weight_read_index[1]),16);
        vcdp->chgBus(c+171,(vlTOPp->top__DOT__l1__DOT__weight_read_index[2]),16);
        vcdp->chgBus(c+172,(vlTOPp->top__DOT__l1__DOT__weight_read_index[3]),16);
        vcdp->chgBus(c+201,(vlTOPp->top__DOT__l1__DOT__act_read_index[0]),16);
        vcdp->chgBus(c+202,(vlTOPp->top__DOT__l1__DOT__act_read_index[1]),16);
        vcdp->chgBus(c+203,(vlTOPp->top__DOT__l1__DOT__act_read_index[2]),16);
        vcdp->chgBus(c+225,(vlTOPp->top__DOT__l1__DOT__outmem_index[0]),16);
        vcdp->chgBus(c+226,(vlTOPp->top__DOT__l1__DOT__outmem_index[1]),16);
        vcdp->chgBus(c+227,(vlTOPp->top__DOT__l1__DOT__outmem_index[2]),16);
        vcdp->chgBus(c+249,(vlTOPp->top__DOT__l1__DOT__act_read_index
                            [2U]),16);
        vcdp->chgBus(c+257,(vlTOPp->top__DOT__l1__DOT__act_read_index
                            [1U]),16);
        vcdp->chgBus(c+265,(vlTOPp->top__DOT__l1__DOT__act_read_index
                            [0U]),16);
        vcdp->chgArray(c+273,(vlTOPp->top__DOT__l1__DOT__activation__DOT__mem),50176);
        vcdp->chgBus(c+12817,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                              [3U]),16);
        vcdp->chgBus(c+12825,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                              [2U]),16);
        vcdp->chgBus(c+12833,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                              [1U]),16);
        vcdp->chgBus(c+12841,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                              [0U]),16);
        vcdp->chgArray(c+12849,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_weight),9216);
        vcdp->chgArray(c+15153,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias),1024);
        vcdp->chgBus(c+15409,(vlTOPp->top__DOT__l1__DOT__outmem_index
                              [2U]),16);
        vcdp->chgBus(c+15417,(vlTOPp->top__DOT__l1__DOT__outmem_index
                              [1U]),16);
        vcdp->chgBus(c+15425,(vlTOPp->top__DOT__l1__DOT__outmem_index
                              [0U]),16);
        vcdp->chgArray(c+15433,(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__mem),50176);
    }
}

void Vtop::traceChgThis__6(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+27977,(vlTOPp->clk));
        vcdp->chgQuad(c+27985,(vlTOPp->input_data),64);
        vcdp->chgBus(c+28001,(vlTOPp->input_index[0]),16);
        vcdp->chgBus(c+28002,(vlTOPp->input_index[1]),16);
        vcdp->chgBus(c+28003,(vlTOPp->input_index[2]),16);
        vcdp->chgBus(c+28004,(vlTOPp->input_index[3]),16);
        vcdp->chgBit(c+28033,(vlTOPp->input_write_act));
        vcdp->chgBit(c+28041,(vlTOPp->input_write_weights));
        vcdp->chgBit(c+28049,(vlTOPp->input_write_bias));
        vcdp->chgBit(c+28057,(vlTOPp->compute));
        vcdp->chgBit(c+28065,(vlTOPp->reset));
        vcdp->chgBus(c+28073,(vlTOPp->input_index[3U]),16);
        vcdp->chgBus(c+28081,(vlTOPp->input_index[2U]),16);
        vcdp->chgBus(c+28089,(vlTOPp->input_index[1U]),16);
        vcdp->chgBus(c+28097,(vlTOPp->input_index[0U]),16);
    }
}
