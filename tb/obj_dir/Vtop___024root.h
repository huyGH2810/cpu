// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;
VL_MODULE(Vtop___024root) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        CData/*0:0*/ top__DOT__pipelined__DOT__ASel_EX;
        CData/*0:0*/ top__DOT__pipelined__DOT__ASel_MEM;
        CData/*0:0*/ top__DOT__pipelined__DOT__ASel_WB;
        CData/*0:0*/ top__DOT__pipelined__DOT__BSel_EX;
        CData/*0:0*/ top__DOT__pipelined__DOT__BSel_MEM;
        CData/*0:0*/ top__DOT__pipelined__DOT__BSel_WB;
        CData/*0:0*/ top__DOT__pipelined__DOT__BrUn_EX;
        CData/*0:0*/ top__DOT__pipelined__DOT__BrUn_MEM;
        CData/*0:0*/ top__DOT__pipelined__DOT__BrUn_WB;
        CData/*0:0*/ top__DOT__pipelined__DOT__PCSel_EX;
        CData/*0:0*/ top__DOT__pipelined__DOT__PCSel_MEM;
        CData/*0:0*/ top__DOT__pipelined__DOT__PCSel_WB;
        CData/*0:0*/ top__DOT__pipelined__DOT__MemRW_EX;
        CData/*0:0*/ top__DOT__pipelined__DOT__MemRW_MEM;
        CData/*0:0*/ top__DOT__pipelined__DOT__MemRW_WB;
        CData/*1:0*/ top__DOT__pipelined__DOT__WBSel_EX;
        CData/*1:0*/ top__DOT__pipelined__DOT__WBSel_MEM;
        CData/*1:0*/ top__DOT__pipelined__DOT__WBSel_WB;
        CData/*0:0*/ top__DOT__pipelined__DOT__RegWEn_EX;
        CData/*0:0*/ top__DOT__pipelined__DOT__RegWEn_MEM;
        CData/*0:0*/ top__DOT__pipelined__DOT__RegWEn_WB;
        CData/*2:0*/ top__DOT__pipelined__DOT__ImmSel_EX;
        CData/*2:0*/ top__DOT__pipelined__DOT__ImmSel_MEM;
        CData/*2:0*/ top__DOT__pipelined__DOT__ImmSel_WB;
        CData/*3:0*/ top__DOT__pipelined__DOT__ALUSel_EX;
        CData/*3:0*/ top__DOT__pipelined__DOT__ALUSel_MEM;
        CData/*3:0*/ top__DOT__pipelined__DOT__ALUSel_WB;
        CData/*0:0*/ top__DOT__pipelined__DOT__pc_sel_EX;
        CData/*0:0*/ top__DOT__pipelined__DOT__BrLT;
        CData/*7:0*/ top__DOT__pipelined__DOT____Vcellinp__pc_sel_block__opcode;
        CData/*1:0*/ top__DOT__pipelined__DOT__fwd_a;
        CData/*1:0*/ top__DOT__pipelined__DOT__fwd_b;
        CData/*0:0*/ top__DOT__pipelined__DOT__stall_IF;
        CData/*0:0*/ top__DOT__pipelined__DOT__flush_br;
        CData/*0:0*/ top__DOT__pipelined__DOT__flush_ID;
        CData/*0:0*/ top__DOT__pipelined__DOT__hit;
        CData/*7:0*/ top__DOT__pipelined__DOT__pc_sel_block__DOT____Vxrand_h96fdb8c3__0;
        CData/*1:0*/ top__DOT__pipelined__DOT__pc_sel_block__DOT__combine;
        CData/*0:0*/ top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_NOT_TAKEN__DOT__update;
        CData/*0:0*/ top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_TAKEN__DOT__update;
        CData/*0:0*/ top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__update;
        CData/*0:0*/ top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__predictedbit;
        CData/*0:0*/ top__DOT__pipelined__DOT__BPU__DOT__TWOBIT_PREDICTOR__DOT__update;
        CData/*1:0*/ top__DOT__pipelined__DOT__BPU__DOT__TWOBIT_PREDICTOR__DOT__predictedbit;
        CData/*0:0*/ __Vclklast__TOP__clk_i;
        CData/*0:0*/ __Vclklast__TOP__rst_ni;
        SData/*10:0*/ top__DOT__pipelined__DOT__control_signal;
        SData/*14:0*/ top__DOT__pipelined__DOT__CU__DOT____Vxrand_h96fd1319__2;
        SData/*14:0*/ top__DOT__pipelined__DOT__CU__DOT____Vxrand_h96fd1319__1;
        SData/*14:0*/ top__DOT__pipelined__DOT__CU__DOT____Vxrand_h96fd1319__0;
        SData/*14:0*/ top__DOT__pipelined__DOT__CU__DOT____Vxrand_h970a8d2f__1;
        SData/*14:0*/ top__DOT__pipelined__DOT__CU__DOT____Vxrand_h970a8d2f__0;
        SData/*14:0*/ top__DOT__pipelined__DOT__CU__DOT____Vxrand_h96e2b52f__0;
        SData/*14:0*/ top__DOT__pipelined__DOT__CU__DOT____Vxrand_h96fa9d2f__3;
        SData/*14:0*/ top__DOT__pipelined__DOT__CU__DOT____Vxrand_h96fa9d2f__2;
        SData/*14:0*/ top__DOT__pipelined__DOT__CU__DOT____Vxrand_h9712852f__1;
        SData/*14:0*/ top__DOT__pipelined__DOT__CU__DOT____Vxrand_h96fa9d2f__1;
        SData/*14:0*/ top__DOT__pipelined__DOT__CU__DOT____Vxrand_h96fa9d2f__0;
        SData/*14:0*/ top__DOT__pipelined__DOT__CU__DOT____Vxrand_h9712852f__0;
        SData/*14:0*/ top__DOT__pipelined__DOT__CU__DOT____Vxrand_h9716d348__0;
        SData/*14:0*/ top__DOT__pipelined__DOT__CU__DOT____Vxrand_h97171f6c__0;
        SData/*14:0*/ top__DOT__pipelined__DOT__CU__DOT____Vxrand_h9716d754__0;
    };
    struct {
        SData/*14:0*/ top__DOT__pipelined__DOT__CU__DOT____Vxrand_h971723b8__0;
        SData/*14:0*/ top__DOT__pipelined__DOT__CU__DOT____Vxrand_h971727a4__0;
        SData/*14:0*/ top__DOT__pipelined__DOT__CU__DOT____Vxrand_h9716c080__0;
        SData/*14:0*/ top__DOT__pipelined__DOT__CU__DOT____Vxrand_h97172b90__0;
        SData/*14:0*/ top__DOT__pipelined__DOT__CU__DOT____Vxrand_h97172f7c__0;
        SData/*14:0*/ top__DOT__pipelined__DOT__CU__DOT____Vxrand_h9716f8a8__0;
        SData/*14:0*/ top__DOT__pipelined__DOT__CU__DOT____Vxrand_h9716bc8c__0;
        SData/*14:0*/ top__DOT__pipelined__DOT__CU__DOT__dataout;
        VL_IN(io_sw_i,31,0);
        VL_OUT(io_lcd_o,31,0);
        VL_OUT(io_ledg_o,31,0);
        VL_OUT(io_ledr_o,31,0);
        VL_OUT(io_hex0_o,31,0);
        VL_OUT(io_hex1_o,31,0);
        VL_OUT(io_hex2_o,31,0);
        VL_OUT(io_hex3_o,31,0);
        VL_OUT(io_hex4_o,31,0);
        VL_OUT(io_hex5_o,31,0);
        VL_OUT(io_hex6_o,31,0);
        VL_OUT(io_hex7_o,31,0);
        IData/*31:0*/ top__DOT__pipelined__DOT__pc_IF;
        IData/*31:0*/ top__DOT__pipelined__DOT__instr_IF;
        IData/*31:0*/ top__DOT__pipelined__DOT__pc_ID;
        IData/*31:0*/ top__DOT__pipelined__DOT__instr_ID;
        IData/*31:0*/ top__DOT__pipelined__DOT__imm_ID;
        IData/*31:0*/ top__DOT__pipelined__DOT__pc_EX;
        IData/*31:0*/ top__DOT__pipelined__DOT__instr_EX;
        IData/*31:0*/ top__DOT__pipelined__DOT__rs1data_EX;
        IData/*31:0*/ top__DOT__pipelined__DOT__rs2data_EX;
        IData/*31:0*/ top__DOT__pipelined__DOT__imm_EX;
        IData/*31:0*/ top__DOT__pipelined__DOT__pc_MEM;
        IData/*31:0*/ top__DOT__pipelined__DOT__instr_MEM;
        IData/*31:0*/ top__DOT__pipelined__DOT__rs2data_MEM;
        IData/*31:0*/ top__DOT__pipelined__DOT__aludata_MEM;
        IData/*31:0*/ top__DOT__pipelined__DOT__instr_WB;
        IData/*31:0*/ top__DOT__pipelined__DOT__pcfour_WB;
        IData/*31:0*/ top__DOT__pipelined__DOT__lddata_WB;
        IData/*31:0*/ top__DOT__pipelined__DOT__aludata_WB;
        IData/*31:0*/ top__DOT__pipelined__DOT__wb_data;
        IData/*31:0*/ top__DOT__pipelined__DOT__rs1_data;
        IData/*31:0*/ top__DOT__pipelined__DOT__rs2_data;
        IData/*31:0*/ top__DOT__pipelined__DOT__operand_a;
        IData/*31:0*/ top__DOT__pipelined__DOT__operand_b;
        IData/*31:0*/ top__DOT__pipelined__DOT__npc;
        IData/*31:0*/ top__DOT__pipelined__DOT__PC__DOT__nxt_pc;
        IData/*31:0*/ top__DOT__pipelined__DOT__IMEM__DOT____Vxrand_h96fcef06__0;
        IData/*31:0*/ top__DOT__pipelined__DOT__regfile__DOT__i;
        IData/*31:0*/ top__DOT__pipelined__DOT__brcomp__DOT__result_signed;
        IData/*31:0*/ top__DOT__pipelined__DOT__brcomp__DOT__result_unsigned;
        IData/*31:0*/ top__DOT__pipelined__DOT__brcomp__DOT__result_eq;
        IData/*31:0*/ top__DOT__pipelined__DOT__brcomp__DOT__compare__DOT__index;
        IData/*31:0*/ top__DOT__pipelined__DOT__brcomp__DOT__compare_sign__DOT__index;
        IData/*31:0*/ top__DOT__pipelined__DOT__alu__DOT__signed_operand_a;
        IData/*31:0*/ top__DOT__pipelined__DOT__alu__DOT__ALU_Result;
        IData/*31:0*/ top__DOT__pipelined__DOT__alu__DOT__un_output_less;
        IData/*31:0*/ top__DOT__pipelined__DOT__alu__DOT__output_less;
        IData/*31:0*/ top__DOT__pipelined__DOT__alu__DOT__compare0__DOT__index;
        IData/*31:0*/ top__DOT__pipelined__DOT__alu__DOT__compare_sign0__DOT__index;
        IData/*31:0*/ top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__st_data_res;
        IData/*31:0*/ top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__st_data_out;
        IData/*31:0*/ top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__st_data_dmem;
        IData/*31:0*/ top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__ld_data_out;
        IData/*31:0*/ top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__INPUT__DOT__ram;
        IData/*31:0*/ top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__i;
    };
    struct {
        IData/*31:0*/ top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__DMEM__DOT__i;
        IData/*31:0*/ top__DOT__pipelined__DOT__top_lsu__DOT__STORE__DOT__data;
        IData/*19:0*/ top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_NOT_TAKEN__DOT__tag;
        IData/*31:0*/ top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_NOT_TAKEN__DOT__BTB__DOT__i;
        IData/*19:0*/ top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_TAKEN__DOT__tag;
        IData/*31:0*/ top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_TAKEN__DOT__BTB__DOT__i;
        IData/*19:0*/ top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__tag;
        IData/*31:0*/ top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__BTB__DOT__i;
        IData/*19:0*/ top__DOT__pipelined__DOT__BPU__DOT__TWOBIT_PREDICTOR__DOT__tag;
        IData/*31:0*/ top__DOT__pipelined__DOT__BPU__DOT__TWOBIT_PREDICTOR__DOT__BTB__DOT__i;
        VlUnpacked<IData/*31:0*/, 2044> top__DOT__pipelined__DOT__IMEM__DOT__Rdata;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__pipelined__DOT__regfile__DOT__register;
        VlUnpacked<IData/*31:0*/, 12> top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram;
        VlUnpacked<IData/*31:0*/, 512> top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__DMEM__DOT__ram;
        VlUnpacked<QData/*51:0*/, 1024> top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_NOT_TAKEN__DOT__BTB__DOT__buffer;
        VlUnpacked<QData/*51:0*/, 1024> top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_TAKEN__DOT__BTB__DOT__buffer;
        VlUnpacked<QData/*51:0*/, 1024> top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__BTB__DOT__buffer;
        VlUnpacked<QData/*51:0*/, 1024> top__DOT__pipelined__DOT__BPU__DOT__TWOBIT_PREDICTOR__DOT__BTB__DOT__buffer;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vtop___024root(const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
