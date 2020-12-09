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
        vcdp->chgBus(c+17,(vlTOPp->top__DOT__scheduler_2_l1_index[0]),16);
        vcdp->chgBus(c+18,(vlTOPp->top__DOT__scheduler_2_l1_index[1]),16);
        vcdp->chgBus(c+19,(vlTOPp->top__DOT__scheduler_2_l1_index[2]),16);
        vcdp->chgBit(c+41,(vlTOPp->top__DOT__scheduler_2_input_start));
        vcdp->chgBus(c+49,(vlTOPp->top__DOT__scheduler__DOT__state),16);
        vcdp->chgBus(c+57,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index[0]),16);
        vcdp->chgBus(c+58,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index[1]),16);
        vcdp->chgBus(c+59,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index[2]),16);
        vcdp->chgBit(c+81,(vlTOPp->top__DOT__l1__DOT__outmem_want_write));
        vcdp->chgBus(c+89,(vlTOPp->top__DOT__l1__DOT__state),16);
        vcdp->chgBus(c+97,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                           [2U]),16);
        vcdp->chgBus(c+105,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                            [1U]),16);
        vcdp->chgBus(c+113,(vlTOPp->top__DOT____Vcellinp__l1__read_outmem_index
                            [0U]),16);
        vcdp->chgBus(c+121,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index[0]),16);
        vcdp->chgBus(c+122,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index[1]),16);
        vcdp->chgBus(c+123,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index[2]),16);
        vcdp->chgQuad(c+145,(vlTOPp->top__DOT__l2__DOT__outmem_write_data),64);
        vcdp->chgQuad(c+161,(vlTOPp->top__DOT__l2__DOT__inmem_read_data),64);
        vcdp->chgBus(c+177,(vlTOPp->top__DOT__l2__DOT__state),16);
        vcdp->chgBus(c+185,(vlTOPp->top__DOT__l2__DOT__k_state),16);
        vcdp->chgBus(c+193,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index
                            [2U]),16);
        vcdp->chgBus(c+201,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index
                            [1U]),16);
        vcdp->chgBus(c+209,(vlTOPp->top__DOT____Vcellinp__l2__inmem_write_index
                            [0U]),16);
    }
}

void Vtop::traceChgThis__3(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+217,(vlTOPp->top__DOT__scheduler_2_l2_inmem_wantwrite));
        vcdp->chgBit(c+225,(vlTOPp->top__DOT__input_2_scheduler_done));
        vcdp->chgBit(c+233,(vlTOPp->top__DOT__l2_compute_start));
        vcdp->chgBit(c+241,(vlTOPp->top__DOT__l2_compute_done));
        vcdp->chgBus(c+249,(vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index[0]),16);
        vcdp->chgBus(c+250,(vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index[1]),16);
        vcdp->chgBus(c+251,(vlTOPp->top__DOT____Vcellout__scheduler__l1_l2_index[2]),16);
        vcdp->chgQuad(c+273,(((0x1bU >= (0x1fU & vlTOPp->top__DOT__l1__DOT__act_read_index
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
        vcdp->chgQuad(c+289,(((2U >= (3U & vlTOPp->top__DOT__l1__DOT__weight_read_index
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
        vcdp->chgQuad(c+305,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias
                             [(0xfU & vlTOPp->top__DOT__l1__DOT__weight_read_index
                               [2U])]),64);
        vcdp->chgQuad(c+321,(vlTOPp->top__DOT__l1__DOT__outmem_write_data),64);
        vcdp->chgBus(c+337,(vlTOPp->top__DOT__l1__DOT__weight_read_index[0]),16);
        vcdp->chgBus(c+338,(vlTOPp->top__DOT__l1__DOT__weight_read_index[1]),16);
        vcdp->chgBus(c+339,(vlTOPp->top__DOT__l1__DOT__weight_read_index[2]),16);
        vcdp->chgBus(c+340,(vlTOPp->top__DOT__l1__DOT__weight_read_index[3]),16);
        vcdp->chgBus(c+369,(vlTOPp->top__DOT__l1__DOT__act_read_index[0]),16);
        vcdp->chgBus(c+370,(vlTOPp->top__DOT__l1__DOT__act_read_index[1]),16);
        vcdp->chgBus(c+371,(vlTOPp->top__DOT__l1__DOT__act_read_index[2]),16);
        vcdp->chgBus(c+393,(vlTOPp->top__DOT__l1__DOT__outmem_index[0]),16);
        vcdp->chgBus(c+394,(vlTOPp->top__DOT__l1__DOT__outmem_index[1]),16);
        vcdp->chgBus(c+395,(vlTOPp->top__DOT__l1__DOT__outmem_index[2]),16);
        vcdp->chgBus(c+417,(vlTOPp->top__DOT__l1__DOT__act_read_index
                            [2U]),16);
        vcdp->chgBus(c+425,(vlTOPp->top__DOT__l1__DOT__act_read_index
                            [1U]),16);
        vcdp->chgBus(c+433,(vlTOPp->top__DOT__l1__DOT__act_read_index
                            [0U]),16);
        vcdp->chgBus(c+441,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                            [3U]),16);
        vcdp->chgBus(c+449,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                            [2U]),16);
        vcdp->chgBus(c+457,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                            [1U]),16);
        vcdp->chgBus(c+465,(vlTOPp->top__DOT__l1__DOT__weight_read_index
                            [0U]),16);
        vcdp->chgQuad(c+473,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[0]),64);
        vcdp->chgQuad(c+475,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[1]),64);
        vcdp->chgQuad(c+477,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[2]),64);
        vcdp->chgQuad(c+479,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[3]),64);
        vcdp->chgQuad(c+481,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[4]),64);
        vcdp->chgQuad(c+483,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[5]),64);
        vcdp->chgQuad(c+485,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[6]),64);
        vcdp->chgQuad(c+487,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[7]),64);
        vcdp->chgQuad(c+489,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[8]),64);
        vcdp->chgQuad(c+491,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[9]),64);
        vcdp->chgQuad(c+493,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[10]),64);
        vcdp->chgQuad(c+495,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[11]),64);
        vcdp->chgQuad(c+497,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[12]),64);
        vcdp->chgQuad(c+499,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[13]),64);
        vcdp->chgQuad(c+501,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[14]),64);
        vcdp->chgQuad(c+503,(vlTOPp->top__DOT__l1__DOT__weights__DOT__mem_bias[15]),64);
        vcdp->chgBus(c+729,(vlTOPp->top__DOT__l1__DOT__outmem_index
                            [2U]),16);
        vcdp->chgBus(c+737,(vlTOPp->top__DOT__l1__DOT__outmem_index
                            [1U]),16);
        vcdp->chgBus(c+745,(vlTOPp->top__DOT__l1__DOT__outmem_index
                            [0U]),16);
        vcdp->chgQuad(c+753,(((0x18U >= (0x1fU & vlTOPp->top__DOT__l2__DOT__outmem_read_index
                                         [0U])) ? vlTOPp->top__DOT__l2__DOT__out_memory__DOT__mem
                              [(0xfU & vlTOPp->top__DOT__l2__DOT__outmem_read_index
                                [2U])][((0x18U >= (0x1fU 
                                                   & vlTOPp->top__DOT__l2__DOT__outmem_read_index
                                                   [1U]))
                                         ? (0x1fU & 
                                            vlTOPp->top__DOT__l2__DOT__outmem_read_index
                                            [1U]) : 0U)]
                              [(0x1fU & vlTOPp->top__DOT__l2__DOT__outmem_read_index
                                [0U])] : VL_ULL(0))),64);
        vcdp->chgBit(c+769,(vlTOPp->top__DOT__l2__DOT__outmem_want_write));
        vcdp->chgBus(c+777,(vlTOPp->top__DOT__l2__DOT__outmem_write_index[0]),16);
        vcdp->chgBus(c+778,(vlTOPp->top__DOT__l2__DOT__outmem_write_index[1]),16);
        vcdp->chgBus(c+779,(vlTOPp->top__DOT__l2__DOT__outmem_write_index[2]),16);
        vcdp->chgBus(c+801,(vlTOPp->top__DOT__l2__DOT__inmem_read_index[0]),16);
        vcdp->chgBus(c+802,(vlTOPp->top__DOT__l2__DOT__inmem_read_index[1]),16);
        vcdp->chgBus(c+803,(vlTOPp->top__DOT__l2__DOT__inmem_read_index[2]),16);
        vcdp->chgBus(c+825,(vlTOPp->top__DOT__l2__DOT__inmem_read_index
                            [2U]),16);
        vcdp->chgBus(c+833,(vlTOPp->top__DOT__l2__DOT__inmem_read_index
                            [1U]),16);
        vcdp->chgBus(c+841,(vlTOPp->top__DOT__l2__DOT__inmem_read_index
                            [0U]),16);
        vcdp->chgBus(c+849,(vlTOPp->top__DOT__l2__DOT__outmem_write_index
                            [2U]),16);
        vcdp->chgBus(c+857,(vlTOPp->top__DOT__l2__DOT__outmem_write_index
                            [1U]),16);
        vcdp->chgBus(c+865,(vlTOPp->top__DOT__l2__DOT__outmem_write_index
                            [0U]),16);
    }
}

void Vtop::traceChgThis__4(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+873,(vlTOPp->clk));
        vcdp->chgQuad(c+881,(vlTOPp->input_data),64);
        vcdp->chgBus(c+897,(vlTOPp->input_index[0]),16);
        vcdp->chgBus(c+898,(vlTOPp->input_index[1]),16);
        vcdp->chgBus(c+899,(vlTOPp->input_index[2]),16);
        vcdp->chgBus(c+900,(vlTOPp->input_index[3]),16);
        vcdp->chgBit(c+929,(vlTOPp->input_write_act));
        vcdp->chgBit(c+937,(vlTOPp->input_write_weights));
        vcdp->chgBit(c+945,(vlTOPp->input_write_bias));
        vcdp->chgBit(c+953,(vlTOPp->compute));
        vcdp->chgBit(c+961,(vlTOPp->reset));
        vcdp->chgBus(c+969,(vlTOPp->input_index[3U]),16);
        vcdp->chgBus(c+977,(vlTOPp->input_index[2U]),16);
        vcdp->chgBus(c+985,(vlTOPp->input_index[1U]),16);
        vcdp->chgBus(c+993,(vlTOPp->input_index[0U]),16);
    }
}
