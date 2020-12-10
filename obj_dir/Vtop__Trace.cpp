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
        vcdp->chgBus(c+49,(vlTOPp->top__DOT__scheduler_2_l1l2_index[0]),16);
        vcdp->chgBus(c+50,(vlTOPp->top__DOT__scheduler_2_l1l2_index[1]),16);
        vcdp->chgBus(c+51,(vlTOPp->top__DOT__scheduler_2_l1l2_index[2]),16);
        vcdp->chgBus(c+73,(vlTOPp->top__DOT__scheduler_2_l2l3_index[0]),16);
        vcdp->chgBus(c+74,(vlTOPp->top__DOT__scheduler_2_l2l3_index[1]),16);
        vcdp->chgBus(c+75,(vlTOPp->top__DOT__scheduler_2_l2l3_index[2]),16);
        vcdp->chgBus(c+76,(vlTOPp->top__DOT__scheduler_2_l2l3_index[3]),16);
        vcdp->chgBus(c+105,(vlTOPp->top__DOT__scheduler_2_l3l4_index[0]),16);
        vcdp->chgBus(c+106,(vlTOPp->top__DOT__scheduler_2_l3l4_index[1]),16);
        vcdp->chgBus(c+107,(vlTOPp->top__DOT__scheduler_2_l3l4_index[2]),16);
        vcdp->chgBus(c+108,(vlTOPp->top__DOT__scheduler_2_l3l4_index[3]),16);
        vcdp->chgBit(c+137,(vlTOPp->top__DOT__scheduler_2_input_start));
        vcdp->chgBus(c+145,(vlTOPp->top__DOT__scheduler__DOT__state),16);
        vcdp->chgBus(c+153,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index[0]),16);
        vcdp->chgBus(c+154,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index[1]),16);
        vcdp->chgBus(c+155,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index[2]),16);
        vcdp->chgBit(c+177,(vlTOPp->top__DOT__l1__DOT__outmem_want_write));
        vcdp->chgBus(c+185,(vlTOPp->top__DOT__l1__DOT__state),16);
        vcdp->chgBus(c+193,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                            [2U]),16);
        vcdp->chgBus(c+201,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                            [1U]),16);
        vcdp->chgBus(c+209,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                            [0U]),16);
        vcdp->chgBus(c+217,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index[0]),16);
        vcdp->chgBus(c+218,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index[1]),16);
        vcdp->chgBus(c+219,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index[2]),16);
        vcdp->chgBus(c+241,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index[0]),16);
        vcdp->chgBus(c+242,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index[1]),16);
        vcdp->chgBus(c+243,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index[2]),16);
        vcdp->chgQuad(c+265,(vlTOPp->top__DOT__l2__DOT__outmem_write_data),64);
        vcdp->chgQuad(c+281,(vlTOPp->top__DOT__l2__DOT__inmem_read_data),64);
        vcdp->chgBus(c+297,(vlTOPp->top__DOT__l2__DOT__state),16);
        vcdp->chgBus(c+305,(vlTOPp->top__DOT__l2__DOT__k_state),16);
        vcdp->chgBus(c+313,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index
                            [2U]),16);
        vcdp->chgBus(c+321,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index
                            [1U]),16);
        vcdp->chgBus(c+329,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index
                            [0U]),16);
        vcdp->chgBus(c+337,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index
                            [2U]),16);
        vcdp->chgBus(c+345,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index
                            [1U]),16);
        vcdp->chgBus(c+353,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index
                            [0U]),16);
        vcdp->chgBus(c+361,(vlTOPp->top__DOT__scheduler_2_l2l3_index
                            [2U]),16);
        vcdp->chgBus(c+369,(vlTOPp->top__DOT__scheduler_2_l2l3_index
                            [1U]),16);
        vcdp->chgBus(c+377,(vlTOPp->top__DOT__scheduler_2_l2l3_index
                            [0U]),16);
        vcdp->chgBus(c+385,(vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index[0]),16);
        vcdp->chgBus(c+386,(vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index[1]),16);
        vcdp->chgBus(c+387,(vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index[2]),16);
        vcdp->chgBit(c+409,(vlTOPp->top__DOT__l3__DOT__outmem_want_write));
        vcdp->chgBus(c+417,(vlTOPp->top__DOT__l3__DOT__state),16);
        vcdp->chgBus(c+425,(vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index
                            [2U]),16);
        vcdp->chgBus(c+433,(vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index
                            [1U]),16);
        vcdp->chgBus(c+441,(vlTOPp->top__DOT____Vcellinp__l3__read_outmem_index
                            [0U]),16);
        vcdp->chgBus(c+449,(vlTOPp->top__DOT____Vcellinp__l4__inmem_write_index[0]),16);
        vcdp->chgBus(c+450,(vlTOPp->top__DOT____Vcellinp__l4__inmem_write_index[1]),16);
        vcdp->chgBus(c+451,(vlTOPp->top__DOT____Vcellinp__l4__inmem_write_index[2]),16);
        vcdp->chgQuad(c+473,(vlTOPp->top__DOT__l4__DOT__outmem_write_data),64);
        vcdp->chgQuad(c+489,(vlTOPp->top__DOT__l4__DOT__inmem_read_data),64);
        vcdp->chgBus(c+505,(vlTOPp->top__DOT__l4__DOT__state),16);
        vcdp->chgBus(c+513,(vlTOPp->top__DOT__l4__DOT__k_state),16);
        vcdp->chgBus(c+521,(vlTOPp->top__DOT____Vcellinp__l4__inmem_write_index
                            [2U]),16);
        vcdp->chgBus(c+529,(vlTOPp->top__DOT____Vcellinp__l4__inmem_write_index
                            [1U]),16);
        vcdp->chgBus(c+537,(vlTOPp->top__DOT____Vcellinp__l4__inmem_write_index
                            [0U]),16);
    }
}

void Vtop::traceChgThis__3(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+545,(vlTOPp->top__DOT__scheduler_2_l2_inmem_wantwrite));
        vcdp->chgBit(c+553,(vlTOPp->top__DOT__scheduler_2_l3_inmem_wantwrite));
        vcdp->chgBit(c+561,(vlTOPp->top__DOT__scheduler_2_l4_inmem_wantwrite));
        vcdp->chgBit(c+569,(vlTOPp->top__DOT__input_2_scheduler_done));
        vcdp->chgBit(c+577,(vlTOPp->top__DOT__l2_compute_start));
        vcdp->chgBit(c+585,(vlTOPp->top__DOT__l2_compute_done));
        vcdp->chgBit(c+593,(vlTOPp->top__DOT__l3_compute_start));
        vcdp->chgBit(c+601,(vlTOPp->top__DOT__l3_compute_done));
        vcdp->chgBit(c+609,(vlTOPp->top__DOT__l4_compute_start));
        vcdp->chgBit(c+617,(vlTOPp->top__DOT__l4_compute_done));
        vcdp->chgBus(c+625,(vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index[0]),16);
        vcdp->chgBus(c+626,(vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index[1]),16);
        vcdp->chgBus(c+627,(vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index[2]),16);
        vcdp->chgBus(c+649,(vlTOPp->top__DOT____Vcellout__scheduler__l2_l3_index[0]),16);
        vcdp->chgBus(c+650,(vlTOPp->top__DOT____Vcellout__scheduler__l2_l3_index[1]),16);
        vcdp->chgBus(c+651,(vlTOPp->top__DOT____Vcellout__scheduler__l2_l3_index[2]),16);
        vcdp->chgBus(c+652,(vlTOPp->top__DOT____Vcellout__scheduler__l2_l3_index[3]),16);
        vcdp->chgBus(c+681,(vlTOPp->top__DOT____Vcellout__scheduler__l3_l4_index[0]),16);
        vcdp->chgBus(c+682,(vlTOPp->top__DOT____Vcellout__scheduler__l3_l4_index[1]),16);
        vcdp->chgBus(c+683,(vlTOPp->top__DOT____Vcellout__scheduler__l3_l4_index[2]),16);
        vcdp->chgBus(c+684,(vlTOPp->top__DOT____Vcellout__scheduler__l3_l4_index[3]),16);
        vcdp->chgQuad(c+713,(((0x1bU >= (0x1fU & vlTOPp->top__DOT__l1__DOT__act_read_index
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
        vcdp->chgQuad(c+729,(((2U >= (3U & vlTOPp->top__DOT__l1__DOT__weight_read_index
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
        vcdp->chgQuad(c+745,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias
                             [(0xfU & vlTOPp->top__DOT__l1__DOT__weight_read_index
                               [2U])]),64);
        vcdp->chgQuad(c+761,(vlTOPp->top__DOT__l1__DOT__outmem_write_data),64);
        vcdp->chgBus(c+777,(vlTOPp->top__DOT__l1__DOT__weight_read_index[0]),16);
        vcdp->chgBus(c+778,(vlTOPp->top__DOT__l1__DOT__weight_read_index[1]),16);
        vcdp->chgBus(c+779,(vlTOPp->top__DOT__l1__DOT__weight_read_index[2]),16);
        vcdp->chgBus(c+780,(vlTOPp->top__DOT__l1__DOT__weight_read_index[3]),16);
        vcdp->chgBus(c+809,(vlTOPp->top__DOT__l1__DOT__act_read_index[0]),16);
        vcdp->chgBus(c+810,(vlTOPp->top__DOT__l1__DOT__act_read_index[1]),16);
        vcdp->chgBus(c+811,(vlTOPp->top__DOT__l1__DOT__act_read_index[2]),16);
        vcdp->chgBus(c+833,(vlTOPp->top__DOT__l1__DOT__outmem_index[0]),16);
        vcdp->chgBus(c+834,(vlTOPp->top__DOT__l1__DOT__outmem_index[1]),16);
        vcdp->chgBus(c+835,(vlTOPp->top__DOT__l1__DOT__outmem_index[2]),16);
        vcdp->chgBus(c+857,(vlTOPp->top__DOT__l1__DOT__act_read_index
                            [2U]),16);
        vcdp->chgBus(c+865,(vlTOPp->top__DOT__l1__DOT__act_read_index
                            [1U]),16);
        vcdp->chgBus(c+873,(vlTOPp->top__DOT__l1__DOT__act_read_index
                            [0U]),16);
        vcdp->chgBus(c+881,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                            [3U]),16);
        vcdp->chgBus(c+889,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                            [2U]),16);
        vcdp->chgBus(c+897,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                            [1U]),16);
        vcdp->chgBus(c+905,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                            [0U]),16);
        vcdp->chgQuad(c+913,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[0]),64);
        vcdp->chgQuad(c+915,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[1]),64);
        vcdp->chgQuad(c+917,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[2]),64);
        vcdp->chgQuad(c+919,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[3]),64);
        vcdp->chgQuad(c+921,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[4]),64);
        vcdp->chgQuad(c+923,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[5]),64);
        vcdp->chgQuad(c+925,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[6]),64);
        vcdp->chgQuad(c+927,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[7]),64);
        vcdp->chgQuad(c+929,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[8]),64);
        vcdp->chgQuad(c+931,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[9]),64);
        vcdp->chgQuad(c+933,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[10]),64);
        vcdp->chgQuad(c+935,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[11]),64);
        vcdp->chgQuad(c+937,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[12]),64);
        vcdp->chgQuad(c+939,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[13]),64);
        vcdp->chgQuad(c+941,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[14]),64);
        vcdp->chgQuad(c+943,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[15]),64);
        vcdp->chgBus(c+1169,(vlTOPp->top__DOT__l1__DOT__outmem_index
                             [2U]),16);
        vcdp->chgBus(c+1177,(vlTOPp->top__DOT__l1__DOT__outmem_index
                             [1U]),16);
        vcdp->chgBus(c+1185,(vlTOPp->top__DOT__l1__DOT__outmem_index
                             [0U]),16);
        vcdp->chgBit(c+1193,(vlTOPp->top__DOT__l2__DOT__outmem_want_write));
        vcdp->chgBus(c+1201,(vlTOPp->top__DOT__l2__DOT__outmem_write_index[0]),16);
        vcdp->chgBus(c+1202,(vlTOPp->top__DOT__l2__DOT__outmem_write_index[1]),16);
        vcdp->chgBus(c+1203,(vlTOPp->top__DOT__l2__DOT__outmem_write_index[2]),16);
        vcdp->chgBus(c+1225,(vlTOPp->top__DOT__l2__DOT__inmem_read_index[0]),16);
        vcdp->chgBus(c+1226,(vlTOPp->top__DOT__l2__DOT__inmem_read_index[1]),16);
        vcdp->chgBus(c+1227,(vlTOPp->top__DOT__l2__DOT__inmem_read_index[2]),16);
        vcdp->chgBus(c+1249,(vlTOPp->top__DOT__l2__DOT__inmem_read_index
                             [2U]),16);
        vcdp->chgBus(c+1257,(vlTOPp->top__DOT__l2__DOT__inmem_read_index
                             [1U]),16);
        vcdp->chgBus(c+1265,(vlTOPp->top__DOT__l2__DOT__inmem_read_index
                             [0U]),16);
        vcdp->chgBus(c+1273,(vlTOPp->top__DOT__l2__DOT__outmem_write_index
                             [2U]),16);
        vcdp->chgBus(c+1281,(vlTOPp->top__DOT__l2__DOT__outmem_write_index
                             [1U]),16);
        vcdp->chgBus(c+1289,(vlTOPp->top__DOT__l2__DOT__outmem_write_index
                             [0U]),16);
        vcdp->chgQuad(c+1297,(((0xcU >= (0xfU & vlTOPp->top__DOT__l3__DOT__act_read_index
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
        vcdp->chgQuad(c+1313,(((2U >= (3U & vlTOPp->top__DOT__l3__DOT__weight_read_index
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
        vcdp->chgQuad(c+1329,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias
                              [(0x1fU & vlTOPp->top__DOT__l3__DOT__weight_read_index
                                [2U])]),64);
        vcdp->chgQuad(c+1345,(vlTOPp->top__DOT__l3__DOT__outmem_write_data),64);
        vcdp->chgBus(c+1361,(vlTOPp->top__DOT__l3__DOT__weight_read_index[0]),16);
        vcdp->chgBus(c+1362,(vlTOPp->top__DOT__l3__DOT__weight_read_index[1]),16);
        vcdp->chgBus(c+1363,(vlTOPp->top__DOT__l3__DOT__weight_read_index[2]),16);
        vcdp->chgBus(c+1364,(vlTOPp->top__DOT__l3__DOT__weight_read_index[3]),16);
        vcdp->chgBus(c+1393,(vlTOPp->top__DOT__l3__DOT__act_read_index[0]),16);
        vcdp->chgBus(c+1394,(vlTOPp->top__DOT__l3__DOT__act_read_index[1]),16);
        vcdp->chgBus(c+1395,(vlTOPp->top__DOT__l3__DOT__act_read_index[2]),16);
        vcdp->chgBus(c+1417,(vlTOPp->top__DOT__l3__DOT__outmem_index[0]),16);
        vcdp->chgBus(c+1418,(vlTOPp->top__DOT__l3__DOT__outmem_index[1]),16);
        vcdp->chgBus(c+1419,(vlTOPp->top__DOT__l3__DOT__outmem_index[2]),16);
        vcdp->chgBus(c+1441,(vlTOPp->top__DOT__l3__DOT__act_read_index
                             [2U]),16);
        vcdp->chgBus(c+1449,(vlTOPp->top__DOT__l3__DOT__act_read_index
                             [1U]),16);
        vcdp->chgBus(c+1457,(vlTOPp->top__DOT__l3__DOT__act_read_index
                             [0U]),16);
        vcdp->chgBus(c+1465,(vlTOPp->top__DOT__l3__DOT__weight_read_index
                             [3U]),16);
        vcdp->chgBus(c+1473,(vlTOPp->top__DOT__l3__DOT__weight_read_index
                             [2U]),16);
        vcdp->chgBus(c+1481,(vlTOPp->top__DOT__l3__DOT__weight_read_index
                             [1U]),16);
        vcdp->chgBus(c+1489,(vlTOPp->top__DOT__l3__DOT__weight_read_index
                             [0U]),16);
        vcdp->chgQuad(c+1497,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[0]),64);
        vcdp->chgQuad(c+1499,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[1]),64);
        vcdp->chgQuad(c+1501,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[2]),64);
        vcdp->chgQuad(c+1503,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[3]),64);
        vcdp->chgQuad(c+1505,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[4]),64);
        vcdp->chgQuad(c+1507,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[5]),64);
        vcdp->chgQuad(c+1509,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[6]),64);
        vcdp->chgQuad(c+1511,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[7]),64);
        vcdp->chgQuad(c+1513,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[8]),64);
        vcdp->chgQuad(c+1515,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[9]),64);
        vcdp->chgQuad(c+1517,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[10]),64);
        vcdp->chgQuad(c+1519,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[11]),64);
        vcdp->chgQuad(c+1521,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[12]),64);
        vcdp->chgQuad(c+1523,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[13]),64);
        vcdp->chgQuad(c+1525,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[14]),64);
        vcdp->chgQuad(c+1527,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[15]),64);
        vcdp->chgQuad(c+1529,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[16]),64);
        vcdp->chgQuad(c+1531,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[17]),64);
        vcdp->chgQuad(c+1533,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[18]),64);
        vcdp->chgQuad(c+1535,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[19]),64);
        vcdp->chgQuad(c+1537,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[20]),64);
        vcdp->chgQuad(c+1539,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[21]),64);
        vcdp->chgQuad(c+1541,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[22]),64);
        vcdp->chgQuad(c+1543,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[23]),64);
        vcdp->chgQuad(c+1545,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[24]),64);
        vcdp->chgQuad(c+1547,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[25]),64);
        vcdp->chgQuad(c+1549,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[26]),64);
        vcdp->chgQuad(c+1551,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[27]),64);
        vcdp->chgQuad(c+1553,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[28]),64);
        vcdp->chgQuad(c+1555,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[29]),64);
        vcdp->chgQuad(c+1557,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[30]),64);
        vcdp->chgQuad(c+1559,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[31]),64);
        vcdp->chgBus(c+2009,(vlTOPp->top__DOT__l3__DOT__outmem_index
                             [2U]),16);
        vcdp->chgBus(c+2017,(vlTOPp->top__DOT__l3__DOT__outmem_index
                             [1U]),16);
        vcdp->chgBus(c+2025,(vlTOPp->top__DOT__l3__DOT__outmem_index
                             [0U]),16);
        vcdp->chgQuad(c+2033,(((9U >= (0xfU & vlTOPp->top__DOT__l4__DOT__outmem_read_index
                                       [0U])) ? vlTOPp->top__DOT__l4__DOT__out_memory__DOT__mem
                               [(0x1fU & vlTOPp->top__DOT__l4__DOT__outmem_read_index
                                 [2U])][((9U >= (0xfU 
                                                 & vlTOPp->top__DOT__l4__DOT__outmem_read_index
                                                 [1U]))
                                          ? (0xfU & 
                                             vlTOPp->top__DOT__l4__DOT__outmem_read_index
                                             [1U]) : 0U)]
                               [(0xfU & vlTOPp->top__DOT__l4__DOT__outmem_read_index
                                 [0U])] : VL_ULL(0))),64);
        vcdp->chgBit(c+2049,(vlTOPp->top__DOT__l4__DOT__outmem_want_write));
        vcdp->chgBus(c+2057,(vlTOPp->top__DOT__l4__DOT__outmem_write_index[0]),16);
        vcdp->chgBus(c+2058,(vlTOPp->top__DOT__l4__DOT__outmem_write_index[1]),16);
        vcdp->chgBus(c+2059,(vlTOPp->top__DOT__l4__DOT__outmem_write_index[2]),16);
        vcdp->chgBus(c+2081,(vlTOPp->top__DOT__l4__DOT__inmem_read_index[0]),16);
        vcdp->chgBus(c+2082,(vlTOPp->top__DOT__l4__DOT__inmem_read_index[1]),16);
        vcdp->chgBus(c+2083,(vlTOPp->top__DOT__l4__DOT__inmem_read_index[2]),16);
        vcdp->chgBus(c+2105,(vlTOPp->top__DOT__l4__DOT__inmem_read_index
                             [2U]),16);
        vcdp->chgBus(c+2113,(vlTOPp->top__DOT__l4__DOT__inmem_read_index
                             [1U]),16);
        vcdp->chgBus(c+2121,(vlTOPp->top__DOT__l4__DOT__inmem_read_index
                             [0U]),16);
        vcdp->chgBus(c+2129,(vlTOPp->top__DOT__l4__DOT__outmem_write_index
                             [2U]),16);
        vcdp->chgBus(c+2137,(vlTOPp->top__DOT__l4__DOT__outmem_write_index
                             [1U]),16);
        vcdp->chgBus(c+2145,(vlTOPp->top__DOT__l4__DOT__outmem_write_index
                             [0U]),16);
    }
}

void Vtop::traceChgThis__4(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2153,(vlTOPp->clk));
        vcdp->chgQuad(c+2161,(vlTOPp->input_data),64);
        vcdp->chgBus(c+2177,(vlTOPp->input_index[0]),16);
        vcdp->chgBus(c+2178,(vlTOPp->input_index[1]),16);
        vcdp->chgBus(c+2179,(vlTOPp->input_index[2]),16);
        vcdp->chgBus(c+2180,(vlTOPp->input_index[3]),16);
        vcdp->chgBit(c+2209,(vlTOPp->input_write_act));
        vcdp->chgBit(c+2217,(vlTOPp->input_write_weights));
        vcdp->chgBit(c+2225,(vlTOPp->input_write_bias));
        vcdp->chgBit(c+2233,(vlTOPp->l3_write_weights));
        vcdp->chgBit(c+2241,(vlTOPp->l3_write_bias));
        vcdp->chgBit(c+2249,(vlTOPp->compute));
        vcdp->chgBit(c+2257,(vlTOPp->reset));
        vcdp->chgBus(c+2265,(vlTOPp->input_index[3U]),16);
        vcdp->chgBus(c+2273,(vlTOPp->input_index[2U]),16);
        vcdp->chgBus(c+2281,(vlTOPp->input_index[1U]),16);
        vcdp->chgBus(c+2289,(vlTOPp->input_index[0U]),16);
    }
}
