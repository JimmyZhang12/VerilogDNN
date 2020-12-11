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
        vcdp->chgBus(c+217,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index[0]),16);
        vcdp->chgBus(c+218,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index[1]),16);
        vcdp->chgBus(c+219,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index[2]),16);
        vcdp->chgQuad(c+241,(vlTOPp->top__DOT__l1__DOT__act_out_data
                             [0U][0U][0U]),64);
        vcdp->chgQuad(c+257,(vlTOPp->top__DOT__l1__DOT__act_out_data
                             [0U][0U][1U]),64);
        vcdp->chgQuad(c+273,(vlTOPp->top__DOT__l1__DOT__act_out_data
                             [0U][0U][2U]),64);
        vcdp->chgQuad(c+289,(vlTOPp->top__DOT__l1__DOT__act_out_data
                             [0U][1U][0U]),64);
        vcdp->chgQuad(c+305,(vlTOPp->top__DOT__l1__DOT__act_out_data
                             [0U][1U][1U]),64);
        vcdp->chgQuad(c+321,(vlTOPp->top__DOT__l1__DOT__act_out_data
                             [0U][1U][2U]),64);
        vcdp->chgQuad(c+337,(vlTOPp->top__DOT__l1__DOT__act_out_data
                             [0U][2U][0U]),64);
        vcdp->chgQuad(c+353,(vlTOPp->top__DOT__l1__DOT__act_out_data
                             [0U][2U][1U]),64);
        vcdp->chgQuad(c+369,(vlTOPp->top__DOT__l1__DOT__act_out_data
                             [0U][2U][2U]),64);
        vcdp->chgQuad(c+385,(vlTOPp->top__DOT__l1__DOT__weights_out_data
                             [0U][0U][0U]),64);
        vcdp->chgQuad(c+401,(vlTOPp->top__DOT__l1__DOT__weights_out_data
                             [0U][0U][1U]),64);
        vcdp->chgQuad(c+417,(vlTOPp->top__DOT__l1__DOT__weights_out_data
                             [0U][0U][2U]),64);
        vcdp->chgQuad(c+433,(vlTOPp->top__DOT__l1__DOT__weights_out_data
                             [0U][1U][0U]),64);
        vcdp->chgQuad(c+449,(vlTOPp->top__DOT__l1__DOT__weights_out_data
                             [0U][1U][1U]),64);
        vcdp->chgQuad(c+465,(vlTOPp->top__DOT__l1__DOT__weights_out_data
                             [0U][1U][2U]),64);
        vcdp->chgQuad(c+481,(vlTOPp->top__DOT__l1__DOT__weights_out_data
                             [0U][2U][0U]),64);
        vcdp->chgQuad(c+497,(vlTOPp->top__DOT__l1__DOT__weights_out_data
                             [0U][2U][1U]),64);
        vcdp->chgQuad(c+513,(vlTOPp->top__DOT__l1__DOT__weights_out_data
                             [0U][2U][2U]),64);
        vcdp->chgBit(c+529,(vlTOPp->top__DOT__l1__DOT__outmem_want_write));
        vcdp->chgBus(c+537,(vlTOPp->top__DOT__l1__DOT__state),16);
        vcdp->chgQuad(c+545,(vlTOPp->top__DOT__l1__DOT____Vcellout__activation__out_data
                             [0U][0U][0U]),64);
        vcdp->chgQuad(c+561,(vlTOPp->top__DOT__l1__DOT____Vcellout__activation__out_data
                             [0U][0U][1U]),64);
        vcdp->chgQuad(c+577,(vlTOPp->top__DOT__l1__DOT____Vcellout__activation__out_data
                             [0U][0U][2U]),64);
        vcdp->chgQuad(c+593,(vlTOPp->top__DOT__l1__DOT____Vcellout__activation__out_data
                             [0U][1U][0U]),64);
        vcdp->chgQuad(c+609,(vlTOPp->top__DOT__l1__DOT____Vcellout__activation__out_data
                             [0U][1U][1U]),64);
        vcdp->chgQuad(c+625,(vlTOPp->top__DOT__l1__DOT____Vcellout__activation__out_data
                             [0U][1U][2U]),64);
        vcdp->chgQuad(c+641,(vlTOPp->top__DOT__l1__DOT____Vcellout__activation__out_data
                             [0U][2U][0U]),64);
        vcdp->chgQuad(c+657,(vlTOPp->top__DOT__l1__DOT____Vcellout__activation__out_data
                             [0U][2U][1U]),64);
        vcdp->chgQuad(c+673,(vlTOPp->top__DOT__l1__DOT____Vcellout__activation__out_data
                             [0U][2U][2U]),64);
        vcdp->chgQuad(c+689,(vlTOPp->top__DOT__l1__DOT____Vcellout__weights__out_data_weight
                             [0U][0U][0U]),64);
        vcdp->chgQuad(c+705,(vlTOPp->top__DOT__l1__DOT____Vcellout__weights__out_data_weight
                             [0U][0U][1U]),64);
        vcdp->chgQuad(c+721,(vlTOPp->top__DOT__l1__DOT____Vcellout__weights__out_data_weight
                             [0U][0U][2U]),64);
        vcdp->chgQuad(c+737,(vlTOPp->top__DOT__l1__DOT____Vcellout__weights__out_data_weight
                             [0U][1U][0U]),64);
        vcdp->chgQuad(c+753,(vlTOPp->top__DOT__l1__DOT____Vcellout__weights__out_data_weight
                             [0U][1U][1U]),64);
        vcdp->chgQuad(c+769,(vlTOPp->top__DOT__l1__DOT____Vcellout__weights__out_data_weight
                             [0U][1U][2U]),64);
        vcdp->chgQuad(c+785,(vlTOPp->top__DOT__l1__DOT____Vcellout__weights__out_data_weight
                             [0U][2U][0U]),64);
        vcdp->chgQuad(c+801,(vlTOPp->top__DOT__l1__DOT____Vcellout__weights__out_data_weight
                             [0U][2U][1U]),64);
        vcdp->chgQuad(c+817,(vlTOPp->top__DOT__l1__DOT____Vcellout__weights__out_data_weight
                             [0U][2U][2U]),64);
        vcdp->chgBus(c+833,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                            [2U]),16);
        vcdp->chgBus(c+841,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                            [1U]),16);
        vcdp->chgBus(c+849,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                            [0U]),16);
        vcdp->chgBus(c+857,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index[0]),16);
        vcdp->chgBus(c+858,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index[1]),16);
        vcdp->chgBus(c+859,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index[2]),16);
        vcdp->chgBus(c+881,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index[0]),16);
        vcdp->chgBus(c+882,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index[1]),16);
        vcdp->chgBus(c+883,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index[2]),16);
        vcdp->chgQuad(c+905,(vlTOPp->top__DOT__l2__DOT__outmem_write_data),64);
        vcdp->chgQuad(c+921,(vlTOPp->top__DOT__l2__DOT__inmem_read_data),64);
        vcdp->chgBus(c+937,(vlTOPp->top__DOT__l2__DOT__state),16);
        vcdp->chgBus(c+945,(vlTOPp->top__DOT__l2__DOT__k_state),16);
        vcdp->chgBus(c+953,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index
                            [2U]),16);
        vcdp->chgBus(c+961,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index
                            [1U]),16);
        vcdp->chgBus(c+969,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index
                            [0U]),16);
        vcdp->chgBus(c+977,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index
                            [2U]),16);
        vcdp->chgBus(c+985,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index
                            [1U]),16);
        vcdp->chgBus(c+993,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index
                            [0U]),16);
        vcdp->chgBus(c+1001,(vlTOPp->top__DOT__scheduler_2_l2l3_index
                             [2U]),16);
        vcdp->chgBus(c+1009,(vlTOPp->top__DOT__scheduler_2_l2l3_index
                             [1U]),16);
        vcdp->chgBus(c+1017,(vlTOPp->top__DOT__scheduler_2_l2l3_index
                             [0U]),16);
        vcdp->chgBus(c+1025,(vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index[0]),16);
        vcdp->chgBus(c+1026,(vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index[1]),16);
        vcdp->chgBus(c+1027,(vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index[2]),16);
        vcdp->chgBit(c+1049,(vlTOPp->top__DOT__l3__DOT__outmem_want_write));
        vcdp->chgBus(c+1057,(vlTOPp->top__DOT__l3__DOT__state),16);
        vcdp->chgBus(c+1065,(vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index
                             [2U]),16);
        vcdp->chgBus(c+1073,(vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index
                             [1U]),16);
        vcdp->chgBus(c+1081,(vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index
                             [0U]),16);
        vcdp->chgBus(c+1089,(vlTOPp->top__DOT____Vcellinp__l4__inmem_write_index[0]),16);
        vcdp->chgBus(c+1090,(vlTOPp->top__DOT____Vcellinp__l4__inmem_write_index[1]),16);
        vcdp->chgBus(c+1091,(vlTOPp->top__DOT____Vcellinp__l4__inmem_write_index[2]),16);
        vcdp->chgBus(c+1113,(vlTOPp->top__DOT____Vcellinp__l4__outmem_read_index[0]),16);
        vcdp->chgBus(c+1114,(vlTOPp->top__DOT____Vcellinp__l4__outmem_read_index[1]),16);
        vcdp->chgBus(c+1115,(vlTOPp->top__DOT____Vcellinp__l4__outmem_read_index[2]),16);
        vcdp->chgQuad(c+1137,(vlTOPp->top__DOT__l4__DOT__outmem_write_data),64);
        vcdp->chgQuad(c+1153,(vlTOPp->top__DOT__l4__DOT__inmem_read_data),64);
        vcdp->chgBus(c+1169,(vlTOPp->top__DOT__l4__DOT__state),16);
        vcdp->chgBus(c+1177,(vlTOPp->top__DOT__l4__DOT__k_state),16);
        vcdp->chgBus(c+1185,(vlTOPp->top__DOT____Vcellinp__l4__inmem_write_index
                             [2U]),16);
        vcdp->chgBus(c+1193,(vlTOPp->top__DOT____Vcellinp__l4__inmem_write_index
                             [1U]),16);
        vcdp->chgBus(c+1201,(vlTOPp->top__DOT____Vcellinp__l4__inmem_write_index
                             [0U]),16);
        vcdp->chgBus(c+1209,(vlTOPp->top__DOT____Vcellinp__l4__outmem_read_index
                             [2U]),16);
        vcdp->chgBus(c+1217,(vlTOPp->top__DOT____Vcellinp__l4__outmem_read_index
                             [1U]),16);
        vcdp->chgBus(c+1225,(vlTOPp->top__DOT____Vcellinp__l4__outmem_read_index
                             [0U]),16);
        vcdp->chgBit(c+1233,(vlTOPp->top__DOT__l5__DOT__outmem_want_write));
        vcdp->chgBus(c+1241,(vlTOPp->top__DOT__l5__DOT__state),16);
    }
}

void Vtop::traceChgThis__3(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1249,(vlTOPp->top__DOT__scheduler_2_l5_inmem_index),16);
        vcdp->chgBit(c+1257,(vlTOPp->top__DOT__scheduler_2_l2_inmem_wantwrite));
        vcdp->chgBit(c+1265,(vlTOPp->top__DOT__scheduler_2_l3_inmem_wantwrite));
        vcdp->chgBit(c+1273,(vlTOPp->top__DOT__scheduler_2_l4_inmem_wantwrite));
        vcdp->chgBit(c+1281,(vlTOPp->top__DOT__scheduler_2_l5_inmem_wantwrite));
        vcdp->chgBit(c+1289,(vlTOPp->top__DOT__input_2_scheduler_done));
        vcdp->chgBit(c+1297,(vlTOPp->top__DOT__l2_compute_start));
        vcdp->chgBit(c+1305,(vlTOPp->top__DOT__l2_compute_done));
        vcdp->chgBit(c+1313,(vlTOPp->top__DOT__l3_compute_start));
        vcdp->chgBit(c+1321,(vlTOPp->top__DOT__l3_compute_done));
        vcdp->chgBit(c+1329,(vlTOPp->top__DOT__l4_compute_start));
        vcdp->chgBit(c+1337,(vlTOPp->top__DOT__l4_compute_done));
        vcdp->chgBit(c+1345,(vlTOPp->top__DOT__l5_compute_start));
        vcdp->chgBit(c+1353,(vlTOPp->top__DOT__l5_compute_done));
        vcdp->chgBus(c+1361,(vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index[0]),16);
        vcdp->chgBus(c+1362,(vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index[1]),16);
        vcdp->chgBus(c+1363,(vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index[2]),16);
        vcdp->chgBus(c+1385,(vlTOPp->top__DOT____Vcellout__scheduler__l2_l3_index[0]),16);
        vcdp->chgBus(c+1386,(vlTOPp->top__DOT____Vcellout__scheduler__l2_l3_index[1]),16);
        vcdp->chgBus(c+1387,(vlTOPp->top__DOT____Vcellout__scheduler__l2_l3_index[2]),16);
        vcdp->chgBus(c+1388,(vlTOPp->top__DOT____Vcellout__scheduler__l2_l3_index[3]),16);
        vcdp->chgBus(c+1417,(vlTOPp->top__DOT____Vcellout__scheduler__l3_l4_index[0]),16);
        vcdp->chgBus(c+1418,(vlTOPp->top__DOT____Vcellout__scheduler__l3_l4_index[1]),16);
        vcdp->chgBus(c+1419,(vlTOPp->top__DOT____Vcellout__scheduler__l3_l4_index[2]),16);
        vcdp->chgBus(c+1420,(vlTOPp->top__DOT____Vcellout__scheduler__l3_l4_index[3]),16);
        vcdp->chgBus(c+1449,(vlTOPp->top__DOT____Vcellout__scheduler__l4_outmem_index[0]),16);
        vcdp->chgBus(c+1450,(vlTOPp->top__DOT____Vcellout__scheduler__l4_outmem_index[1]),16);
        vcdp->chgBus(c+1451,(vlTOPp->top__DOT____Vcellout__scheduler__l4_outmem_index[2]),16);
        vcdp->chgQuad(c+1473,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias
                              [(0xfU & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                [2U])]),64);
        vcdp->chgQuad(c+1489,(vlTOPp->top__DOT__l1__DOT__outmem_write_data[0]),64);
        vcdp->chgBus(c+1505,(vlTOPp->top__DOT__l1__DOT__weight_read_index[0]),16);
        vcdp->chgBus(c+1506,(vlTOPp->top__DOT__l1__DOT__weight_read_index[1]),16);
        vcdp->chgBus(c+1507,(vlTOPp->top__DOT__l1__DOT__weight_read_index[2]),16);
        vcdp->chgBus(c+1508,(vlTOPp->top__DOT__l1__DOT__weight_read_index[3]),16);
        vcdp->chgBus(c+1537,(vlTOPp->top__DOT__l1__DOT__act_read_index[0]),16);
        vcdp->chgBus(c+1538,(vlTOPp->top__DOT__l1__DOT__act_read_index[1]),16);
        vcdp->chgBus(c+1539,(vlTOPp->top__DOT__l1__DOT__act_read_index[2]),16);
        vcdp->chgBus(c+1561,(vlTOPp->top__DOT__l1__DOT__outmem_index[0]),16);
        vcdp->chgBus(c+1562,(vlTOPp->top__DOT__l1__DOT__outmem_index[1]),16);
        vcdp->chgBus(c+1563,(vlTOPp->top__DOT__l1__DOT__outmem_index[2]),16);
        vcdp->chgBus(c+1585,(vlTOPp->top__DOT__l1__DOT__i),32);
        vcdp->chgBus(c+1593,(vlTOPp->top__DOT__l1__DOT__j),32);
        vcdp->chgBus(c+1601,(vlTOPp->top__DOT__l1__DOT__act_read_index
                             [1U]),16);
        vcdp->chgBus(c+1609,(vlTOPp->top__DOT__l1__DOT__act_read_index
                             [0U]),16);
        vcdp->chgBus(c+1617,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                             [2U]),16);
        vcdp->chgQuad(c+1625,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[0]),64);
        vcdp->chgQuad(c+1627,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[1]),64);
        vcdp->chgQuad(c+1629,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[2]),64);
        vcdp->chgQuad(c+1631,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[3]),64);
        vcdp->chgQuad(c+1633,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[4]),64);
        vcdp->chgQuad(c+1635,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[5]),64);
        vcdp->chgQuad(c+1637,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[6]),64);
        vcdp->chgQuad(c+1639,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[7]),64);
        vcdp->chgQuad(c+1641,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[8]),64);
        vcdp->chgQuad(c+1643,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[9]),64);
        vcdp->chgQuad(c+1645,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[10]),64);
        vcdp->chgQuad(c+1647,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[11]),64);
        vcdp->chgQuad(c+1649,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[12]),64);
        vcdp->chgQuad(c+1651,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[13]),64);
        vcdp->chgQuad(c+1653,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[14]),64);
        vcdp->chgQuad(c+1655,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[15]),64);
        vcdp->chgBus(c+1881,(vlTOPp->top__DOT__l1__DOT__outmem_index
                             [2U]),16);
        vcdp->chgBus(c+1889,(vlTOPp->top__DOT__l1__DOT__outmem_index
                             [1U]),16);
        vcdp->chgBus(c+1897,(vlTOPp->top__DOT__l1__DOT__outmem_index
                             [0U]),16);
        vcdp->chgQuad(c+1905,(vlTOPp->top__DOT__l1__DOT__outmem_write_data
                              [0U]),64);
        vcdp->chgBit(c+1921,(vlTOPp->top__DOT__l2__DOT__outmem_want_write));
        vcdp->chgBus(c+1929,(vlTOPp->top__DOT__l2__DOT__outmem_write_index[0]),16);
        vcdp->chgBus(c+1930,(vlTOPp->top__DOT__l2__DOT__outmem_write_index[1]),16);
        vcdp->chgBus(c+1931,(vlTOPp->top__DOT__l2__DOT__outmem_write_index[2]),16);
        vcdp->chgBus(c+1953,(vlTOPp->top__DOT__l2__DOT__inmem_read_index[0]),16);
        vcdp->chgBus(c+1954,(vlTOPp->top__DOT__l2__DOT__inmem_read_index[1]),16);
        vcdp->chgBus(c+1955,(vlTOPp->top__DOT__l2__DOT__inmem_read_index[2]),16);
        vcdp->chgBus(c+1977,(vlTOPp->top__DOT__l2__DOT__inmem_read_index
                             [2U]),16);
        vcdp->chgBus(c+1985,(vlTOPp->top__DOT__l2__DOT__inmem_read_index
                             [1U]),16);
        vcdp->chgBus(c+1993,(vlTOPp->top__DOT__l2__DOT__inmem_read_index
                             [0U]),16);
        vcdp->chgBus(c+2001,(vlTOPp->top__DOT__l2__DOT__outmem_write_index
                             [2U]),16);
        vcdp->chgBus(c+2009,(vlTOPp->top__DOT__l2__DOT__outmem_write_index
                             [1U]),16);
        vcdp->chgBus(c+2017,(vlTOPp->top__DOT__l2__DOT__outmem_write_index
                             [0U]),16);
        vcdp->chgQuad(c+2025,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias
                              [(0x1fU & vlTOPp->top__DOT__l3__DOT__weight_read_index
                                [2U])]),64);
        vcdp->chgQuad(c+2041,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[0]),64);
        vcdp->chgQuad(c+2043,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[1]),64);
        vcdp->chgQuad(c+2045,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[2]),64);
        vcdp->chgQuad(c+2047,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[3]),64);
        vcdp->chgQuad(c+2049,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[4]),64);
        vcdp->chgQuad(c+2051,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[5]),64);
        vcdp->chgQuad(c+2053,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[6]),64);
        vcdp->chgQuad(c+2055,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[7]),64);
        vcdp->chgQuad(c+2057,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[8]),64);
        vcdp->chgQuad(c+2059,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[9]),64);
        vcdp->chgQuad(c+2061,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[10]),64);
        vcdp->chgQuad(c+2063,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[11]),64);
        vcdp->chgQuad(c+2065,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[12]),64);
        vcdp->chgQuad(c+2067,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[13]),64);
        vcdp->chgQuad(c+2069,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[14]),64);
        vcdp->chgQuad(c+2071,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[15]),64);
        vcdp->chgBus(c+2297,(vlTOPp->top__DOT__l3__DOT__weight_read_index[0]),16);
        vcdp->chgBus(c+2298,(vlTOPp->top__DOT__l3__DOT__weight_read_index[1]),16);
        vcdp->chgBus(c+2299,(vlTOPp->top__DOT__l3__DOT__weight_read_index[2]),16);
        vcdp->chgBus(c+2300,(vlTOPp->top__DOT__l3__DOT__weight_read_index[3]),16);
        vcdp->chgBus(c+2329,(vlTOPp->top__DOT__l3__DOT__act_read_index[0]),16);
        vcdp->chgBus(c+2330,(vlTOPp->top__DOT__l3__DOT__act_read_index[1]),16);
        vcdp->chgBus(c+2331,(vlTOPp->top__DOT__l3__DOT__act_read_index[2]),16);
        vcdp->chgBus(c+2353,(vlTOPp->top__DOT__l3__DOT__outmem_index[0]),16);
        vcdp->chgBus(c+2354,(vlTOPp->top__DOT__l3__DOT__outmem_index[1]),16);
        vcdp->chgBus(c+2355,(vlTOPp->top__DOT__l3__DOT__outmem_index[2]),16);
        vcdp->chgBus(c+2377,(vlTOPp->top__DOT__l3__DOT__i),32);
        vcdp->chgBus(c+2385,(vlTOPp->top__DOT__l3__DOT__j),32);
        vcdp->chgBus(c+2393,(vlTOPp->top__DOT__l3__DOT__act_read_index
                             [1U]),16);
        vcdp->chgBus(c+2401,(vlTOPp->top__DOT__l3__DOT__act_read_index
                             [0U]),16);
        vcdp->chgBus(c+2409,(vlTOPp->top__DOT__l3__DOT__weight_read_index
                             [2U]),16);
        vcdp->chgQuad(c+2417,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[0]),64);
        vcdp->chgQuad(c+2419,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[1]),64);
        vcdp->chgQuad(c+2421,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[2]),64);
        vcdp->chgQuad(c+2423,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[3]),64);
        vcdp->chgQuad(c+2425,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[4]),64);
        vcdp->chgQuad(c+2427,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[5]),64);
        vcdp->chgQuad(c+2429,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[6]),64);
        vcdp->chgQuad(c+2431,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[7]),64);
        vcdp->chgQuad(c+2433,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[8]),64);
        vcdp->chgQuad(c+2435,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[9]),64);
        vcdp->chgQuad(c+2437,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[10]),64);
        vcdp->chgQuad(c+2439,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[11]),64);
        vcdp->chgQuad(c+2441,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[12]),64);
        vcdp->chgQuad(c+2443,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[13]),64);
        vcdp->chgQuad(c+2445,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[14]),64);
        vcdp->chgQuad(c+2447,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[15]),64);
        vcdp->chgQuad(c+2449,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[16]),64);
        vcdp->chgQuad(c+2451,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[17]),64);
        vcdp->chgQuad(c+2453,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[18]),64);
        vcdp->chgQuad(c+2455,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[19]),64);
        vcdp->chgQuad(c+2457,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[20]),64);
        vcdp->chgQuad(c+2459,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[21]),64);
        vcdp->chgQuad(c+2461,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[22]),64);
        vcdp->chgQuad(c+2463,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[23]),64);
        vcdp->chgQuad(c+2465,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[24]),64);
        vcdp->chgQuad(c+2467,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[25]),64);
        vcdp->chgQuad(c+2469,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[26]),64);
        vcdp->chgQuad(c+2471,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[27]),64);
        vcdp->chgQuad(c+2473,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[28]),64);
        vcdp->chgQuad(c+2475,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[29]),64);
        vcdp->chgQuad(c+2477,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[30]),64);
        vcdp->chgQuad(c+2479,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[31]),64);
        vcdp->chgBus(c+2929,(vlTOPp->top__DOT__l3__DOT__outmem_index
                             [2U]),16);
        vcdp->chgBus(c+2937,(vlTOPp->top__DOT__l3__DOT__outmem_index
                             [1U]),16);
        vcdp->chgBus(c+2945,(vlTOPp->top__DOT__l3__DOT__outmem_index
                             [0U]),16);
        vcdp->chgQuad(c+2953,(vlTOPp->top__DOT__l3__DOT__outmem_write_data
                              [0U]),64);
        vcdp->chgBit(c+2969,(vlTOPp->top__DOT__l4__DOT__outmem_want_write));
        vcdp->chgBus(c+2977,(vlTOPp->top__DOT__l4__DOT__outmem_write_index[0]),16);
        vcdp->chgBus(c+2978,(vlTOPp->top__DOT__l4__DOT__outmem_write_index[1]),16);
        vcdp->chgBus(c+2979,(vlTOPp->top__DOT__l4__DOT__outmem_write_index[2]),16);
        vcdp->chgBus(c+3001,(vlTOPp->top__DOT__l4__DOT__inmem_read_index[0]),16);
        vcdp->chgBus(c+3002,(vlTOPp->top__DOT__l4__DOT__inmem_read_index[1]),16);
        vcdp->chgBus(c+3003,(vlTOPp->top__DOT__l4__DOT__inmem_read_index[2]),16);
        vcdp->chgBus(c+3025,(vlTOPp->top__DOT__l4__DOT__inmem_read_index
                             [2U]),16);
        vcdp->chgBus(c+3033,(vlTOPp->top__DOT__l4__DOT__inmem_read_index
                             [1U]),16);
        vcdp->chgBus(c+3041,(vlTOPp->top__DOT__l4__DOT__inmem_read_index
                             [0U]),16);
        vcdp->chgBus(c+3049,(vlTOPp->top__DOT__l4__DOT__outmem_write_index
                             [2U]),16);
        vcdp->chgBus(c+3057,(vlTOPp->top__DOT__l4__DOT__outmem_write_index
                             [1U]),16);
        vcdp->chgBus(c+3065,(vlTOPp->top__DOT__l4__DOT__outmem_write_index
                             [0U]),16);
        vcdp->chgQuad(c+3073,(((9U >= (0xfU & (IData)(vlTOPp->top__DOT__l5__DOT__read_outmem_index)))
                                ? vlTOPp->top__DOT__l5__DOT__out_memory__DOT__mem
                               [(1U & ((IData)(1U) 
                                       + (IData)(vlTOPp->top__DOT__l5__DOT__out_memory__DOT__read_index_entry)))]
                               [((9U >= (0xfU & (IData)(vlTOPp->top__DOT__l5__DOT__out_memory__DOT__read_index_y)))
                                  ? (0xfU & (IData)(vlTOPp->top__DOT__l5__DOT__out_memory__DOT__read_index_y))
                                  : 0U)][(0xfU & (IData)(vlTOPp->top__DOT__l5__DOT__read_outmem_index))]
                                : VL_ULL(0))),64);
        vcdp->chgQuad(c+3089,(((0x31fU >= (0x3ffU & (IData)(vlTOPp->top__DOT__l5__DOT__act_read_index)))
                                ? vlTOPp->top__DOT__l5__DOT__activation__DOT__mem
                               [((0U >= (1U & (IData)(vlTOPp->top__DOT__l5__DOT__activation__DOT__read_index_entry))) 
                                 & (IData)(vlTOPp->top__DOT__l5__DOT__activation__DOT__read_index_entry))]
                               [((0x31fU >= (0x3ffU 
                                             & (IData)(vlTOPp->top__DOT__l5__DOT__activation__DOT__read_index_y)))
                                  ? (0x3ffU & (IData)(vlTOPp->top__DOT__l5__DOT__activation__DOT__read_index_y))
                                  : 0U)][(0x3ffU & (IData)(vlTOPp->top__DOT__l5__DOT__act_read_index))]
                                : VL_ULL(0))),64);
        vcdp->chgQuad(c+3105,(((0x31fU >= (0x3ffU & 
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
        vcdp->chgQuad(c+3121,(((0U >= (1U & vlTOPp->top__DOT__l5__DOT__weight_read_index
                                       [1U])) ? vlTOPp->top__DOT__l5__DOT__weights__DOT__mem_bias
                               [(1U & vlTOPp->top__DOT__l5__DOT__weight_read_index
                                 [1U])] : VL_ULL(0))),64);
        vcdp->chgQuad(c+3137,(vlTOPp->top__DOT__l5__DOT__outmem_write_data),64);
        vcdp->chgBus(c+3153,(vlTOPp->top__DOT__l5__DOT__weight_read_index[0]),16);
        vcdp->chgBus(c+3154,(vlTOPp->top__DOT__l5__DOT__weight_read_index[1]),16);
        vcdp->chgBus(c+3169,(vlTOPp->top__DOT__l5__DOT__act_read_index),16);
        vcdp->chgBus(c+3177,(vlTOPp->top__DOT__l5__DOT__outmem_index),16);
        vcdp->chgBus(c+3185,(vlTOPp->top__DOT__l5__DOT__weight_read_index
                             [1U]),16);
        vcdp->chgBus(c+3193,(vlTOPp->top__DOT__l5__DOT__weight_read_index
                             [0U]),16);
        vcdp->chgQuad(c+3201,(vlTOPp->top__DOT__l5__DOT__weights__DOT__mem_bias[0]),64);
    }
}

void Vtop::traceChgThis__4(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+3217,(vlTOPp->clk));
        vcdp->chgQuad(c+3225,(vlTOPp->input_data),64);
        vcdp->chgBus(c+3241,(vlTOPp->input_index[0]),16);
        vcdp->chgBus(c+3242,(vlTOPp->input_index[1]),16);
        vcdp->chgBus(c+3243,(vlTOPp->input_index[2]),16);
        vcdp->chgBus(c+3244,(vlTOPp->input_index[3]),16);
        vcdp->chgBit(c+3273,(vlTOPp->input_write_act));
        vcdp->chgBit(c+3281,(vlTOPp->input_write_weights));
        vcdp->chgBit(c+3289,(vlTOPp->input_write_bias));
        vcdp->chgBit(c+3297,(vlTOPp->l3_write_weights));
        vcdp->chgBit(c+3305,(vlTOPp->l3_write_bias));
        vcdp->chgBit(c+3313,(vlTOPp->l5_write_weights));
        vcdp->chgBit(c+3321,(vlTOPp->l5_write_bias));
        vcdp->chgBit(c+3329,(vlTOPp->compute));
        vcdp->chgBit(c+3337,(vlTOPp->reset));
        vcdp->chgBus(c+3345,(vlTOPp->input_index[3U]),16);
        vcdp->chgBus(c+3353,(vlTOPp->input_index[2U]),16);
        vcdp->chgBus(c+3361,(vlTOPp->input_index[1U]),16);
        vcdp->chgBus(c+3369,(vlTOPp->input_index[0U]),16);
    }
}
