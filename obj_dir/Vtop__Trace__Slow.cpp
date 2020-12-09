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
        vcdp->declBit(c+873,"clk", false,-1);
        vcdp->declQuad(c+881,"input_data", false,-1, 63,0);
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+897+i*1,"input_index", true,(i+0), 15,0);}}
        vcdp->declBit(c+929,"input_write_act", false,-1);
        vcdp->declBit(c+937,"input_write_weights", false,-1);
        vcdp->declBit(c+945,"input_write_bias", false,-1);
        vcdp->declBit(c+953,"compute", false,-1);
        vcdp->declBit(c+961,"reset", false,-1);
        vcdp->declBit(c+873,"top clk", false,-1);
        vcdp->declQuad(c+881,"top input_data", false,-1, 63,0);
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+897+i*1,"top input_index", true,(i+0), 15,0);}}
        vcdp->declBit(c+929,"top input_write_act", false,-1);
        vcdp->declBit(c+937,"top input_write_weights", false,-1);
        vcdp->declBit(c+945,"top input_write_bias", false,-1);
        vcdp->declBit(c+953,"top compute", false,-1);
        vcdp->declBit(c+961,"top reset", false,-1);
        vcdp->declBus(c+1001,"top DATA_SIZE", false,-1, 31,0);
        vcdp->declBus(c+1009,"top l1_NUM_INPUT", false,-1, 31,0);
        vcdp->declBus(c+1017,"top l1_INPUT_DIM", false,-1, 31,0);
        vcdp->declBus(c+1025,"top l1_NUM_OUTPUT", false,-1, 31,0);
        vcdp->declBus(c+1033,"top L1_KERNEL_DIM", false,-1, 31,0);
        vcdp->declBus(c+1025,"top l2_NUM_INPUT", false,-1, 31,0);
        vcdp->declBus(c+1041,"top l2_INPUT_DIM", false,-1, 31,0);
        vcdp->declBus(c+1049,"top L2_KERNEL_DIM", false,-1, 31,0);
        vcdp->declQuad(c+1,"top l1_outmem_2_l2_inmem_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+17+i*1,"top scheduler_2_l1_index", true,(i+0), 15,0);}}
        vcdp->declBit(c+217,"top scheduler_2_l2_inmem_wantwrite", false,-1);
        vcdp->declBit(c+41,"top scheduler_2_input_start", false,-1);
        vcdp->declBit(c+225,"top input_2_scheduler_done", false,-1);
        vcdp->declBit(c+233,"top l2_compute_start", false,-1);
        vcdp->declBit(c+241,"top l2_compute_done", false,-1);
        vcdp->declBit(c+873,"top scheduler clk", false,-1);
        vcdp->declBit(c+953,"top scheduler start", false,-1);
        vcdp->declBit(c+961,"top scheduler reset", false,-1);
        vcdp->declBit(c+41,"top scheduler input_compute_start", false,-1);
        vcdp->declBit(c+225,"top scheduler input_compute_done", false,-1);
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+249+i*1,"top scheduler l1_l2_index", true,(i+0), 15,0);}}
        vcdp->declBit(c+217,"top scheduler l2_inmem_wantwrite", false,-1);
        vcdp->declBit(c+233,"top scheduler l2_compute_start", false,-1);
        vcdp->declBit(c+241,"top scheduler l2_compute_done", false,-1);
        vcdp->declBus(c+1001,"top scheduler DATA_SIZE", false,-1, 31,0);
        vcdp->declBus(c+1009,"top scheduler l1_NUM_INPUT", false,-1, 31,0);
        vcdp->declBus(c+1017,"top scheduler l1_INPUT_DIM", false,-1, 31,0);
        vcdp->declBus(c+1025,"top scheduler l1_NUM_OUTPUT", false,-1, 31,0);
        vcdp->declBus(c+1033,"top scheduler L1_KERNEL_DIM", false,-1, 31,0);
        vcdp->declBus(c+1025,"top scheduler l2_NUM_INPUT", false,-1, 31,0);
        vcdp->declBus(c+1041,"top scheduler l2_INPUT_DIM", false,-1, 31,0);
        vcdp->declBus(c+1049,"top scheduler L2_KERNEL_DIM", false,-1, 31,0);
        vcdp->declBus(c+49,"top scheduler state", false,-1, 15,0);
        vcdp->declArray(c+1057,"top l1 NAME", false,-1, 87,0);
        vcdp->declBus(c+1009,"top l1 NUM_INPUTS", false,-1, 31,0);
        vcdp->declBus(c+1017,"top l1 INPUT_DIM", false,-1, 31,0);
        vcdp->declBus(c+1025,"top l1 NUM_OUTPUTS", false,-1, 31,0);
        vcdp->declBus(c+1033,"top l1 KERNEL_DIM", false,-1, 31,0);
        vcdp->declBus(c+1001,"top l1 DATA_SIZE", false,-1, 31,0);
        vcdp->declBus(c+1041,"top l1 OUTPUT_DIM", false,-1, 31,0);
        vcdp->declBit(c+873,"top l1 clk", false,-1);
        vcdp->declQuad(c+1,"top l1 outmem_out_data", false,-1, 63,0);
        vcdp->declBit(c+929,"top l1 want_write_act", false,-1);
        vcdp->declBit(c+937,"top l1 want_write_weights", false,-1);
        vcdp->declBit(c+945,"top l1 want_write_bias", false,-1);
        vcdp->declQuad(c+881,"top l1 write_data", false,-1, 63,0);
        vcdp->declBus(c+969,"top l1 in_index3", false,-1, 15,0);
        vcdp->declBus(c+977,"top l1 in_index2", false,-1, 15,0);
        vcdp->declBus(c+985,"top l1 in_index1", false,-1, 15,0);
        vcdp->declBus(c+993,"top l1 in_index0", false,-1, 15,0);
        vcdp->declBit(c+41,"top l1 compute", false,-1);
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+57+i*1,"top l1 read_outmem_index", true,(i+0), 15,0);}}
        vcdp->declBit(c+225,"top l1 output_valid", false,-1);
        vcdp->declQuad(c+273,"top l1 act_out_data", false,-1, 63,0);
        vcdp->declQuad(c+289,"top l1 weights_out_data", false,-1, 63,0);
        vcdp->declQuad(c+305,"top l1 bias_out_data", false,-1, 63,0);
        vcdp->declQuad(c+321,"top l1 outmem_write_data", false,-1, 63,0);
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+337+i*1,"top l1 weight_read_index", true,(i+0), 15,0);}}
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+369+i*1,"top l1 act_read_index", true,(i+0), 15,0);}}
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+393+i*1,"top l1 outmem_index", true,(i+0), 15,0);}}
        vcdp->declBit(c+81,"top l1 outmem_want_write", false,-1);
        vcdp->declBus(c+89,"top l1 state", false,-1, 15,0);
        vcdp->declBus(c+1081,"top l1 activation DEBUG", false,-1, 31,0);
        vcdp->declArray(c+1089,"top l1 activation NAME", false,-1, 151,0);
        vcdp->declBus(c+1009,"top l1 activation ENTRY_NUM", false,-1, 31,0);
        vcdp->declBus(c+1017,"top l1 activation DIM", false,-1, 31,0);
        vcdp->declBus(c+1001,"top l1 activation DATA_SIZE", false,-1, 31,0);
        vcdp->declBit(c+873,"top l1 activation clk", false,-1);
        vcdp->declQuad(c+273,"top l1 activation out_data", false,-1, 63,0);
        vcdp->declBit(c+929,"top l1 activation write", false,-1);
        vcdp->declBus(c+977,"top l1 activation index_entry", false,-1, 15,0);
        vcdp->declBus(c+985,"top l1 activation index_y", false,-1, 15,0);
        vcdp->declBus(c+993,"top l1 activation index_x", false,-1, 15,0);
        vcdp->declQuad(c+881,"top l1 activation in_data", false,-1, 63,0);
        vcdp->declBus(c+417,"top l1 activation read_index_entry", false,-1, 15,0);
        vcdp->declBus(c+425,"top l1 activation read_index_y", false,-1, 15,0);
        vcdp->declBus(c+433,"top l1 activation read_index_x", false,-1, 15,0);
        vcdp->declBus(c+1081,"top l1 weights DEBUG", false,-1, 31,0);
        vcdp->declArray(c+1129,"top l1 weights NAME", false,-1, 175,0);
        vcdp->declBus(c+1009,"top l1 weights NUM_INPUTS", false,-1, 31,0);
        vcdp->declBus(c+1025,"top l1 weights NUM_OUTPUTS", false,-1, 31,0);
        vcdp->declBus(c+1033,"top l1 weights DIM", false,-1, 31,0);
        vcdp->declBus(c+1001,"top l1 weights DATA_SIZE", false,-1, 31,0);
        vcdp->declBit(c+873,"top l1 weights clk", false,-1);
        vcdp->declQuad(c+289,"top l1 weights out_data_weight", false,-1, 63,0);
        vcdp->declQuad(c+305,"top l1 weights out_data_bias", false,-1, 63,0);
        vcdp->declBit(c+937,"top l1 weights weight_write", false,-1);
        vcdp->declBit(c+945,"top l1 weights bias_write", false,-1);
        vcdp->declBus(c+969,"top l1 weights index_in", false,-1, 15,0);
        vcdp->declBus(c+977,"top l1 weights index_out", false,-1, 15,0);
        vcdp->declBus(c+985,"top l1 weights index_k_y", false,-1, 15,0);
        vcdp->declBus(c+993,"top l1 weights index_k_x", false,-1, 15,0);
        vcdp->declBus(c+441,"top l1 weights read_index_in", false,-1, 15,0);
        vcdp->declBus(c+449,"top l1 weights read_index_out", false,-1, 15,0);
        vcdp->declBus(c+457,"top l1 weights read_index_y", false,-1, 15,0);
        vcdp->declBus(c+465,"top l1 weights read_index_x", false,-1, 15,0);
        vcdp->declBus(c+449,"top l1 weights read_index_bias", false,-1, 15,0);
        vcdp->declQuad(c+881,"top l1 weights in_data", false,-1, 63,0);
        {int i; for (i=0; i<16; i++) {
                vcdp->declQuad(c+473+i*2,"top l1 weights mem_bias", true,(i+0), 63,0);}}
        vcdp->declBus(c+1081,"top l1 out_memory DEBUG", false,-1, 31,0);
        vcdp->declArray(c+1177,"top l1 out_memory NAME", false,-1, 151,0);
        vcdp->declBus(c+1025,"top l1 out_memory ENTRY_NUM", false,-1, 31,0);
        vcdp->declBus(c+1041,"top l1 out_memory DIM", false,-1, 31,0);
        vcdp->declBus(c+1001,"top l1 out_memory DATA_SIZE", false,-1, 31,0);
        vcdp->declBit(c+873,"top l1 out_memory clk", false,-1);
        vcdp->declQuad(c+1,"top l1 out_memory out_data", false,-1, 63,0);
        vcdp->declBit(c+81,"top l1 out_memory write", false,-1);
        vcdp->declBus(c+729,"top l1 out_memory index_entry", false,-1, 15,0);
        vcdp->declBus(c+737,"top l1 out_memory index_y", false,-1, 15,0);
        vcdp->declBus(c+745,"top l1 out_memory index_x", false,-1, 15,0);
        vcdp->declQuad(c+321,"top l1 out_memory in_data", false,-1, 63,0);
        vcdp->declBus(c+97,"top l1 out_memory read_index_entry", false,-1, 15,0);
        vcdp->declBus(c+105,"top l1 out_memory read_index_y", false,-1, 15,0);
        vcdp->declBus(c+113,"top l1 out_memory read_index_x", false,-1, 15,0);
        vcdp->declQuad(c+1217,"top l2 NAME", false,-1, 63,0);
        vcdp->declBus(c+1025,"top l2 NUM_INPUTS", false,-1, 31,0);
        vcdp->declBus(c+1041,"top l2 INPUT_DIM", false,-1, 31,0);
        vcdp->declBus(c+1049,"top l2 KERNEL_DIM", false,-1, 31,0);
        vcdp->declBus(c+1001,"top l2 DATA_SIZE", false,-1, 31,0);
        vcdp->declBus(c+1049,"top l2 STRIDE", false,-1, 31,0);
        vcdp->declBus(c+1233,"top l2 OUTPUT_DIM", false,-1, 31,0);
        vcdp->declBit(c+873,"top l2 clk", false,-1);
        vcdp->declBit(c+217,"top l2 inmem_want_write", false,-1);
        vcdp->declQuad(c+1241,"top l2 read_data", false,-1, 63,0);
        vcdp->declQuad(c+1,"top l2 inmem_write_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+121+i*1,"top l2 inmem_write_index", true,(i+0), 15,0);}}
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+1257+i*1,"top l2 outmem_read_index", true,(i+0), 15,0);}}
        vcdp->declBit(c+233,"top l2 compute", false,-1);
        vcdp->declBit(c+241,"top l2 output_valid", false,-1);
        vcdp->declQuad(c+753,"top l2 outmem_read_data", false,-1, 63,0);
        vcdp->declQuad(c+145,"top l2 outmem_write_data", false,-1, 63,0);
        vcdp->declBit(c+769,"top l2 outmem_want_write", false,-1);
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+777+i*1,"top l2 outmem_write_index", true,(i+0), 15,0);}}
        vcdp->declQuad(c+161,"top l2 inmem_read_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+801+i*1,"top l2 inmem_read_index", true,(i+0), 15,0);}}
        vcdp->declBus(c+177,"top l2 state", false,-1, 15,0);
        vcdp->declBus(c+185,"top l2 k_state", false,-1, 15,0);
        vcdp->declBus(c+1081,"top l2 in_memory DEBUG", false,-1, 31,0);
        vcdp->declArray(c+1281,"top l2 in_memory NAME", false,-1, 119,0);
        vcdp->declBus(c+1025,"top l2 in_memory ENTRY_NUM", false,-1, 31,0);
        vcdp->declBus(c+1041,"top l2 in_memory DIM", false,-1, 31,0);
        vcdp->declBus(c+1001,"top l2 in_memory DATA_SIZE", false,-1, 31,0);
        vcdp->declBit(c+873,"top l2 in_memory clk", false,-1);
        vcdp->declQuad(c+161,"top l2 in_memory out_data", false,-1, 63,0);
        vcdp->declBit(c+217,"top l2 in_memory write", false,-1);
        vcdp->declBus(c+193,"top l2 in_memory index_entry", false,-1, 15,0);
        vcdp->declBus(c+201,"top l2 in_memory index_y", false,-1, 15,0);
        vcdp->declBus(c+209,"top l2 in_memory index_x", false,-1, 15,0);
        vcdp->declQuad(c+1,"top l2 in_memory in_data", false,-1, 63,0);
        vcdp->declBus(c+825,"top l2 in_memory read_index_entry", false,-1, 15,0);
        vcdp->declBus(c+833,"top l2 in_memory read_index_y", false,-1, 15,0);
        vcdp->declBus(c+841,"top l2 in_memory read_index_x", false,-1, 15,0);
        vcdp->declBus(c+1009,"top l2 out_memory DEBUG", false,-1, 31,0);
        vcdp->declArray(c+1313,"top l2 out_memory NAME", false,-1, 127,0);
        vcdp->declBus(c+1025,"top l2 out_memory ENTRY_NUM", false,-1, 31,0);
        vcdp->declBus(c+1345,"top l2 out_memory DIM", false,-1, 31,0);
        vcdp->declBus(c+1001,"top l2 out_memory DATA_SIZE", false,-1, 31,0);
        vcdp->declBit(c+873,"top l2 out_memory clk", false,-1);
        vcdp->declQuad(c+753,"top l2 out_memory out_data", false,-1, 63,0);
        vcdp->declBit(c+769,"top l2 out_memory write", false,-1);
        vcdp->declBus(c+849,"top l2 out_memory index_entry", false,-1, 15,0);
        vcdp->declBus(c+857,"top l2 out_memory index_y", false,-1, 15,0);
        vcdp->declBus(c+865,"top l2 out_memory index_x", false,-1, 15,0);
        vcdp->declQuad(c+145,"top l2 out_memory in_data", false,-1, 63,0);
        vcdp->declBus(c+1353,"top l2 out_memory read_index_entry", false,-1, 15,0);
        vcdp->declBus(c+1361,"top l2 out_memory read_index_y", false,-1, 15,0);
        vcdp->declBus(c+1369,"top l2 out_memory read_index_x", false,-1, 15,0);
    }
}

void Vtop::traceFullThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp17[3];
    WData/*159:0*/ __Vtemp18[5];
    WData/*191:0*/ __Vtemp19[6];
    WData/*159:0*/ __Vtemp20[5];
    WData/*127:0*/ __Vtemp21[4];
    WData/*127:0*/ __Vtemp22[4];
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
        vcdp->fullBus(c+121,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index[0]),16);
        vcdp->fullBus(c+122,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index[1]),16);
        vcdp->fullBus(c+123,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index[2]),16);
        vcdp->fullQuad(c+145,(vlTOPp->top__DOT__l2__DOT__outmem_write_data),64);
        vcdp->fullQuad(c+161,(vlTOPp->top__DOT__l2__DOT__inmem_read_data),64);
        vcdp->fullBus(c+177,(vlTOPp->top__DOT__l2__DOT__state),16);
        vcdp->fullBus(c+185,(vlTOPp->top__DOT__l2__DOT__k_state),16);
        vcdp->fullBus(c+193,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index
                             [2U]),16);
        vcdp->fullBus(c+201,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index
                             [1U]),16);
        vcdp->fullBus(c+209,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index
                             [0U]),16);
        vcdp->fullBit(c+217,(vlTOPp->top__DOT__scheduler_2_l2_inmem_wantwrite));
        vcdp->fullBit(c+225,(vlTOPp->top__DOT__input_2_scheduler_done));
        vcdp->fullBit(c+233,(vlTOPp->top__DOT__l2_compute_start));
        vcdp->fullBit(c+241,(vlTOPp->top__DOT__l2_compute_done));
        vcdp->fullBus(c+249,(vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index[0]),16);
        vcdp->fullBus(c+250,(vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index[1]),16);
        vcdp->fullBus(c+251,(vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index[2]),16);
        vcdp->fullQuad(c+273,(((0x1bU >= (0x1fU & vlTOPp->top__DOT__l1__DOT__act_read_index
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
        vcdp->fullQuad(c+289,(((2U >= (3U & vlTOPp->top__DOT__l1__DOT__weight_read_index
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
        vcdp->fullQuad(c+305,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias
                              [(0xfU & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                [2U])]),64);
        vcdp->fullQuad(c+321,(vlTOPp->top__DOT__l1__DOT__outmem_write_data),64);
        vcdp->fullBus(c+337,(vlTOPp->top__DOT__l1__DOT__weight_read_index[0]),16);
        vcdp->fullBus(c+338,(vlTOPp->top__DOT__l1__DOT__weight_read_index[1]),16);
        vcdp->fullBus(c+339,(vlTOPp->top__DOT__l1__DOT__weight_read_index[2]),16);
        vcdp->fullBus(c+340,(vlTOPp->top__DOT__l1__DOT__weight_read_index[3]),16);
        vcdp->fullBus(c+369,(vlTOPp->top__DOT__l1__DOT__act_read_index[0]),16);
        vcdp->fullBus(c+370,(vlTOPp->top__DOT__l1__DOT__act_read_index[1]),16);
        vcdp->fullBus(c+371,(vlTOPp->top__DOT__l1__DOT__act_read_index[2]),16);
        vcdp->fullBus(c+393,(vlTOPp->top__DOT__l1__DOT__outmem_index[0]),16);
        vcdp->fullBus(c+394,(vlTOPp->top__DOT__l1__DOT__outmem_index[1]),16);
        vcdp->fullBus(c+395,(vlTOPp->top__DOT__l1__DOT__outmem_index[2]),16);
        vcdp->fullBus(c+417,(vlTOPp->top__DOT__l1__DOT__act_read_index
                             [2U]),16);
        vcdp->fullBus(c+425,(vlTOPp->top__DOT__l1__DOT__act_read_index
                             [1U]),16);
        vcdp->fullBus(c+433,(vlTOPp->top__DOT__l1__DOT__act_read_index
                             [0U]),16);
        vcdp->fullBus(c+441,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                             [3U]),16);
        vcdp->fullBus(c+449,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                             [2U]),16);
        vcdp->fullBus(c+457,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                             [1U]),16);
        vcdp->fullBus(c+465,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                             [0U]),16);
        vcdp->fullQuad(c+473,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[0]),64);
        vcdp->fullQuad(c+475,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[1]),64);
        vcdp->fullQuad(c+477,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[2]),64);
        vcdp->fullQuad(c+479,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[3]),64);
        vcdp->fullQuad(c+481,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[4]),64);
        vcdp->fullQuad(c+483,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[5]),64);
        vcdp->fullQuad(c+485,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[6]),64);
        vcdp->fullQuad(c+487,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[7]),64);
        vcdp->fullQuad(c+489,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[8]),64);
        vcdp->fullQuad(c+491,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[9]),64);
        vcdp->fullQuad(c+493,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[10]),64);
        vcdp->fullQuad(c+495,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[11]),64);
        vcdp->fullQuad(c+497,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[12]),64);
        vcdp->fullQuad(c+499,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[13]),64);
        vcdp->fullQuad(c+501,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[14]),64);
        vcdp->fullQuad(c+503,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[15]),64);
        vcdp->fullBus(c+729,(vlTOPp->top__DOT__l1__DOT__outmem_index
                             [2U]),16);
        vcdp->fullBus(c+737,(vlTOPp->top__DOT__l1__DOT__outmem_index
                             [1U]),16);
        vcdp->fullBus(c+745,(vlTOPp->top__DOT__l1__DOT__outmem_index
                             [0U]),16);
        vcdp->fullQuad(c+753,(((0x18U >= (0x1fU & vlTOPp->top__DOT__l2__DOT__outmem_read_index
                                          [0U])) ? 
                               vlTOPp->top__DOT__l2__DOT__out_memory__DOT__mem
                               [(0xfU & vlTOPp->top__DOT__l2__DOT__outmem_read_index
                                 [2U])][((0x18U >= 
                                          (0x1fU & 
                                           vlTOPp->top__DOT__l2__DOT__outmem_read_index
                                           [1U])) ? 
                                         (0x1fU & vlTOPp->top__DOT__l2__DOT__outmem_read_index
                                          [1U]) : 0U)]
                               [(0x1fU & vlTOPp->top__DOT__l2__DOT__outmem_read_index
                                 [0U])] : VL_ULL(0))),64);
        vcdp->fullBit(c+769,(vlTOPp->top__DOT__l2__DOT__outmem_want_write));
        vcdp->fullBus(c+777,(vlTOPp->top__DOT__l2__DOT__outmem_write_index[0]),16);
        vcdp->fullBus(c+778,(vlTOPp->top__DOT__l2__DOT__outmem_write_index[1]),16);
        vcdp->fullBus(c+779,(vlTOPp->top__DOT__l2__DOT__outmem_write_index[2]),16);
        vcdp->fullBus(c+801,(vlTOPp->top__DOT__l2__DOT__inmem_read_index[0]),16);
        vcdp->fullBus(c+802,(vlTOPp->top__DOT__l2__DOT__inmem_read_index[1]),16);
        vcdp->fullBus(c+803,(vlTOPp->top__DOT__l2__DOT__inmem_read_index[2]),16);
        vcdp->fullBus(c+825,(vlTOPp->top__DOT__l2__DOT__inmem_read_index
                             [2U]),16);
        vcdp->fullBus(c+833,(vlTOPp->top__DOT__l2__DOT__inmem_read_index
                             [1U]),16);
        vcdp->fullBus(c+841,(vlTOPp->top__DOT__l2__DOT__inmem_read_index
                             [0U]),16);
        vcdp->fullBus(c+849,(vlTOPp->top__DOT__l2__DOT__outmem_write_index
                             [2U]),16);
        vcdp->fullBus(c+857,(vlTOPp->top__DOT__l2__DOT__outmem_write_index
                             [1U]),16);
        vcdp->fullBus(c+865,(vlTOPp->top__DOT__l2__DOT__outmem_write_index
                             [0U]),16);
        vcdp->fullBit(c+873,(vlTOPp->clk));
        vcdp->fullQuad(c+881,(vlTOPp->input_data),64);
        vcdp->fullBus(c+897,(vlTOPp->input_index[0]),16);
        vcdp->fullBus(c+898,(vlTOPp->input_index[1]),16);
        vcdp->fullBus(c+899,(vlTOPp->input_index[2]),16);
        vcdp->fullBus(c+900,(vlTOPp->input_index[3]),16);
        vcdp->fullBit(c+929,(vlTOPp->input_write_act));
        vcdp->fullBit(c+937,(vlTOPp->input_write_weights));
        vcdp->fullBit(c+945,(vlTOPp->input_write_bias));
        vcdp->fullBit(c+953,(vlTOPp->compute));
        vcdp->fullBit(c+961,(vlTOPp->reset));
        vcdp->fullBus(c+969,(vlTOPp->input_index[3U]),16);
        vcdp->fullBus(c+977,(vlTOPp->input_index[2U]),16);
        vcdp->fullBus(c+985,(vlTOPp->input_index[1U]),16);
        vcdp->fullBus(c+993,(vlTOPp->input_index[0U]),16);
        vcdp->fullBus(c+1001,(0x40U),32);
        vcdp->fullBus(c+1009,(1U),32);
        vcdp->fullBus(c+1017,(0x1cU),32);
        vcdp->fullBus(c+1025,(0x10U),32);
        vcdp->fullBus(c+1033,(3U),32);
        vcdp->fullBus(c+1041,(0x1aU),32);
        vcdp->fullBus(c+1049,(2U),32);
        __Vtemp17[0U] = 0x41594552U;
        __Vtemp17[1U] = 0x5554204cU;
        __Vtemp17[2U] = 0x494e50U;
        vcdp->fullArray(c+1057,(__Vtemp17),88);
        vcdp->fullBus(c+1081,(0U),32);
        __Vtemp18[0U] = 0x5f4d454dU;
        __Vtemp18[1U] = 0x20414354U;
        __Vtemp18[2U] = 0x41594552U;
        __Vtemp18[3U] = 0x5554204cU;
        __Vtemp18[4U] = 0x494e50U;
        vcdp->fullArray(c+1089,(__Vtemp18),152);
        __Vtemp19[0U] = 0x5f4d454dU;
        __Vtemp19[1U] = 0x49474854U;
        __Vtemp19[2U] = 0x52205745U;
        __Vtemp19[3U] = 0x4c415945U;
        __Vtemp19[4U] = 0x50555420U;
        __Vtemp19[5U] = 0x494eU;
        vcdp->fullArray(c+1129,(__Vtemp19),176);
        __Vtemp20[0U] = 0x5f4d454dU;
        __Vtemp20[1U] = 0x204f5554U;
        __Vtemp20[2U] = 0x41594552U;
        __Vtemp20[3U] = 0x5554204cU;
        __Vtemp20[4U] = 0x494e50U;
        vcdp->fullArray(c+1177,(__Vtemp20),152);
        vcdp->fullQuad(c+1217,(VL_ULL(0x4d4158504f4f4c31)),64);
        vcdp->fullBus(c+1233,(0xdU),32);
        vcdp->fullQuad(c+1241,(vlTOPp->top__DOT__l2__DOT__read_data),64);
        vcdp->fullBus(c+1257,(vlTOPp->top__DOT__l2__DOT__outmem_read_index[0]),16);
        vcdp->fullBus(c+1258,(vlTOPp->top__DOT__l2__DOT__outmem_read_index[1]),16);
        vcdp->fullBus(c+1259,(vlTOPp->top__DOT__l2__DOT__outmem_read_index[2]),16);
        __Vtemp21[0U] = 0x5f4d454dU;
        __Vtemp21[1U] = 0x3120494eU;
        __Vtemp21[2U] = 0x504f4f4cU;
        __Vtemp21[3U] = 0x4d4158U;
        vcdp->fullArray(c+1281,(__Vtemp21),120);
        __Vtemp22[0U] = 0x5f4d454dU;
        __Vtemp22[1U] = 0x204f5554U;
        __Vtemp22[2U] = 0x4f4f4c31U;
        __Vtemp22[3U] = 0x4d415850U;
        vcdp->fullArray(c+1313,(__Vtemp22),128);
        vcdp->fullBus(c+1345,(0x19U),32);
        vcdp->fullBus(c+1353,(vlTOPp->top__DOT__l2__DOT__outmem_read_index
                              [2U]),16);
        vcdp->fullBus(c+1361,(vlTOPp->top__DOT__l2__DOT__outmem_read_index
                              [1U]),16);
        vcdp->fullBus(c+1369,(vlTOPp->top__DOT__l2__DOT__outmem_read_index
                              [0U]),16);
    }
}
