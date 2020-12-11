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
        vcdp->chgBus(c+193,(vlTOPp->top__DOT__scheduler__DOT__state_prev),16);
        vcdp->chgBus(c+201,(vlTOPp->top__DOT__scheduler__DOT__cnt),32);
        vcdp->chgBus(c+209,(vlTOPp->top__DOT__scheduler__DOT__cnt_prev),32);
        vcdp->chgBus(c+217,(vlTOPp->top__DOT__scheduler__DOT__state_cnt),32);
        vcdp->chgBus(c+225,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index[0]),16);
        vcdp->chgBus(c+226,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index[1]),16);
        vcdp->chgBus(c+227,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index[2]),16);
        vcdp->chgQuad(c+249,(vlTOPp->top__DOT__l1__DOT__act_out_data
                             [0U][0U][0U]),64);
        vcdp->chgQuad(c+265,(vlTOPp->top__DOT__l1__DOT__act_out_data
                             [0U][0U][1U]),64);
        vcdp->chgQuad(c+281,(vlTOPp->top__DOT__l1__DOT__act_out_data
                             [0U][0U][2U]),64);
        vcdp->chgQuad(c+297,(vlTOPp->top__DOT__l1__DOT__act_out_data
                             [0U][1U][0U]),64);
        vcdp->chgQuad(c+313,(vlTOPp->top__DOT__l1__DOT__act_out_data
                             [0U][1U][1U]),64);
        vcdp->chgQuad(c+329,(vlTOPp->top__DOT__l1__DOT__act_out_data
                             [0U][1U][2U]),64);
        vcdp->chgQuad(c+345,(vlTOPp->top__DOT__l1__DOT__act_out_data
                             [0U][2U][0U]),64);
        vcdp->chgQuad(c+361,(vlTOPp->top__DOT__l1__DOT__act_out_data
                             [0U][2U][1U]),64);
        vcdp->chgQuad(c+377,(vlTOPp->top__DOT__l1__DOT__act_out_data
                             [0U][2U][2U]),64);
        vcdp->chgQuad(c+393,(vlTOPp->top__DOT__l1__DOT__weights_out_data
                             [0U][0U][0U]),64);
        vcdp->chgQuad(c+409,(vlTOPp->top__DOT__l1__DOT__weights_out_data
                             [0U][0U][1U]),64);
        vcdp->chgQuad(c+425,(vlTOPp->top__DOT__l1__DOT__weights_out_data
                             [0U][0U][2U]),64);
        vcdp->chgQuad(c+441,(vlTOPp->top__DOT__l1__DOT__weights_out_data
                             [0U][1U][0U]),64);
        vcdp->chgQuad(c+457,(vlTOPp->top__DOT__l1__DOT__weights_out_data
                             [0U][1U][1U]),64);
        vcdp->chgQuad(c+473,(vlTOPp->top__DOT__l1__DOT__weights_out_data
                             [0U][1U][2U]),64);
        vcdp->chgQuad(c+489,(vlTOPp->top__DOT__l1__DOT__weights_out_data
                             [0U][2U][0U]),64);
        vcdp->chgQuad(c+505,(vlTOPp->top__DOT__l1__DOT__weights_out_data
                             [0U][2U][1U]),64);
        vcdp->chgQuad(c+521,(vlTOPp->top__DOT__l1__DOT__weights_out_data
                             [0U][2U][2U]),64);
        vcdp->chgBit(c+537,(vlTOPp->top__DOT__l1__DOT__outmem_want_write));
        vcdp->chgBus(c+545,(vlTOPp->top__DOT__l1__DOT__state),16);
        vcdp->chgQuad(c+553,(vlTOPp->top__DOT__l1__DOT____Vcellout__activation__out_data
                             [0U][0U][0U]),64);
        vcdp->chgQuad(c+569,(vlTOPp->top__DOT__l1__DOT____Vcellout__activation__out_data
                             [0U][0U][1U]),64);
        vcdp->chgQuad(c+585,(vlTOPp->top__DOT__l1__DOT____Vcellout__activation__out_data
                             [0U][0U][2U]),64);
        vcdp->chgQuad(c+601,(vlTOPp->top__DOT__l1__DOT____Vcellout__activation__out_data
                             [0U][1U][0U]),64);
        vcdp->chgQuad(c+617,(vlTOPp->top__DOT__l1__DOT____Vcellout__activation__out_data
                             [0U][1U][1U]),64);
        vcdp->chgQuad(c+633,(vlTOPp->top__DOT__l1__DOT____Vcellout__activation__out_data
                             [0U][1U][2U]),64);
        vcdp->chgQuad(c+649,(vlTOPp->top__DOT__l1__DOT____Vcellout__activation__out_data
                             [0U][2U][0U]),64);
        vcdp->chgQuad(c+665,(vlTOPp->top__DOT__l1__DOT____Vcellout__activation__out_data
                             [0U][2U][1U]),64);
        vcdp->chgQuad(c+681,(vlTOPp->top__DOT__l1__DOT____Vcellout__activation__out_data
                             [0U][2U][2U]),64);
        vcdp->chgQuad(c+697,(vlTOPp->top__DOT__l1__DOT____Vcellout__weights__out_data_weight
                             [0U][0U][0U]),64);
        vcdp->chgQuad(c+713,(vlTOPp->top__DOT__l1__DOT____Vcellout__weights__out_data_weight
                             [0U][0U][1U]),64);
        vcdp->chgQuad(c+729,(vlTOPp->top__DOT__l1__DOT____Vcellout__weights__out_data_weight
                             [0U][0U][2U]),64);
        vcdp->chgQuad(c+745,(vlTOPp->top__DOT__l1__DOT____Vcellout__weights__out_data_weight
                             [0U][1U][0U]),64);
        vcdp->chgQuad(c+761,(vlTOPp->top__DOT__l1__DOT____Vcellout__weights__out_data_weight
                             [0U][1U][1U]),64);
        vcdp->chgQuad(c+777,(vlTOPp->top__DOT__l1__DOT____Vcellout__weights__out_data_weight
                             [0U][1U][2U]),64);
        vcdp->chgQuad(c+793,(vlTOPp->top__DOT__l1__DOT____Vcellout__weights__out_data_weight
                             [0U][2U][0U]),64);
        vcdp->chgQuad(c+809,(vlTOPp->top__DOT__l1__DOT____Vcellout__weights__out_data_weight
                             [0U][2U][1U]),64);
        vcdp->chgQuad(c+825,(vlTOPp->top__DOT__l1__DOT____Vcellout__weights__out_data_weight
                             [0U][2U][2U]),64);
        vcdp->chgBus(c+841,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                            [2U]),16);
        vcdp->chgBus(c+849,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                            [1U]),16);
        vcdp->chgBus(c+857,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                            [0U]),16);
        vcdp->chgBus(c+865,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index[0]),16);
        vcdp->chgBus(c+866,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index[1]),16);
        vcdp->chgBus(c+867,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index[2]),16);
        vcdp->chgBus(c+889,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index[0]),16);
        vcdp->chgBus(c+890,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index[1]),16);
        vcdp->chgBus(c+891,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index[2]),16);
        vcdp->chgQuad(c+913,(vlTOPp->top__DOT__l2__DOT__outmem_write_data),64);
        vcdp->chgQuad(c+929,(vlTOPp->top__DOT__l2__DOT__inmem_read_data),64);
        vcdp->chgBus(c+945,(vlTOPp->top__DOT__l2__DOT__state),16);
        vcdp->chgBus(c+953,(vlTOPp->top__DOT__l2__DOT__k_state),16);
        vcdp->chgBus(c+961,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index
                            [2U]),16);
        vcdp->chgBus(c+969,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index
                            [1U]),16);
        vcdp->chgBus(c+977,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index
                            [0U]),16);
        vcdp->chgBus(c+985,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index
                            [2U]),16);
        vcdp->chgBus(c+993,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index
                            [1U]),16);
        vcdp->chgBus(c+1001,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index
                             [0U]),16);
        vcdp->chgBus(c+1009,(vlTOPp->top__DOT__scheduler_2_l2l3_index
                             [2U]),16);
        vcdp->chgBus(c+1017,(vlTOPp->top__DOT__scheduler_2_l2l3_index
                             [1U]),16);
        vcdp->chgBus(c+1025,(vlTOPp->top__DOT__scheduler_2_l2l3_index
                             [0U]),16);
        vcdp->chgBus(c+1033,(vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index[0]),16);
        vcdp->chgBus(c+1034,(vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index[1]),16);
        vcdp->chgBus(c+1035,(vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index[2]),16);
        vcdp->chgBit(c+1057,(vlTOPp->top__DOT__l3__DOT__outmem_want_write));
        vcdp->chgBus(c+1065,(vlTOPp->top__DOT__l3__DOT__state),16);
        vcdp->chgBus(c+1073,(vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index
                             [2U]),16);
        vcdp->chgBus(c+1081,(vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index
                             [1U]),16);
        vcdp->chgBus(c+1089,(vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index
                             [0U]),16);
        vcdp->chgBus(c+1097,(vlTOPp->top__DOT____Vcellinp__l4__inmem_write_index[0]),16);
        vcdp->chgBus(c+1098,(vlTOPp->top__DOT____Vcellinp__l4__inmem_write_index[1]),16);
        vcdp->chgBus(c+1099,(vlTOPp->top__DOT____Vcellinp__l4__inmem_write_index[2]),16);
        vcdp->chgBus(c+1121,(vlTOPp->top__DOT____Vcellinp__l4__outmem_read_index[0]),16);
        vcdp->chgBus(c+1122,(vlTOPp->top__DOT____Vcellinp__l4__outmem_read_index[1]),16);
        vcdp->chgBus(c+1123,(vlTOPp->top__DOT____Vcellinp__l4__outmem_read_index[2]),16);
        vcdp->chgQuad(c+1145,(vlTOPp->top__DOT__l4__DOT__outmem_write_data),64);
        vcdp->chgQuad(c+1161,(vlTOPp->top__DOT__l4__DOT__inmem_read_data),64);
        vcdp->chgBus(c+1177,(vlTOPp->top__DOT__l4__DOT__state),16);
        vcdp->chgBus(c+1185,(vlTOPp->top__DOT__l4__DOT__k_state),16);
        vcdp->chgBus(c+1193,(vlTOPp->top__DOT____Vcellinp__l4__inmem_write_index
                             [2U]),16);
        vcdp->chgBus(c+1201,(vlTOPp->top__DOT____Vcellinp__l4__inmem_write_index
                             [1U]),16);
        vcdp->chgBus(c+1209,(vlTOPp->top__DOT____Vcellinp__l4__inmem_write_index
                             [0U]),16);
        vcdp->chgBus(c+1217,(vlTOPp->top__DOT____Vcellinp__l4__outmem_read_index
                             [2U]),16);
        vcdp->chgBus(c+1225,(vlTOPp->top__DOT____Vcellinp__l4__outmem_read_index
                             [1U]),16);
        vcdp->chgBus(c+1233,(vlTOPp->top__DOT____Vcellinp__l4__outmem_read_index
                             [0U]),16);
        vcdp->chgBit(c+1241,(vlTOPp->top__DOT__l5__DOT__outmem_want_write));
        vcdp->chgBus(c+1249,(vlTOPp->top__DOT__l5__DOT__state),16);
    }
}

void Vtop::traceChgThis__3(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1257,(vlTOPp->top__DOT__scheduler_2_l5_inmem_index),16);
        vcdp->chgBit(c+1265,(vlTOPp->top__DOT__scheduler_2_l2_inmem_wantwrite));
        vcdp->chgBit(c+1273,(vlTOPp->top__DOT__scheduler_2_l3_inmem_wantwrite));
        vcdp->chgBit(c+1281,(vlTOPp->top__DOT__scheduler_2_l4_inmem_wantwrite));
        vcdp->chgBit(c+1289,(vlTOPp->top__DOT__scheduler_2_l5_inmem_wantwrite));
        vcdp->chgBit(c+1297,(vlTOPp->top__DOT__input_2_scheduler_done));
        vcdp->chgBit(c+1305,(vlTOPp->top__DOT__l2_compute_start));
        vcdp->chgBit(c+1313,(vlTOPp->top__DOT__l2_compute_done));
        vcdp->chgBit(c+1321,(vlTOPp->top__DOT__l3_compute_start));
        vcdp->chgBit(c+1329,(vlTOPp->top__DOT__l3_compute_done));
        vcdp->chgBit(c+1337,(vlTOPp->top__DOT__l4_compute_start));
        vcdp->chgBit(c+1345,(vlTOPp->top__DOT__l4_compute_done));
        vcdp->chgBit(c+1353,(vlTOPp->top__DOT__l5_compute_start));
        vcdp->chgBit(c+1361,(vlTOPp->top__DOT__l5_compute_done));
        vcdp->chgBus(c+1369,(vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index[0]),16);
        vcdp->chgBus(c+1370,(vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index[1]),16);
        vcdp->chgBus(c+1371,(vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index[2]),16);
        vcdp->chgBus(c+1393,(vlTOPp->top__DOT____Vcellout__scheduler__l2_l3_index[0]),16);
        vcdp->chgBus(c+1394,(vlTOPp->top__DOT____Vcellout__scheduler__l2_l3_index[1]),16);
        vcdp->chgBus(c+1395,(vlTOPp->top__DOT____Vcellout__scheduler__l2_l3_index[2]),16);
        vcdp->chgBus(c+1396,(vlTOPp->top__DOT____Vcellout__scheduler__l2_l3_index[3]),16);
        vcdp->chgBus(c+1425,(vlTOPp->top__DOT____Vcellout__scheduler__l3_l4_index[0]),16);
        vcdp->chgBus(c+1426,(vlTOPp->top__DOT____Vcellout__scheduler__l3_l4_index[1]),16);
        vcdp->chgBus(c+1427,(vlTOPp->top__DOT____Vcellout__scheduler__l3_l4_index[2]),16);
        vcdp->chgBus(c+1428,(vlTOPp->top__DOT____Vcellout__scheduler__l3_l4_index[3]),16);
        vcdp->chgBus(c+1457,(vlTOPp->top__DOT____Vcellout__scheduler__l4_outmem_index[0]),16);
        vcdp->chgBus(c+1458,(vlTOPp->top__DOT____Vcellout__scheduler__l4_outmem_index[1]),16);
        vcdp->chgBus(c+1459,(vlTOPp->top__DOT____Vcellout__scheduler__l4_outmem_index[2]),16);
        vcdp->chgBus(c+1481,(vlTOPp->top__DOT__scheduler__DOT__i),32);
        vcdp->chgBit(c+1489,(vlTOPp->top__DOT__scheduler__DOT__mem_done[0]));
        vcdp->chgBit(c+1490,(vlTOPp->top__DOT__scheduler__DOT__mem_done[1]));
        vcdp->chgBit(c+1491,(vlTOPp->top__DOT__scheduler__DOT__mem_done[2]));
        vcdp->chgBit(c+1492,(vlTOPp->top__DOT__scheduler__DOT__mem_done[3]));
        vcdp->chgBit(c+1493,(vlTOPp->top__DOT__scheduler__DOT__mem_done[4]));
        vcdp->chgQuad(c+1529,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias
                              [(0xfU & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                [2U])]),64);
        vcdp->chgQuad(c+1545,(vlTOPp->top__DOT__l1__DOT__outmem_write_data[0]),64);
        vcdp->chgBus(c+1561,(vlTOPp->top__DOT__l1__DOT__weight_read_index[0]),16);
        vcdp->chgBus(c+1562,(vlTOPp->top__DOT__l1__DOT__weight_read_index[1]),16);
        vcdp->chgBus(c+1563,(vlTOPp->top__DOT__l1__DOT__weight_read_index[2]),16);
        vcdp->chgBus(c+1564,(vlTOPp->top__DOT__l1__DOT__weight_read_index[3]),16);
        vcdp->chgBus(c+1593,(vlTOPp->top__DOT__l1__DOT__act_read_index[0]),16);
        vcdp->chgBus(c+1594,(vlTOPp->top__DOT__l1__DOT__act_read_index[1]),16);
        vcdp->chgBus(c+1595,(vlTOPp->top__DOT__l1__DOT__act_read_index[2]),16);
        vcdp->chgBus(c+1617,(vlTOPp->top__DOT__l1__DOT__outmem_index[0]),16);
        vcdp->chgBus(c+1618,(vlTOPp->top__DOT__l1__DOT__outmem_index[1]),16);
        vcdp->chgBus(c+1619,(vlTOPp->top__DOT__l1__DOT__outmem_index[2]),16);
        vcdp->chgBus(c+1641,(vlTOPp->top__DOT__l1__DOT__i),32);
        vcdp->chgBus(c+1649,(vlTOPp->top__DOT__l1__DOT__j),32);
        vcdp->chgBus(c+1657,(vlTOPp->top__DOT__l1__DOT__act_read_index
                             [1U]),16);
        vcdp->chgBus(c+1665,(vlTOPp->top__DOT__l1__DOT__act_read_index
                             [0U]),16);
        vcdp->chgBus(c+1673,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                             [2U]),16);
        vcdp->chgQuad(c+1681,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[0]),64);
        vcdp->chgQuad(c+1683,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[1]),64);
        vcdp->chgQuad(c+1685,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[2]),64);
        vcdp->chgQuad(c+1687,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[3]),64);
        vcdp->chgQuad(c+1689,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[4]),64);
        vcdp->chgQuad(c+1691,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[5]),64);
        vcdp->chgQuad(c+1693,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[6]),64);
        vcdp->chgQuad(c+1695,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[7]),64);
        vcdp->chgQuad(c+1697,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[8]),64);
        vcdp->chgQuad(c+1699,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[9]),64);
        vcdp->chgQuad(c+1701,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[10]),64);
        vcdp->chgQuad(c+1703,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[11]),64);
        vcdp->chgQuad(c+1705,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[12]),64);
        vcdp->chgQuad(c+1707,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[13]),64);
        vcdp->chgQuad(c+1709,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[14]),64);
        vcdp->chgQuad(c+1711,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[15]),64);
        vcdp->chgBus(c+1937,(vlTOPp->top__DOT__l1__DOT__outmem_index
                             [2U]),16);
        vcdp->chgBus(c+1945,(vlTOPp->top__DOT__l1__DOT__outmem_index
                             [1U]),16);
        vcdp->chgBus(c+1953,(vlTOPp->top__DOT__l1__DOT__outmem_index
                             [0U]),16);
        vcdp->chgQuad(c+1961,(vlTOPp->top__DOT__l1__DOT__outmem_write_data
                              [0U]),64);
        vcdp->chgBit(c+1977,(vlTOPp->top__DOT__l2__DOT__outmem_want_write));
        vcdp->chgBus(c+1985,(vlTOPp->top__DOT__l2__DOT__outmem_write_index[0]),16);
        vcdp->chgBus(c+1986,(vlTOPp->top__DOT__l2__DOT__outmem_write_index[1]),16);
        vcdp->chgBus(c+1987,(vlTOPp->top__DOT__l2__DOT__outmem_write_index[2]),16);
        vcdp->chgBus(c+2009,(vlTOPp->top__DOT__l2__DOT__inmem_read_index[0]),16);
        vcdp->chgBus(c+2010,(vlTOPp->top__DOT__l2__DOT__inmem_read_index[1]),16);
        vcdp->chgBus(c+2011,(vlTOPp->top__DOT__l2__DOT__inmem_read_index[2]),16);
        vcdp->chgBus(c+2033,(vlTOPp->top__DOT__l2__DOT__inmem_read_index
                             [2U]),16);
        vcdp->chgBus(c+2041,(vlTOPp->top__DOT__l2__DOT__inmem_read_index
                             [1U]),16);
        vcdp->chgBus(c+2049,(vlTOPp->top__DOT__l2__DOT__inmem_read_index
                             [0U]),16);
        vcdp->chgBus(c+2057,(vlTOPp->top__DOT__l2__DOT__outmem_write_index
                             [2U]),16);
        vcdp->chgBus(c+2065,(vlTOPp->top__DOT__l2__DOT__outmem_write_index
                             [1U]),16);
        vcdp->chgBus(c+2073,(vlTOPp->top__DOT__l2__DOT__outmem_write_index
                             [0U]),16);
        vcdp->chgQuad(c+2081,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias
                              [(0x1fU & vlTOPp->top__DOT__l3__DOT__weight_read_index
                                [2U])]),64);
        vcdp->chgQuad(c+2097,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[0]),64);
        vcdp->chgQuad(c+2099,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[1]),64);
        vcdp->chgQuad(c+2101,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[2]),64);
        vcdp->chgQuad(c+2103,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[3]),64);
        vcdp->chgQuad(c+2105,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[4]),64);
        vcdp->chgQuad(c+2107,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[5]),64);
        vcdp->chgQuad(c+2109,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[6]),64);
        vcdp->chgQuad(c+2111,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[7]),64);
        vcdp->chgQuad(c+2113,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[8]),64);
        vcdp->chgQuad(c+2115,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[9]),64);
        vcdp->chgQuad(c+2117,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[10]),64);
        vcdp->chgQuad(c+2119,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[11]),64);
        vcdp->chgQuad(c+2121,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[12]),64);
        vcdp->chgQuad(c+2123,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[13]),64);
        vcdp->chgQuad(c+2125,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[14]),64);
        vcdp->chgQuad(c+2127,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[15]),64);
        vcdp->chgBus(c+2353,(vlTOPp->top__DOT__l3__DOT__weight_read_index[0]),16);
        vcdp->chgBus(c+2354,(vlTOPp->top__DOT__l3__DOT__weight_read_index[1]),16);
        vcdp->chgBus(c+2355,(vlTOPp->top__DOT__l3__DOT__weight_read_index[2]),16);
        vcdp->chgBus(c+2356,(vlTOPp->top__DOT__l3__DOT__weight_read_index[3]),16);
        vcdp->chgBus(c+2385,(vlTOPp->top__DOT__l3__DOT__act_read_index[0]),16);
        vcdp->chgBus(c+2386,(vlTOPp->top__DOT__l3__DOT__act_read_index[1]),16);
        vcdp->chgBus(c+2387,(vlTOPp->top__DOT__l3__DOT__act_read_index[2]),16);
        vcdp->chgBus(c+2409,(vlTOPp->top__DOT__l3__DOT__outmem_index[0]),16);
        vcdp->chgBus(c+2410,(vlTOPp->top__DOT__l3__DOT__outmem_index[1]),16);
        vcdp->chgBus(c+2411,(vlTOPp->top__DOT__l3__DOT__outmem_index[2]),16);
        vcdp->chgBus(c+2433,(vlTOPp->top__DOT__l3__DOT__i),32);
        vcdp->chgBus(c+2441,(vlTOPp->top__DOT__l3__DOT__j),32);
        vcdp->chgBus(c+2449,(vlTOPp->top__DOT__l3__DOT__act_read_index
                             [1U]),16);
        vcdp->chgBus(c+2457,(vlTOPp->top__DOT__l3__DOT__act_read_index
                             [0U]),16);
        vcdp->chgBus(c+2465,(vlTOPp->top__DOT__l3__DOT__weight_read_index
                             [2U]),16);
        vcdp->chgQuad(c+2473,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[0]),64);
        vcdp->chgQuad(c+2475,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[1]),64);
        vcdp->chgQuad(c+2477,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[2]),64);
        vcdp->chgQuad(c+2479,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[3]),64);
        vcdp->chgQuad(c+2481,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[4]),64);
        vcdp->chgQuad(c+2483,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[5]),64);
        vcdp->chgQuad(c+2485,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[6]),64);
        vcdp->chgQuad(c+2487,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[7]),64);
        vcdp->chgQuad(c+2489,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[8]),64);
        vcdp->chgQuad(c+2491,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[9]),64);
        vcdp->chgQuad(c+2493,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[10]),64);
        vcdp->chgQuad(c+2495,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[11]),64);
        vcdp->chgQuad(c+2497,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[12]),64);
        vcdp->chgQuad(c+2499,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[13]),64);
        vcdp->chgQuad(c+2501,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[14]),64);
        vcdp->chgQuad(c+2503,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[15]),64);
        vcdp->chgQuad(c+2505,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[16]),64);
        vcdp->chgQuad(c+2507,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[17]),64);
        vcdp->chgQuad(c+2509,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[18]),64);
        vcdp->chgQuad(c+2511,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[19]),64);
        vcdp->chgQuad(c+2513,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[20]),64);
        vcdp->chgQuad(c+2515,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[21]),64);
        vcdp->chgQuad(c+2517,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[22]),64);
        vcdp->chgQuad(c+2519,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[23]),64);
        vcdp->chgQuad(c+2521,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[24]),64);
        vcdp->chgQuad(c+2523,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[25]),64);
        vcdp->chgQuad(c+2525,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[26]),64);
        vcdp->chgQuad(c+2527,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[27]),64);
        vcdp->chgQuad(c+2529,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[28]),64);
        vcdp->chgQuad(c+2531,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[29]),64);
        vcdp->chgQuad(c+2533,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[30]),64);
        vcdp->chgQuad(c+2535,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[31]),64);
        vcdp->chgBus(c+2985,(vlTOPp->top__DOT__l3__DOT__outmem_index
                             [2U]),16);
        vcdp->chgBus(c+2993,(vlTOPp->top__DOT__l3__DOT__outmem_index
                             [1U]),16);
        vcdp->chgBus(c+3001,(vlTOPp->top__DOT__l3__DOT__outmem_index
                             [0U]),16);
        vcdp->chgQuad(c+3009,(vlTOPp->top__DOT__l3__DOT__outmem_write_data
                              [0U]),64);
        vcdp->chgBit(c+3025,(vlTOPp->top__DOT__l4__DOT__outmem_want_write));
        vcdp->chgBus(c+3033,(vlTOPp->top__DOT__l4__DOT__outmem_write_index[0]),16);
        vcdp->chgBus(c+3034,(vlTOPp->top__DOT__l4__DOT__outmem_write_index[1]),16);
        vcdp->chgBus(c+3035,(vlTOPp->top__DOT__l4__DOT__outmem_write_index[2]),16);
        vcdp->chgBus(c+3057,(vlTOPp->top__DOT__l4__DOT__inmem_read_index[0]),16);
        vcdp->chgBus(c+3058,(vlTOPp->top__DOT__l4__DOT__inmem_read_index[1]),16);
        vcdp->chgBus(c+3059,(vlTOPp->top__DOT__l4__DOT__inmem_read_index[2]),16);
        vcdp->chgBus(c+3081,(vlTOPp->top__DOT__l4__DOT__inmem_read_index
                             [2U]),16);
        vcdp->chgBus(c+3089,(vlTOPp->top__DOT__l4__DOT__inmem_read_index
                             [1U]),16);
        vcdp->chgBus(c+3097,(vlTOPp->top__DOT__l4__DOT__inmem_read_index
                             [0U]),16);
        vcdp->chgBus(c+3105,(vlTOPp->top__DOT__l4__DOT__outmem_write_index
                             [2U]),16);
        vcdp->chgBus(c+3113,(vlTOPp->top__DOT__l4__DOT__outmem_write_index
                             [1U]),16);
        vcdp->chgBus(c+3121,(vlTOPp->top__DOT__l4__DOT__outmem_write_index
                             [0U]),16);
        vcdp->chgQuad(c+3129,(((9U >= (0xfU & (IData)(vlTOPp->top__DOT__l5__DOT__read_outmem_index)))
                                ? vlTOPp->top__DOT__l5__DOT__out_memory__DOT__mem
                               [(1U & ((IData)(1U) 
                                       + (IData)(vlTOPp->top__DOT__l5__DOT__out_memory__DOT__read_index_entry)))]
                               [((9U >= (0xfU & (IData)(vlTOPp->top__DOT__l5__DOT__out_memory__DOT__read_index_y)))
                                  ? (0xfU & (IData)(vlTOPp->top__DOT__l5__DOT__out_memory__DOT__read_index_y))
                                  : 0U)][(0xfU & (IData)(vlTOPp->top__DOT__l5__DOT__read_outmem_index))]
                                : VL_ULL(0))),64);
        vcdp->chgQuad(c+3145,(((0x31fU >= (0x3ffU & (IData)(vlTOPp->top__DOT__l5__DOT__act_read_index)))
                                ? vlTOPp->top__DOT__l5__DOT__activation__DOT__mem
                               [((0U >= (1U & (IData)(vlTOPp->top__DOT__l5__DOT__activation__DOT__read_index_entry))) 
                                 & (IData)(vlTOPp->top__DOT__l5__DOT__activation__DOT__read_index_entry))]
                               [((0x31fU >= (0x3ffU 
                                             & (IData)(vlTOPp->top__DOT__l5__DOT__activation__DOT__read_index_y)))
                                  ? (0x3ffU & (IData)(vlTOPp->top__DOT__l5__DOT__activation__DOT__read_index_y))
                                  : 0U)][(0x3ffU & (IData)(vlTOPp->top__DOT__l5__DOT__act_read_index))]
                                : VL_ULL(0))),64);
        vcdp->chgQuad(c+3161,(((0x31fU >= (0x3ffU & 
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
        vcdp->chgQuad(c+3177,(((0U >= (1U & vlTOPp->top__DOT__l5__DOT__weight_read_index
                                       [1U])) ? vlTOPp->top__DOT__l5__DOT__weights__DOT__mem_bias
                               [(1U & vlTOPp->top__DOT__l5__DOT__weight_read_index
                                 [1U])] : VL_ULL(0))),64);
        vcdp->chgQuad(c+3193,(vlTOPp->top__DOT__l5__DOT__outmem_write_data),64);
        vcdp->chgBus(c+3209,(vlTOPp->top__DOT__l5__DOT__weight_read_index[0]),16);
        vcdp->chgBus(c+3210,(vlTOPp->top__DOT__l5__DOT__weight_read_index[1]),16);
        vcdp->chgBus(c+3225,(vlTOPp->top__DOT__l5__DOT__act_read_index),16);
        vcdp->chgBus(c+3233,(vlTOPp->top__DOT__l5__DOT__outmem_index),16);
        vcdp->chgBus(c+3241,(vlTOPp->top__DOT__l5__DOT__weight_read_index
                             [1U]),16);
        vcdp->chgBus(c+3249,(vlTOPp->top__DOT__l5__DOT__weight_read_index
                             [0U]),16);
        vcdp->chgQuad(c+3257,(vlTOPp->top__DOT__l5__DOT__weights__DOT__mem_bias[0]),64);
    }
}

void Vtop::traceChgThis__4(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+3273,(vlTOPp->clk));
        vcdp->chgQuad(c+3281,(vlTOPp->input_data),64);
        vcdp->chgBus(c+3297,(vlTOPp->input_index[0]),16);
        vcdp->chgBus(c+3298,(vlTOPp->input_index[1]),16);
        vcdp->chgBus(c+3299,(vlTOPp->input_index[2]),16);
        vcdp->chgBus(c+3300,(vlTOPp->input_index[3]),16);
        vcdp->chgBit(c+3329,(vlTOPp->input_write_act));
        vcdp->chgBit(c+3337,(vlTOPp->input_write_weights));
        vcdp->chgBit(c+3345,(vlTOPp->input_write_bias));
        vcdp->chgBit(c+3353,(vlTOPp->l3_write_weights));
        vcdp->chgBit(c+3361,(vlTOPp->l3_write_bias));
        vcdp->chgBit(c+3369,(vlTOPp->l5_write_weights));
        vcdp->chgBit(c+3377,(vlTOPp->l5_write_bias));
        vcdp->chgBit(c+3385,(vlTOPp->compute));
        vcdp->chgBit(c+3393,(vlTOPp->reset));
        vcdp->chgBus(c+3401,(vlTOPp->input_index[3U]),16);
        vcdp->chgBus(c+3409,(vlTOPp->input_index[2U]),16);
        vcdp->chgBus(c+3417,(vlTOPp->input_index[1U]),16);
        vcdp->chgBus(c+3425,(vlTOPp->input_index[0U]),16);
    }
}
