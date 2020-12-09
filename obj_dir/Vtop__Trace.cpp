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
        if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
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
        vcdp->chgBus(c+1,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index[0]),16);
        vcdp->chgBus(c+2,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index[1]),16);
        vcdp->chgBus(c+3,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index[2]),16);
        vcdp->chgBus(c+25,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index
                           [2U]),16);
        vcdp->chgBus(c+33,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index
                           [1U]),16);
        vcdp->chgBus(c+41,(vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index
                           [0U]),16);
    }
}

void Vtop::traceChgThis__3(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgQuad(c+49,(((0x19U >= (0x1fU & vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
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
        vcdp->chgBus(c+65,(vlTOPp->top__DOT__scheduler_2_l1l2_index[0]),16);
        vcdp->chgBus(c+66,(vlTOPp->top__DOT__scheduler_2_l1l2_index[1]),16);
        vcdp->chgBus(c+67,(vlTOPp->top__DOT__scheduler_2_l1l2_index[2]),16);
        vcdp->chgBit(c+89,(vlTOPp->top__DOT__scheduler_2_input_start));
        vcdp->chgBus(c+97,(vlTOPp->top__DOT__scheduler__DOT__state),16);
        vcdp->chgBus(c+105,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index[0]),16);
        vcdp->chgBus(c+106,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index[1]),16);
        vcdp->chgBus(c+107,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index[2]),16);
        vcdp->chgBit(c+129,(vlTOPp->top__DOT__l1__DOT__outmem_want_write));
        vcdp->chgBus(c+137,(vlTOPp->top__DOT__l1__DOT__state),16);
        vcdp->chgBus(c+145,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                            [2U]),16);
        vcdp->chgBus(c+153,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                            [1U]),16);
        vcdp->chgBus(c+161,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                            [0U]),16);
        vcdp->chgBus(c+169,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index[0]),16);
        vcdp->chgBus(c+170,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index[1]),16);
        vcdp->chgBus(c+171,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index[2]),16);
        vcdp->chgQuad(c+193,(((0x18U >= (0x1fU & vlTOPp->top__DOT____Vcellinp__l2__outmem_read_index
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
        vcdp->chgQuad(c+209,(vlTOPp->top__DOT__l2__DOT__outmem_write_data),64);
        vcdp->chgQuad(c+225,(vlTOPp->top__DOT__l2__DOT__inmem_read_data),64);
        vcdp->chgBus(c+241,(vlTOPp->top__DOT__l2__DOT__state),16);
        vcdp->chgBus(c+249,(vlTOPp->top__DOT__l2__DOT__k_state),16);
        vcdp->chgBus(c+257,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index
                            [2U]),16);
        vcdp->chgBus(c+265,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index
                            [1U]),16);
        vcdp->chgBus(c+273,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index
                            [0U]),16);
        vcdp->chgBit(c+281,(vlTOPp->top__DOT__l3__DOT__outmem_want_write));
        vcdp->chgBus(c+289,(vlTOPp->top__DOT__l3__DOT__state),16);
    }
}

void Vtop::traceChgThis__4(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgQuad(c+297,(vlTOPp->top__DOT__l3_input_data),64);
    }
}

void Vtop::traceChgThis__5(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+313,(vlTOPp->top__DOT__scheduler_2_l2_inmem_wantwrite));
        vcdp->chgBit(c+321,(vlTOPp->top__DOT__scheduler_2_l3_inmem_wantwrite));
        vcdp->chgBit(c+329,(vlTOPp->top__DOT__input_2_scheduler_done));
        vcdp->chgBit(c+337,(vlTOPp->top__DOT__l2_compute_start));
        vcdp->chgBit(c+345,(vlTOPp->top__DOT__l2_compute_done));
        vcdp->chgBus(c+353,(vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index[0]),16);
        vcdp->chgBus(c+354,(vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index[1]),16);
        vcdp->chgBus(c+355,(vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index[2]),16);
        vcdp->chgBus(c+377,(vlTOPp->top__DOT__scheduler__DOT__l2_l3_index[0]),16);
        vcdp->chgBus(c+378,(vlTOPp->top__DOT__scheduler__DOT__l2_l3_index[1]),16);
        vcdp->chgBus(c+379,(vlTOPp->top__DOT__scheduler__DOT__l2_l3_index[2]),16);
        vcdp->chgQuad(c+401,(((0x1bU >= (0x1fU & vlTOPp->top__DOT__l1__DOT__act_read_index
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
        vcdp->chgQuad(c+417,(((2U >= (3U & vlTOPp->top__DOT__l1__DOT__weight_read_index
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
        vcdp->chgQuad(c+433,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias
                             [(0xfU & vlTOPp->top__DOT__l1__DOT__weight_read_index
                               [2U])]),64);
        vcdp->chgQuad(c+449,(vlTOPp->top__DOT__l1__DOT__outmem_write_data),64);
        vcdp->chgBus(c+465,(vlTOPp->top__DOT__l1__DOT__weight_read_index[0]),16);
        vcdp->chgBus(c+466,(vlTOPp->top__DOT__l1__DOT__weight_read_index[1]),16);
        vcdp->chgBus(c+467,(vlTOPp->top__DOT__l1__DOT__weight_read_index[2]),16);
        vcdp->chgBus(c+468,(vlTOPp->top__DOT__l1__DOT__weight_read_index[3]),16);
        vcdp->chgBus(c+497,(vlTOPp->top__DOT__l1__DOT__act_read_index[0]),16);
        vcdp->chgBus(c+498,(vlTOPp->top__DOT__l1__DOT__act_read_index[1]),16);
        vcdp->chgBus(c+499,(vlTOPp->top__DOT__l1__DOT__act_read_index[2]),16);
        vcdp->chgBus(c+521,(vlTOPp->top__DOT__l1__DOT__outmem_index[0]),16);
        vcdp->chgBus(c+522,(vlTOPp->top__DOT__l1__DOT__outmem_index[1]),16);
        vcdp->chgBus(c+523,(vlTOPp->top__DOT__l1__DOT__outmem_index[2]),16);
        vcdp->chgBus(c+545,(vlTOPp->top__DOT__l1__DOT__act_read_index
                            [2U]),16);
        vcdp->chgBus(c+553,(vlTOPp->top__DOT__l1__DOT__act_read_index
                            [1U]),16);
        vcdp->chgBus(c+561,(vlTOPp->top__DOT__l1__DOT__act_read_index
                            [0U]),16);
        vcdp->chgBus(c+569,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                            [3U]),16);
        vcdp->chgBus(c+577,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                            [2U]),16);
        vcdp->chgBus(c+585,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                            [1U]),16);
        vcdp->chgBus(c+593,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                            [0U]),16);
        vcdp->chgQuad(c+601,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[0]),64);
        vcdp->chgQuad(c+603,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[1]),64);
        vcdp->chgQuad(c+605,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[2]),64);
        vcdp->chgQuad(c+607,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[3]),64);
        vcdp->chgQuad(c+609,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[4]),64);
        vcdp->chgQuad(c+611,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[5]),64);
        vcdp->chgQuad(c+613,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[6]),64);
        vcdp->chgQuad(c+615,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[7]),64);
        vcdp->chgQuad(c+617,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[8]),64);
        vcdp->chgQuad(c+619,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[9]),64);
        vcdp->chgQuad(c+621,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[10]),64);
        vcdp->chgQuad(c+623,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[11]),64);
        vcdp->chgQuad(c+625,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[12]),64);
        vcdp->chgQuad(c+627,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[13]),64);
        vcdp->chgQuad(c+629,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[14]),64);
        vcdp->chgQuad(c+631,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[15]),64);
        vcdp->chgBus(c+857,(vlTOPp->top__DOT__l1__DOT__outmem_index
                            [2U]),16);
        vcdp->chgBus(c+865,(vlTOPp->top__DOT__l1__DOT__outmem_index
                            [1U]),16);
        vcdp->chgBus(c+873,(vlTOPp->top__DOT__l1__DOT__outmem_index
                            [0U]),16);
        vcdp->chgBit(c+881,(vlTOPp->top__DOT__l2__DOT__outmem_want_write));
        vcdp->chgBus(c+889,(vlTOPp->top__DOT__l2__DOT__outmem_write_index[0]),16);
        vcdp->chgBus(c+890,(vlTOPp->top__DOT__l2__DOT__outmem_write_index[1]),16);
        vcdp->chgBus(c+891,(vlTOPp->top__DOT__l2__DOT__outmem_write_index[2]),16);
        vcdp->chgBus(c+913,(vlTOPp->top__DOT__l2__DOT__inmem_read_index[0]),16);
        vcdp->chgBus(c+914,(vlTOPp->top__DOT__l2__DOT__inmem_read_index[1]),16);
        vcdp->chgBus(c+915,(vlTOPp->top__DOT__l2__DOT__inmem_read_index[2]),16);
        vcdp->chgBus(c+937,(vlTOPp->top__DOT__l2__DOT__inmem_read_index
                            [2U]),16);
        vcdp->chgBus(c+945,(vlTOPp->top__DOT__l2__DOT__inmem_read_index
                            [1U]),16);
        vcdp->chgBus(c+953,(vlTOPp->top__DOT__l2__DOT__inmem_read_index
                            [0U]),16);
        vcdp->chgBus(c+961,(vlTOPp->top__DOT__l2__DOT__outmem_write_index
                            [2U]),16);
        vcdp->chgBus(c+969,(vlTOPp->top__DOT__l2__DOT__outmem_write_index
                            [1U]),16);
        vcdp->chgBus(c+977,(vlTOPp->top__DOT__l2__DOT__outmem_write_index
                            [0U]),16);
        vcdp->chgQuad(c+985,(((0x19U >= (0x1fU & vlTOPp->top__DOT__l3__DOT__read_outmem_index
                                         [0U])) ? vlTOPp->top__DOT__l3__DOT__out_memory__DOT__mem
                              [(0xfU & vlTOPp->top__DOT__l3__DOT__read_outmem_index
                                [2U])][((0x19U >= (0x1fU 
                                                   & vlTOPp->top__DOT__l3__DOT__read_outmem_index
                                                   [1U]))
                                         ? (0x1fU & 
                                            vlTOPp->top__DOT__l3__DOT__read_outmem_index
                                            [1U]) : 0U)]
                              [(0x1fU & vlTOPp->top__DOT__l3__DOT__read_outmem_index
                                [0U])] : VL_ULL(0))),64);
        vcdp->chgBit(c+1001,(vlTOPp->top__DOT__l3__DOT__output_valid));
        vcdp->chgQuad(c+1009,(((0xcU >= (0xfU & vlTOPp->top__DOT__l3__DOT__act_read_index
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
        vcdp->chgQuad(c+1025,(((2U >= (3U & vlTOPp->top__DOT__l3__DOT__weight_read_index
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
        vcdp->chgQuad(c+1041,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias
                              [(0x1fU & vlTOPp->top__DOT__l3__DOT__weight_read_index
                                [2U])]),64);
        vcdp->chgQuad(c+1057,(vlTOPp->top__DOT__l3__DOT__outmem_write_data),64);
        vcdp->chgBus(c+1073,(vlTOPp->top__DOT__l3__DOT__weight_read_index[0]),16);
        vcdp->chgBus(c+1074,(vlTOPp->top__DOT__l3__DOT__weight_read_index[1]),16);
        vcdp->chgBus(c+1075,(vlTOPp->top__DOT__l3__DOT__weight_read_index[2]),16);
        vcdp->chgBus(c+1076,(vlTOPp->top__DOT__l3__DOT__weight_read_index[3]),16);
        vcdp->chgBus(c+1105,(vlTOPp->top__DOT__l3__DOT__act_read_index[0]),16);
        vcdp->chgBus(c+1106,(vlTOPp->top__DOT__l3__DOT__act_read_index[1]),16);
        vcdp->chgBus(c+1107,(vlTOPp->top__DOT__l3__DOT__act_read_index[2]),16);
        vcdp->chgBus(c+1129,(vlTOPp->top__DOT__l3__DOT__outmem_index[0]),16);
        vcdp->chgBus(c+1130,(vlTOPp->top__DOT__l3__DOT__outmem_index[1]),16);
        vcdp->chgBus(c+1131,(vlTOPp->top__DOT__l3__DOT__outmem_index[2]),16);
        vcdp->chgBus(c+1153,(vlTOPp->top__DOT__l3__DOT__act_read_index
                             [2U]),16);
        vcdp->chgBus(c+1161,(vlTOPp->top__DOT__l3__DOT__act_read_index
                             [1U]),16);
        vcdp->chgBus(c+1169,(vlTOPp->top__DOT__l3__DOT__act_read_index
                             [0U]),16);
        vcdp->chgBus(c+1177,(vlTOPp->top__DOT__l3__DOT__weight_read_index
                             [3U]),16);
        vcdp->chgBus(c+1185,(vlTOPp->top__DOT__l3__DOT__weight_read_index
                             [2U]),16);
        vcdp->chgBus(c+1193,(vlTOPp->top__DOT__l3__DOT__weight_read_index
                             [1U]),16);
        vcdp->chgBus(c+1201,(vlTOPp->top__DOT__l3__DOT__weight_read_index
                             [0U]),16);
        vcdp->chgQuad(c+1209,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[0]),64);
        vcdp->chgQuad(c+1211,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[1]),64);
        vcdp->chgQuad(c+1213,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[2]),64);
        vcdp->chgQuad(c+1215,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[3]),64);
        vcdp->chgQuad(c+1217,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[4]),64);
        vcdp->chgQuad(c+1219,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[5]),64);
        vcdp->chgQuad(c+1221,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[6]),64);
        vcdp->chgQuad(c+1223,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[7]),64);
        vcdp->chgQuad(c+1225,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[8]),64);
        vcdp->chgQuad(c+1227,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[9]),64);
        vcdp->chgQuad(c+1229,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[10]),64);
        vcdp->chgQuad(c+1231,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[11]),64);
        vcdp->chgQuad(c+1233,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[12]),64);
        vcdp->chgQuad(c+1235,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[13]),64);
        vcdp->chgQuad(c+1237,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[14]),64);
        vcdp->chgQuad(c+1239,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[15]),64);
        vcdp->chgQuad(c+1241,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[16]),64);
        vcdp->chgQuad(c+1243,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[17]),64);
        vcdp->chgQuad(c+1245,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[18]),64);
        vcdp->chgQuad(c+1247,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[19]),64);
        vcdp->chgQuad(c+1249,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[20]),64);
        vcdp->chgQuad(c+1251,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[21]),64);
        vcdp->chgQuad(c+1253,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[22]),64);
        vcdp->chgQuad(c+1255,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[23]),64);
        vcdp->chgQuad(c+1257,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[24]),64);
        vcdp->chgQuad(c+1259,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[25]),64);
        vcdp->chgQuad(c+1261,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[26]),64);
        vcdp->chgQuad(c+1263,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[27]),64);
        vcdp->chgQuad(c+1265,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[28]),64);
        vcdp->chgQuad(c+1267,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[29]),64);
        vcdp->chgQuad(c+1269,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[30]),64);
        vcdp->chgQuad(c+1271,(vlTOPp->top__DOT__l3__DOT__weights__DOT__mem_bias[31]),64);
        vcdp->chgBus(c+1721,(vlTOPp->top__DOT__l3__DOT__outmem_index
                             [2U]),16);
        vcdp->chgBus(c+1729,(vlTOPp->top__DOT__l3__DOT__outmem_index
                             [1U]),16);
        vcdp->chgBus(c+1737,(vlTOPp->top__DOT__l3__DOT__outmem_index
                             [0U]),16);
    }
}

void Vtop::traceChgThis__6(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1745,(vlTOPp->clk));
        vcdp->chgQuad(c+1753,(vlTOPp->input_data),64);
        vcdp->chgBus(c+1769,(vlTOPp->input_index[0]),16);
        vcdp->chgBus(c+1770,(vlTOPp->input_index[1]),16);
        vcdp->chgBus(c+1771,(vlTOPp->input_index[2]),16);
        vcdp->chgBus(c+1772,(vlTOPp->input_index[3]),16);
        vcdp->chgBit(c+1801,(vlTOPp->input_write_act));
        vcdp->chgBit(c+1809,(vlTOPp->input_write_weights));
        vcdp->chgBit(c+1817,(vlTOPp->input_write_bias));
        vcdp->chgBit(c+1825,(vlTOPp->l3_write_weights));
        vcdp->chgBit(c+1833,(vlTOPp->l3_write_bias));
        vcdp->chgBit(c+1841,(vlTOPp->compute));
        vcdp->chgBit(c+1849,(vlTOPp->reset));
        vcdp->chgBus(c+1857,(vlTOPp->input_index[3U]),16);
        vcdp->chgBus(c+1865,(vlTOPp->input_index[2U]),16);
        vcdp->chgBus(c+1873,(vlTOPp->input_index[1U]),16);
        vcdp->chgBus(c+1881,(vlTOPp->input_index[0U]),16);
    }
}
