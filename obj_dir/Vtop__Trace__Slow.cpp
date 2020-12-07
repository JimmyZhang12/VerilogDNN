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
        vcdp->declBit(c+27665,"clk", false,-1);
        vcdp->declQuad(c+27673,"input_data", false,-1, 63,0);
        {int i; for (i=0; i<4; i++) {
                vcdp->declBit(c+27689+i*1,"input_index", true,(i+0));}}
        vcdp->declBit(c+27721,"input_write_act", false,-1);
        vcdp->declBit(c+27729,"input_write_weights", false,-1);
        vcdp->declBit(c+27737,"compute", false,-1);
        vcdp->declBit(c+27665,"top clk", false,-1);
        vcdp->declQuad(c+27673,"top input_data", false,-1, 63,0);
        {int i; for (i=0; i<4; i++) {
                vcdp->declBit(c+27689+i*1,"top input_index", true,(i+0));}}
        vcdp->declBit(c+27721,"top input_write_act", false,-1);
        vcdp->declBit(c+27729,"top input_write_weights", false,-1);
        vcdp->declBit(c+27737,"top compute", false,-1);
        vcdp->declBus(c+27801,"top DATA_SIZE", false,-1, 31,0);
        vcdp->declQuad(c+27809,"top out_data", false,-1, 63,0);
        vcdp->declBit(c+27825,"top output_valid", false,-1);
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+1+i*1,"top L1_to_L2_out_index", true,(i+0), 15,0);}}
        vcdp->declBit(c+27665,"top l1 clk", false,-1);
        vcdp->declQuad(c+27809,"top l1 out_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+27833+i*1,"top l1 out_index", true,(i+0), 15,0);}}
        vcdp->declBit(c+27825,"top l1 output_valid", false,-1);
        vcdp->declBit(c+27721,"top l1 want_write_act", false,-1);
        vcdp->declBit(c+27729,"top l1 want_write_weights", false,-1);
        vcdp->declQuad(c+27673,"top l1 write_data", false,-1, 63,0);
        vcdp->declBit(c+27745,"top l1 in_index3", false,-1);
        vcdp->declBit(c+27753,"top l1 in_index2", false,-1);
        vcdp->declBit(c+27761,"top l1 in_index1", false,-1);
        vcdp->declBit(c+27769,"top l1 in_index0", false,-1);
        vcdp->declBit(c+27737,"top l1 compute", false,-1);
        vcdp->declArray(c+27857,"top l1 NAME", false,-1, 87,0);
        vcdp->declBus(c+27881,"top l1 NUM_INPUTS", false,-1, 31,0);
        vcdp->declBus(c+27889,"top l1 INPUT_DIM", false,-1, 31,0);
        vcdp->declBus(c+27897,"top l1 NUM_OUTPUTS", false,-1, 31,0);
        vcdp->declBus(c+27905,"top l1 KERNEL_DIM", false,-1, 31,0);
        vcdp->declBus(c+27801,"top l1 DATA_SIZE", false,-1, 31,0);
        vcdp->declBus(c+27913,"top l1 OUTPUT_DIM", false,-1, 31,0);
        vcdp->declBit(c+25,"top l1 weight_write", false,-1);
        vcdp->declQuad(c+65,"top l1 act_out_data", false,-1, 63,0);
        vcdp->declQuad(c+33,"top l1 weights_out_data", false,-1, 63,0);
        vcdp->declQuad(c+81,"top l1 outmem_out_data", false,-1, 63,0);
        vcdp->declQuad(c+97,"top l1 outmem_write_data", false,-1, 63,0);
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+113+i*1,"top l1 weight_read_index", true,(i+0), 15,0);}}
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+145+i*1,"top l1 act_read_index", true,(i+0), 15,0);}}
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+169+i*1,"top l1 outmem_index", true,(i+0), 15,0);}}
        vcdp->declBit(c+49,"top l1 outmem_want_write", false,-1);
        vcdp->declBit(c+57,"top l1 state", false,-1);
        vcdp->declDouble(c+27921,"top l1 temp", false,-1);
        vcdp->declBit(c+27665,"top l1 activation clk", false,-1);
        vcdp->declQuad(c+65,"top l1 activation out_data", false,-1, 63,0);
        vcdp->declBit(c+27721,"top l1 activation write", false,-1);
        vcdp->declBus(c+27777,"top l1 activation index_entry", false,-1, 15,0);
        vcdp->declBus(c+27785,"top l1 activation index_y", false,-1, 15,0);
        vcdp->declBus(c+27793,"top l1 activation index_x", false,-1, 15,0);
        vcdp->declQuad(c+27673,"top l1 activation in_data", false,-1, 63,0);
        vcdp->declBus(c+193,"top l1 activation read_index_entry", false,-1, 15,0);
        vcdp->declBus(c+201,"top l1 activation read_index_y", false,-1, 15,0);
        vcdp->declBus(c+209,"top l1 activation read_index_x", false,-1, 15,0);
        vcdp->declArray(c+27937,"top l1 activation NAME", false,-1, 151,0);
        vcdp->declBus(c+27881,"top l1 activation ENTRY_NUM", false,-1, 31,0);
        vcdp->declBus(c+27889,"top l1 activation DIM", false,-1, 31,0);
        vcdp->declBus(c+27801,"top l1 activation DATA_SIZE", false,-1, 31,0);
        vcdp->declArray(c+217,"top l1 activation mem", false,-1, 50175,0);
        vcdp->declBit(c+27665,"top l1 weights clk", false,-1);
        vcdp->declQuad(c+33,"top l1 weights out_data", false,-1, 63,0);
        vcdp->declBit(c+25,"top l1 weights write", false,-1);
        vcdp->declBit(c+27745,"top l1 weights index_in", false,-1);
        vcdp->declBit(c+27753,"top l1 weights index_out", false,-1);
        vcdp->declBit(c+27761,"top l1 weights index_k_y", false,-1);
        vcdp->declBit(c+27769,"top l1 weights index_k_x", false,-1);
        vcdp->declBit(c+12761,"top l1 weights read_index_in", false,-1);
        vcdp->declBit(c+12769,"top l1 weights read_index_out", false,-1);
        vcdp->declBit(c+12777,"top l1 weights read_index_y", false,-1);
        vcdp->declBit(c+12785,"top l1 weights read_index_x", false,-1);
        vcdp->declQuad(c+27673,"top l1 weights in_data", false,-1, 63,0);
        vcdp->declArray(c+27977,"top l1 weights NAME", false,-1, 175,0);
        vcdp->declBus(c+27881,"top l1 weights NUM_INPUTS", false,-1, 31,0);
        vcdp->declBus(c+27897,"top l1 weights NUM_OUTPUTS", false,-1, 31,0);
        vcdp->declBus(c+27905,"top l1 weights DIM", false,-1, 31,0);
        vcdp->declBus(c+27801,"top l1 weights DATA_SIZE", false,-1, 31,0);
        vcdp->declArray(c+12793,"top l1 weights mem", false,-1, 9215,0);
        vcdp->declBit(c+27665,"top l1 out_memory clk", false,-1);
        vcdp->declQuad(c+81,"top l1 out_memory out_data", false,-1, 63,0);
        vcdp->declBit(c+49,"top l1 out_memory write", false,-1);
        vcdp->declBus(c+15097,"top l1 out_memory index_entry", false,-1, 15,0);
        vcdp->declBus(c+15105,"top l1 out_memory index_y", false,-1, 15,0);
        vcdp->declBus(c+15113,"top l1 out_memory index_x", false,-1, 15,0);
        vcdp->declQuad(c+97,"top l1 out_memory in_data", false,-1, 63,0);
        vcdp->declBus(c+28025,"top l1 out_memory read_index_entry", false,-1, 15,0);
        vcdp->declBus(c+28033,"top l1 out_memory read_index_y", false,-1, 15,0);
        vcdp->declBus(c+28041,"top l1 out_memory read_index_x", false,-1, 15,0);
        vcdp->declArray(c+28049,"top l1 out_memory NAME", false,-1, 151,0);
        vcdp->declBus(c+27881,"top l1 out_memory ENTRY_NUM", false,-1, 31,0);
        vcdp->declBus(c+27889,"top l1 out_memory DIM", false,-1, 31,0);
        vcdp->declBus(c+27801,"top l1 out_memory DATA_SIZE", false,-1, 31,0);
        vcdp->declArray(c+15121,"top l1 out_memory mem", false,-1, 50175,0);
    }
}

void Vtop::traceFullThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp8[3];
    WData/*159:0*/ __Vtemp9[5];
    WData/*191:0*/ __Vtemp10[6];
    WData/*159:0*/ __Vtemp11[5];
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->top__DOT__L1_to_L2_out_index[0]),16);
        vcdp->fullBus(c+2,(vlTOPp->top__DOT__L1_to_L2_out_index[1]),16);
        vcdp->fullBus(c+3,(vlTOPp->top__DOT__L1_to_L2_out_index[2]),16);
        vcdp->fullBit(c+25,(vlTOPp->top__DOT__l1__DOT__weight_write));
        vcdp->fullQuad(c+33,(vlTOPp->top__DOT__l1__DOT__weights_out_data),64);
        vcdp->fullBit(c+49,(vlTOPp->top__DOT__l1__DOT__outmem_want_write));
        vcdp->fullBit(c+57,(vlTOPp->top__DOT__l1__DOT__state));
        vcdp->fullQuad(c+65,(((0xc3ffU >= (0xffffU 
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
        vcdp->fullQuad(c+81,(((0xc3ffU >= (0xffffU 
                                           & ((((IData)(0xc400U) 
                                                * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_entry)) 
                                               + (0xffffU 
                                                  & ((IData)(0x700U) 
                                                     * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_y)))) 
                                              + (0x7ffU 
                                                 & ((IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_x) 
                                                    << 6U)))))
                               ? (((0U == (0x1fU & 
                                           ((((IData)(0xc400U) 
                                              * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_entry)) 
                                             + (0xffffU 
                                                & ((IData)(0x700U) 
                                                   * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_y)))) 
                                            + (0x7ffU 
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
                                                 + 
                                                 (0x7ffU 
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
        vcdp->fullQuad(c+97,(vlTOPp->top__DOT__l1__DOT__outmem_write_data),64);
        vcdp->fullBus(c+113,(vlTOPp->top__DOT__l1__DOT__weight_read_index[0]),16);
        vcdp->fullBus(c+114,(vlTOPp->top__DOT__l1__DOT__weight_read_index[1]),16);
        vcdp->fullBus(c+115,(vlTOPp->top__DOT__l1__DOT__weight_read_index[2]),16);
        vcdp->fullBus(c+116,(vlTOPp->top__DOT__l1__DOT__weight_read_index[3]),16);
        vcdp->fullBus(c+145,(vlTOPp->top__DOT__l1__DOT__act_read_index[0]),16);
        vcdp->fullBus(c+146,(vlTOPp->top__DOT__l1__DOT__act_read_index[1]),16);
        vcdp->fullBus(c+147,(vlTOPp->top__DOT__l1__DOT__act_read_index[2]),16);
        vcdp->fullBus(c+169,(vlTOPp->top__DOT__l1__DOT__outmem_index[0]),16);
        vcdp->fullBus(c+170,(vlTOPp->top__DOT__l1__DOT__outmem_index[1]),16);
        vcdp->fullBus(c+171,(vlTOPp->top__DOT__l1__DOT__outmem_index[2]),16);
        vcdp->fullBus(c+193,(vlTOPp->top__DOT__l1__DOT__act_read_index
                             [2U]),16);
        vcdp->fullBus(c+201,(vlTOPp->top__DOT__l1__DOT__act_read_index
                             [1U]),16);
        vcdp->fullBus(c+209,(vlTOPp->top__DOT__l1__DOT__act_read_index
                             [0U]),16);
        vcdp->fullArray(c+217,(vlTOPp->top__DOT__l1__DOT__activation__DOT__mem),50176);
        vcdp->fullBit(c+12761,((1U & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                [3U])));
        vcdp->fullBit(c+12769,((1U & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                [2U])));
        vcdp->fullBit(c+12777,((1U & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                [1U])));
        vcdp->fullBit(c+12785,((1U & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                [0U])));
        vcdp->fullArray(c+12793,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem),9216);
        vcdp->fullBus(c+15097,(vlTOPp->top__DOT__l1__DOT__outmem_index
                               [2U]),16);
        vcdp->fullBus(c+15105,(vlTOPp->top__DOT__l1__DOT__outmem_index
                               [1U]),16);
        vcdp->fullBus(c+15113,(vlTOPp->top__DOT__l1__DOT__outmem_index
                               [0U]),16);
        vcdp->fullArray(c+15121,(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__mem),50176);
        vcdp->fullBit(c+27665,(vlTOPp->clk));
        vcdp->fullQuad(c+27673,(vlTOPp->input_data),64);
        vcdp->fullBit(c+27689,(vlTOPp->input_index[0]));
        vcdp->fullBit(c+27690,(vlTOPp->input_index[1]));
        vcdp->fullBit(c+27691,(vlTOPp->input_index[2]));
        vcdp->fullBit(c+27692,(vlTOPp->input_index[3]));
        vcdp->fullBit(c+27721,(vlTOPp->input_write_act));
        vcdp->fullBit(c+27729,(vlTOPp->input_write_weights));
        vcdp->fullBit(c+27737,(vlTOPp->compute));
        vcdp->fullBit(c+27745,(vlTOPp->input_index[3U]));
        vcdp->fullBit(c+27753,(vlTOPp->input_index[2U]));
        vcdp->fullBit(c+27761,(vlTOPp->input_index[1U]));
        vcdp->fullBit(c+27769,(vlTOPp->input_index[0U]));
        vcdp->fullBus(c+27777,(vlTOPp->input_index[2U]),16);
        vcdp->fullBus(c+27785,(vlTOPp->input_index[1U]),16);
        vcdp->fullBus(c+27793,(vlTOPp->input_index[0U]),16);
        vcdp->fullBus(c+27801,(0x40U),32);
        vcdp->fullQuad(c+27809,(vlTOPp->top__DOT__out_data),64);
        vcdp->fullBit(c+27825,(vlTOPp->top__DOT__output_valid));
        vcdp->fullBus(c+27833,(vlTOPp->top__DOT____Vcellout__l1__out_index[0]),16);
        vcdp->fullBus(c+27834,(vlTOPp->top__DOT____Vcellout__l1__out_index[1]),16);
        vcdp->fullBus(c+27835,(vlTOPp->top__DOT____Vcellout__l1__out_index[2]),16);
        __Vtemp8[0U] = 0x41594552U;
        __Vtemp8[1U] = 0x5554204cU;
        __Vtemp8[2U] = 0x494e50U;
        vcdp->fullArray(c+27857,(__Vtemp8),88);
        vcdp->fullBus(c+27881,(1U),32);
        vcdp->fullBus(c+27889,(0x1cU),32);
        vcdp->fullBus(c+27897,(0x10U),32);
        vcdp->fullBus(c+27905,(3U),32);
        vcdp->fullBus(c+27913,(0x1aU),32);
        vcdp->fullDouble(c+27921,(vlTOPp->top__DOT__l1__DOT__temp));
        __Vtemp9[0U] = 0x5f4d454dU;
        __Vtemp9[1U] = 0x20414354U;
        __Vtemp9[2U] = 0x41594552U;
        __Vtemp9[3U] = 0x5554204cU;
        __Vtemp9[4U] = 0x494e50U;
        vcdp->fullArray(c+27937,(__Vtemp9),152);
        __Vtemp10[0U] = 0x5f4d454dU;
        __Vtemp10[1U] = 0x49474854U;
        __Vtemp10[2U] = 0x52205745U;
        __Vtemp10[3U] = 0x4c415945U;
        __Vtemp10[4U] = 0x50555420U;
        __Vtemp10[5U] = 0x494eU;
        vcdp->fullArray(c+27977,(__Vtemp10),176);
        vcdp->fullBus(c+28025,(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_entry),16);
        vcdp->fullBus(c+28033,(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_y),16);
        vcdp->fullBus(c+28041,(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_x),16);
        __Vtemp11[0U] = 0x5f4d454dU;
        __Vtemp11[1U] = 0x204f5554U;
        __Vtemp11[2U] = 0x41594552U;
        __Vtemp11[3U] = 0x5554204cU;
        __Vtemp11[4U] = 0x494e50U;
        vcdp->fullArray(c+28049,(__Vtemp11),152);
    }
}
