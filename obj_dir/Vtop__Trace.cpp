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
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 2U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
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
        vcdp->chgBus(c+1,(vlTOPp->top__DOT__L1_to_L2_out_index[0]),16);
        vcdp->chgBus(c+2,(vlTOPp->top__DOT__L1_to_L2_out_index[1]),16);
        vcdp->chgBus(c+3,(vlTOPp->top__DOT__L1_to_L2_out_index[2]),16);
    }
}

void Vtop::traceChgThis__3(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+25,(vlTOPp->top__DOT____Vcellinp__l1__in_index_act[0]),16);
        vcdp->chgBus(c+26,(vlTOPp->top__DOT____Vcellinp__l1__in_index_act[1]),16);
        vcdp->chgBus(c+27,(vlTOPp->top__DOT____Vcellinp__l1__in_index_act[2]),16);
        vcdp->chgBus(c+49,(vlTOPp->top__DOT__l1__DOT____Vcellinp__activation__in_index[0]),16);
        vcdp->chgBus(c+50,(vlTOPp->top__DOT__l1__DOT____Vcellinp__activation__in_index[1]),16);
        vcdp->chgBus(c+51,(vlTOPp->top__DOT__l1__DOT____Vcellinp__activation__in_index[2]),16);
    }
}

void Vtop::traceChgThis__4(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgQuad(c+73,(((0xc3ffU >= (0xffffU & 
                                          ((((IData)(0xc400U) 
                                             * vlTOPp->top__DOT__l1__DOT____Vcellinp__activation__in_index
                                             [2U]) 
                                            + (0xffffU 
                                               & ((IData)(0x700U) 
                                                  * 
                                                  vlTOPp->top__DOT__l1__DOT____Vcellinp__activation__in_index
                                                  [1U]))) 
                                           + (0x7ffU 
                                              & (vlTOPp->top__DOT__l1__DOT____Vcellinp__activation__in_index
                                                 [0U] 
                                                 << 6U)))))
                              ? (((0U == (0x1fU & (
                                                   (((IData)(0xc400U) 
                                                     * 
                                                     vlTOPp->top__DOT__l1__DOT____Vcellinp__activation__in_index
                                                     [2U]) 
                                                    + 
                                                    (0xffffU 
                                                     & ((IData)(0x700U) 
                                                        * 
                                                        vlTOPp->top__DOT__l1__DOT____Vcellinp__activation__in_index
                                                        [1U]))) 
                                                   + 
                                                   (0x7ffU 
                                                    & (vlTOPp->top__DOT__l1__DOT____Vcellinp__activation__in_index
                                                       [0U] 
                                                       << 6U)))))
                                   ? VL_ULL(0) : ((QData)((IData)(
                                                                  vlTOPp->top__DOT__l1__DOT__activation__DOT__mem[
                                                                  ((IData)(2U) 
                                                                   + 
                                                                   (0x7ffU 
                                                                    & (((((IData)(0xc400U) 
                                                                          * 
                                                                          vlTOPp->top__DOT__l1__DOT____Vcellinp__activation__in_index
                                                                          [2U]) 
                                                                         + 
                                                                         (0xffffU 
                                                                          & ((IData)(0x700U) 
                                                                             * 
                                                                             vlTOPp->top__DOT__l1__DOT____Vcellinp__activation__in_index
                                                                             [1U]))) 
                                                                        + 
                                                                        (0x7ffU 
                                                                         & (vlTOPp->top__DOT__l1__DOT____Vcellinp__activation__in_index
                                                                            [0U] 
                                                                            << 6U))) 
                                                                       >> 5U)))])) 
                                                  << 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((((IData)(0xc400U) 
                                                         * 
                                                         vlTOPp->top__DOT__l1__DOT____Vcellinp__activation__in_index
                                                         [2U]) 
                                                        + 
                                                        (0xffffU 
                                                         & ((IData)(0x700U) 
                                                            * 
                                                            vlTOPp->top__DOT__l1__DOT____Vcellinp__activation__in_index
                                                            [1U]))) 
                                                       + 
                                                       (0x7ffU 
                                                        & (vlTOPp->top__DOT__l1__DOT____Vcellinp__activation__in_index
                                                           [0U] 
                                                           << 6U))))))) 
                                 | (((QData)((IData)(
                                                     vlTOPp->top__DOT__l1__DOT__activation__DOT__mem[
                                                     ((IData)(1U) 
                                                      + 
                                                      (0x7ffU 
                                                       & (((((IData)(0xc400U) 
                                                             * 
                                                             vlTOPp->top__DOT__l1__DOT____Vcellinp__activation__in_index
                                                             [2U]) 
                                                            + 
                                                            (0xffffU 
                                                             & ((IData)(0x700U) 
                                                                * 
                                                                vlTOPp->top__DOT__l1__DOT____Vcellinp__activation__in_index
                                                                [1U]))) 
                                                           + 
                                                           (0x7ffU 
                                                            & (vlTOPp->top__DOT__l1__DOT____Vcellinp__activation__in_index
                                                               [0U] 
                                                               << 6U))) 
                                                          >> 5U)))])) 
                                     << ((0U == (0x1fU 
                                                 & ((((IData)(0xc400U) 
                                                      * 
                                                      vlTOPp->top__DOT__l1__DOT____Vcellinp__activation__in_index
                                                      [2U]) 
                                                     + 
                                                     (0xffffU 
                                                      & ((IData)(0x700U) 
                                                         * 
                                                         vlTOPp->top__DOT__l1__DOT____Vcellinp__activation__in_index
                                                         [1U]))) 
                                                    + 
                                                    (0x7ffU 
                                                     & (vlTOPp->top__DOT__l1__DOT____Vcellinp__activation__in_index
                                                        [0U] 
                                                        << 6U)))))
                                          ? 0x20U : 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((((IData)(0xc400U) 
                                                  * 
                                                  vlTOPp->top__DOT__l1__DOT____Vcellinp__activation__in_index
                                                  [2U]) 
                                                 + 
                                                 (0xffffU 
                                                  & ((IData)(0x700U) 
                                                     * 
                                                     vlTOPp->top__DOT__l1__DOT____Vcellinp__activation__in_index
                                                     [1U]))) 
                                                + (0x7ffU 
                                                   & (vlTOPp->top__DOT__l1__DOT____Vcellinp__activation__in_index
                                                      [0U] 
                                                      << 6U))))))) 
                                    | ((QData)((IData)(
                                                       vlTOPp->top__DOT__l1__DOT__activation__DOT__mem[
                                                       (0x7ffU 
                                                        & (((((IData)(0xc400U) 
                                                              * 
                                                              vlTOPp->top__DOT__l1__DOT____Vcellinp__activation__in_index
                                                              [2U]) 
                                                             + 
                                                             (0xffffU 
                                                              & ((IData)(0x700U) 
                                                                 * 
                                                                 vlTOPp->top__DOT__l1__DOT____Vcellinp__activation__in_index
                                                                 [1U]))) 
                                                            + 
                                                            (0x7ffU 
                                                             & (vlTOPp->top__DOT__l1__DOT____Vcellinp__activation__in_index
                                                                [0U] 
                                                                << 6U))) 
                                                           >> 5U))])) 
                                       >> (0x1fU & 
                                           ((((IData)(0xc400U) 
                                              * vlTOPp->top__DOT__l1__DOT____Vcellinp__activation__in_index
                                              [2U]) 
                                             + (0xffffU 
                                                & ((IData)(0x700U) 
                                                   * 
                                                   vlTOPp->top__DOT__l1__DOT____Vcellinp__activation__in_index
                                                   [1U]))) 
                                            + (0x7ffU 
                                               & (vlTOPp->top__DOT__l1__DOT____Vcellinp__activation__in_index
                                                  [0U] 
                                                  << 6U)))))))
                              : VL_ULL(0))),64);
    }
}

void Vtop::traceChgThis__5(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgArray(c+89,(vlTOPp->top__DOT__l1__DOT__activation__DOT__mem),50176);
    }
}

void Vtop::traceChgThis__6(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgQuad(c+12633,(vlTOPp->input_data),64);
        vcdp->chgBus(c+12649,(vlTOPp->input_index[0]),16);
        vcdp->chgBus(c+12650,(vlTOPp->input_index[1]),16);
        vcdp->chgBus(c+12651,(vlTOPp->input_index[2]),16);
        vcdp->chgBit(c+12673,(vlTOPp->write));
        vcdp->chgBit(c+12681,(vlTOPp->clk));
    }
}
