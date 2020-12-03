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
        vcdp->declBit(c+14873,"clk", false,-1);
        vcdp->declQuad(c+14881,"input_data", false,-1, 63,0);
        vcdp->declBit(c+14897,"input_index3", false,-1);
        vcdp->declBit(c+14905,"input_index2", false,-1);
        vcdp->declBit(c+14913,"input_index1", false,-1);
        vcdp->declBit(c+14921,"input_index0", false,-1);
        vcdp->declBit(c+14929,"input_write_act", false,-1);
        vcdp->declBit(c+14937,"input_write_weights", false,-1);
        vcdp->declBit(c+14873,"top clk", false,-1);
        vcdp->declQuad(c+14881,"top input_data", false,-1, 63,0);
        vcdp->declBit(c+14897,"top input_index3", false,-1);
        vcdp->declBit(c+14905,"top input_index2", false,-1);
        vcdp->declBit(c+14913,"top input_index1", false,-1);
        vcdp->declBit(c+14921,"top input_index0", false,-1);
        vcdp->declBit(c+14929,"top input_write_act", false,-1);
        vcdp->declBit(c+14937,"top input_write_weights", false,-1);
        vcdp->declBus(c+14977,"top DATA_SIZE", false,-1, 31,0);
        vcdp->declQuad(c+14985,"top out_data", false,-1, 63,0);
        vcdp->declBit(c+15001,"top output_valid", false,-1);
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+1+i*1,"top L1_to_L2_out_index", true,(i+0), 15,0);}}
        vcdp->declBit(c+14873,"top l1 clk", false,-1);
        vcdp->declQuad(c+14985,"top l1 out_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+15009+i*1,"top l1 out_index", true,(i+0), 15,0);}}
        vcdp->declBit(c+15001,"top l1 output_valid", false,-1);
        vcdp->declBit(c+14929,"top l1 want_write_act", false,-1);
        vcdp->declBit(c+14937,"top l1 want_write_weights", false,-1);
        vcdp->declQuad(c+14881,"top l1 write_data", false,-1, 63,0);
        vcdp->declBit(c+14897,"top l1 in_index3", false,-1);
        vcdp->declBit(c+14905,"top l1 in_index2", false,-1);
        vcdp->declBit(c+14913,"top l1 in_index1", false,-1);
        vcdp->declBit(c+14921,"top l1 in_index0", false,-1);
        vcdp->declArray(c+15033,"top l1 NAME", false,-1, 87,0);
        vcdp->declBus(c+15057,"top l1 NUM_INPUTS", false,-1, 31,0);
        vcdp->declBus(c+15065,"top l1 INPUT_DIM", false,-1, 31,0);
        vcdp->declBus(c+15073,"top l1 NUM_OUTPUTS", false,-1, 31,0);
        vcdp->declBus(c+15081,"top l1 KERNEL_DIM", false,-1, 31,0);
        vcdp->declBus(c+14977,"top l1 DATA_SIZE", false,-1, 31,0);
        vcdp->declQuad(c+14945,"top l1 act_out_data", false,-1, 63,0);
        vcdp->declQuad(c+14961,"top l1 weights_out_data", false,-1, 63,0);
        vcdp->declBit(c+14873,"top l1 activation clk", false,-1);
        vcdp->declQuad(c+14945,"top l1 activation out_data", false,-1, 63,0);
        vcdp->declBit(c+14929,"top l1 activation write", false,-1);
        vcdp->declBit(c+14905,"top l1 activation index_entry", false,-1);
        vcdp->declBit(c+14913,"top l1 activation index_y", false,-1);
        vcdp->declBit(c+14921,"top l1 activation index_x", false,-1);
        vcdp->declQuad(c+14881,"top l1 activation in_data", false,-1, 63,0);
        vcdp->declArray(c+15089,"top l1 activation NAME", false,-1, 151,0);
        vcdp->declBus(c+15057,"top l1 activation ENTRY_NUM", false,-1, 31,0);
        vcdp->declBus(c+15065,"top l1 activation DIM", false,-1, 31,0);
        vcdp->declBus(c+14977,"top l1 activation DATA_SIZE", false,-1, 31,0);
        vcdp->declArray(c+25,"top l1 activation mem", false,-1, 50175,0);
        vcdp->declBit(c+14873,"top l1 weights clk", false,-1);
        vcdp->declQuad(c+14961,"top l1 weights out_data", false,-1, 63,0);
        vcdp->declBit(c+14937,"top l1 weights write", false,-1);
        vcdp->declBit(c+14897,"top l1 weights index_in", false,-1);
        vcdp->declBit(c+14905,"top l1 weights index_out", false,-1);
        vcdp->declBit(c+14913,"top l1 weights index_k_y", false,-1);
        vcdp->declBit(c+14921,"top l1 weights index_k_x", false,-1);
        vcdp->declQuad(c+14881,"top l1 weights in_data", false,-1, 63,0);
        vcdp->declArray(c+15129,"top l1 weights NAME", false,-1, 175,0);
        vcdp->declBus(c+15057,"top l1 weights NUM_INPUTS", false,-1, 31,0);
        vcdp->declBus(c+15073,"top l1 weights NUM_OUTPUTS", false,-1, 31,0);
        vcdp->declBus(c+15081,"top l1 weights DIM", false,-1, 31,0);
        vcdp->declBus(c+14977,"top l1 weights DATA_SIZE", false,-1, 31,0);
        vcdp->declArray(c+12569,"top l1 weights mem", false,-1, 9215,0);
    }
}

void Vtop::traceFullThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp1[3];
    WData/*159:0*/ __Vtemp2[5];
    WData/*191:0*/ __Vtemp3[6];
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->top__DOT__L1_to_L2_out_index[0]),16);
        vcdp->fullBus(c+2,(vlTOPp->top__DOT__L1_to_L2_out_index[1]),16);
        vcdp->fullBus(c+3,(vlTOPp->top__DOT__L1_to_L2_out_index[2]),16);
        vcdp->fullArray(c+25,(vlTOPp->top__DOT__l1__DOT__activation__DOT__mem),50176);
        vcdp->fullArray(c+12569,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem),9216);
        vcdp->fullBit(c+14873,(vlTOPp->clk));
        vcdp->fullQuad(c+14881,(vlTOPp->input_data),64);
        vcdp->fullBit(c+14897,(vlTOPp->input_index3));
        vcdp->fullBit(c+14905,(vlTOPp->input_index2));
        vcdp->fullBit(c+14913,(vlTOPp->input_index1));
        vcdp->fullBit(c+14921,(vlTOPp->input_index0));
        vcdp->fullBit(c+14929,(vlTOPp->input_write_act));
        vcdp->fullBit(c+14937,(vlTOPp->input_write_weights));
        vcdp->fullQuad(c+14945,(((0xc3ffU >= (0xffffU 
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
                                  ? (((0U == (0x1fU 
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
                                                 + 
                                                 (0x7ffU 
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
                                                 - 
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
        vcdp->fullQuad(c+14961,(((0x23ffU >= (0x3fffU 
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
                                                 + 
                                                 (0xffU 
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
                                                 + 
                                                 (0xffU 
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
                                                 - 
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
        vcdp->fullBus(c+14977,(0x40U),32);
        vcdp->fullQuad(c+14985,(vlTOPp->top__DOT__out_data),64);
        vcdp->fullBit(c+15001,(vlTOPp->top__DOT__output_valid));
        vcdp->fullBus(c+15009,(vlTOPp->top__DOT____Vcellout__l1__out_index[0]),16);
        vcdp->fullBus(c+15010,(vlTOPp->top__DOT____Vcellout__l1__out_index[1]),16);
        vcdp->fullBus(c+15011,(vlTOPp->top__DOT____Vcellout__l1__out_index[2]),16);
        __Vtemp1[0U] = 0x41594552U;
        __Vtemp1[1U] = 0x5554204cU;
        __Vtemp1[2U] = 0x494e50U;
        vcdp->fullArray(c+15033,(__Vtemp1),88);
        vcdp->fullBus(c+15057,(1U),32);
        vcdp->fullBus(c+15065,(0x1cU),32);
        vcdp->fullBus(c+15073,(0x10U),32);
        vcdp->fullBus(c+15081,(3U),32);
        __Vtemp2[0U] = 0x5f4d454dU;
        __Vtemp2[1U] = 0x20414354U;
        __Vtemp2[2U] = 0x41594552U;
        __Vtemp2[3U] = 0x5554204cU;
        __Vtemp2[4U] = 0x494e50U;
        vcdp->fullArray(c+15089,(__Vtemp2),152);
        __Vtemp3[0U] = 0x5f4d454dU;
        __Vtemp3[1U] = 0x49474854U;
        __Vtemp3[2U] = 0x52205745U;
        __Vtemp3[3U] = 0x4c415945U;
        __Vtemp3[4U] = 0x50555420U;
        __Vtemp3[5U] = 0x494eU;
        vcdp->fullArray(c+15129,(__Vtemp3),176);
    }
}
