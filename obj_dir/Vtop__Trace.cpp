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
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
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
        vcdp->chgQuad(c+1,(((0x19U >= (0x1fU & vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                       [0U])) ? vlTOPp->top__DOT__l1__DOT__out_memory__DOT__mem
                            [(0xfU & vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                              [2U])][((0x19U >= (0x1fU 
                                                 & vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                                 [1U]))
                                       ? (0x1fU & vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                                          [1U]) : 0U)]
                            [(0x1fU & vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                              [0U])] : VL_ULL(0))),64);
        vcdp->chgQuad(c+17,(((0x18U >= (0x1fU & vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index
                                        [0U])) ? vlTOPp->top__DOT__l2__DOT__out_memory__DOT__mem
                             [(0xfU & vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index
                               [2U])][((0x18U >= (0x1fU 
                                                  & vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index
                                                  [1U]))
                                        ? (0x1fU & 
                                           vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index
                                           [1U]) : 0U)]
                             [(0x1fU & vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index
                               [0U])] : VL_ULL(0))),64);
        vcdp->chgQuad(c+33,(((0xaU >= (0xfU & vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index
                                       [0U])) ? vlTOPp->top__DOT__l3__DOT__out_memory__DOT__mem
                             [(0x1fU & vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index
                               [2U])][((0xaU >= (0xfU 
                                                 & vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index
                                                 [1U]))
                                        ? (0xfU & vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index
                                           [1U]) : 0U)]
                             [(0xfU & vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index
                               [0U])] : VL_ULL(0))),64);
        vcdp->chgQuad(c+49,(((9U >= (0xfU & vlTOPp->top__DOT____Vcellinp__l4__outmem_read_index
                                     [0U])) ? vlTOPp->top__DOT__l4__DOT__out_memory__DOT__mem
                             [(0x1fU & vlTOPp->top__DOT____Vcellinp__l4__outmem_read_index
                               [2U])][((9U >= (0xfU 
                                               & vlTOPp->top__DOT____Vcellinp__l4__outmem_read_index
                                               [1U]))
                                        ? (0xfU & vlTOPp->top__DOT____Vcellinp__l4__outmem_read_index
                                           [1U]) : 0U)]
                             [(0xfU & vlTOPp->top__DOT____Vcellinp__l4__outmem_read_index
                               [0U])] : VL_ULL(0))),64);
        vcdp->chgBus(c+65,(vlTOPp->top__DOT__scheduler_2_l1l2_index[0]),16);
        vcdp->chgBus(c+66,(vlTOPp->top__DOT__scheduler_2_l1l2_index[1]),16);
        vcdp->chgBus(c+67,(vlTOPp->top__DOT__scheduler_2_l1l2_index[2]),16);
        vcdp->chgBus(c+89,(vlTOPp->top__DOT__scheduler_2_l2l3_index[0]),16);
        vcdp->chgBus(c+90,(vlTOPp->top__DOT__scheduler_2_l2l3_index[1]),16);
        vcdp->chgBus(c+91,(vlTOPp->top__DOT__scheduler_2_l2l3_index[2]),16);
        vcdp->chgBus(c+92,(vlTOPp->top__DOT__scheduler_2_l2l3_index[3]),16);
        vcdp->chgBus(c+121,(vlTOPp->top__DOT__scheduler_2_l3l4_index[0]),16);
        vcdp->chgBus(c+122,(vlTOPp->top__DOT__scheduler_2_l3l4_index[1]),16);
        vcdp->chgBus(c+123,(vlTOPp->top__DOT__scheduler_2_l3l4_index[2]),16);
        vcdp->chgBus(c+124,(vlTOPp->top__DOT__scheduler_2_l3l4_index[3]),16);
        vcdp->chgBus(c+153,(vlTOPp->top__DOT__scheduler_2_l4_outmem_index[0]),16);
        vcdp->chgBus(c+154,(vlTOPp->top__DOT__scheduler_2_l4_outmem_index[1]),16);
        vcdp->chgBus(c+155,(vlTOPp->top__DOT__scheduler_2_l4_outmem_index[2]),16);
        vcdp->chgBit(c+177,(vlTOPp->top__DOT__scheduler_2_input_start));
        vcdp->chgBus(c+185,(vlTOPp->top__DOT__scheduler__DOT__state),16);
        vcdp->chgBus(c+193,(vlTOPp->top__DOT__scheduler__DOT__cnt),32);
        vcdp->chgBus(c+201,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index[0]),16);
        vcdp->chgBus(c+202,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index[1]),16);
        vcdp->chgBus(c+203,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index[2]),16);
        vcdp->chgBit(c+225,(vlTOPp->top__DOT__l1__DOT__outmem_want_write));
        vcdp->chgBus(c+233,(vlTOPp->top__DOT__l1__DOT__state),16);
        vcdp->chgBus(c+241,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                            [2U]),16);
        vcdp->chgBus(c+249,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                            [1U]),16);
        vcdp->chgBus(c+257,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                            [0U]),16);
        vcdp->chgBus(c+265,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index[0]),16);
        vcdp->chgBus(c+266,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index[1]),16);
        vcdp->chgBus(c+267,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index[2]),16);
        vcdp->chgBus(c+289,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index[0]),16);
        vcdp->chgBus(c+290,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index[1]),16);
        vcdp->chgBus(c+291,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index[2]),16);
        vcdp->chgQuad(c+313,(vlTOPp->top__DOT__l2__DOT__outmem_write_data),64);
        vcdp->chgQuad(c+329,(vlTOPp->top__DOT__l2__DOT__inmem_read_data),64);
        vcdp->chgBus(c+345,(vlTOPp->top__DOT__l2__DOT__state),16);
        vcdp->chgBus(c+353,(vlTOPp->top__DOT__l2__DOT__k_state),16);
        vcdp->chgBus(c+361,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index
                            [2U]),16);
        vcdp->chgBus(c+369,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index
                            [1U]),16);
        vcdp->chgBus(c+377,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index
                            [0U]),16);
        vcdp->chgBus(c+385,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index
                            [2U]),16);
        vcdp->chgBus(c+393,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index
                            [1U]),16);
        vcdp->chgBus(c+401,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index
                            [0U]),16);
        vcdp->chgBus(c+409,(vlTOPp->top__DOT__scheduler_2_l2l3_index
                            [2U]),16);
        vcdp->chgBus(c+417,(vlTOPp->top__DOT__scheduler_2_l2l3_index
                            [1U]),16);
        vcdp->chgBus(c+425,(vlTOPp->top__DOT__scheduler_2_l2l3_index
                            [0U]),16);
        vcdp->chgBus(c+433,(vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index[0]),16);
        vcdp->chgBus(c+434,(vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index[1]),16);
        vcdp->chgBus(c+435,(vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index[2]),16);
        vcdp->chgBit(c+457,(vlTOPp->top__DOT__l3__DOT__outmem_want_write));
        vcdp->chgBus(c+465,(vlTOPp->top__DOT__l3__DOT__state),16);
        vcdp->chgBus(c+473,(vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index
                            [2U]),16);
        vcdp->chgBus(c+481,(vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index
                            [1U]),16);
        vcdp->chgBus(c+489,(vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index
                            [0U]),16);
        vcdp->chgBus(c+497,(vlTOPp->top__DOT____Vcellinp__l4__inmem_write_index[0]),16);
        vcdp->chgBus(c+498,(vlTOPp->top__DOT____Vcellinp__l4__inmem_write_index[1]),16);
        vcdp->chgBus(c+499,(vlTOPp->top__DOT____Vcellinp__l4__inmem_write_index[2]),16);
        vcdp->chgBus(c+521,(vlTOPp->top__DOT____Vcellinp__l4__outmem_read_index[0]),16);
        vcdp->chgBus(c+522,(vlTOPp->top__DOT____Vcellinp__l4__outmem_read_index[1]),16);
        vcdp->chgBus(c+523,(vlTOPp->top__DOT____Vcellinp__l4__outmem_read_index[2]),16);
        vcdp->chgQuad(c+545,(vlTOPp->top__DOT__l4__DOT__outmem_write_data),64);
        vcdp->chgQuad(c+561,(vlTOPp->top__DOT__l4__DOT__inmem_read_data),64);
        vcdp->chgBus(c+577,(vlTOPp->top__DOT__l4__DOT__state),16);
        vcdp->chgBus(c+585,(vlTOPp->top__DOT__l4__DOT__k_state),16);
        vcdp->chgBus(c+593,(vlTOPp->top__DOT____Vcellinp__l4__inmem_write_index
                            [2U]),16);
        vcdp->chgBus(c+601,(vlTOPp->top__DOT____Vcellinp__l4__inmem_write_index
                            [1U]),16);
        vcdp->chgBus(c+609,(vlTOPp->top__DOT____Vcellinp__l4__inmem_write_index
                            [0U]),16);
        vcdp->chgBus(c+617,(vlTOPp->top__DOT____Vcellinp__l4__outmem_read_index
                            [2U]),16);
        vcdp->chgBus(c+625,(vlTOPp->top__DOT____Vcellinp__l4__outmem_read_index
                            [1U]),16);
        vcdp->chgBus(c+633,(vlTOPp->top__DOT____Vcellinp__l4__outmem_read_index
                            [0U]),16);
        vcdp->chgBit(c+641,(vlTOPp->top__DOT__l5__DOT__outmem_want_write));
        vcdp->chgBus(c+649,(vlTOPp->top__DOT__l5__DOT__state),16);
    }
}

void Vtop::traceChgThis__3(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+657,(vlTOPp->top__DOT__scheduler_2_l5_inmem_index),16);
        vcdp->chgBit(c+665,(vlTOPp->top__DOT__scheduler_2_l2_inmem_wantwrite));
        vcdp->chgBit(c+673,(vlTOPp->top__DOT__scheduler_2_l3_inmem_wantwrite));
        vcdp->chgBit(c+681,(vlTOPp->top__DOT__scheduler_2_l4_inmem_wantwrite));
        vcdp->chgBit(c+689,(vlTOPp->top__DOT__scheduler_2_l5_inmem_wantwrite));
        vcdp->chgBit(c+697,(vlTOPp->top__DOT__input_2_scheduler_done));
        vcdp->chgBit(c+705,(vlTOPp->top__DOT__l2_compute_start));
        vcdp->chgBit(c+713,(vlTOPp->top__DOT__l2_compute_done));
        vcdp->chgBit(c+721,(vlTOPp->top__DOT__l3_compute_start));
        vcdp->chgBit(c+729,(vlTOPp->top__DOT__l3_compute_done));
        vcdp->chgBit(c+737,(vlTOPp->top__DOT__l4_compute_start));
        vcdp->chgBit(c+745,(vlTOPp->top__DOT__l4_compute_done));
        vcdp->chgBit(c+753,(vlTOPp->top__DOT__l5_compute_start));
        vcdp->chgBit(c+761,(vlTOPp->top__DOT__l5_compute_done));
        vcdp->chgBus(c+769,(vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index[0]),16);
        vcdp->chgBus(c+770,(vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index[1]),16);
        vcdp->chgBus(c+771,(vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index[2]),16);
        vcdp->chgBus(c+793,(vlTOPp->top__DOT____Vcellout__scheduler__l2_l3_index[0]),16);
        vcdp->chgBus(c+794,(vlTOPp->top__DOT____Vcellout__scheduler__l2_l3_index[1]),16);
        vcdp->chgBus(c+795,(vlTOPp->top__DOT____Vcellout__scheduler__l2_l3_index[2]),16);
        vcdp->chgBus(c+796,(vlTOPp->top__DOT____Vcellout__scheduler__l2_l3_index[3]),16);
        vcdp->chgBus(c+825,(vlTOPp->top__DOT____Vcellout__scheduler__l3_l4_index[0]),16);
        vcdp->chgBus(c+826,(vlTOPp->top__DOT____Vcellout__scheduler__l3_l4_index[1]),16);
        vcdp->chgBus(c+827,(vlTOPp->top__DOT____Vcellout__scheduler__l3_l4_index[2]),16);
        vcdp->chgBus(c+828,(vlTOPp->top__DOT____Vcellout__scheduler__l3_l4_index[3]),16);
        vcdp->chgBus(c+857,(vlTOPp->top__DOT____Vcellout__scheduler__l4_outmem_index[0]),16);
        vcdp->chgBus(c+858,(vlTOPp->top__DOT____Vcellout__scheduler__l4_outmem_index[1]),16);
        vcdp->chgBus(c+859,(vlTOPp->top__DOT____Vcellout__scheduler__l4_outmem_index[2]),16);
        vcdp->chgQuad(c+881,(((0x1bU >= (0x1fU & vlTOPp->top__DOT__l1__DOT__act_read_index
                                         [0U])) ? vlTOPp->top__DOT__l1__DOT__activation__DOT__mem
                              [((0U >= (1U & vlTOPp->top__DOT__l1__DOT__act_read_index
                                        [2U])) & vlTOPp->top__DOT__l1__DOT__act_read_index
                                [2U])][((0x1bU >= (0x1fU 
                                                   & vlTOPp->top__DOT__l1__DOT__act_read_index
                                                   [1U]))
                                         ? (0x1fU & 
                                            vlTOPp->top__DOT__l1__DOT__act_read_index
                                            [1U]) : 0U)]
                              [(0x1fU & vlTOPp->top__DOT__l1__DOT__act_read_index
                                [0U])] : VL_ULL(0))),64);
        vcdp->chgQuad(c+897,(((2U >= (3U & vlTOPp->top__DOT__l1__DOT__weight_read_index
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
        vcdp->chgQuad(c+913,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias
                             [(0xfU & vlTOPp->top__DOT__l1__DOT__weight_read_index
                               [2U])]),64);
        vcdp->chgQuad(c+929,(vlTOPp->top__DOT__l1__DOT__outmem_write_data),64);
        vcdp->chgBus(c+945,(vlTOPp->top__DOT__l1__DOT__weight_read_index[0]),16);
        vcdp->chgBus(c+946,(vlTOPp->top__DOT__l1__DOT__weight_read_index[1]),16);
        vcdp->chgBus(c+947,(vlTOPp->top__DOT__l1__DOT__weight_read_index[2]),16);
        vcdp->chgBus(c+948,(vlTOPp->top__DOT__l1__DOT__weight_read_index[3]),16);
        vcdp->chgBus(c+977,(vlTOPp->top__DOT__l1__DOT__act_read_index[0]),16);
        vcdp->chgBus(c+978,(vlTOPp->top__DOT__l1__DOT__act_read_index[1]),16);
        vcdp->chgBus(c+979,(vlTOPp->top__DOT__l1__DOT__act_read_index[2]),16);
        vcdp->chgBus(c+1001,(vlTOPp->top__DOT__l1__DOT__outmem_index[0]),16);
        vcdp->chgBus(c+1002,(vlTOPp->top__DOT__l1__DOT__outmem_index[1]),16);
        vcdp->chgBus(c+1003,(vlTOPp->top__DOT__l1__DOT__outmem_index[2]),16);
        vcdp->chgBus(c+1025,(vlTOPp->top__DOT__l1__DOT__act_read_index
                             [2U]),16);
        vcdp->chgBus(c+1033,(vlTOPp->top__DOT__l1__DOT__act_read_index
                             [1U]),16);
        vcdp->chgBus(c+1041,(vlTOPp->top__DOT__l1__DOT__act_read_index
                             [0U]),16);
        vcdp->chgBus(c+1049,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                             [3U]),16);
        vcdp->chgBus(c+1057,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                             [2U]),16);
        vcdp->chgBus(c+1065,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                             [1U]),16);
        vcdp->chgBus(c+1073,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                             [0U]),16);
        vcdp->chgQuad(c+1081,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[0]),64);
        vcdp->chgQuad(c+1083,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[1]),64);
        vcdp->chgQuad(c+1085,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[2]),64);
        vcdp->chgQuad(c+1087,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[3]),64);
        vcdp->chgQuad(c+1089,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[4]),64);
        vcdp->chgQuad(c+1091,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[5]),64);
        vcdp->chgQuad(c+1093,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[6]),64);
        vcdp->chgQuad(c+1095,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[7]),64);
        vcdp->chgQuad(c+1097,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[8]),64);
        vcdp->chgQuad(c+1099,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[9]),64);
        vcdp->chgQuad(c+1101,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[10]),64);
        vcdp->chgQuad(c+1103,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[11]),64);
        vcdp->chgQuad(c+1105,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[12]),64);
        vcdp->chgQuad(c+1107,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[13]),64);
        vcdp->chgQuad(c+1109,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[14]),64);
        vcdp->chgQuad(c+1111,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[15]),64);
        vcdp->chgBus(c+1337,(vlTOPp->top__DOT__l1__DOT__outmem_index
                             [2U]),16);
        vcdp->chgBus(c+1345,(vlTOPp->top__DOT__l1__DOT__outmem_index
                             [1U]),16);
        vcdp->chgBus(c+1353,(vlTOPp->top__DOT__l1__DOT__outmem_index
                             [0U]),16);
        vcdp->chgBit(c+1361,(vlTOPp->top__DOT__l2__DOT__outmem_want_write));
        vcdp->chgBus(c+1369,(vlTOPp->top__DOT__l2__DOT__outmem_write_index[0]),16);
        vcdp->chgBus(c+1370,(vlTOPp->top__DOT__l2__DOT__outmem_write_index[1]),16);
        vcdp->chgBus(c+1371,(vlTOPp->top__DOT__l2__DOT__outmem_write_index[2]),16);
        vcdp->chgBus(c+1393,(vlTOPp->top__DOT__l2__DOT__inmem_read_index[0]),16);
        vcdp->chgBus(c+1394,(vlTOPp->top__DOT__l2__DOT__inmem_read_index[1]),16);
        vcdp->chgBus(c+1395,(vlTOPp->top__DOT__l2__DOT__inmem_read_index[2]),16);
        vcdp->chgBus(c+1417,(vlTOPp->top__DOT__l2__DOT__inmem_read_index
                             [2U]),16);
        vcdp->chgBus(c+1425,(vlTOPp->top__DOT__l2__DOT__inmem_read_index
                             [1U]),16);
        vcdp->chgBus(c+1433,(vlTOPp->top__DOT__l2__DOT__inmem_read_index
                             [0U]),16);
        vcdp->chgBus(c+1441,(vlTOPp->top__DOT__l2__DOT__outmem_write_index
                             [2U]),16);
        vcdp->chgBus(c+1449,(vlTOPp->top__DOT__l2__DOT__outmem_write_index
                             [1U]),16);
        vcdp->chgBus(c+1457,(vlTOPp->top__DOT__l2__DOT__outmem_write_index
                             [0U]),16);
        vcdp->chgQuad(c+1465,(((0xcU >= (0xfU & vlTOPp->top__DOT__l3__DOT__act_read_index
                                         [0U])) ? vlTOPp->top__DOT__l3__DOT__activation__DOT__mem
                               [(0xfU & vlTOPp->top__DOT__l3__DOT__act_read_index
                                 [2U])][((0xcU >= (0xfU 
                                                   & vlTOPp->top__DOT__l3__DOT__act_read_index
                                                   [1U]))
                                          ? (0xfU & 
                                             vlTOPp->top__DOT__l3__DOT__act_read_index
                                             [1U]) : 0U)]
                               [(0xfU & vlTOPp->top__DOT__l3__DOT__act_read_index
                                 [0U])] : VL_ULL(0))),64);
        vcdp->chgQuad(c+1481,(((2U >= (3U & vlTOPp->top__DOT__l3__DOT__weight_read_index
                                       [0U])) ? vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_weight
                               [(0xfU & vlTOPp->top__DOT__l3__DOT__weight_read_index
                                 [3U])][(0x1fU & vlTOPp->top__DOT__l3__DOT__weight_read_index
                                         [2U])][((2U 
                                                  >= 
                                                  (3U 
                                                   & vlTOPp->top__DOT__l3__DOT__weight_read_index
                                                   [1U]))
                                                  ? 
                                                 (3U 
                                                  & vlTOPp->top__DOT__l3__DOT__weight_read_index
                                                  [1U])
                                                  : 0U)]
                               [(3U & vlTOPp->top__DOT__l3__DOT__weight_read_index
                                 [0U])] : VL_ULL(0))),64);
        vcdp->chgQuad(c+1497,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias
                              [(0x1fU & vlTOPp->top__DOT__l3__DOT__weight_read_index
                                [2U])]),64);
        vcdp->chgQuad(c+1513,(vlTOPp->top__DOT__l3__DOT__outmem_write_data),64);
        vcdp->chgBus(c+1529,(vlTOPp->top__DOT__l3__DOT__weight_read_index[0]),16);
        vcdp->chgBus(c+1530,(vlTOPp->top__DOT__l3__DOT__weight_read_index[1]),16);
        vcdp->chgBus(c+1531,(vlTOPp->top__DOT__l3__DOT__weight_read_index[2]),16);
        vcdp->chgBus(c+1532,(vlTOPp->top__DOT__l3__DOT__weight_read_index[3]),16);
        vcdp->chgBus(c+1561,(vlTOPp->top__DOT__l3__DOT__act_read_index[0]),16);
        vcdp->chgBus(c+1562,(vlTOPp->top__DOT__l3__DOT__act_read_index[1]),16);
        vcdp->chgBus(c+1563,(vlTOPp->top__DOT__l3__DOT__act_read_index[2]),16);
        vcdp->chgBus(c+1585,(vlTOPp->top__DOT__l3__DOT__outmem_index[0]),16);
        vcdp->chgBus(c+1586,(vlTOPp->top__DOT__l3__DOT__outmem_index[1]),16);
        vcdp->chgBus(c+1587,(vlTOPp->top__DOT__l3__DOT__outmem_index[2]),16);
        vcdp->chgBus(c+1609,(vlTOPp->top__DOT__l3__DOT__act_read_index
                             [2U]),16);
        vcdp->chgBus(c+1617,(vlTOPp->top__DOT__l3__DOT__act_read_index
                             [1U]),16);
        vcdp->chgBus(c+1625,(vlTOPp->top__DOT__l3__DOT__act_read_index
                             [0U]),16);
        vcdp->chgBus(c+1633,(vlTOPp->top__DOT__l3__DOT__weight_read_index
                             [3U]),16);
        vcdp->chgBus(c+1641,(vlTOPp->top__DOT__l3__DOT__weight_read_index
                             [2U]),16);
        vcdp->chgBus(c+1649,(vlTOPp->top__DOT__l3__DOT__weight_read_index
                             [1U]),16);
        vcdp->chgBus(c+1657,(vlTOPp->top__DOT__l3__DOT__weight_read_index
                             [0U]),16);
        vcdp->chgQuad(c+1665,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[0]),64);
        vcdp->chgQuad(c+1667,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[1]),64);
        vcdp->chgQuad(c+1669,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[2]),64);
        vcdp->chgQuad(c+1671,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[3]),64);
        vcdp->chgQuad(c+1673,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[4]),64);
        vcdp->chgQuad(c+1675,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[5]),64);
        vcdp->chgQuad(c+1677,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[6]),64);
        vcdp->chgQuad(c+1679,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[7]),64);
        vcdp->chgQuad(c+1681,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[8]),64);
        vcdp->chgQuad(c+1683,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[9]),64);
        vcdp->chgQuad(c+1685,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[10]),64);
        vcdp->chgQuad(c+1687,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[11]),64);
        vcdp->chgQuad(c+1689,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[12]),64);
        vcdp->chgQuad(c+1691,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[13]),64);
        vcdp->chgQuad(c+1693,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[14]),64);
        vcdp->chgQuad(c+1695,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[15]),64);
        vcdp->chgQuad(c+1697,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[16]),64);
        vcdp->chgQuad(c+1699,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[17]),64);
        vcdp->chgQuad(c+1701,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[18]),64);
        vcdp->chgQuad(c+1703,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[19]),64);
        vcdp->chgQuad(c+1705,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[20]),64);
        vcdp->chgQuad(c+1707,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[21]),64);
        vcdp->chgQuad(c+1709,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[22]),64);
        vcdp->chgQuad(c+1711,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[23]),64);
        vcdp->chgQuad(c+1713,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[24]),64);
        vcdp->chgQuad(c+1715,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[25]),64);
        vcdp->chgQuad(c+1717,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[26]),64);
        vcdp->chgQuad(c+1719,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[27]),64);
        vcdp->chgQuad(c+1721,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[28]),64);
        vcdp->chgQuad(c+1723,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[29]),64);
        vcdp->chgQuad(c+1725,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[30]),64);
        vcdp->chgQuad(c+1727,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[31]),64);
        vcdp->chgBus(c+2177,(vlTOPp->top__DOT__l3__DOT__outmem_index
                             [2U]),16);
        vcdp->chgBus(c+2185,(vlTOPp->top__DOT__l3__DOT__outmem_index
                             [1U]),16);
        vcdp->chgBus(c+2193,(vlTOPp->top__DOT__l3__DOT__outmem_index
                             [0U]),16);
        vcdp->chgBit(c+2201,(vlTOPp->top__DOT__l4__DOT__outmem_want_write));
        vcdp->chgBus(c+2209,(vlTOPp->top__DOT__l4__DOT__outmem_write_index[0]),16);
        vcdp->chgBus(c+2210,(vlTOPp->top__DOT__l4__DOT__outmem_write_index[1]),16);
        vcdp->chgBus(c+2211,(vlTOPp->top__DOT__l4__DOT__outmem_write_index[2]),16);
        vcdp->chgBus(c+2233,(vlTOPp->top__DOT__l4__DOT__inmem_read_index[0]),16);
        vcdp->chgBus(c+2234,(vlTOPp->top__DOT__l4__DOT__inmem_read_index[1]),16);
        vcdp->chgBus(c+2235,(vlTOPp->top__DOT__l4__DOT__inmem_read_index[2]),16);
        vcdp->chgBus(c+2257,(vlTOPp->top__DOT__l4__DOT__inmem_read_index
                             [2U]),16);
        vcdp->chgBus(c+2265,(vlTOPp->top__DOT__l4__DOT__inmem_read_index
                             [1U]),16);
        vcdp->chgBus(c+2273,(vlTOPp->top__DOT__l4__DOT__inmem_read_index
                             [0U]),16);
        vcdp->chgBus(c+2281,(vlTOPp->top__DOT__l4__DOT__outmem_write_index
                             [2U]),16);
        vcdp->chgBus(c+2289,(vlTOPp->top__DOT__l4__DOT__outmem_write_index
                             [1U]),16);
        vcdp->chgBus(c+2297,(vlTOPp->top__DOT__l4__DOT__outmem_write_index
                             [0U]),16);
        vcdp->chgQuad(c+2305,(((9U >= (0xfU & (IData)(vlTOPp->top__DOT__l5__DOT__read_outmem_index)))
                                ? vlTOPp->top__DOT__l5__DOT__out_memory__DOT__mem
                               [(1U & ((IData)(1U) 
                                       + (IData)(vlTOPp->top__DOT__l5__DOT__out_memory__DOT__read_index_entry)))]
                               [((9U >= (0xfU & (IData)(vlTOPp->top__DOT__l5__DOT__out_memory__DOT__read_index_y)))
                                  ? (0xfU & (IData)(vlTOPp->top__DOT__l5__DOT__out_memory__DOT__read_index_y))
                                  : 0U)][(0xfU & (IData)(vlTOPp->top__DOT__l5__DOT__read_outmem_index))]
                                : VL_ULL(0))),64);
        vcdp->chgQuad(c+2321,(((0x31fU >= (0x3ffU & (IData)(vlTOPp->top__DOT__l5__DOT__act_read_index)))
                                ? vlTOPp->top__DOT__l5__DOT__activation__DOT__mem
                               [((0U >= (1U & (IData)(vlTOPp->top__DOT__l5__DOT__activation__DOT__read_index_entry))) 
                                 & (IData)(vlTOPp->top__DOT__l5__DOT__activation__DOT__read_index_entry))]
                               [((0x31fU >= (0x3ffU 
                                             & (IData)(vlTOPp->top__DOT__l5__DOT__activation__DOT__read_index_y)))
                                  ? (0x3ffU & (IData)(vlTOPp->top__DOT__l5__DOT__activation__DOT__read_index_y))
                                  : 0U)][(0x3ffU & (IData)(vlTOPp->top__DOT__l5__DOT__act_read_index))]
                                : VL_ULL(0))),64);
        vcdp->chgQuad(c+2337,(((0x31fU >= (0x3ffU & 
                                           vlTOPp->top__DOT__l5__DOT__weight_read_index
                                           [0U])) ? 
                               vlTOPp->top__DOT__l5__DOT__weights__DOT__mem_weight
                               [((0U >= (1U & (IData)(vlTOPp->top__DOT__l5__DOT__weights__DOT__read_index_in))) 
                                 & (IData)(vlTOPp->top__DOT__l5__DOT__weights__DOT__read_index_in))]
                               [((0U >= (1U & (IData)(vlTOPp->top__DOT__l5__DOT__weights__DOT__read_index_out))) 
                                 & (IData)(vlTOPp->top__DOT__l5__DOT__weights__DOT__read_index_out))]
                               [((0x31fU >= (0x3ffU 
                                             & vlTOPp->top__DOT__l5__DOT__weight_read_index
                                             [1U]))
                                  ? (0x3ffU & vlTOPp->top__DOT__l5__DOT__weight_read_index
                                     [1U]) : 0U)][(0x3ffU 
                                                   & vlTOPp->top__DOT__l5__DOT__weight_read_index
                                                   [0U])]
                                : VL_ULL(0))),64);
        vcdp->chgQuad(c+2353,(((0U >= (1U & vlTOPp->top__DOT__l5__DOT__weight_read_index
                                       [1U])) ? vlTOPp->top__DOT__l5__DOT__weights__DOT__mem_bias
                               [(1U & vlTOPp->top__DOT__l5__DOT__weight_read_index
                                 [1U])] : VL_ULL(0))),64);
        vcdp->chgQuad(c+2369,(vlTOPp->top__DOT__l5__DOT__outmem_write_data),64);
        vcdp->chgBus(c+2385,(vlTOPp->top__DOT__l5__DOT__weight_read_index[0]),16);
        vcdp->chgBus(c+2386,(vlTOPp->top__DOT__l5__DOT__weight_read_index[1]),16);
        vcdp->chgBus(c+2401,(vlTOPp->top__DOT__l5__DOT__act_read_index),16);
        vcdp->chgBus(c+2409,(vlTOPp->top__DOT__l5__DOT__outmem_index),16);
        vcdp->chgBus(c+2417,(vlTOPp->top__DOT__l5__DOT__weight_read_index
                             [1U]),16);
        vcdp->chgBus(c+2425,(vlTOPp->top__DOT__l5__DOT__weight_read_index
                             [0U]),16);
        vcdp->chgQuad(c+2433,(vlTOPp->top__DOT__l5__DOT__weights__DOT__mem_bias[0]),64);
    }
}

void Vtop::traceChgThis__4(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2449,(vlTOPp->clk));
        vcdp->chgQuad(c+2457,(vlTOPp->input_data),64);
        vcdp->chgBus(c+2473,(vlTOPp->input_index[0]),16);
        vcdp->chgBus(c+2474,(vlTOPp->input_index[1]),16);
        vcdp->chgBus(c+2475,(vlTOPp->input_index[2]),16);
        vcdp->chgBus(c+2476,(vlTOPp->input_index[3]),16);
        vcdp->chgBit(c+2505,(vlTOPp->input_write_act));
        vcdp->chgBit(c+2513,(vlTOPp->input_write_weights));
        vcdp->chgBit(c+2521,(vlTOPp->input_write_bias));
        vcdp->chgBit(c+2529,(vlTOPp->l3_write_weights));
        vcdp->chgBit(c+2537,(vlTOPp->l3_write_bias));
        vcdp->chgBit(c+2545,(vlTOPp->l5_write_weights));
        vcdp->chgBit(c+2553,(vlTOPp->l5_write_bias));
        vcdp->chgBit(c+2561,(vlTOPp->compute));
        vcdp->chgBit(c+2569,(vlTOPp->reset));
        vcdp->chgBus(c+2577,(vlTOPp->input_index[3U]),16);
        vcdp->chgBus(c+2585,(vlTOPp->input_index[2U]),16);
        vcdp->chgBus(c+2593,(vlTOPp->input_index[1U]),16);
        vcdp->chgBus(c+2601,(vlTOPp->input_index[0U]),16);
    }
}
