// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


//======================

void Vtop::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vtop::traceInit, &Vtop::traceFull, &Vtop::traceChg, this);
}
void Vtop::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vtop* t = (Vtop*)userthis;
    Vtop__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vtop::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtop* t = (Vtop*)userthis;
    Vtop__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vtop::traceInitThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vtop::traceFullThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vtop::traceInitThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declQuad(c+12633,"input_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+12649+i*1,"input_index", true,(i+0), 15,0);}}
        vcdp->declBit(c+12673,"write", false,-1);
        vcdp->declBit(c+12681,"clk", false,-1);
        vcdp->declQuad(c+12633,"top input_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+12649+i*1,"top input_index", true,(i+0), 15,0);}}
        vcdp->declBit(c+12673,"top write", false,-1);
        vcdp->declBit(c+12681,"top clk", false,-1);
        vcdp->declBus(c+12689,"top DATA_SIZE", false,-1, 31,0);
        vcdp->declQuad(c+12697,"top out_data", false,-1, 63,0);
        vcdp->declBit(c+12713,"top output_valid", false,-1);
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+1+i*1,"top L1_to_L2_out_index", true,(i+0), 15,0);}}
        vcdp->declBit(c+12681,"top l1 clk", false,-1);
        vcdp->declQuad(c+12697,"top l1 out_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+12721+i*1,"top l1 out_index", true,(i+0), 15,0);}}
        vcdp->declBit(c+12713,"top l1 output_valid", false,-1);
        vcdp->declBit(c+12673,"top l1 want_write", false,-1);
        vcdp->declQuad(c+12633,"top l1 write_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+25+i*1,"top l1 in_index_act", true,(i+0), 15,0);}}
        vcdp->declBus(c+12745,"top l1 NUM_INPUTS", false,-1, 31,0);
        vcdp->declBus(c+12753,"top l1 INPUT_DIM", false,-1, 31,0);
        vcdp->declBus(c+12761,"top l1 NUM_OUTPUTS", false,-1, 31,0);
        vcdp->declBus(c+12769,"top l1 KERNEL_DIM", false,-1, 31,0);
        vcdp->declBus(c+12689,"top l1 DATA_SIZE", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                vcdp->declBit(c+12777+i*1,"top l1 entry", true,(i+0));}}
        vcdp->declQuad(c+73,"top l1 ACTMEM_out_data", false,-1, 63,0);
        vcdp->declBit(c+12681,"top l1 activation clk", false,-1);
        vcdp->declQuad(c+73,"top l1 activation out_data", false,-1, 63,0);
        vcdp->declBit(c+12673,"top l1 activation write", false,-1);
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+49+i*1,"top l1 activation in_index", true,(i+0), 15,0);}}
        vcdp->declQuad(c+12633,"top l1 activation in_data", false,-1, 63,0);
        vcdp->declBus(c+12745,"top l1 activation ENTRY_NUM", false,-1, 31,0);
        vcdp->declBus(c+12753,"top l1 activation DIM", false,-1, 31,0);
        vcdp->declBus(c+12689,"top l1 activation DATA_SIZE", false,-1, 31,0);
        vcdp->declArray(c+89,"top l1 activation mem", false,-1, 50175,0);
    }
}

void Vtop::traceFullThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->top__DOT__L1_to_L2_out_index[0]),16);
        vcdp->fullBus(c+2,(vlTOPp->top__DOT__L1_to_L2_out_index[1]),16);
        vcdp->fullBus(c+3,(vlTOPp->top__DOT__L1_to_L2_out_index[2]),16);
        vcdp->fullBus(c+25,(vlTOPp->top__DOT____Vcellinp__l1__in_index_act[0]),16);
        vcdp->fullBus(c+26,(vlTOPp->top__DOT____Vcellinp__l1__in_index_act[1]),16);
        vcdp->fullBus(c+27,(vlTOPp->top__DOT____Vcellinp__l1__in_index_act[2]),16);
        vcdp->fullBus(c+49,(vlTOPp->top__DOT__l1__DOT____Vcellinp__activation__in_index[0]),16);
        vcdp->fullBus(c+50,(vlTOPp->top__DOT__l1__DOT____Vcellinp__activation__in_index[1]),16);
        vcdp->fullBus(c+51,(vlTOPp->top__DOT__l1__DOT____Vcellinp__activation__in_index[2]),16);
        vcdp->fullQuad(c+73,(((0xc3ffU >= (0xffffU 
                                           & ((((IData)(0xc400U) 
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
                               ? (((0U == (0x1fU & 
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
                                                 + 
                                                 (0x7ffU 
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
        vcdp->fullArray(c+89,(vlTOPp->top__DOT__l1__DOT__activation__DOT__mem),50176);
        vcdp->fullQuad(c+12633,(vlTOPp->input_data),64);
        vcdp->fullBus(c+12649,(vlTOPp->input_index[0]),16);
        vcdp->fullBus(c+12650,(vlTOPp->input_index[1]),16);
        vcdp->fullBus(c+12651,(vlTOPp->input_index[2]),16);
        vcdp->fullBit(c+12673,(vlTOPp->write));
        vcdp->fullBit(c+12681,(vlTOPp->clk));
        vcdp->fullBus(c+12689,(0x40U),32);
        vcdp->fullQuad(c+12697,(vlTOPp->top__DOT__out_data),64);
        vcdp->fullBit(c+12713,(vlTOPp->top__DOT__output_valid));
        vcdp->fullBus(c+12721,(vlTOPp->top__DOT____Vcellout__l1__out_index[0]),16);
        vcdp->fullBus(c+12722,(vlTOPp->top__DOT____Vcellout__l1__out_index[1]),16);
        vcdp->fullBus(c+12723,(vlTOPp->top__DOT____Vcellout__l1__out_index[2]),16);
        vcdp->fullBus(c+12745,(1U),32);
        vcdp->fullBus(c+12753,(0x1cU),32);
        vcdp->fullBus(c+12761,(0x10U),32);
        vcdp->fullBus(c+12769,(3U),32);
        vcdp->fullBit(c+12777,(vlTOPp->top__DOT__l1__DOT__entry[0]));
        vcdp->fullBit(c+12778,(vlTOPp->top__DOT__l1__DOT__entry[1]));
        vcdp->fullBit(c+12779,(vlTOPp->top__DOT__l1__DOT__entry[2]));
    }
}
