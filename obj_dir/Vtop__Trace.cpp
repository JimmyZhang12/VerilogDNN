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
        vcdp->chgQuad(c+241,(vlTOPp->top__DOT__l1__DOT__act_out_data[0]),64);
        vcdp->chgQuad(c+257,(vlTOPp->top__DOT__l1__DOT__weights_out_data[0]),64);
        vcdp->chgBit(c+273,(vlTOPp->top__DOT__l1__DOT__outmem_want_write));
        vcdp->chgBus(c+281,(vlTOPp->top__DOT__l1__DOT__state),16);
        vcdp->chgQuad(c+289,(vlTOPp->top__DOT__l1__DOT____Vcellout__activation__out_data[0]),64);
        vcdp->chgQuad(c+305,(vlTOPp->top__DOT__l1__DOT____Vcellout__weights__out_data_weight[0]),64);
        vcdp->chgBus(c+321,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                            [2U]),16);
        vcdp->chgBus(c+329,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                            [1U]),16);
        vcdp->chgBus(c+337,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                            [0U]),16);
        vcdp->chgBus(c+345,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index[0]),16);
        vcdp->chgBus(c+346,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index[1]),16);
        vcdp->chgBus(c+347,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index[2]),16);
        vcdp->chgBus(c+369,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index[0]),16);
        vcdp->chgBus(c+370,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index[1]),16);
        vcdp->chgBus(c+371,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index[2]),16);
        vcdp->chgQuad(c+393,(vlTOPp->top__DOT__l2__DOT__outmem_write_data),64);
        vcdp->chgQuad(c+409,(vlTOPp->top__DOT__l2__DOT__inmem_read_data),64);
        vcdp->chgBus(c+425,(vlTOPp->top__DOT__l2__DOT__state),16);
        vcdp->chgBus(c+433,(vlTOPp->top__DOT__l2__DOT__k_state),16);
        vcdp->chgBus(c+441,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index
                            [2U]),16);
        vcdp->chgBus(c+449,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index
                            [1U]),16);
        vcdp->chgBus(c+457,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index
                            [0U]),16);
        vcdp->chgBus(c+465,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index
                            [2U]),16);
        vcdp->chgBus(c+473,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index
                            [1U]),16);
        vcdp->chgBus(c+481,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index
                            [0U]),16);
        vcdp->chgBus(c+489,(vlTOPp->top__DOT__scheduler_2_l2l3_index
                            [2U]),16);
        vcdp->chgBus(c+497,(vlTOPp->top__DOT__scheduler_2_l2l3_index
                            [1U]),16);
        vcdp->chgBus(c+505,(vlTOPp->top__DOT__scheduler_2_l2l3_index
                            [0U]),16);
        vcdp->chgBus(c+513,(vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index[0]),16);
        vcdp->chgBus(c+514,(vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index[1]),16);
        vcdp->chgBus(c+515,(vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index[2]),16);
        vcdp->chgQuad(c+537,(vlTOPp->top__DOT__l3__DOT__act_out_data[0]),64);
        vcdp->chgQuad(c+539,(vlTOPp->top__DOT__l3__DOT__act_out_data[1]),64);
        vcdp->chgQuad(c+541,(vlTOPp->top__DOT__l3__DOT__act_out_data[2]),64);
        vcdp->chgQuad(c+543,(vlTOPp->top__DOT__l3__DOT__act_out_data[3]),64);
        vcdp->chgQuad(c+545,(vlTOPp->top__DOT__l3__DOT__act_out_data[4]),64);
        vcdp->chgQuad(c+547,(vlTOPp->top__DOT__l3__DOT__act_out_data[5]),64);
        vcdp->chgQuad(c+549,(vlTOPp->top__DOT__l3__DOT__act_out_data[6]),64);
        vcdp->chgQuad(c+551,(vlTOPp->top__DOT__l3__DOT__act_out_data[7]),64);
        vcdp->chgQuad(c+553,(vlTOPp->top__DOT__l3__DOT__act_out_data[8]),64);
        vcdp->chgQuad(c+555,(vlTOPp->top__DOT__l3__DOT__act_out_data[9]),64);
        vcdp->chgQuad(c+557,(vlTOPp->top__DOT__l3__DOT__act_out_data[10]),64);
        vcdp->chgQuad(c+559,(vlTOPp->top__DOT__l3__DOT__act_out_data[11]),64);
        vcdp->chgQuad(c+561,(vlTOPp->top__DOT__l3__DOT__act_out_data[12]),64);
        vcdp->chgQuad(c+563,(vlTOPp->top__DOT__l3__DOT__act_out_data[13]),64);
        vcdp->chgQuad(c+565,(vlTOPp->top__DOT__l3__DOT__act_out_data[14]),64);
        vcdp->chgQuad(c+567,(vlTOPp->top__DOT__l3__DOT__act_out_data[15]),64);
        vcdp->chgQuad(c+793,(vlTOPp->top__DOT__l3__DOT__weights_out_data[0]),64);
        vcdp->chgQuad(c+795,(vlTOPp->top__DOT__l3__DOT__weights_out_data[1]),64);
        vcdp->chgQuad(c+797,(vlTOPp->top__DOT__l3__DOT__weights_out_data[2]),64);
        vcdp->chgQuad(c+799,(vlTOPp->top__DOT__l3__DOT__weights_out_data[3]),64);
        vcdp->chgQuad(c+801,(vlTOPp->top__DOT__l3__DOT__weights_out_data[4]),64);
        vcdp->chgQuad(c+803,(vlTOPp->top__DOT__l3__DOT__weights_out_data[5]),64);
        vcdp->chgQuad(c+805,(vlTOPp->top__DOT__l3__DOT__weights_out_data[6]),64);
        vcdp->chgQuad(c+807,(vlTOPp->top__DOT__l3__DOT__weights_out_data[7]),64);
        vcdp->chgQuad(c+809,(vlTOPp->top__DOT__l3__DOT__weights_out_data[8]),64);
        vcdp->chgQuad(c+811,(vlTOPp->top__DOT__l3__DOT__weights_out_data[9]),64);
        vcdp->chgQuad(c+813,(vlTOPp->top__DOT__l3__DOT__weights_out_data[10]),64);
        vcdp->chgQuad(c+815,(vlTOPp->top__DOT__l3__DOT__weights_out_data[11]),64);
        vcdp->chgQuad(c+817,(vlTOPp->top__DOT__l3__DOT__weights_out_data[12]),64);
        vcdp->chgQuad(c+819,(vlTOPp->top__DOT__l3__DOT__weights_out_data[13]),64);
        vcdp->chgQuad(c+821,(vlTOPp->top__DOT__l3__DOT__weights_out_data[14]),64);
        vcdp->chgQuad(c+823,(vlTOPp->top__DOT__l3__DOT__weights_out_data[15]),64);
        vcdp->chgBit(c+1049,(vlTOPp->top__DOT__l3__DOT__outmem_want_write));
        vcdp->chgBus(c+1057,(vlTOPp->top__DOT__l3__DOT__state),16);
        vcdp->chgQuad(c+1065,(vlTOPp->top__DOT__l3__DOT____Vcellout__activation__out_data[0]),64);
        vcdp->chgQuad(c+1067,(vlTOPp->top__DOT__l3__DOT____Vcellout__activation__out_data[1]),64);
        vcdp->chgQuad(c+1069,(vlTOPp->top__DOT__l3__DOT____Vcellout__activation__out_data[2]),64);
        vcdp->chgQuad(c+1071,(vlTOPp->top__DOT__l3__DOT____Vcellout__activation__out_data[3]),64);
        vcdp->chgQuad(c+1073,(vlTOPp->top__DOT__l3__DOT____Vcellout__activation__out_data[4]),64);
        vcdp->chgQuad(c+1075,(vlTOPp->top__DOT__l3__DOT____Vcellout__activation__out_data[5]),64);
        vcdp->chgQuad(c+1077,(vlTOPp->top__DOT__l3__DOT____Vcellout__activation__out_data[6]),64);
        vcdp->chgQuad(c+1079,(vlTOPp->top__DOT__l3__DOT____Vcellout__activation__out_data[7]),64);
        vcdp->chgQuad(c+1081,(vlTOPp->top__DOT__l3__DOT____Vcellout__activation__out_data[8]),64);
        vcdp->chgQuad(c+1083,(vlTOPp->top__DOT__l3__DOT____Vcellout__activation__out_data[9]),64);
        vcdp->chgQuad(c+1085,(vlTOPp->top__DOT__l3__DOT____Vcellout__activation__out_data[10]),64);
        vcdp->chgQuad(c+1087,(vlTOPp->top__DOT__l3__DOT____Vcellout__activation__out_data[11]),64);
        vcdp->chgQuad(c+1089,(vlTOPp->top__DOT__l3__DOT____Vcellout__activation__out_data[12]),64);
        vcdp->chgQuad(c+1091,(vlTOPp->top__DOT__l3__DOT____Vcellout__activation__out_data[13]),64);
        vcdp->chgQuad(c+1093,(vlTOPp->top__DOT__l3__DOT____Vcellout__activation__out_data[14]),64);
        vcdp->chgQuad(c+1095,(vlTOPp->top__DOT__l3__DOT____Vcellout__activation__out_data[15]),64);
        vcdp->chgQuad(c+1321,(vlTOPp->top__DOT__l3__DOT____Vcellout__weights__out_data_weight[0]),64);
        vcdp->chgQuad(c+1323,(vlTOPp->top__DOT__l3__DOT____Vcellout__weights__out_data_weight[1]),64);
        vcdp->chgQuad(c+1325,(vlTOPp->top__DOT__l3__DOT____Vcellout__weights__out_data_weight[2]),64);
        vcdp->chgQuad(c+1327,(vlTOPp->top__DOT__l3__DOT____Vcellout__weights__out_data_weight[3]),64);
        vcdp->chgQuad(c+1329,(vlTOPp->top__DOT__l3__DOT____Vcellout__weights__out_data_weight[4]),64);
        vcdp->chgQuad(c+1331,(vlTOPp->top__DOT__l3__DOT____Vcellout__weights__out_data_weight[5]),64);
        vcdp->chgQuad(c+1333,(vlTOPp->top__DOT__l3__DOT____Vcellout__weights__out_data_weight[6]),64);
        vcdp->chgQuad(c+1335,(vlTOPp->top__DOT__l3__DOT____Vcellout__weights__out_data_weight[7]),64);
        vcdp->chgQuad(c+1337,(vlTOPp->top__DOT__l3__DOT____Vcellout__weights__out_data_weight[8]),64);
        vcdp->chgQuad(c+1339,(vlTOPp->top__DOT__l3__DOT____Vcellout__weights__out_data_weight[9]),64);
        vcdp->chgQuad(c+1341,(vlTOPp->top__DOT__l3__DOT____Vcellout__weights__out_data_weight[10]),64);
        vcdp->chgQuad(c+1343,(vlTOPp->top__DOT__l3__DOT____Vcellout__weights__out_data_weight[11]),64);
        vcdp->chgQuad(c+1345,(vlTOPp->top__DOT__l3__DOT____Vcellout__weights__out_data_weight[12]),64);
        vcdp->chgQuad(c+1347,(vlTOPp->top__DOT__l3__DOT____Vcellout__weights__out_data_weight[13]),64);
        vcdp->chgQuad(c+1349,(vlTOPp->top__DOT__l3__DOT____Vcellout__weights__out_data_weight[14]),64);
        vcdp->chgQuad(c+1351,(vlTOPp->top__DOT__l3__DOT____Vcellout__weights__out_data_weight[15]),64);
        vcdp->chgBus(c+1577,(vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index
                             [2U]),16);
        vcdp->chgBus(c+1585,(vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index
                             [1U]),16);
        vcdp->chgBus(c+1593,(vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index
                             [0U]),16);
        vcdp->chgBus(c+1601,(vlTOPp->top__DOT____Vcellinp__l4__inmem_write_index[0]),16);
        vcdp->chgBus(c+1602,(vlTOPp->top__DOT____Vcellinp__l4__inmem_write_index[1]),16);
        vcdp->chgBus(c+1603,(vlTOPp->top__DOT____Vcellinp__l4__inmem_write_index[2]),16);
        vcdp->chgBus(c+1625,(vlTOPp->top__DOT____Vcellinp__l4__outmem_read_index[0]),16);
        vcdp->chgBus(c+1626,(vlTOPp->top__DOT____Vcellinp__l4__outmem_read_index[1]),16);
        vcdp->chgBus(c+1627,(vlTOPp->top__DOT____Vcellinp__l4__outmem_read_index[2]),16);
        vcdp->chgQuad(c+1649,(vlTOPp->top__DOT__l4__DOT__outmem_write_data),64);
        vcdp->chgQuad(c+1665,(vlTOPp->top__DOT__l4__DOT__inmem_read_data),64);
        vcdp->chgBus(c+1681,(vlTOPp->top__DOT__l4__DOT__state),16);
        vcdp->chgBus(c+1689,(vlTOPp->top__DOT__l4__DOT__k_state),16);
        vcdp->chgBus(c+1697,(vlTOPp->top__DOT____Vcellinp__l4__inmem_write_index
                             [2U]),16);
        vcdp->chgBus(c+1705,(vlTOPp->top__DOT____Vcellinp__l4__inmem_write_index
                             [1U]),16);
        vcdp->chgBus(c+1713,(vlTOPp->top__DOT____Vcellinp__l4__inmem_write_index
                             [0U]),16);
        vcdp->chgBus(c+1721,(vlTOPp->top__DOT____Vcellinp__l4__outmem_read_index
                             [2U]),16);
        vcdp->chgBus(c+1729,(vlTOPp->top__DOT____Vcellinp__l4__outmem_read_index
                             [1U]),16);
        vcdp->chgBus(c+1737,(vlTOPp->top__DOT____Vcellinp__l4__outmem_read_index
                             [0U]),16);
        vcdp->chgBit(c+1745,(vlTOPp->top__DOT__l5__DOT__outmem_want_write));
        vcdp->chgBus(c+1753,(vlTOPp->top__DOT__l5__DOT__state),16);
    }
}

void Vtop::traceChgThis__3(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1761,(vlTOPp->top__DOT__scheduler_2_l5_inmem_index),16);
        vcdp->chgBit(c+1769,(vlTOPp->top__DOT__scheduler_2_l2_inmem_wantwrite));
        vcdp->chgBit(c+1777,(vlTOPp->top__DOT__scheduler_2_l3_inmem_wantwrite));
        vcdp->chgBit(c+1785,(vlTOPp->top__DOT__scheduler_2_l4_inmem_wantwrite));
        vcdp->chgBit(c+1793,(vlTOPp->top__DOT__scheduler_2_l5_inmem_wantwrite));
        vcdp->chgBit(c+1801,(vlTOPp->top__DOT__input_2_scheduler_done));
        vcdp->chgBit(c+1809,(vlTOPp->top__DOT__l2_compute_start));
        vcdp->chgBit(c+1817,(vlTOPp->top__DOT__l2_compute_done));
        vcdp->chgBit(c+1825,(vlTOPp->top__DOT__l3_compute_start));
        vcdp->chgBit(c+1833,(vlTOPp->top__DOT__l3_compute_done));
        vcdp->chgBit(c+1841,(vlTOPp->top__DOT__l4_compute_start));
        vcdp->chgBit(c+1849,(vlTOPp->top__DOT__l4_compute_done));
        vcdp->chgBit(c+1857,(vlTOPp->top__DOT__l5_compute_start));
        vcdp->chgBit(c+1865,(vlTOPp->top__DOT__l5_compute_done));
        vcdp->chgBus(c+1873,(vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index[0]),16);
        vcdp->chgBus(c+1874,(vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index[1]),16);
        vcdp->chgBus(c+1875,(vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index[2]),16);
        vcdp->chgBus(c+1897,(vlTOPp->top__DOT____Vcellout__scheduler__l2_l3_index[0]),16);
        vcdp->chgBus(c+1898,(vlTOPp->top__DOT____Vcellout__scheduler__l2_l3_index[1]),16);
        vcdp->chgBus(c+1899,(vlTOPp->top__DOT____Vcellout__scheduler__l2_l3_index[2]),16);
        vcdp->chgBus(c+1900,(vlTOPp->top__DOT____Vcellout__scheduler__l2_l3_index[3]),16);
        vcdp->chgBus(c+1929,(vlTOPp->top__DOT____Vcellout__scheduler__l3_l4_index[0]),16);
        vcdp->chgBus(c+1930,(vlTOPp->top__DOT____Vcellout__scheduler__l3_l4_index[1]),16);
        vcdp->chgBus(c+1931,(vlTOPp->top__DOT____Vcellout__scheduler__l3_l4_index[2]),16);
        vcdp->chgBus(c+1932,(vlTOPp->top__DOT____Vcellout__scheduler__l3_l4_index[3]),16);
        vcdp->chgBus(c+1961,(vlTOPp->top__DOT____Vcellout__scheduler__l4_outmem_index[0]),16);
        vcdp->chgBus(c+1962,(vlTOPp->top__DOT____Vcellout__scheduler__l4_outmem_index[1]),16);
        vcdp->chgBus(c+1963,(vlTOPp->top__DOT____Vcellout__scheduler__l4_outmem_index[2]),16);
        vcdp->chgQuad(c+1985,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias
                              [(0xfU & vlTOPp->top__DOT__l1__DOT__weight_read_index
                                [2U])]),64);
        vcdp->chgQuad(c+2001,(vlTOPp->top__DOT__l1__DOT__outmem_write_data[0]),64);
        vcdp->chgBus(c+2017,(vlTOPp->top__DOT__l1__DOT__weight_read_index[0]),16);
        vcdp->chgBus(c+2018,(vlTOPp->top__DOT__l1__DOT__weight_read_index[1]),16);
        vcdp->chgBus(c+2019,(vlTOPp->top__DOT__l1__DOT__weight_read_index[2]),16);
        vcdp->chgBus(c+2020,(vlTOPp->top__DOT__l1__DOT__weight_read_index[3]),16);
        vcdp->chgBus(c+2049,(vlTOPp->top__DOT__l1__DOT__act_read_index[0]),16);
        vcdp->chgBus(c+2050,(vlTOPp->top__DOT__l1__DOT__act_read_index[1]),16);
        vcdp->chgBus(c+2051,(vlTOPp->top__DOT__l1__DOT__act_read_index[2]),16);
        vcdp->chgBus(c+2073,(vlTOPp->top__DOT__l1__DOT__outmem_index[0]),16);
        vcdp->chgBus(c+2074,(vlTOPp->top__DOT__l1__DOT__outmem_index[1]),16);
        vcdp->chgBus(c+2075,(vlTOPp->top__DOT__l1__DOT__outmem_index[2]),16);
        vcdp->chgBus(c+2097,(vlTOPp->top__DOT__l1__DOT__i),32);
        vcdp->chgBus(c+2105,(vlTOPp->top__DOT__l1__DOT__act_read_index
                             [1U]),16);
        vcdp->chgBus(c+2113,(vlTOPp->top__DOT__l1__DOT__act_read_index
                             [0U]),16);
        vcdp->chgBus(c+2121,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                             [2U]),16);
        vcdp->chgBus(c+2129,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                             [1U]),16);
        vcdp->chgBus(c+2137,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                             [0U]),16);
        vcdp->chgQuad(c+2145,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[0]),64);
        vcdp->chgQuad(c+2147,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[1]),64);
        vcdp->chgQuad(c+2149,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[2]),64);
        vcdp->chgQuad(c+2151,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[3]),64);
        vcdp->chgQuad(c+2153,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[4]),64);
        vcdp->chgQuad(c+2155,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[5]),64);
        vcdp->chgQuad(c+2157,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[6]),64);
        vcdp->chgQuad(c+2159,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[7]),64);
        vcdp->chgQuad(c+2161,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[8]),64);
        vcdp->chgQuad(c+2163,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[9]),64);
        vcdp->chgQuad(c+2165,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[10]),64);
        vcdp->chgQuad(c+2167,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[11]),64);
        vcdp->chgQuad(c+2169,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[12]),64);
        vcdp->chgQuad(c+2171,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[13]),64);
        vcdp->chgQuad(c+2173,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[14]),64);
        vcdp->chgQuad(c+2175,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[15]),64);
        vcdp->chgBus(c+2401,(vlTOPp->top__DOT__l1__DOT__outmem_index
                             [2U]),16);
        vcdp->chgBus(c+2409,(vlTOPp->top__DOT__l1__DOT__outmem_index
                             [1U]),16);
        vcdp->chgBus(c+2417,(vlTOPp->top__DOT__l1__DOT__outmem_index
                             [0U]),16);
        vcdp->chgQuad(c+2425,(vlTOPp->top__DOT__l1__DOT__outmem_write_data
                              [0U]),64);
        vcdp->chgBit(c+2441,(vlTOPp->top__DOT__l2__DOT__outmem_want_write));
        vcdp->chgBus(c+2449,(vlTOPp->top__DOT__l2__DOT__outmem_write_index[0]),16);
        vcdp->chgBus(c+2450,(vlTOPp->top__DOT__l2__DOT__outmem_write_index[1]),16);
        vcdp->chgBus(c+2451,(vlTOPp->top__DOT__l2__DOT__outmem_write_index[2]),16);
        vcdp->chgBus(c+2473,(vlTOPp->top__DOT__l2__DOT__inmem_read_index[0]),16);
        vcdp->chgBus(c+2474,(vlTOPp->top__DOT__l2__DOT__inmem_read_index[1]),16);
        vcdp->chgBus(c+2475,(vlTOPp->top__DOT__l2__DOT__inmem_read_index[2]),16);
        vcdp->chgBus(c+2497,(vlTOPp->top__DOT__l2__DOT__inmem_read_index
                             [2U]),16);
        vcdp->chgBus(c+2505,(vlTOPp->top__DOT__l2__DOT__inmem_read_index
                             [1U]),16);
        vcdp->chgBus(c+2513,(vlTOPp->top__DOT__l2__DOT__inmem_read_index
                             [0U]),16);
        vcdp->chgBus(c+2521,(vlTOPp->top__DOT__l2__DOT__outmem_write_index
                             [2U]),16);
        vcdp->chgBus(c+2529,(vlTOPp->top__DOT__l2__DOT__outmem_write_index
                             [1U]),16);
        vcdp->chgBus(c+2537,(vlTOPp->top__DOT__l2__DOT__outmem_write_index
                             [0U]),16);
        vcdp->chgQuad(c+2545,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias
                              [(0x1fU & vlTOPp->top__DOT__l3__DOT__weight_read_index
                                [2U])]),64);
        vcdp->chgQuad(c+2561,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[0]),64);
        vcdp->chgQuad(c+2563,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[1]),64);
        vcdp->chgQuad(c+2565,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[2]),64);
        vcdp->chgQuad(c+2567,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[3]),64);
        vcdp->chgQuad(c+2569,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[4]),64);
        vcdp->chgQuad(c+2571,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[5]),64);
        vcdp->chgQuad(c+2573,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[6]),64);
        vcdp->chgQuad(c+2575,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[7]),64);
        vcdp->chgQuad(c+2577,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[8]),64);
        vcdp->chgQuad(c+2579,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[9]),64);
        vcdp->chgQuad(c+2581,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[10]),64);
        vcdp->chgQuad(c+2583,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[11]),64);
        vcdp->chgQuad(c+2585,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[12]),64);
        vcdp->chgQuad(c+2587,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[13]),64);
        vcdp->chgQuad(c+2589,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[14]),64);
        vcdp->chgQuad(c+2591,(vlTOPp->top__DOT__l3__DOT__outmem_write_data[15]),64);
        vcdp->chgBus(c+2817,(vlTOPp->top__DOT__l3__DOT__weight_read_index[0]),16);
        vcdp->chgBus(c+2818,(vlTOPp->top__DOT__l3__DOT__weight_read_index[1]),16);
        vcdp->chgBus(c+2819,(vlTOPp->top__DOT__l3__DOT__weight_read_index[2]),16);
        vcdp->chgBus(c+2820,(vlTOPp->top__DOT__l3__DOT__weight_read_index[3]),16);
        vcdp->chgBus(c+2849,(vlTOPp->top__DOT__l3__DOT__act_read_index[0]),16);
        vcdp->chgBus(c+2850,(vlTOPp->top__DOT__l3__DOT__act_read_index[1]),16);
        vcdp->chgBus(c+2851,(vlTOPp->top__DOT__l3__DOT__act_read_index[2]),16);
        vcdp->chgBus(c+2873,(vlTOPp->top__DOT__l3__DOT__outmem_index[0]),16);
        vcdp->chgBus(c+2874,(vlTOPp->top__DOT__l3__DOT__outmem_index[1]),16);
        vcdp->chgBus(c+2875,(vlTOPp->top__DOT__l3__DOT__outmem_index[2]),16);
        vcdp->chgBus(c+2897,(vlTOPp->top__DOT__l3__DOT__i),32);
        vcdp->chgBus(c+2905,(vlTOPp->top__DOT__l3__DOT__act_read_index
                             [1U]),16);
        vcdp->chgBus(c+2913,(vlTOPp->top__DOT__l3__DOT__act_read_index
                             [0U]),16);
        vcdp->chgBus(c+2921,(vlTOPp->top__DOT__l3__DOT__weight_read_index
                             [2U]),16);
        vcdp->chgBus(c+2929,(vlTOPp->top__DOT__l3__DOT__weight_read_index
                             [1U]),16);
        vcdp->chgBus(c+2937,(vlTOPp->top__DOT__l3__DOT__weight_read_index
                             [0U]),16);
        vcdp->chgQuad(c+2945,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[0]),64);
        vcdp->chgQuad(c+2947,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[1]),64);
        vcdp->chgQuad(c+2949,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[2]),64);
        vcdp->chgQuad(c+2951,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[3]),64);
        vcdp->chgQuad(c+2953,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[4]),64);
        vcdp->chgQuad(c+2955,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[5]),64);
        vcdp->chgQuad(c+2957,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[6]),64);
        vcdp->chgQuad(c+2959,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[7]),64);
        vcdp->chgQuad(c+2961,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[8]),64);
        vcdp->chgQuad(c+2963,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[9]),64);
        vcdp->chgQuad(c+2965,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[10]),64);
        vcdp->chgQuad(c+2967,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[11]),64);
        vcdp->chgQuad(c+2969,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[12]),64);
        vcdp->chgQuad(c+2971,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[13]),64);
        vcdp->chgQuad(c+2973,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[14]),64);
        vcdp->chgQuad(c+2975,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[15]),64);
        vcdp->chgQuad(c+2977,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[16]),64);
        vcdp->chgQuad(c+2979,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[17]),64);
        vcdp->chgQuad(c+2981,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[18]),64);
        vcdp->chgQuad(c+2983,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[19]),64);
        vcdp->chgQuad(c+2985,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[20]),64);
        vcdp->chgQuad(c+2987,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[21]),64);
        vcdp->chgQuad(c+2989,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[22]),64);
        vcdp->chgQuad(c+2991,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[23]),64);
        vcdp->chgQuad(c+2993,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[24]),64);
        vcdp->chgQuad(c+2995,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[25]),64);
        vcdp->chgQuad(c+2997,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[26]),64);
        vcdp->chgQuad(c+2999,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[27]),64);
        vcdp->chgQuad(c+3001,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[28]),64);
        vcdp->chgQuad(c+3003,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[29]),64);
        vcdp->chgQuad(c+3005,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[30]),64);
        vcdp->chgQuad(c+3007,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[31]),64);
        vcdp->chgBus(c+3457,(vlTOPp->top__DOT__l3__DOT__outmem_index
                             [2U]),16);
        vcdp->chgBus(c+3465,(vlTOPp->top__DOT__l3__DOT__outmem_index
                             [1U]),16);
        vcdp->chgBus(c+3473,(vlTOPp->top__DOT__l3__DOT__outmem_index
                             [0U]),16);
        vcdp->chgQuad(c+3481,(vlTOPp->top__DOT__l3__DOT__outmem_write_data
                              [0U]),64);
        vcdp->chgBit(c+3497,(vlTOPp->top__DOT__l4__DOT__outmem_want_write));
        vcdp->chgBus(c+3505,(vlTOPp->top__DOT__l4__DOT__outmem_write_index[0]),16);
        vcdp->chgBus(c+3506,(vlTOPp->top__DOT__l4__DOT__outmem_write_index[1]),16);
        vcdp->chgBus(c+3507,(vlTOPp->top__DOT__l4__DOT__outmem_write_index[2]),16);
        vcdp->chgBus(c+3529,(vlTOPp->top__DOT__l4__DOT__inmem_read_index[0]),16);
        vcdp->chgBus(c+3530,(vlTOPp->top__DOT__l4__DOT__inmem_read_index[1]),16);
        vcdp->chgBus(c+3531,(vlTOPp->top__DOT__l4__DOT__inmem_read_index[2]),16);
        vcdp->chgBus(c+3553,(vlTOPp->top__DOT__l4__DOT__inmem_read_index
                             [2U]),16);
        vcdp->chgBus(c+3561,(vlTOPp->top__DOT__l4__DOT__inmem_read_index
                             [1U]),16);
        vcdp->chgBus(c+3569,(vlTOPp->top__DOT__l4__DOT__inmem_read_index
                             [0U]),16);
        vcdp->chgBus(c+3577,(vlTOPp->top__DOT__l4__DOT__outmem_write_index
                             [2U]),16);
        vcdp->chgBus(c+3585,(vlTOPp->top__DOT__l4__DOT__outmem_write_index
                             [1U]),16);
        vcdp->chgBus(c+3593,(vlTOPp->top__DOT__l4__DOT__outmem_write_index
                             [0U]),16);
        vcdp->chgQuad(c+3601,(((9U >= (0xfU & (IData)(vlTOPp->top__DOT__l5__DOT__read_outmem_index)))
                                ? vlTOPp->top__DOT__l5__DOT__out_memory__DOT__mem
                               [(1U & ((IData)(1U) 
                                       + (IData)(vlTOPp->top__DOT__l5__DOT__out_memory__DOT__read_index_entry)))]
                               [((9U >= (0xfU & (IData)(vlTOPp->top__DOT__l5__DOT__out_memory__DOT__read_index_y)))
                                  ? (0xfU & (IData)(vlTOPp->top__DOT__l5__DOT__out_memory__DOT__read_index_y))
                                  : 0U)][(0xfU & (IData)(vlTOPp->top__DOT__l5__DOT__read_outmem_index))]
                                : VL_ULL(0))),64);
        vcdp->chgQuad(c+3617,(((0x31fU >= (0x3ffU & (IData)(vlTOPp->top__DOT__l5__DOT__act_read_index)))
                                ? vlTOPp->top__DOT__l5__DOT__activation__DOT__mem
                               [((0U >= (1U & (IData)(vlTOPp->top__DOT__l5__DOT__activation__DOT__read_index_entry))) 
                                 & (IData)(vlTOPp->top__DOT__l5__DOT__activation__DOT__read_index_entry))]
                               [((0x31fU >= (0x3ffU 
                                             & (IData)(vlTOPp->top__DOT__l5__DOT__activation__DOT__read_index_y)))
                                  ? (0x3ffU & (IData)(vlTOPp->top__DOT__l5__DOT__activation__DOT__read_index_y))
                                  : 0U)][(0x3ffU & (IData)(vlTOPp->top__DOT__l5__DOT__act_read_index))]
                                : VL_ULL(0))),64);
        vcdp->chgQuad(c+3633,(((0x31fU >= (0x3ffU & 
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
        vcdp->chgQuad(c+3649,(((0U >= (1U & vlTOPp->top__DOT__l5__DOT__weight_read_index
                                       [1U])) ? vlTOPp->top__DOT__l5__DOT__weights__DOT__mem_bias
                               [(1U & vlTOPp->top__DOT__l5__DOT__weight_read_index
                                 [1U])] : VL_ULL(0))),64);
        vcdp->chgQuad(c+3665,(vlTOPp->top__DOT__l5__DOT__outmem_write_data),64);
        vcdp->chgBus(c+3681,(vlTOPp->top__DOT__l5__DOT__weight_read_index[0]),16);
        vcdp->chgBus(c+3682,(vlTOPp->top__DOT__l5__DOT__weight_read_index[1]),16);
        vcdp->chgBus(c+3697,(vlTOPp->top__DOT__l5__DOT__act_read_index),16);
        vcdp->chgBus(c+3705,(vlTOPp->top__DOT__l5__DOT__outmem_index),16);
        vcdp->chgBus(c+3713,(vlTOPp->top__DOT__l5__DOT__weight_read_index
                             [1U]),16);
        vcdp->chgBus(c+3721,(vlTOPp->top__DOT__l5__DOT__weight_read_index
                             [0U]),16);
        vcdp->chgQuad(c+3729,(vlTOPp->top__DOT__l5__DOT__weights__DOT__mem_bias[0]),64);
    }
}

void Vtop::traceChgThis__4(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+3745,(vlTOPp->clk));
        vcdp->chgQuad(c+3753,(vlTOPp->input_data),64);
        vcdp->chgBus(c+3769,(vlTOPp->input_index[0]),16);
        vcdp->chgBus(c+3770,(vlTOPp->input_index[1]),16);
        vcdp->chgBus(c+3771,(vlTOPp->input_index[2]),16);
        vcdp->chgBus(c+3772,(vlTOPp->input_index[3]),16);
        vcdp->chgBit(c+3801,(vlTOPp->input_write_act));
        vcdp->chgBit(c+3809,(vlTOPp->input_write_weights));
        vcdp->chgBit(c+3817,(vlTOPp->input_write_bias));
        vcdp->chgBit(c+3825,(vlTOPp->l3_write_weights));
        vcdp->chgBit(c+3833,(vlTOPp->l3_write_bias));
        vcdp->chgBit(c+3841,(vlTOPp->l5_write_weights));
        vcdp->chgBit(c+3849,(vlTOPp->l5_write_bias));
        vcdp->chgBit(c+3857,(vlTOPp->compute));
        vcdp->chgBit(c+3865,(vlTOPp->reset));
        vcdp->chgBus(c+3873,(vlTOPp->input_index[3U]),16);
        vcdp->chgBus(c+3881,(vlTOPp->input_index[2U]),16);
        vcdp->chgBus(c+3889,(vlTOPp->input_index[1U]),16);
        vcdp->chgBus(c+3897,(vlTOPp->input_index[0U]),16);
    }
}
