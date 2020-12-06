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
        vcdp->declBit(c+2449,"clk", false,-1);
        vcdp->declQuad(c+2457,"input_data", false,-1, 63,0);
        {int i; for (i=0; i<4; i++) {
                vcdp->declBit(c+2473+i*1,"input_index", true,(i+0));}}
        vcdp->declBit(c+2505,"input_write_act", false,-1);
        vcdp->declBit(c+2513,"input_write_weights", false,-1);
        vcdp->declBit(c+2521,"compute", false,-1);
        vcdp->declBit(c+2449,"top clk", false,-1);
        vcdp->declQuad(c+2457,"top input_data", false,-1, 63,0);
        {int i; for (i=0; i<4; i++) {
                vcdp->declBit(c+2473+i*1,"top input_index", true,(i+0));}}
        vcdp->declBit(c+2505,"top input_write_act", false,-1);
        vcdp->declBit(c+2513,"top input_write_weights", false,-1);
        vcdp->declBit(c+2521,"top compute", false,-1);
        vcdp->declBus(c+2585,"top DATA_SIZE", false,-1, 31,0);
        vcdp->declQuad(c+2593,"top out_data", false,-1, 63,0);
        vcdp->declBit(c+2609,"top output_valid", false,-1);
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+1+i*1,"top L1_to_L2_out_index", true,(i+0), 15,0);}}
        vcdp->declBit(c+2449,"top l1 clk", false,-1);
        vcdp->declQuad(c+2593,"top l1 out_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+2617+i*1,"top l1 out_index", true,(i+0), 15,0);}}
        vcdp->declBit(c+2609,"top l1 output_valid", false,-1);
        vcdp->declBit(c+2505,"top l1 want_write_act", false,-1);
        vcdp->declBit(c+2513,"top l1 want_write_weights", false,-1);
        vcdp->declQuad(c+2457,"top l1 write_data", false,-1, 63,0);
        vcdp->declBit(c+2529,"top l1 in_index3", false,-1);
        vcdp->declBit(c+2537,"top l1 in_index2", false,-1);
        vcdp->declBit(c+2545,"top l1 in_index1", false,-1);
        vcdp->declBit(c+2553,"top l1 in_index0", false,-1);
        vcdp->declBit(c+2521,"top l1 compute", false,-1);
        vcdp->declArray(c+2641,"top l1 NAME", false,-1, 87,0);
        vcdp->declBus(c+2665,"top l1 NUM_INPUTS", false,-1, 31,0);
        vcdp->declBus(c+2673,"top l1 INPUT_DIM", false,-1, 31,0);
        vcdp->declBus(c+2665,"top l1 NUM_OUTPUTS", false,-1, 31,0);
        vcdp->declBus(c+2681,"top l1 KERNEL_DIM", false,-1, 31,0);
        vcdp->declBus(c+2585,"top l1 DATA_SIZE", false,-1, 31,0);
        vcdp->declBus(c+2681,"top l1 OUTPUT_DIM", false,-1, 31,0);
        vcdp->declBit(c+25,"top l1 weight_write", false,-1);
        vcdp->declQuad(c+33,"top l1 act_out_data", false,-1, 63,0);
        vcdp->declQuad(c+49,"top l1 weights_out_data", false,-1, 63,0);
        vcdp->declQuad(c+81,"top l1 outmem_out_data", false,-1, 63,0);
        vcdp->declQuad(c+97,"top l1 outmem_write_data", false,-1, 63,0);
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+113+i*1,"top l1 weight_read_index", true,(i+0), 15,0);}}
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+145+i*1,"top l1 act_read_index", true,(i+0), 15,0);}}
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+169+i*1,"top l1 outmem_index", true,(i+0), 15,0);}}
        vcdp->declBit(c+65,"top l1 outmem_want_write", false,-1);
        vcdp->declBit(c+73,"top l1 state", false,-1);
        vcdp->declBit(c+2449,"top l1 activation clk", false,-1);
        vcdp->declQuad(c+33,"top l1 activation out_data", false,-1, 63,0);
        vcdp->declBit(c+2505,"top l1 activation write", false,-1);
        vcdp->declBus(c+2561,"top l1 activation index_entry", false,-1, 15,0);
        vcdp->declBus(c+2569,"top l1 activation index_y", false,-1, 15,0);
        vcdp->declBus(c+2577,"top l1 activation index_x", false,-1, 15,0);
        vcdp->declQuad(c+2457,"top l1 activation in_data", false,-1, 63,0);
        vcdp->declBus(c+193,"top l1 activation read_index_entry", false,-1, 15,0);
        vcdp->declBus(c+201,"top l1 activation read_index_y", false,-1, 15,0);
        vcdp->declBus(c+209,"top l1 activation read_index_x", false,-1, 15,0);
        vcdp->declArray(c+2689,"top l1 activation NAME", false,-1, 151,0);
        vcdp->declBus(c+2665,"top l1 activation ENTRY_NUM", false,-1, 31,0);
        vcdp->declBus(c+2673,"top l1 activation DIM", false,-1, 31,0);
        vcdp->declBus(c+2585,"top l1 activation DATA_SIZE", false,-1, 31,0);
        vcdp->declArray(c+217,"top l1 activation mem", false,-1, 3199,0);
        vcdp->declBit(c+2449,"top l1 weights clk", false,-1);
        vcdp->declQuad(c+49,"top l1 weights out_data", false,-1, 63,0);
        vcdp->declBit(c+25,"top l1 weights write", false,-1);
        vcdp->declBit(c+2529,"top l1 weights index_in", false,-1);
        vcdp->declBit(c+2537,"top l1 weights index_out", false,-1);
        vcdp->declBit(c+2545,"top l1 weights index_k_y", false,-1);
        vcdp->declBit(c+2553,"top l1 weights index_k_x", false,-1);
        vcdp->declBit(c+1017,"top l1 weights read_index_in", false,-1);
        vcdp->declBit(c+1025,"top l1 weights read_index_out", false,-1);
        vcdp->declBit(c+1033,"top l1 weights read_index_y", false,-1);
        vcdp->declBit(c+1041,"top l1 weights read_index_x", false,-1);
        vcdp->declQuad(c+2457,"top l1 weights in_data", false,-1, 63,0);
        vcdp->declArray(c+2729,"top l1 weights NAME", false,-1, 175,0);
        vcdp->declBus(c+2665,"top l1 weights NUM_INPUTS", false,-1, 31,0);
        vcdp->declBus(c+2665,"top l1 weights NUM_OUTPUTS", false,-1, 31,0);
        vcdp->declBus(c+2681,"top l1 weights DIM", false,-1, 31,0);
        vcdp->declBus(c+2585,"top l1 weights DATA_SIZE", false,-1, 31,0);
        vcdp->declArray(c+1049,"top l1 weights mem", false,-1, 2303,0);
        vcdp->declBit(c+2449,"top l1 out_memory clk", false,-1);
        vcdp->declQuad(c+81,"top l1 out_memory out_data", false,-1, 63,0);
        vcdp->declBit(c+65,"top l1 out_memory write", false,-1);
        vcdp->declBus(c+1625,"top l1 out_memory index_entry", false,-1, 15,0);
        vcdp->declBus(c+1633,"top l1 out_memory index_y", false,-1, 15,0);
        vcdp->declBus(c+1641,"top l1 out_memory index_x", false,-1, 15,0);
        vcdp->declQuad(c+97,"top l1 out_memory in_data", false,-1, 63,0);
        vcdp->declBus(c+2777,"top l1 out_memory read_index_entry", false,-1, 15,0);
        vcdp->declBus(c+2785,"top l1 out_memory read_index_y", false,-1, 15,0);
        vcdp->declBus(c+2793,"top l1 out_memory read_index_x", false,-1, 15,0);
        vcdp->declArray(c+2689,"top l1 out_memory NAME", false,-1, 151,0);
        vcdp->declBus(c+2665,"top l1 out_memory ENTRY_NUM", false,-1, 31,0);
        vcdp->declBus(c+2673,"top l1 out_memory DIM", false,-1, 31,0);
        vcdp->declBus(c+2585,"top l1 out_memory DATA_SIZE", false,-1, 31,0);
        vcdp->declArray(c+1649,"top l1 out_memory mem", false,-1, 3199,0);
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
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->top__DOT__L1_to_L2_out_index[0]),16);
        vcdp->fullBus(c+2,(vlTOPp->top__DOT__L1_to_L2_out_index[1]),16);
        vcdp->fullBus(c+3,(vlTOPp->top__DOT__L1_to_L2_out_index[2]),16);
        vcdp->fullBit(c+25,(vlTOPp->top__DOT__l1__DOT__weight_write));
        vcdp->fullQuad(c+33,(vlTOPp->top__DOT__l1__DOT__act_out_data),64);
        vcdp->fullQuad(c+49,(vlTOPp->top__DOT__l1__DOT__weights_out_data),64);
        vcdp->fullBit(c+65,(vlTOPp->top__DOT__l1__DOT__outmem_want_write));
        vcdp->fullBit(c+73,(vlTOPp->top__DOT__l1__DOT__state));
        vcdp->fullQuad(c+81,(((0xc7fU >= (0xfffU & 
                                          ((((IData)(0x640U) 
                                             * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_entry)) 
                                            + (0x7ffU 
                                               & ((IData)(0x140U) 
                                                  * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_y)))) 
                                           + (0x1ffU 
                                              & ((IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_x) 
                                                 << 6U)))))
                               ? (((0U == (0x1fU & 
                                           ((((IData)(0x640U) 
                                              * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_entry)) 
                                             + (0x7ffU 
                                                & ((IData)(0x140U) 
                                                   * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_y)))) 
                                            + (0x1ffU 
                                               & ((IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_x) 
                                                  << 6U)))))
                                    ? VL_ULL(0) : ((QData)((IData)(
                                                                   vlTOPp->top__DOT__l1__DOT__out_memory__DOT__mem[
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (0x7fU 
                                                                     & (((((IData)(0x640U) 
                                                                           * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_entry)) 
                                                                          + 
                                                                          (0x7ffU 
                                                                           & ((IData)(0x140U) 
                                                                              * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_y)))) 
                                                                         + 
                                                                         (0x1ffU 
                                                                          & ((IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_x) 
                                                                             << 6U))) 
                                                                        >> 5U)))])) 
                                                   << 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((((IData)(0x640U) 
                                                          * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_entry)) 
                                                         + 
                                                         (0x7ffU 
                                                          & ((IData)(0x140U) 
                                                             * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_y)))) 
                                                        + 
                                                        (0x1ffU 
                                                         & ((IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_x) 
                                                            << 6U))))))) 
                                  | (((QData)((IData)(
                                                      vlTOPp->top__DOT__l1__DOT__out_memory__DOT__mem[
                                                      ((IData)(1U) 
                                                       + 
                                                       (0x7fU 
                                                        & (((((IData)(0x640U) 
                                                              * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_entry)) 
                                                             + 
                                                             (0x7ffU 
                                                              & ((IData)(0x140U) 
                                                                 * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_y)))) 
                                                            + 
                                                            (0x1ffU 
                                                             & ((IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_x) 
                                                                << 6U))) 
                                                           >> 5U)))])) 
                                      << ((0U == (0x1fU 
                                                  & ((((IData)(0x640U) 
                                                       * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_entry)) 
                                                      + 
                                                      (0x7ffU 
                                                       & ((IData)(0x140U) 
                                                          * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_y)))) 
                                                     + 
                                                     (0x1ffU 
                                                      & ((IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_x) 
                                                         << 6U)))))
                                           ? 0x20U : 
                                          ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((((IData)(0x640U) 
                                                   * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_entry)) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x140U) 
                                                      * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_y)))) 
                                                 + 
                                                 (0x1ffU 
                                                  & ((IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_x) 
                                                     << 6U))))))) 
                                     | ((QData)((IData)(
                                                        vlTOPp->top__DOT__l1__DOT__out_memory__DOT__mem[
                                                        (0x7fU 
                                                         & (((((IData)(0x640U) 
                                                               * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_entry)) 
                                                              + 
                                                              (0x7ffU 
                                                               & ((IData)(0x140U) 
                                                                  * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_y)))) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_x) 
                                                                 << 6U))) 
                                                            >> 5U))])) 
                                        >> (0x1fU & 
                                            ((((IData)(0x640U) 
                                               * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_entry)) 
                                              + (0x7ffU 
                                                 & ((IData)(0x140U) 
                                                    * (IData)(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_y)))) 
                                             + (0x1ffU 
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
        vcdp->fullArray(c+217,(vlTOPp->top__DOT__l1__DOT__activation__DOT__mem),3200);
        vcdp->fullBit(c+1017,((1U & vlTOPp->top__DOT__l1__DOT__weight_read_index
                               [3U])));
        vcdp->fullBit(c+1025,((1U & vlTOPp->top__DOT__l1__DOT__weight_read_index
                               [2U])));
        vcdp->fullBit(c+1033,((1U & vlTOPp->top__DOT__l1__DOT__weight_read_index
                               [1U])));
        vcdp->fullBit(c+1041,((1U & vlTOPp->top__DOT__l1__DOT__weight_read_index
                               [0U])));
        vcdp->fullArray(c+1049,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem),2304);
        vcdp->fullBus(c+1625,(vlTOPp->top__DOT__l1__DOT__outmem_index
                              [2U]),16);
        vcdp->fullBus(c+1633,(vlTOPp->top__DOT__l1__DOT__outmem_index
                              [1U]),16);
        vcdp->fullBus(c+1641,(vlTOPp->top__DOT__l1__DOT__outmem_index
                              [0U]),16);
        vcdp->fullArray(c+1649,(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__mem),3200);
        vcdp->fullBit(c+2449,(vlTOPp->clk));
        vcdp->fullQuad(c+2457,(vlTOPp->input_data),64);
        vcdp->fullBit(c+2473,(vlTOPp->input_index[0]));
        vcdp->fullBit(c+2474,(vlTOPp->input_index[1]));
        vcdp->fullBit(c+2475,(vlTOPp->input_index[2]));
        vcdp->fullBit(c+2476,(vlTOPp->input_index[3]));
        vcdp->fullBit(c+2505,(vlTOPp->input_write_act));
        vcdp->fullBit(c+2513,(vlTOPp->input_write_weights));
        vcdp->fullBit(c+2521,(vlTOPp->compute));
        vcdp->fullBit(c+2529,(vlTOPp->input_index[3U]));
        vcdp->fullBit(c+2537,(vlTOPp->input_index[2U]));
        vcdp->fullBit(c+2545,(vlTOPp->input_index[1U]));
        vcdp->fullBit(c+2553,(vlTOPp->input_index[0U]));
        vcdp->fullBus(c+2561,(vlTOPp->input_index[2U]),16);
        vcdp->fullBus(c+2569,(vlTOPp->input_index[1U]),16);
        vcdp->fullBus(c+2577,(vlTOPp->input_index[0U]),16);
        vcdp->fullBus(c+2585,(0x40U),32);
        vcdp->fullQuad(c+2593,(vlTOPp->top__DOT__out_data),64);
        vcdp->fullBit(c+2609,(vlTOPp->top__DOT__output_valid));
        vcdp->fullBus(c+2617,(vlTOPp->top__DOT____Vcellout__l1__out_index[0]),16);
        vcdp->fullBus(c+2618,(vlTOPp->top__DOT____Vcellout__l1__out_index[1]),16);
        vcdp->fullBus(c+2619,(vlTOPp->top__DOT____Vcellout__l1__out_index[2]),16);
        __Vtemp8[0U] = 0x41594552U;
        __Vtemp8[1U] = 0x5554204cU;
        __Vtemp8[2U] = 0x494e50U;
        vcdp->fullArray(c+2641,(__Vtemp8),88);
        vcdp->fullBus(c+2665,(2U),32);
        vcdp->fullBus(c+2673,(5U),32);
        vcdp->fullBus(c+2681,(3U),32);
        __Vtemp9[0U] = 0x5f4d454dU;
        __Vtemp9[1U] = 0x20414354U;
        __Vtemp9[2U] = 0x41594552U;
        __Vtemp9[3U] = 0x5554204cU;
        __Vtemp9[4U] = 0x494e50U;
        vcdp->fullArray(c+2689,(__Vtemp9),152);
        __Vtemp10[0U] = 0x5f4d454dU;
        __Vtemp10[1U] = 0x49474854U;
        __Vtemp10[2U] = 0x52205745U;
        __Vtemp10[3U] = 0x4c415945U;
        __Vtemp10[4U] = 0x50555420U;
        __Vtemp10[5U] = 0x494eU;
        vcdp->fullArray(c+2729,(__Vtemp10),176);
        vcdp->fullBus(c+2777,(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_entry),16);
        vcdp->fullBus(c+2785,(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_y),16);
        vcdp->fullBus(c+2793,(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__read_index_x),16);
    }
}
