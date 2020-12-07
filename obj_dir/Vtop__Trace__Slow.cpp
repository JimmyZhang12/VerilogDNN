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
        vcdp->declBit(c+705,"clk", false,-1);
        vcdp->declQuad(c+713,"input_data", false,-1, 63,0);
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+729+i*1,"input_index", true,(i+0), 15,0);}}
        vcdp->declBit(c+761,"input_write_act", false,-1);
        vcdp->declBit(c+769,"input_write_weights", false,-1);
        vcdp->declBit(c+777,"input_write_bias", false,-1);
        vcdp->declBit(c+785,"compute", false,-1);
        vcdp->declBit(c+793,"reset", false,-1);
        vcdp->declBit(c+705,"top clk", false,-1);
        vcdp->declQuad(c+713,"top input_data", false,-1, 63,0);
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+729+i*1,"top input_index", true,(i+0), 15,0);}}
        vcdp->declBit(c+761,"top input_write_act", false,-1);
        vcdp->declBit(c+769,"top input_write_weights", false,-1);
        vcdp->declBit(c+777,"top input_write_bias", false,-1);
        vcdp->declBit(c+785,"top compute", false,-1);
        vcdp->declBit(c+793,"top reset", false,-1);
        vcdp->declBus(c+833,"top DATA_SIZE", false,-1, 31,0);
        vcdp->declBus(c+841,"top l1_NUM_INPUT", false,-1, 31,0);
        vcdp->declBus(c+849,"top l1_INPUT_DIM", false,-1, 31,0);
        vcdp->declBus(c+857,"top l1_NUM_OUTPUT", false,-1, 31,0);
        vcdp->declBus(c+865,"top L1_KERNEL_DIM", false,-1, 31,0);
        vcdp->declBus(c+857,"top l2_NUM_INPUT", false,-1, 31,0);
        vcdp->declBus(c+873,"top l2_INPUT_DIM", false,-1, 31,0);
        vcdp->declBus(c+881,"top L2_KERNEL_DIM", false,-1, 31,0);
        vcdp->declQuad(c+1,"top l1_outmem_2_l2_inmem_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+17+i*1,"top scheduler_2_l1_index", true,(i+0), 15,0);}}
        vcdp->declBit(c+169,"top scheduler_2_l2_inmem_wantwrite", false,-1);
        vcdp->declBit(c+41,"top scheduler_2_input_start", false,-1);
        vcdp->declBit(c+177,"top input_2_scheduler_done", false,-1);
        vcdp->declBit(c+705,"top scheduler clk", false,-1);
        vcdp->declBit(c+785,"top scheduler start", false,-1);
        vcdp->declBit(c+793,"top scheduler reset", false,-1);
        vcdp->declBit(c+41,"top scheduler input_compute_start", false,-1);
        vcdp->declBit(c+177,"top scheduler input_compute_done", false,-1);
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+185+i*1,"top scheduler l1_l2_index", true,(i+0), 15,0);}}
        vcdp->declBit(c+169,"top scheduler l2_inmem_wantwrite", false,-1);
        vcdp->declBus(c+833,"top scheduler DATA_SIZE", false,-1, 31,0);
        vcdp->declBus(c+841,"top scheduler l1_NUM_INPUT", false,-1, 31,0);
        vcdp->declBus(c+849,"top scheduler l1_INPUT_DIM", false,-1, 31,0);
        vcdp->declBus(c+857,"top scheduler l1_NUM_OUTPUT", false,-1, 31,0);
        vcdp->declBus(c+865,"top scheduler L1_KERNEL_DIM", false,-1, 31,0);
        vcdp->declBus(c+857,"top scheduler l2_NUM_INPUT", false,-1, 31,0);
        vcdp->declBus(c+873,"top scheduler l2_INPUT_DIM", false,-1, 31,0);
        vcdp->declBus(c+881,"top scheduler L2_KERNEL_DIM", false,-1, 31,0);
        vcdp->declBus(c+49,"top scheduler state", false,-1, 15,0);
        vcdp->declArray(c+889,"top l1 NAME", false,-1, 87,0);
        vcdp->declBus(c+841,"top l1 NUM_INPUTS", false,-1, 31,0);
        vcdp->declBus(c+849,"top l1 INPUT_DIM", false,-1, 31,0);
        vcdp->declBus(c+857,"top l1 NUM_OUTPUTS", false,-1, 31,0);
        vcdp->declBus(c+865,"top l1 KERNEL_DIM", false,-1, 31,0);
        vcdp->declBus(c+833,"top l1 DATA_SIZE", false,-1, 31,0);
        vcdp->declBus(c+873,"top l1 OUTPUT_DIM", false,-1, 31,0);
        vcdp->declBit(c+705,"top l1 clk", false,-1);
        vcdp->declQuad(c+1,"top l1 outmem_out_data", false,-1, 63,0);
        vcdp->declBit(c+761,"top l1 want_write_act", false,-1);
        vcdp->declBit(c+769,"top l1 want_write_weights", false,-1);
        vcdp->declBit(c+777,"top l1 want_write_bias", false,-1);
        vcdp->declQuad(c+713,"top l1 write_data", false,-1, 63,0);
        vcdp->declBus(c+801,"top l1 in_index3", false,-1, 15,0);
        vcdp->declBus(c+809,"top l1 in_index2", false,-1, 15,0);
        vcdp->declBus(c+817,"top l1 in_index1", false,-1, 15,0);
        vcdp->declBus(c+825,"top l1 in_index0", false,-1, 15,0);
        vcdp->declBit(c+41,"top l1 compute", false,-1);
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+57+i*1,"top l1 read_outmem_index", true,(i+0), 15,0);}}
        vcdp->declBit(c+177,"top l1 output_valid", false,-1);
        vcdp->declQuad(c+209,"top l1 act_out_data", false,-1, 63,0);
        vcdp->declQuad(c+225,"top l1 weights_out_data", false,-1, 63,0);
        vcdp->declQuad(c+241,"top l1 bias_out_data", false,-1, 63,0);
        vcdp->declQuad(c+257,"top l1 outmem_write_data", false,-1, 63,0);
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+273+i*1,"top l1 weight_read_index", true,(i+0), 15,0);}}
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+305+i*1,"top l1 act_read_index", true,(i+0), 15,0);}}
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+329+i*1,"top l1 outmem_index", true,(i+0), 15,0);}}
        vcdp->declBit(c+81,"top l1 outmem_want_write", false,-1);
        vcdp->declBus(c+89,"top l1 state", false,-1, 15,0);
        vcdp->declArray(c+913,"top l1 activation NAME", false,-1, 151,0);
        vcdp->declBus(c+841,"top l1 activation ENTRY_NUM", false,-1, 31,0);
        vcdp->declBus(c+849,"top l1 activation DIM", false,-1, 31,0);
        vcdp->declBus(c+833,"top l1 activation DATA_SIZE", false,-1, 31,0);
        vcdp->declBit(c+705,"top l1 activation clk", false,-1);
        vcdp->declQuad(c+209,"top l1 activation out_data", false,-1, 63,0);
        vcdp->declBit(c+761,"top l1 activation write", false,-1);
        vcdp->declBus(c+809,"top l1 activation index_entry", false,-1, 15,0);
        vcdp->declBus(c+817,"top l1 activation index_y", false,-1, 15,0);
        vcdp->declBus(c+825,"top l1 activation index_x", false,-1, 15,0);
        vcdp->declQuad(c+713,"top l1 activation in_data", false,-1, 63,0);
        vcdp->declBus(c+353,"top l1 activation read_index_entry", false,-1, 15,0);
        vcdp->declBus(c+361,"top l1 activation read_index_y", false,-1, 15,0);
        vcdp->declBus(c+369,"top l1 activation read_index_x", false,-1, 15,0);
        vcdp->declArray(c+953,"top l1 weights NAME", false,-1, 175,0);
        vcdp->declBus(c+841,"top l1 weights NUM_INPUTS", false,-1, 31,0);
        vcdp->declBus(c+857,"top l1 weights NUM_OUTPUTS", false,-1, 31,0);
        vcdp->declBus(c+865,"top l1 weights DIM", false,-1, 31,0);
        vcdp->declBus(c+833,"top l1 weights DATA_SIZE", false,-1, 31,0);
        vcdp->declBit(c+705,"top l1 weights clk", false,-1);
        vcdp->declQuad(c+225,"top l1 weights out_data_weight", false,-1, 63,0);
        vcdp->declQuad(c+241,"top l1 weights out_data_bias", false,-1, 63,0);
        vcdp->declBit(c+769,"top l1 weights weight_write", false,-1);
        vcdp->declBit(c+777,"top l1 weights bias_write", false,-1);
        vcdp->declBus(c+801,"top l1 weights index_in", false,-1, 15,0);
        vcdp->declBus(c+809,"top l1 weights index_out", false,-1, 15,0);
        vcdp->declBus(c+817,"top l1 weights index_k_y", false,-1, 15,0);
        vcdp->declBus(c+825,"top l1 weights index_k_x", false,-1, 15,0);
        vcdp->declBus(c+377,"top l1 weights read_index_in", false,-1, 15,0);
        vcdp->declBus(c+385,"top l1 weights read_index_out", false,-1, 15,0);
        vcdp->declBus(c+393,"top l1 weights read_index_y", false,-1, 15,0);
        vcdp->declBus(c+401,"top l1 weights read_index_x", false,-1, 15,0);
        vcdp->declBus(c+385,"top l1 weights read_index_bias", false,-1, 15,0);
        vcdp->declQuad(c+713,"top l1 weights in_data", false,-1, 63,0);
        {int i; for (i=0; i<16; i++) {
                vcdp->declQuad(c+409+i*2,"top l1 weights mem_bias", true,(i+0), 63,0);}}
        vcdp->declArray(c+1001,"top l1 out_memory NAME", false,-1, 151,0);
        vcdp->declBus(c+857,"top l1 out_memory ENTRY_NUM", false,-1, 31,0);
        vcdp->declBus(c+873,"top l1 out_memory DIM", false,-1, 31,0);
        vcdp->declBus(c+833,"top l1 out_memory DATA_SIZE", false,-1, 31,0);
        vcdp->declBit(c+705,"top l1 out_memory clk", false,-1);
        vcdp->declQuad(c+1,"top l1 out_memory out_data", false,-1, 63,0);
        vcdp->declBit(c+81,"top l1 out_memory write", false,-1);
        vcdp->declBus(c+665,"top l1 out_memory index_entry", false,-1, 15,0);
        vcdp->declBus(c+673,"top l1 out_memory index_y", false,-1, 15,0);
        vcdp->declBus(c+681,"top l1 out_memory index_x", false,-1, 15,0);
        vcdp->declQuad(c+257,"top l1 out_memory in_data", false,-1, 63,0);
        vcdp->declBus(c+97,"top l1 out_memory read_index_entry", false,-1, 15,0);
        vcdp->declBus(c+105,"top l1 out_memory read_index_y", false,-1, 15,0);
        vcdp->declBus(c+113,"top l1 out_memory read_index_x", false,-1, 15,0);
        vcdp->declQuad(c+1041,"top l2 NAME", false,-1, 63,0);
        vcdp->declBus(c+857,"top l2 NUM_INPUTS", false,-1, 31,0);
        vcdp->declBus(c+873,"top l2 INPUT_DIM", false,-1, 31,0);
        vcdp->declBus(c+881,"top l2 KERNEL_DIM", false,-1, 31,0);
        vcdp->declBus(c+833,"top l2 DATA_SIZE", false,-1, 31,0);
        vcdp->declBus(c+1057,"top l2 OUTPUT_DIM", false,-1, 31,0);
        vcdp->declBit(c+705,"top l2 clk", false,-1);
        vcdp->declBit(c+169,"top l2 inmem_want_write", false,-1);
        vcdp->declQuad(c+1065,"top l2 read_data", false,-1, 63,0);
        vcdp->declQuad(c+1,"top l2 inmem_write_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+121+i*1,"top l2 inmem_index", true,(i+0), 15,0);}}
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+1081+i*1,"top l2 outmem_index", true,(i+0), 15,0);}}
        vcdp->declBit(c+1105,"top l2 output_valid", false,-1);
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+1113+i*1,"top l2 read_outmem_index", true,(i+0), 15,0);}}
        vcdp->declQuad(c+689,"top l2 inmem_read_data", false,-1, 63,0);
        vcdp->declBus(c+1137,"top l2 state", false,-1, 15,0);
        vcdp->declArray(c+1145,"top l2 in_memory NAME", false,-1, 127,0);
        vcdp->declBus(c+857,"top l2 in_memory ENTRY_NUM", false,-1, 31,0);
        vcdp->declBus(c+873,"top l2 in_memory DIM", false,-1, 31,0);
        vcdp->declBus(c+833,"top l2 in_memory DATA_SIZE", false,-1, 31,0);
        vcdp->declBit(c+705,"top l2 in_memory clk", false,-1);
        vcdp->declQuad(c+689,"top l2 in_memory out_data", false,-1, 63,0);
        vcdp->declBit(c+169,"top l2 in_memory write", false,-1);
        vcdp->declBus(c+145,"top l2 in_memory index_entry", false,-1, 15,0);
        vcdp->declBus(c+153,"top l2 in_memory index_y", false,-1, 15,0);
        vcdp->declBus(c+161,"top l2 in_memory index_x", false,-1, 15,0);
        vcdp->declQuad(c+1,"top l2 in_memory in_data", false,-1, 63,0);
        vcdp->declBus(c+1177,"top l2 in_memory read_index_entry", false,-1, 15,0);
        vcdp->declBus(c+1185,"top l2 in_memory read_index_y", false,-1, 15,0);
        vcdp->declBus(c+1193,"top l2 in_memory read_index_x", false,-1, 15,0);
    }
}

void Vtop::traceFullThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp13[3];
    WData/*159:0*/ __Vtemp14[5];
    WData/*191:0*/ __Vtemp15[6];
    WData/*159:0*/ __Vtemp16[5];
    WData/*127:0*/ __Vtemp17[4];
    // Body
    {
        vcdp->fullQuad(c+1,(((0x19U >= (0x1fU & vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                        [0U])) ? vlTOPp->top__DOT__l1__DOT__out_memory__DOT__mem
                             [(0xfU & vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                               [2U])][((0x19U >= (0x1fU 
                                                  & vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                                  [1U]))
                                        ? (0x1fU & 
                                           vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                           [1U]) : 0U)]
                             [(0x1fU & vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                               [0U])] : VL_ULL(0))),64);
        vcdp->fullBus(c+17,(vlTOPp->top__DOT__scheduler_2_l1_index[0]),16);
        vcdp->fullBus(c+18,(vlTOPp->top__DOT__scheduler_2_l1_index[1]),16);
        vcdp->fullBus(c+19,(vlTOPp->top__DOT__scheduler_2_l1_index[2]),16);
        vcdp->fullBit(c+41,(vlTOPp->top__DOT__scheduler_2_input_start));
        vcdp->fullBus(c+49,(vlTOPp->top__DOT__scheduler__DOT__state),16);
        vcdp->fullBus(c+57,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index[0]),16);
        vcdp->fullBus(c+58,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index[1]),16);
        vcdp->fullBus(c+59,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index[2]),16);
        vcdp->fullBit(c+81,(vlTOPp->top__DOT__l1__DOT__outmem_want_write));
        vcdp->fullBus(c+89,(vlTOPp->top__DOT__l1__DOT__state),16);
        vcdp->fullBus(c+97,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                            [2U]),16);
        vcdp->fullBus(c+105,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                             [1U]),16);
        vcdp->fullBus(c+113,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                             [0U]),16);
        vcdp->fullBus(c+121,(vlTOPp->top__DOT____Vcellinp__l2__inmem_index[0]),16);
        vcdp->fullBus(c+122,(vlTOPp->top__DOT____Vcellinp__l2__inmem_index[1]),16);
        vcdp->fullBus(c+123,(vlTOPp->top__DOT____Vcellinp__l2__inmem_index[2]),16);
        vcdp->fullBus(c+145,(vlTOPp->top__DOT____Vcellinp__l2__inmem_index
                             [2U]),16);
        vcdp->fullBus(c+153,(vlTOPp->top__DOT____Vcellinp__l2__inmem_index
                             [1U]),16);
        vcdp->fullBus(c+161,(vlTOPp->top__DOT____Vcellinp__l2__inmem_index
                             [0U]),16);
        vcdp->fullBit(c+169,(vlTOPp->top__DOT__scheduler_2_l2_inmem_wantwrite));
        vcdp->fullBit(c+177,(vlTOPp->top__DOT__input_2_scheduler_done));
        vcdp->fullBus(c+185,(vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index[0]),16);
        vcdp->fullBus(c+186,(vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index[1]),16);
        vcdp->fullBus(c+187,(vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index[2]),16);
        vcdp->fullQuad(c+209,(((0x1bU >= (0x1fU & vlTOPp->top__DOT__l1__DOT__act_read_index
                                          [0U])) ? 
                               vlTOPp->top__DOT__l1__DOT__activation__DOT__mem
                               [((0U >= (1U & vlTOPp->top__DOT__l1__DOT__act_read_index
                                         [2U])) & vlTOPp->top__DOT__l1__DOT__act_read_index
                                 [2U])][((0x1bU >= 
                                          (0x1fU & 
                                           vlTOPp->top__DOT__l1__DOT__act_read_index
                                           [1U])) ? 
                                         (0x1fU & vlTOPp->top__DOT__l1__DOT__act_read_index
                                          [1U]) : 0U)]
                               [(0x1fU & vlTOPp->top__DOT__l1__DOT__act_read_index
                                 [0U])] : VL_ULL(0))),64);
        vcdp->fullQuad(c+225,(((2U >= (3U & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                       [0U])) ? vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_weight
                               [((0U >= (1U & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                         [3U])) & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                 [3U])][(0xfU & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                         [2U])][((2U 
                                                  >= 
                                                  (3U 
                                                   & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                   [1U]))
                                                  ? 
                                                 (3U 
                                                  & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                                  [1U])
                                                  : 0U)]
                               [(3U & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                 [0U])] : VL_ULL(0))),64);
        vcdp->fullQuad(c+241,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias
                              [(0xfU & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                [2U])]),64);
        vcdp->fullQuad(c+257,(vlTOPp->top__DOT__l1__DOT__outmem_write_data),64);
        vcdp->fullBus(c+273,(vlTOPp->top__DOT__l1__DOT__weight_read_index[0]),16);
        vcdp->fullBus(c+274,(vlTOPp->top__DOT__l1__DOT__weight_read_index[1]),16);
        vcdp->fullBus(c+275,(vlTOPp->top__DOT__l1__DOT__weight_read_index[2]),16);
        vcdp->fullBus(c+276,(vlTOPp->top__DOT__l1__DOT__weight_read_index[3]),16);
        vcdp->fullBus(c+305,(vlTOPp->top__DOT__l1__DOT__act_read_index[0]),16);
        vcdp->fullBus(c+306,(vlTOPp->top__DOT__l1__DOT__act_read_index[1]),16);
        vcdp->fullBus(c+307,(vlTOPp->top__DOT__l1__DOT__act_read_index[2]),16);
        vcdp->fullBus(c+329,(vlTOPp->top__DOT__l1__DOT__outmem_index[0]),16);
        vcdp->fullBus(c+330,(vlTOPp->top__DOT__l1__DOT__outmem_index[1]),16);
        vcdp->fullBus(c+331,(vlTOPp->top__DOT__l1__DOT__outmem_index[2]),16);
        vcdp->fullBus(c+353,(vlTOPp->top__DOT__l1__DOT__act_read_index
                             [2U]),16);
        vcdp->fullBus(c+361,(vlTOPp->top__DOT__l1__DOT__act_read_index
                             [1U]),16);
        vcdp->fullBus(c+369,(vlTOPp->top__DOT__l1__DOT__act_read_index
                             [0U]),16);
        vcdp->fullBus(c+377,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                             [3U]),16);
        vcdp->fullBus(c+385,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                             [2U]),16);
        vcdp->fullBus(c+393,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                             [1U]),16);
        vcdp->fullBus(c+401,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                             [0U]),16);
        vcdp->fullQuad(c+409,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[0]),64);
        vcdp->fullQuad(c+411,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[1]),64);
        vcdp->fullQuad(c+413,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[2]),64);
        vcdp->fullQuad(c+415,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[3]),64);
        vcdp->fullQuad(c+417,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[4]),64);
        vcdp->fullQuad(c+419,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[5]),64);
        vcdp->fullQuad(c+421,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[6]),64);
        vcdp->fullQuad(c+423,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[7]),64);
        vcdp->fullQuad(c+425,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[8]),64);
        vcdp->fullQuad(c+427,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[9]),64);
        vcdp->fullQuad(c+429,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[10]),64);
        vcdp->fullQuad(c+431,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[11]),64);
        vcdp->fullQuad(c+433,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[12]),64);
        vcdp->fullQuad(c+435,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[13]),64);
        vcdp->fullQuad(c+437,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[14]),64);
        vcdp->fullQuad(c+439,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[15]),64);
        vcdp->fullBus(c+665,(vlTOPp->top__DOT__l1__DOT__outmem_index
                             [2U]),16);
        vcdp->fullBus(c+673,(vlTOPp->top__DOT__l1__DOT__outmem_index
                             [1U]),16);
        vcdp->fullBus(c+681,(vlTOPp->top__DOT__l1__DOT__outmem_index
                             [0U]),16);
        vcdp->fullQuad(c+689,(((0x19U >= (0x1fU & vlTOPp->top__DOT__l2__DOT__read_outmem_index
                                          [0U])) ? 
                               vlTOPp->top__DOT__l2__DOT__in_memory__DOT__mem
                               [(0xfU & vlTOPp->top__DOT__l2__DOT__read_outmem_index
                                 [2U])][((0x19U >= 
                                          (0x1fU & 
                                           vlTOPp->top__DOT__l2__DOT__read_outmem_index
                                           [1U])) ? 
                                         (0x1fU & vlTOPp->top__DOT__l2__DOT__read_outmem_index
                                          [1U]) : 0U)]
                               [(0x1fU & vlTOPp->top__DOT__l2__DOT__read_outmem_index
                                 [0U])] : VL_ULL(0))),64);
        vcdp->fullBit(c+705,(vlTOPp->clk));
        vcdp->fullQuad(c+713,(vlTOPp->input_data),64);
        vcdp->fullBus(c+729,(vlTOPp->input_index[0]),16);
        vcdp->fullBus(c+730,(vlTOPp->input_index[1]),16);
        vcdp->fullBus(c+731,(vlTOPp->input_index[2]),16);
        vcdp->fullBus(c+732,(vlTOPp->input_index[3]),16);
        vcdp->fullBit(c+761,(vlTOPp->input_write_act));
        vcdp->fullBit(c+769,(vlTOPp->input_write_weights));
        vcdp->fullBit(c+777,(vlTOPp->input_write_bias));
        vcdp->fullBit(c+785,(vlTOPp->compute));
        vcdp->fullBit(c+793,(vlTOPp->reset));
        vcdp->fullBus(c+801,(vlTOPp->input_index[3U]),16);
        vcdp->fullBus(c+809,(vlTOPp->input_index[2U]),16);
        vcdp->fullBus(c+817,(vlTOPp->input_index[1U]),16);
        vcdp->fullBus(c+825,(vlTOPp->input_index[0U]),16);
        vcdp->fullBus(c+833,(0x40U),32);
        vcdp->fullBus(c+841,(1U),32);
        vcdp->fullBus(c+849,(0x1cU),32);
        vcdp->fullBus(c+857,(0x10U),32);
        vcdp->fullBus(c+865,(3U),32);
        vcdp->fullBus(c+873,(0x1aU),32);
        vcdp->fullBus(c+881,(2U),32);
        __Vtemp13[0U] = 0x41594552U;
        __Vtemp13[1U] = 0x5554204cU;
        __Vtemp13[2U] = 0x494e50U;
        vcdp->fullArray(c+889,(__Vtemp13),88);
        __Vtemp14[0U] = 0x5f4d454dU;
        __Vtemp14[1U] = 0x20414354U;
        __Vtemp14[2U] = 0x41594552U;
        __Vtemp14[3U] = 0x5554204cU;
        __Vtemp14[4U] = 0x494e50U;
        vcdp->fullArray(c+913,(__Vtemp14),152);
        __Vtemp15[0U] = 0x5f4d454dU;
        __Vtemp15[1U] = 0x49474854U;
        __Vtemp15[2U] = 0x52205745U;
        __Vtemp15[3U] = 0x4c415945U;
        __Vtemp15[4U] = 0x50555420U;
        __Vtemp15[5U] = 0x494eU;
        vcdp->fullArray(c+953,(__Vtemp15),176);
        __Vtemp16[0U] = 0x5f4d454dU;
        __Vtemp16[1U] = 0x204f5554U;
        __Vtemp16[2U] = 0x41594552U;
        __Vtemp16[3U] = 0x5554204cU;
        __Vtemp16[4U] = 0x494e50U;
        vcdp->fullArray(c+1001,(__Vtemp16),152);
        vcdp->fullQuad(c+1041,(VL_ULL(0x4d4158504f4f4c31)),64);
        vcdp->fullBus(c+1057,(0x19U),32);
        vcdp->fullQuad(c+1065,(vlTOPp->top__DOT__l2__DOT__read_data),64);
        vcdp->fullBus(c+1081,(vlTOPp->top__DOT__l2__DOT__outmem_index[0]),16);
        vcdp->fullBus(c+1082,(vlTOPp->top__DOT__l2__DOT__outmem_index[1]),16);
        vcdp->fullBus(c+1083,(vlTOPp->top__DOT__l2__DOT__outmem_index[2]),16);
        vcdp->fullBit(c+1105,(vlTOPp->top__DOT__l2__DOT__output_valid));
        vcdp->fullBus(c+1113,(vlTOPp->top__DOT__l2__DOT__read_outmem_index[0]),16);
        vcdp->fullBus(c+1114,(vlTOPp->top__DOT__l2__DOT__read_outmem_index[1]),16);
        vcdp->fullBus(c+1115,(vlTOPp->top__DOT__l2__DOT__read_outmem_index[2]),16);
        vcdp->fullBus(c+1137,(0U),16);
        __Vtemp17[0U] = 0x5f4d454dU;
        __Vtemp17[1U] = 0x204f5554U;
        __Vtemp17[2U] = 0x4f4f4c31U;
        __Vtemp17[3U] = 0x4d415850U;
        vcdp->fullArray(c+1145,(__Vtemp17),128);
        vcdp->fullBus(c+1177,(vlTOPp->top__DOT__l2__DOT__read_outmem_index
                              [2U]),16);
        vcdp->fullBus(c+1185,(vlTOPp->top__DOT__l2__DOT__read_outmem_index
                              [1U]),16);
        vcdp->fullBus(c+1193,(vlTOPp->top__DOT__l2__DOT__read_outmem_index
                              [0U]),16);
    }
}
