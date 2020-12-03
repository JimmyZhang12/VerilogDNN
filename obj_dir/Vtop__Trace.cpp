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
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
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
        vcdp->chgArray(c+25,(vlTOPp->top__DOT__l1__DOT__activation__DOT__mem),50176);
        vcdp->chgArray(c+12569,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem),9216);
    }
}

void Vtop::traceChgThis__4(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+14873,(vlTOPp->clk));
        vcdp->chgQuad(c+14881,(vlTOPp->input_data),64);
        vcdp->chgBit(c+14897,(vlTOPp->input_index3));
        vcdp->chgBit(c+14905,(vlTOPp->input_index2));
        vcdp->chgBit(c+14913,(vlTOPp->input_index1));
        vcdp->chgBit(c+14921,(vlTOPp->input_index0));
        vcdp->chgBit(c+14929,(vlTOPp->input_write_act));
        vcdp->chgBit(c+14937,(vlTOPp->input_write_weights));
        vcdp->chgQuad(c+14945,(((0xc3ffU >= (0xffffU 
                                             & ((((IData)(0xc400U) 
                                                  * (IData)(vlTOPp->input_index2)) 
                                                 + 
                                                 (0xffffU 
                                                  & ((IData)(0x700U) 
                                                     * (IData)(vlTOPp->input_index1)))) 
                                                + (0x7ffU 
                                                   & ((IData)(vlTOPp->input_index0) 
                                                      << 6U)))))
                                 ? (((0U == (0x1fU 
                                             & ((((IData)(0xc400U) 
                                                  * (IData)(vlTOPp->input_index2)) 
                                                 + 
                                                 (0xffffU 
                                                  & ((IData)(0x700U) 
                                                     * (IData)(vlTOPp->input_index1)))) 
                                                + (0x7ffU 
                                                   & ((IData)(vlTOPp->input_index0) 
                                                      << 6U)))))
                                      ? VL_ULL(0) : 
                                     ((QData)((IData)(
                                                      vlTOPp->top__DOT__l1__DOT__activation__DOT__mem[
                                                      ((IData)(2U) 
                                                       + 
                                                       (0x7ffU 
                                                        & (((((IData)(0xc400U) 
                                                              * (IData)(vlTOPp->input_index2)) 
                                                             + 
                                                             (0xffffU 
                                                              & ((IData)(0x700U) 
                                                                 * (IData)(vlTOPp->input_index1)))) 
                                                            + 
                                                            (0x7ffU 
                                                             & ((IData)(vlTOPp->input_index0) 
                                                                << 6U))) 
                                                           >> 5U)))])) 
                                      << ((IData)(0x40U) 
                                          - (0x1fU 
                                             & ((((IData)(0xc400U) 
                                                  * (IData)(vlTOPp->input_index2)) 
                                                 + 
                                                 (0xffffU 
                                                  & ((IData)(0x700U) 
                                                     * (IData)(vlTOPp->input_index1)))) 
                                                + (0x7ffU 
                                                   & ((IData)(vlTOPp->input_index0) 
                                                      << 6U))))))) 
                                    | (((QData)((IData)(
                                                        vlTOPp->top__DOT__l1__DOT__activation__DOT__mem[
                                                        ((IData)(1U) 
                                                         + 
                                                         (0x7ffU 
                                                          & (((((IData)(0xc400U) 
                                                                * (IData)(vlTOPp->input_index2)) 
                                                               + 
                                                               (0xffffU 
                                                                & ((IData)(0x700U) 
                                                                   * (IData)(vlTOPp->input_index1)))) 
                                                              + 
                                                              (0x7ffU 
                                                               & ((IData)(vlTOPp->input_index0) 
                                                                  << 6U))) 
                                                             >> 5U)))])) 
                                        << ((0U == 
                                             (0x1fU 
                                              & ((((IData)(0xc400U) 
                                                   * (IData)(vlTOPp->input_index2)) 
                                                  + 
                                                  (0xffffU 
                                                   & ((IData)(0x700U) 
                                                      * (IData)(vlTOPp->input_index1)))) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(vlTOPp->input_index0) 
                                                     << 6U)))))
                                             ? 0x20U
                                             : ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((((IData)(0xc400U) 
                                                        * (IData)(vlTOPp->input_index2)) 
                                                       + 
                                                       (0xffffU 
                                                        & ((IData)(0x700U) 
                                                           * (IData)(vlTOPp->input_index1)))) 
                                                      + 
                                                      (0x7ffU 
                                                       & ((IData)(vlTOPp->input_index0) 
                                                          << 6U))))))) 
                                       | ((QData)((IData)(
                                                          vlTOPp->top__DOT__l1__DOT__activation__DOT__mem[
                                                          (0x7ffU 
                                                           & (((((IData)(0xc400U) 
                                                                 * (IData)(vlTOPp->input_index2)) 
                                                                + 
                                                                (0xffffU 
                                                                 & ((IData)(0x700U) 
                                                                    * (IData)(vlTOPp->input_index1)))) 
                                                               + 
                                                               (0x7ffU 
                                                                & ((IData)(vlTOPp->input_index0) 
                                                                   << 6U))) 
                                                              >> 5U))])) 
                                          >> (0x1fU 
                                              & ((((IData)(0xc400U) 
                                                   * (IData)(vlTOPp->input_index2)) 
                                                  + 
                                                  (0xffffU 
                                                   & ((IData)(0x700U) 
                                                      * (IData)(vlTOPp->input_index1)))) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(vlTOPp->input_index0) 
                                                     << 6U)))))))
                                 : VL_ULL(0))),64);
        vcdp->chgQuad(c+14961,(((0x23ffU >= (0x3fffU 
                                             & (((((IData)(0x2400U) 
                                                   * (IData)(vlTOPp->input_index3)) 
                                                  + 
                                                  (0x3fffU 
                                                   & ((IData)(0x240U) 
                                                      * (IData)(vlTOPp->input_index2)))) 
                                                 + 
                                                 (0x3ffU 
                                                  & ((IData)(0xc0U) 
                                                     * (IData)(vlTOPp->input_index1)))) 
                                                + (0xffU 
                                                   & ((IData)(vlTOPp->input_index0) 
                                                      << 6U)))))
                                 ? (((0U == (0x1fU 
                                             & (((((IData)(0x2400U) 
                                                   * (IData)(vlTOPp->input_index3)) 
                                                  + 
                                                  (0x3fffU 
                                                   & ((IData)(0x240U) 
                                                      * (IData)(vlTOPp->input_index2)))) 
                                                 + 
                                                 (0x3ffU 
                                                  & ((IData)(0xc0U) 
                                                     * (IData)(vlTOPp->input_index1)))) 
                                                + (0xffU 
                                                   & ((IData)(vlTOPp->input_index0) 
                                                      << 6U)))))
                                      ? VL_ULL(0) : 
                                     ((QData)((IData)(
                                                      vlTOPp->top__DOT__l1__DOT__weights__DOT__mem[
                                                      ((IData)(2U) 
                                                       + 
                                                       (0x1ffU 
                                                        & ((((((IData)(0x2400U) 
                                                               * (IData)(vlTOPp->input_index3)) 
                                                              + 
                                                              (0x3fffU 
                                                               & ((IData)(0x240U) 
                                                                  * (IData)(vlTOPp->input_index2)))) 
                                                             + 
                                                             (0x3ffU 
                                                              & ((IData)(0xc0U) 
                                                                 * (IData)(vlTOPp->input_index1)))) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->input_index0) 
                                                                << 6U))) 
                                                           >> 5U)))])) 
                                      << ((IData)(0x40U) 
                                          - (0x1fU 
                                             & (((((IData)(0x2400U) 
                                                   * (IData)(vlTOPp->input_index3)) 
                                                  + 
                                                  (0x3fffU 
                                                   & ((IData)(0x240U) 
                                                      * (IData)(vlTOPp->input_index2)))) 
                                                 + 
                                                 (0x3ffU 
                                                  & ((IData)(0xc0U) 
                                                     * (IData)(vlTOPp->input_index1)))) 
                                                + (0xffU 
                                                   & ((IData)(vlTOPp->input_index0) 
                                                      << 6U))))))) 
                                    | (((QData)((IData)(
                                                        vlTOPp->top__DOT__l1__DOT__weights__DOT__mem[
                                                        ((IData)(1U) 
                                                         + 
                                                         (0x1ffU 
                                                          & ((((((IData)(0x2400U) 
                                                                 * (IData)(vlTOPp->input_index3)) 
                                                                + 
                                                                (0x3fffU 
                                                                 & ((IData)(0x240U) 
                                                                    * (IData)(vlTOPp->input_index2)))) 
                                                               + 
                                                               (0x3ffU 
                                                                & ((IData)(0xc0U) 
                                                                   * (IData)(vlTOPp->input_index1)))) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(vlTOPp->input_index0) 
                                                                  << 6U))) 
                                                             >> 5U)))])) 
                                        << ((0U == 
                                             (0x1fU 
                                              & (((((IData)(0x2400U) 
                                                    * (IData)(vlTOPp->input_index3)) 
                                                   + 
                                                   (0x3fffU 
                                                    & ((IData)(0x240U) 
                                                       * (IData)(vlTOPp->input_index2)))) 
                                                  + 
                                                  (0x3ffU 
                                                   & ((IData)(0xc0U) 
                                                      * (IData)(vlTOPp->input_index1)))) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(vlTOPp->input_index0) 
                                                     << 6U)))))
                                             ? 0x20U
                                             : ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & (((((IData)(0x2400U) 
                                                         * (IData)(vlTOPp->input_index3)) 
                                                        + 
                                                        (0x3fffU 
                                                         & ((IData)(0x240U) 
                                                            * (IData)(vlTOPp->input_index2)))) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xc0U) 
                                                           * (IData)(vlTOPp->input_index1)))) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(vlTOPp->input_index0) 
                                                          << 6U))))))) 
                                       | ((QData)((IData)(
                                                          vlTOPp->top__DOT__l1__DOT__weights__DOT__mem[
                                                          (0x1ffU 
                                                           & ((((((IData)(0x2400U) 
                                                                  * (IData)(vlTOPp->input_index3)) 
                                                                 + 
                                                                 (0x3fffU 
                                                                  & ((IData)(0x240U) 
                                                                     * (IData)(vlTOPp->input_index2)))) 
                                                                + 
                                                                (0x3ffU 
                                                                 & ((IData)(0xc0U) 
                                                                    * (IData)(vlTOPp->input_index1)))) 
                                                               + 
                                                               (0xffU 
                                                                & ((IData)(vlTOPp->input_index0) 
                                                                   << 6U))) 
                                                              >> 5U))])) 
                                          >> (0x1fU 
                                              & (((((IData)(0x2400U) 
                                                    * (IData)(vlTOPp->input_index3)) 
                                                   + 
                                                   (0x3fffU 
                                                    & ((IData)(0x240U) 
                                                       * (IData)(vlTOPp->input_index2)))) 
                                                  + 
                                                  (0x3ffU 
                                                   & ((IData)(0xc0U) 
                                                      * (IData)(vlTOPp->input_index1)))) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(vlTOPp->input_index0) 
                                                     << 6U)))))))
                                 : VL_ULL(0))),64);
    }
}
