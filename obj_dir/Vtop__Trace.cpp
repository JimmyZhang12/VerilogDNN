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
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 2U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
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
        vcdp->chgBit(c+25,(vlTOPp->top__DOT__l1__DOT__weight_write));
    }
}

void Vtop::traceChgThis__4(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgQuad(c+33,(vlTOPp->top__DOT__l1__DOT__weights_out_data),64);
        vcdp->chgBit(c+49,(vlTOPp->top__DOT__l1__DOT__outmem_want_write));
        vcdp->chgBit(c+57,(vlTOPp->top__DOT__l1__DOT__state));
    }
}

void Vtop::traceChgThis__5(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgQuad(c+65,(((0xc3ffU >= (0xffffU & 
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
                              ? (((0U == (0x1fU & (
                                                   (((IData)(0xc400U) 
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
                                                + (0x7ffU 
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
        vcdp->chgQuad(c+81,(((0xc3ffU >= (0xffffU & 
                                          ((((IData)(0xc400U) 
                                             * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_entry)) 
                                            + (0xffffU 
                                               & ((IData)(0x700U) 
                                                  * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_y)))) 
                                           + (0x7ffU 
                                              & ((IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_x) 
                                                 << 6U)))))
                              ? (((0U == (0x1fU & (
                                                   (((IData)(0xc400U) 
                                                     * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_entry)) 
                                                    + 
                                                    (0xffffU 
                                                     & ((IData)(0x700U) 
                                                        * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_y)))) 
                                                   + 
                                                   (0x7ffU 
                                                    & ((IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_x) 
                                                       << 6U)))))
                                   ? VL_ULL(0) : ((QData)((IData)(
                                                                  vlTOPp->top__DOT__l1__DOT__out_memory__DOT__mem[
                                                                  ((IData)(2U) 
                                                                   + 
                                                                   (0x7ffU 
                                                                    & (((((IData)(0xc400U) 
                                                                          * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_entry)) 
                                                                         + 
                                                                         (0xffffU 
                                                                          & ((IData)(0x700U) 
                                                                             * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_y)))) 
                                                                        + 
                                                                        (0x7ffU 
                                                                         & ((IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_x) 
                                                                            << 6U))) 
                                                                       >> 5U)))])) 
                                                  << 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((((IData)(0xc400U) 
                                                         * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_entry)) 
                                                        + 
                                                        (0xffffU 
                                                         & ((IData)(0x700U) 
                                                            * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_y)))) 
                                                       + 
                                                       (0x7ffU 
                                                        & ((IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_x) 
                                                           << 6U))))))) 
                                 | (((QData)((IData)(
                                                     vlTOPp->top__DOT__l1__DOT__out_memory__DOT__mem[
                                                     ((IData)(1U) 
                                                      + 
                                                      (0x7ffU 
                                                       & (((((IData)(0xc400U) 
                                                             * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_entry)) 
                                                            + 
                                                            (0xffffU 
                                                             & ((IData)(0x700U) 
                                                                * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_y)))) 
                                                           + 
                                                           (0x7ffU 
                                                            & ((IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_x) 
                                                               << 6U))) 
                                                          >> 5U)))])) 
                                     << ((0U == (0x1fU 
                                                 & ((((IData)(0xc400U) 
                                                      * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_entry)) 
                                                     + 
                                                     (0xffffU 
                                                      & ((IData)(0x700U) 
                                                         * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_y)))) 
                                                    + 
                                                    (0x7ffU 
                                                     & ((IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_x) 
                                                        << 6U)))))
                                          ? 0x20U : 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((((IData)(0xc400U) 
                                                  * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_entry)) 
                                                 + 
                                                 (0xffffU 
                                                  & ((IData)(0x700U) 
                                                     * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_y)))) 
                                                + (0x7ffU 
                                                   & ((IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_x) 
                                                      << 6U))))))) 
                                    | ((QData)((IData)(
                                                       vlTOPp->top__DOT__l1__DOT__out_memory__DOT__mem[
                                                       (0x7ffU 
                                                        & (((((IData)(0xc400U) 
                                                              * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_entry)) 
                                                             + 
                                                             (0xffffU 
                                                              & ((IData)(0x700U) 
                                                                 * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_y)))) 
                                                            + 
                                                            (0x7ffU 
                                                             & ((IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_x) 
                                                                << 6U))) 
                                                           >> 5U))])) 
                                       >> (0x1fU & 
                                           ((((IData)(0xc400U) 
                                              * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_entry)) 
                                             + (0xffffU 
                                                & ((IData)(0x700U) 
                                                   * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_y)))) 
                                            + (0x7ffU 
                                               & ((IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_x) 
                                                  << 6U)))))))
                              : VL_ULL(0))),64);
        vcdp->chgQuad(c+97,(vlTOPp->top__DOT__l1__DOT__outmem_write_data),64);
        vcdp->chgBus(c+113,(vlTOPp->top__DOT__l1__DOT__weight_read_index[0]),16);
        vcdp->chgBus(c+114,(vlTOPp->top__DOT__l1__DOT__weight_read_index[1]),16);
        vcdp->chgBus(c+115,(vlTOPp->top__DOT__l1__DOT__weight_read_index[2]),16);
        vcdp->chgBus(c+116,(vlTOPp->top__DOT__l1__DOT__weight_read_index[3]),16);
        vcdp->chgBus(c+145,(vlTOPp->top__DOT__l1__DOT__act_read_index[0]),16);
        vcdp->chgBus(c+146,(vlTOPp->top__DOT__l1__DOT__act_read_index[1]),16);
        vcdp->chgBus(c+147,(vlTOPp->top__DOT__l1__DOT__act_read_index[2]),16);
        vcdp->chgBus(c+169,(vlTOPp->top__DOT__l1__DOT__outmem_index[0]),16);
        vcdp->chgBus(c+170,(vlTOPp->top__DOT__l1__DOT__outmem_index[1]),16);
        vcdp->chgBus(c+171,(vlTOPp->top__DOT__l1__DOT__outmem_index[2]),16);
        vcdp->chgBus(c+193,(vlTOPp->top__DOT__l1__DOT__act_read_index
                            [2U]),16);
        vcdp->chgBus(c+201,(vlTOPp->top__DOT__l1__DOT__act_read_index
                            [1U]),16);
        vcdp->chgBus(c+209,(vlTOPp->top__DOT__l1__DOT__act_read_index
                            [0U]),16);
        vcdp->chgArray(c+217,(vlTOPp->top__DOT__l1__DOT__activation__DOT__mem),50176);
        vcdp->chgBit(c+12761,((1U & vlTOPp->top__DOT__l1__DOT__weight_read_index
                               [3U])));
        vcdp->chgBit(c+12769,((1U & vlTOPp->top__DOT__l1__DOT__weight_read_index
                               [2U])));
        vcdp->chgBit(c+12777,((1U & vlTOPp->top__DOT__l1__DOT__weight_read_index
                               [1U])));
        vcdp->chgBit(c+12785,((1U & vlTOPp->top__DOT__l1__DOT__weight_read_index
                               [0U])));
        vcdp->chgArray(c+12793,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem),9216);
        vcdp->chgBus(c+15097,(vlTOPp->top__DOT__l1__DOT__outmem_index
                              [2U]),16);
        vcdp->chgBus(c+15105,(vlTOPp->top__DOT__l1__DOT__outmem_index
                              [1U]),16);
        vcdp->chgBus(c+15113,(vlTOPp->top__DOT__l1__DOT__outmem_index
                              [0U]),16);
        vcdp->chgArray(c+15121,(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__mem),50176);
    }
}

void Vtop::traceChgThis__6(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+27665,(vlTOPp->clk));
        vcdp->chgQuad(c+27673,(vlTOPp->input_data),64);
        vcdp->chgBit(c+27689,(vlTOPp->input_index[0]));
        vcdp->chgBit(c+27690,(vlTOPp->input_index[1]));
        vcdp->chgBit(c+27691,(vlTOPp->input_index[2]));
        vcdp->chgBit(c+27692,(vlTOPp->input_index[3]));
        vcdp->chgBit(c+27721,(vlTOPp->input_write_act));
        vcdp->chgBit(c+27729,(vlTOPp->input_write_weights));
        vcdp->chgBit(c+27737,(vlTOPp->compute));
        vcdp->chgBit(c+27745,(vlTOPp->input_index[3U]));
        vcdp->chgBit(c+27753,(vlTOPp->input_index[2U]));
        vcdp->chgBit(c+27761,(vlTOPp->input_index[1U]));
        vcdp->chgBit(c+27769,(vlTOPp->input_index[0U]));
        vcdp->chgBus(c+27777,(vlTOPp->input_index[2U]),16);
        vcdp->chgBus(c+27785,(vlTOPp->input_index[1U]),16);
        vcdp->chgBus(c+27793,(vlTOPp->input_index[0U]),16);
    }
}
