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
        vcdp->declBit(c+27977,"clk", false,-1);
        vcdp->declQuad(c+27985,"input_data", false,-1, 63,0);
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+28001+i*1,"input_index", true,(i+0), 15,0);}}
        vcdp->declBit(c+28033,"input_write_act", false,-1);
        vcdp->declBit(c+28041,"input_write_weights", false,-1);
        vcdp->declBit(c+28049,"input_write_bias", false,-1);
        vcdp->declBit(c+28057,"compute", false,-1);
        vcdp->declBit(c+28065,"reset", false,-1);
        vcdp->declBit(c+27977,"top clk", false,-1);
        vcdp->declQuad(c+27985,"top input_data", false,-1, 63,0);
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+28001+i*1,"top input_index", true,(i+0), 15,0);}}
        vcdp->declBit(c+28033,"top input_write_act", false,-1);
        vcdp->declBit(c+28041,"top input_write_weights", false,-1);
        vcdp->declBit(c+28049,"top input_write_bias", false,-1);
        vcdp->declBit(c+28057,"top compute", false,-1);
        vcdp->declBit(c+28065,"top reset", false,-1);
        vcdp->declBus(c+28105,"top DATA_SIZE", false,-1, 31,0);
        vcdp->declQuad(c+28113,"top out_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+28129+i*1,"top L1_to_L2_out_index", true,(i+0), 15,0);}}
        vcdp->declBit(c+81,"top scheduler_2_input_start", false,-1);
        vcdp->declBit(c+97,"top input_2_scheduler_done", false,-1);
        vcdp->declBit(c+27977,"top scheduler clk", false,-1);
        vcdp->declBit(c+28057,"top scheduler start", false,-1);
        vcdp->declBit(c+28065,"top scheduler reset", false,-1);
        vcdp->declBit(c+81,"top scheduler input_compute_start", false,-1);
        vcdp->declBit(c+97,"top scheduler input_compute_done", false,-1);
        vcdp->declBus(c+89,"top scheduler state", false,-1, 15,0);
        vcdp->declBit(c+27977,"top l1 clk", false,-1);
        vcdp->declQuad(c+28113,"top l1 out_data", false,-1, 63,0);
        vcdp->declBit(c+28033,"top l1 want_write_act", false,-1);
        vcdp->declBit(c+28041,"top l1 want_write_weights", false,-1);
        vcdp->declBit(c+28049,"top l1 want_write_bias", false,-1);
        vcdp->declQuad(c+27985,"top l1 write_data", false,-1, 63,0);
        vcdp->declBus(c+28073,"top l1 in_index3", false,-1, 15,0);
        vcdp->declBus(c+28081,"top l1 in_index2", false,-1, 15,0);
        vcdp->declBus(c+28089,"top l1 in_index1", false,-1, 15,0);
        vcdp->declBus(c+28097,"top l1 in_index0", false,-1, 15,0);
        vcdp->declBit(c+81,"top l1 compute", false,-1);
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+1+i*1,"top l1 read_outmem_index", true,(i+0), 15,0);}}
        vcdp->declBit(c+97,"top l1 output_valid", false,-1);
        vcdp->declArray(c+28153,"top l1 NAME", false,-1, 87,0);
        vcdp->declBus(c+28177,"top l1 NUM_INPUTS", false,-1, 31,0);
        vcdp->declBus(c+28185,"top l1 INPUT_DIM", false,-1, 31,0);
        vcdp->declBus(c+28193,"top l1 NUM_OUTPUTS", false,-1, 31,0);
        vcdp->declBus(c+28201,"top l1 KERNEL_DIM", false,-1, 31,0);
        vcdp->declBus(c+28105,"top l1 DATA_SIZE", false,-1, 31,0);
        vcdp->declBus(c+28209,"top l1 OUTPUT_DIM", false,-1, 31,0);
        vcdp->declQuad(c+105,"top l1 act_out_data", false,-1, 63,0);
        vcdp->declQuad(c+121,"top l1 weights_out_data", false,-1, 63,0);
        vcdp->declQuad(c+137,"top l1 bias_out_data", false,-1, 63,0);
        vcdp->declQuad(c+49,"top l1 outmem_out_data", false,-1, 63,0);
        vcdp->declQuad(c+153,"top l1 outmem_write_data", false,-1, 63,0);
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+169+i*1,"top l1 weight_read_index", true,(i+0), 15,0);}}
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+201+i*1,"top l1 act_read_index", true,(i+0), 15,0);}}
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+225+i*1,"top l1 outmem_index", true,(i+0), 15,0);}}
        vcdp->declBit(c+65,"top l1 outmem_want_write", false,-1);
        vcdp->declBus(c+73,"top l1 state", false,-1, 15,0);
        vcdp->declBit(c+27977,"top l1 activation clk", false,-1);
        vcdp->declQuad(c+105,"top l1 activation out_data", false,-1, 63,0);
        vcdp->declBit(c+28033,"top l1 activation write", false,-1);
        vcdp->declBus(c+28081,"top l1 activation index_entry", false,-1, 15,0);
        vcdp->declBus(c+28089,"top l1 activation index_y", false,-1, 15,0);
        vcdp->declBus(c+28097,"top l1 activation index_x", false,-1, 15,0);
        vcdp->declQuad(c+27985,"top l1 activation in_data", false,-1, 63,0);
        vcdp->declBus(c+249,"top l1 activation read_index_entry", false,-1, 15,0);
        vcdp->declBus(c+257,"top l1 activation read_index_y", false,-1, 15,0);
        vcdp->declBus(c+265,"top l1 activation read_index_x", false,-1, 15,0);
        vcdp->declArray(c+28217,"top l1 activation NAME", false,-1, 151,0);
        vcdp->declBus(c+28177,"top l1 activation ENTRY_NUM", false,-1, 31,0);
        vcdp->declBus(c+28185,"top l1 activation DIM", false,-1, 31,0);
        vcdp->declBus(c+28105,"top l1 activation DATA_SIZE", false,-1, 31,0);
        vcdp->declArray(c+273,"top l1 activation mem", false,-1, 50175,0);
        vcdp->declBit(c+27977,"top l1 weights clk", false,-1);
        vcdp->declQuad(c+121,"top l1 weights out_data_weight", false,-1, 63,0);
        vcdp->declQuad(c+137,"top l1 weights out_data_bias", false,-1, 63,0);
        vcdp->declBit(c+28041,"top l1 weights weight_write", false,-1);
        vcdp->declBit(c+28049,"top l1 weights bias_write", false,-1);
        vcdp->declBus(c+28073,"top l1 weights index_in", false,-1, 15,0);
        vcdp->declBus(c+28081,"top l1 weights index_out", false,-1, 15,0);
        vcdp->declBus(c+28089,"top l1 weights index_k_y", false,-1, 15,0);
        vcdp->declBus(c+28097,"top l1 weights index_k_x", false,-1, 15,0);
        vcdp->declBus(c+12817,"top l1 weights read_index_in", false,-1, 15,0);
        vcdp->declBus(c+12825,"top l1 weights read_index_out", false,-1, 15,0);
        vcdp->declBus(c+12833,"top l1 weights read_index_y", false,-1, 15,0);
        vcdp->declBus(c+12841,"top l1 weights read_index_x", false,-1, 15,0);
        vcdp->declBus(c+12825,"top l1 weights read_index_bias", false,-1, 15,0);
        vcdp->declQuad(c+27985,"top l1 weights in_data", false,-1, 63,0);
        vcdp->declArray(c+28257,"top l1 weights NAME", false,-1, 175,0);
        vcdp->declBus(c+28177,"top l1 weights NUM_INPUTS", false,-1, 31,0);
        vcdp->declBus(c+28193,"top l1 weights NUM_OUTPUTS", false,-1, 31,0);
        vcdp->declBus(c+28201,"top l1 weights DIM", false,-1, 31,0);
        vcdp->declBus(c+28105,"top l1 weights DATA_SIZE", false,-1, 31,0);
        vcdp->declArray(c+12849,"top l1 weights mem_weight", false,-1, 9215,0);
        vcdp->declArray(c+15153,"top l1 weights mem_bias", false,-1, 1023,0);
        vcdp->declBit(c+27977,"top l1 out_memory clk", false,-1);
        vcdp->declQuad(c+49,"top l1 out_memory out_data", false,-1, 63,0);
        vcdp->declBit(c+65,"top l1 out_memory write", false,-1);
        vcdp->declBus(c+15409,"top l1 out_memory index_entry", false,-1, 15,0);
        vcdp->declBus(c+15417,"top l1 out_memory index_y", false,-1, 15,0);
        vcdp->declBus(c+15425,"top l1 out_memory index_x", false,-1, 15,0);
        vcdp->declQuad(c+153,"top l1 out_memory in_data", false,-1, 63,0);
        vcdp->declBus(c+25,"top l1 out_memory read_index_entry", false,-1, 15,0);
        vcdp->declBus(c+33,"top l1 out_memory read_index_y", false,-1, 15,0);
        vcdp->declBus(c+41,"top l1 out_memory read_index_x", false,-1, 15,0);
        vcdp->declArray(c+28305,"top l1 out_memory NAME", false,-1, 151,0);
        vcdp->declBus(c+28177,"top l1 out_memory ENTRY_NUM", false,-1, 31,0);
        vcdp->declBus(c+28185,"top l1 out_memory DIM", false,-1, 31,0);
        vcdp->declBus(c+28105,"top l1 out_memory DATA_SIZE", false,-1, 31,0);
        vcdp->declArray(c+15433,"top l1 out_memory mem", false,-1, 50175,0);
    }
}

void Vtop::traceFullThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp10[3];
    WData/*159:0*/ __Vtemp11[5];
    WData/*191:0*/ __Vtemp12[6];
    WData/*159:0*/ __Vtemp13[5];
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index[0]),16);
        vcdp->fullBus(c+2,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index[1]),16);
        vcdp->fullBus(c+3,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index[2]),16);
        vcdp->fullBus(c+25,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                            [2U]),16);
        vcdp->fullBus(c+33,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                            [1U]),16);
        vcdp->fullBus(c+41,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                            [0U]),16);
        vcdp->fullQuad(c+49,(((0xc3ffU >= (0xffffU 
                                           & ((((IData)(0xc400U) 
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
                               ? (((0U == (0x1fU & 
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
                                                 + 
                                                 (0x7ffU 
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
        vcdp->fullBit(c+65,(vlTOPp->top__DOT__l1__DOT__outmem_want_write));
        vcdp->fullBus(c+73,(vlTOPp->top__DOT__l1__DOT__state),16);
        vcdp->fullBit(c+81,(vlTOPp->top__DOT__scheduler_2_input_start));
        vcdp->fullBus(c+89,(vlTOPp->top__DOT__scheduler__DOT__state),16);
        vcdp->fullBit(c+97,(vlTOPp->top__DOT__input_2_scheduler_done));
        vcdp->fullQuad(c+105,(((0xc3ffU >= (0xffffU 
                                            & ((((IData)(0xc400U) 
                                                 * 
                                                 vlTOPp->top__DOT__l1__DOT__act_read_index
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
                                     ? VL_ULL(0) : 
                                    ((QData)((IData)(
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
                                     << ((IData)(0x40U) 
                                         - (0x1fU & 
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
                                            ? 0x20U
                                            : ((IData)(0x20U) 
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
                                         >> (0x1fU 
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
                                : VL_ULL(0))),64);
        vcdp->fullQuad(c+121,(((0x23ffU >= (0x3fffU 
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
                                     ? VL_ULL(0) : 
                                    ((QData)((IData)(
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
                                     << ((IData)(0x40U) 
                                         - (0x1fU & 
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
                                            ? 0x20U
                                            : ((IData)(0x20U) 
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
                                         >> (0x1fU 
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
                                                + (0xffU 
                                                   & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                      [0U] 
                                                      << 6U)))))))
                                : VL_ULL(0))),64);
        vcdp->fullQuad(c+137,((((0U == (0x1fU & (vlTOPp->top__DOT__l1__DOT__weight_read_index
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
                                                << 
                                                ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & (vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                     [2U] 
                                                     << 6U))))) 
                               | (((QData)((IData)(
                                                   vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[
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
        vcdp->fullQuad(c+153,(vlTOPp->top__DOT__l1__DOT__outmem_write_data),64);
        vcdp->fullBus(c+169,(vlTOPp->top__DOT__l1__DOT__weight_read_index[0]),16);
        vcdp->fullBus(c+170,(vlTOPp->top__DOT__l1__DOT__weight_read_index[1]),16);
        vcdp->fullBus(c+171,(vlTOPp->top__DOT__l1__DOT__weight_read_index[2]),16);
        vcdp->fullBus(c+172,(vlTOPp->top__DOT__l1__DOT__weight_read_index[3]),16);
        vcdp->fullBus(c+201,(vlTOPp->top__DOT__l1__DOT__act_read_index[0]),16);
        vcdp->fullBus(c+202,(vlTOPp->top__DOT__l1__DOT__act_read_index[1]),16);
        vcdp->fullBus(c+203,(vlTOPp->top__DOT__l1__DOT__act_read_index[2]),16);
        vcdp->fullBus(c+225,(vlTOPp->top__DOT__l1__DOT__outmem_index[0]),16);
        vcdp->fullBus(c+226,(vlTOPp->top__DOT__l1__DOT__outmem_index[1]),16);
        vcdp->fullBus(c+227,(vlTOPp->top__DOT__l1__DOT__outmem_index[2]),16);
        vcdp->fullBus(c+249,(vlTOPp->top__DOT__l1__DOT__act_read_index
                             [2U]),16);
        vcdp->fullBus(c+257,(vlTOPp->top__DOT__l1__DOT__act_read_index
                             [1U]),16);
        vcdp->fullBus(c+265,(vlTOPp->top__DOT__l1__DOT__act_read_index
                             [0U]),16);
        vcdp->fullArray(c+273,(vlTOPp->top__DOT__l1__DOT__activation__DOT__mem),50176);
        vcdp->fullBus(c+12817,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                               [3U]),16);
        vcdp->fullBus(c+12825,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                               [2U]),16);
        vcdp->fullBus(c+12833,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                               [1U]),16);
        vcdp->fullBus(c+12841,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                               [0U]),16);
        vcdp->fullArray(c+12849,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_weight),9216);
        vcdp->fullArray(c+15153,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias),1024);
        vcdp->fullBus(c+15409,(vlTOPp->top__DOT__l1__DOT__outmem_index
                               [2U]),16);
        vcdp->fullBus(c+15417,(vlTOPp->top__DOT__l1__DOT__outmem_index
                               [1U]),16);
        vcdp->fullBus(c+15425,(vlTOPp->top__DOT__l1__DOT__outmem_index
                               [0U]),16);
        vcdp->fullArray(c+15433,(vlTOPp->top__DOT__l1__DOT__out_memory__DOT__mem),50176);
        vcdp->fullBit(c+27977,(vlTOPp->clk));
        vcdp->fullQuad(c+27985,(vlTOPp->input_data),64);
        vcdp->fullBus(c+28001,(vlTOPp->input_index[0]),16);
        vcdp->fullBus(c+28002,(vlTOPp->input_index[1]),16);
        vcdp->fullBus(c+28003,(vlTOPp->input_index[2]),16);
        vcdp->fullBus(c+28004,(vlTOPp->input_index[3]),16);
        vcdp->fullBit(c+28033,(vlTOPp->input_write_act));
        vcdp->fullBit(c+28041,(vlTOPp->input_write_weights));
        vcdp->fullBit(c+28049,(vlTOPp->input_write_bias));
        vcdp->fullBit(c+28057,(vlTOPp->compute));
        vcdp->fullBit(c+28065,(vlTOPp->reset));
        vcdp->fullBus(c+28073,(vlTOPp->input_index[3U]),16);
        vcdp->fullBus(c+28081,(vlTOPp->input_index[2U]),16);
        vcdp->fullBus(c+28089,(vlTOPp->input_index[1U]),16);
        vcdp->fullBus(c+28097,(vlTOPp->input_index[0U]),16);
        vcdp->fullBus(c+28105,(0x40U),32);
        vcdp->fullQuad(c+28113,(vlTOPp->top__DOT__out_data),64);
        vcdp->fullBus(c+28129,(vlTOPp->top__DOT__L1_to_L2_out_index[0]),16);
        vcdp->fullBus(c+28130,(vlTOPp->top__DOT__L1_to_L2_out_index[1]),16);
        vcdp->fullBus(c+28131,(vlTOPp->top__DOT__L1_to_L2_out_index[2]),16);
        __Vtemp10[0U] = 0x41594552U;
        __Vtemp10[1U] = 0x5554204cU;
        __Vtemp10[2U] = 0x494e50U;
        vcdp->fullArray(c+28153,(__Vtemp10),88);
        vcdp->fullBus(c+28177,(1U),32);
        vcdp->fullBus(c+28185,(0x1cU),32);
        vcdp->fullBus(c+28193,(0x10U),32);
        vcdp->fullBus(c+28201,(3U),32);
        vcdp->fullBus(c+28209,(0x1aU),32);
        __Vtemp11[0U] = 0x5f4d454dU;
        __Vtemp11[1U] = 0x20414354U;
        __Vtemp11[2U] = 0x41594552U;
        __Vtemp11[3U] = 0x5554204cU;
        __Vtemp11[4U] = 0x494e50U;
        vcdp->fullArray(c+28217,(__Vtemp11),152);
        __Vtemp12[0U] = 0x5f4d454dU;
        __Vtemp12[1U] = 0x49474854U;
        __Vtemp12[2U] = 0x52205745U;
        __Vtemp12[3U] = 0x4c415945U;
        __Vtemp12[4U] = 0x50555420U;
        __Vtemp12[5U] = 0x494eU;
        vcdp->fullArray(c+28257,(__Vtemp12),176);
        __Vtemp13[0U] = 0x5f4d454dU;
        __Vtemp13[1U] = 0x204f5554U;
        __Vtemp13[2U] = 0x41594552U;
        __Vtemp13[3U] = 0x5554204cU;
        __Vtemp13[4U] = 0x494e50U;
        vcdp->fullArray(c+28305,(__Vtemp13),152);
    }
}
