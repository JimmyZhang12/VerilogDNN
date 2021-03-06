// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTOP_H_
#define _VTOP_H_  // guard

#include "verilated_heavy.h"

class Vtop__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vtop) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(input_write_act,0,0);
    VL_IN8(input_write_weights,0,0);
    VL_IN8(input_write_bias,0,0);
    VL_IN8(l3_write_weights,0,0);
    VL_IN8(l3_write_bias,0,0);
    VL_IN8(l5_write_weights,0,0);
    VL_IN8(l5_write_bias,0,0);
    VL_IN8(compute,0,0);
    VL_IN8(reset,0,0);
    VL_IN64(input_data,63,0);
    VL_IN16(input_index[4],15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT__scheduler_2_l2_inmem_wantwrite;
        CData/*0:0*/ top__DOT__scheduler_2_l3_inmem_wantwrite;
        CData/*0:0*/ top__DOT__scheduler_2_l4_inmem_wantwrite;
        CData/*0:0*/ top__DOT__scheduler_2_l5_inmem_wantwrite;
        CData/*0:0*/ top__DOT__scheduler_2_input_start;
        CData/*0:0*/ top__DOT__input_2_scheduler_done;
        CData/*0:0*/ top__DOT__l2_compute_start;
        CData/*0:0*/ top__DOT__l2_compute_done;
        CData/*0:0*/ top__DOT__l3_compute_start;
        CData/*0:0*/ top__DOT__l3_compute_done;
        CData/*0:0*/ top__DOT__l4_compute_start;
        CData/*0:0*/ top__DOT__l4_compute_done;
        CData/*0:0*/ top__DOT__l5_compute_start;
        CData/*0:0*/ top__DOT__l5_compute_done;
        CData/*0:0*/ top__DOT__l1__DOT__outmem_want_write;
        CData/*0:0*/ top__DOT__l2__DOT__outmem_want_write;
        CData/*0:0*/ top__DOT__l3__DOT__outmem_want_write;
        CData/*0:0*/ top__DOT__l4__DOT__outmem_want_write;
        CData/*0:0*/ top__DOT__l5__DOT__outmem_want_write;
        SData/*15:0*/ top__DOT__scheduler_2_l5_inmem_index;
        SData/*15:0*/ top__DOT__scheduler__DOT__state;
        SData/*15:0*/ top__DOT__l1__DOT__state;
        SData/*15:0*/ top__DOT__l2__DOT__state;
        SData/*15:0*/ top__DOT__l2__DOT__k_state;
        SData/*15:0*/ top__DOT__l3__DOT__state;
        SData/*15:0*/ top__DOT__l4__DOT__state;
        SData/*15:0*/ top__DOT__l4__DOT__k_state;
        SData/*15:0*/ top__DOT__l5__DOT__read_outmem_index;
        SData/*15:0*/ top__DOT__l5__DOT__act_read_index;
        SData/*15:0*/ top__DOT__l5__DOT__outmem_index;
        SData/*15:0*/ top__DOT__l5__DOT__state;
        SData/*15:0*/ top__DOT__l5__DOT__activation__DOT__index_entry;
        SData/*15:0*/ top__DOT__l5__DOT__activation__DOT__index_y;
        SData/*15:0*/ top__DOT__l5__DOT__activation__DOT__read_index_entry;
        SData/*15:0*/ top__DOT__l5__DOT__activation__DOT__read_index_y;
        SData/*15:0*/ top__DOT__l5__DOT__weights__DOT__index_in;
        SData/*15:0*/ top__DOT__l5__DOT__weights__DOT__index_out;
        SData/*15:0*/ top__DOT__l5__DOT__weights__DOT__read_index_in;
        SData/*15:0*/ top__DOT__l5__DOT__weights__DOT__read_index_out;
        SData/*15:0*/ top__DOT__l5__DOT__out_memory__DOT__index_entry;
        SData/*15:0*/ top__DOT__l5__DOT__out_memory__DOT__index_y;
        SData/*15:0*/ top__DOT__l5__DOT__out_memory__DOT__read_index_entry;
        SData/*15:0*/ top__DOT__l5__DOT__out_memory__DOT__read_index_y;
        IData/*31:0*/ top__DOT__scheduler__DOT__cnt;
        QData/*63:0*/ top__DOT__l1__DOT__act_out_data;
        QData/*63:0*/ top__DOT__l1__DOT__weights_out_data;
        QData/*63:0*/ top__DOT__l1__DOT__bias_out_data;
        QData/*63:0*/ top__DOT__l1__DOT__outmem_write_data;
        QData/*63:0*/ top__DOT__l2__DOT__outmem_write_data;
        QData/*63:0*/ top__DOT__l2__DOT__inmem_read_data;
        QData/*63:0*/ top__DOT__l3__DOT__act_out_data;
        QData/*63:0*/ top__DOT__l3__DOT__weights_out_data;
        QData/*63:0*/ top__DOT__l3__DOT__bias_out_data;
        QData/*63:0*/ top__DOT__l3__DOT__outmem_write_data;
        QData/*63:0*/ top__DOT__l4__DOT__outmem_write_data;
        QData/*63:0*/ top__DOT__l4__DOT__inmem_read_data;
        QData/*63:0*/ top__DOT__l5__DOT__act_out_data;
        QData/*63:0*/ top__DOT__l5__DOT__weights_out_data;
        QData/*63:0*/ top__DOT__l5__DOT__bias_out_data;
        QData/*63:0*/ top__DOT__l5__DOT__outmem_write_data;
        SData/*15:0*/ top__DOT__scheduler_2_l1l2_index[3];
        SData/*15:0*/ top__DOT__scheduler_2_l2l3_index[4];
        SData/*15:0*/ top__DOT__scheduler_2_l3l4_index[4];
        SData/*15:0*/ top__DOT__scheduler_2_l4_outmem_index[3];
    };
    struct {
        SData/*15:0*/ top__DOT__l1__DOT__weight_read_index[4];
        SData/*15:0*/ top__DOT__l1__DOT__act_read_index[3];
        SData/*15:0*/ top__DOT__l1__DOT__outmem_index[3];
        QData/*63:0*/ top__DOT__l1__DOT__activation__DOT__mem[1][28][28];
        QData/*63:0*/ top__DOT__l1__DOT__weights__DOT__mem_weight[1][16][3][3];
        QData/*63:0*/ top__DOT__l1__DOT__weights__DOT__mem_bias[16];
        QData/*63:0*/ top__DOT__l1__DOT__out_memory__DOT__mem[16][26][26];
        SData/*15:0*/ top__DOT__l2__DOT__outmem_write_index[3];
        SData/*15:0*/ top__DOT__l2__DOT__inmem_read_index[3];
        QData/*63:0*/ top__DOT__l2__DOT__in_memory__DOT__mem[16][26][26];
        QData/*63:0*/ top__DOT__l2__DOT__out_memory__DOT__mem[16][25][25];
        SData/*15:0*/ top__DOT__l3__DOT__weight_read_index[4];
        SData/*15:0*/ top__DOT__l3__DOT__act_read_index[3];
        SData/*15:0*/ top__DOT__l3__DOT__outmem_index[3];
        QData/*63:0*/ top__DOT__l3__DOT__activation__DOT__mem[16][13][13];
        QData/*63:0*/ top__DOT__l3__DOT__weights__DOT__mem_weight[16][32][3][3];
        QData/*63:0*/ top__DOT__l3__DOT__weights__DOT__mem_bias[32];
        QData/*63:0*/ top__DOT__l3__DOT__out_memory__DOT__mem[32][11][11];
        SData/*15:0*/ top__DOT__l4__DOT__outmem_write_index[3];
        SData/*15:0*/ top__DOT__l4__DOT__inmem_read_index[3];
        QData/*63:0*/ top__DOT__l4__DOT__in_memory__DOT__mem[32][11][11];
        QData/*63:0*/ top__DOT__l4__DOT__out_memory__DOT__mem[32][10][10];
        SData/*15:0*/ top__DOT__l5__DOT__weight_read_index[2];
        QData/*63:0*/ top__DOT__l5__DOT__activation__DOT__mem[1][800][800];
        QData/*63:0*/ top__DOT__l5__DOT__weights__DOT__mem_weight[1][1][800][800];
        QData/*63:0*/ top__DOT__l5__DOT__weights__DOT__mem_bias[1];
        QData/*63:0*/ top__DOT__l5__DOT__out_memory__DOT__mem[2][10][10];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ __Vm_traceActivity;
    QData/*63:0*/ top__DOT__l1__DOT__activation__DOT____Vlvbound1;
    QData/*63:0*/ top__DOT__l1__DOT__weights__DOT____Vlvbound1;
    QData/*63:0*/ top__DOT__l1__DOT__out_memory__DOT____Vlvbound1;
    QData/*63:0*/ top__DOT__l2__DOT__in_memory__DOT____Vlvbound1;
    QData/*63:0*/ top__DOT__l2__DOT__out_memory__DOT____Vlvbound1;
    QData/*63:0*/ top__DOT__l3__DOT__activation__DOT____Vlvbound1;
    QData/*63:0*/ top__DOT__l3__DOT__weights__DOT____Vlvbound1;
    QData/*63:0*/ top__DOT__l3__DOT__out_memory__DOT____Vlvbound1;
    QData/*63:0*/ top__DOT__l4__DOT__in_memory__DOT____Vlvbound1;
    QData/*63:0*/ top__DOT__l4__DOT__out_memory__DOT____Vlvbound1;
    QData/*63:0*/ top__DOT__l5__DOT__activation__DOT____Vlvbound1;
    QData/*63:0*/ top__DOT__l5__DOT__weights__DOT____Vlvbound1;
    QData/*63:0*/ top__DOT__l5__DOT__weights__DOT____Vlvbound2;
    QData/*63:0*/ top__DOT__l5__DOT__out_memory__DOT____Vlvbound1;
    SData/*15:0*/ top__DOT____Vcellout__scheduler__l4_outmem_index[3];
    SData/*15:0*/ top__DOT____Vcellout__scheduler__l3_l4_index[4];
    SData/*15:0*/ top__DOT____Vcellout__scheduler__l2_l3_index[4];
    SData/*15:0*/ top__DOT____Vcellout__scheduler__l1_l2_index[3];
    SData/*15:0*/ top__DOT____Vcellinp__l1__read_outmem_index[3];
    SData/*15:0*/ top__DOT____Vcellinp__l2__outmem_read_index[3];
    SData/*15:0*/ top__DOT____Vcellinp__l2__inmem_write_index[3];
    SData/*15:0*/ top__DOT____Vcellinp__l3__read_outmem_index[3];
    SData/*15:0*/ top__DOT____Vcellinp__l4__outmem_read_index[3];
    SData/*15:0*/ top__DOT____Vcellinp__l4__inmem_write_index[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtop__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtop();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vtop__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtop__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vtop__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__2(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(Vtop__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  // guard
