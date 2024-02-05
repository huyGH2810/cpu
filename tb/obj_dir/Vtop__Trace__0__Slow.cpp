// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+175,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+176,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+177,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+178,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+179,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+180,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+181,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+182,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+183,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+184,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+185,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+186,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+187,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+188,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+175,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+176,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+177,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+178,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+179,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+180,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+181,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+182,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+183,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+184,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+185,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+186,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+187,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+188,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+189,"unused_sw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("pipelined ");
    tracep->declBit(c+187,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+188,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+175,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+176,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+177,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+178,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+186,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+185,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+184,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+183,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+182,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+181,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+180,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+179,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+110,"ASel_ID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+7,"ASel_EX",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+8,"ASel_MEM",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+9,"ASel_WB",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+111,"BSel_ID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+10,"BSel_EX",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+11,"BSel_MEM",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+12,"BSel_WB",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+112,"BrUn_ID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+13,"BrUn_EX",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+14,"BrUn_MEM",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+15,"BrUn_WB",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+113,"PCSel_ID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+16,"PCSel_EX",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+17,"PCSel_MEM",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+18,"PCSel_WB",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+114,"MemRW_ID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+19,"MemRW_EX",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+20,"MemRW_MEM",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+21,"MemRW_WB",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+115,"WBSel_ID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+22,"WBSel_EX",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+23,"WBSel_MEM",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+24,"WBSel_WB",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+116,"RegWEn_ID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+117,"RegWEn_EX",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+118,"RegWEn_MEM",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+119,"RegWEn_WB",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+120,"ImmSel_ID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+25,"ImmSel_EX",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+26,"ImmSel_MEM",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+27,"ImmSel_WB",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+121,"ALUSel_ID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+28,"ALUSel_EX",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+29,"ALUSel_MEM",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+30,"ALUSel_WB",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+31,"pc_IF",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,"instr_IF",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,"pc_ID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,"instr_ID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,"rs1data_ID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,"rs2data_ID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,"imm_ID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,"pc_EX",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,"instr_EX",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,"rs1data_EX",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,"rs2data_EX",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,"imm_EX",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,"aludata_EX",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,"pc_MEM",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,"instr_MEM",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,"rs2data_MEM",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,"aludata_MEM",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,"pcfour_MEM",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,"lddata_MEM",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,"instr_WB",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,"pcfour_WB",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,"lddata_WB",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,"aludata_WB",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+129,"pc_sel_EX",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+130,"wb_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+131,"BrEq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+132,"BrLT",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+133,"rs1_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,"rs2_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,"operand_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,"operand_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,"control_signal",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 10,0);
    tracep->declBus(c+138,"fwd_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+139,"fwd_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+140,"stall_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+141,"stall_IF",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+142,"flush_br",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+142,"flush_IF",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+143,"flush_ID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+144,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+145,"npc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("BPU ");
    tracep->declBit(c+187,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+31,"pc_IF",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+122,"instr_IF",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+33,"pc_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+125,"instr_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+129,"pc_sel_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+126,"aludata_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+142,"flush_br",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+144,"hit",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+145,"npc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+194,"predictor1_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+194,"predictor2_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+195,"predictor3_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+194,"predictor4_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("ALWAYS_NOT_TAKEN ");
    tracep->declBit(c+187,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+194,"predictor_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+31,"pc_IF",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+122,"instr_IF",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+33,"pc_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+125,"instr_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+129,"pc_sel_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+126,"aludata_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+142,"flush_br",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+144,"hit",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+145,"npc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+196,"update",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+44,"tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 19,0);
    tracep->declBus(c+45,"predictedPC",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("BTB ");
    tracep->declBit(c+187,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+31,"pc_IF",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+196,"update",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+33,"pc_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+126,"aludata_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+44,"tag",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->declBus(c+45,"predictedPC",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ALWAYS_TAKEN ");
    tracep->declBit(c+187,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+194,"predictor_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+31,"pc_IF",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+122,"instr_IF",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+33,"pc_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+125,"instr_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+129,"pc_sel_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+126,"aludata_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+142,"flush_br",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+144,"hit",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+145,"npc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+197,"update",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+46,"tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 19,0);
    tracep->declBus(c+47,"predictedPC",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("BTB ");
    tracep->declBit(c+187,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+31,"pc_IF",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+197,"update",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+33,"pc_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+126,"aludata_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+46,"tag",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->declBus(c+47,"predictedPC",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ONEBIT_PREDICTOR ");
    tracep->declBit(c+187,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+195,"predictor_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+31,"pc_IF",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+122,"instr_IF",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+33,"pc_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+125,"instr_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+129,"pc_sel_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+126,"aludata_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+142,"flush_br",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+144,"hit",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+145,"npc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+146,"update",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+48,"tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 19,0);
    tracep->declBus(c+49,"predictedPC",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+50,"predictedbit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("BTB ");
    tracep->declBit(c+187,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+31,"pc_IF",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+146,"update",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+33,"pc_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+126,"aludata_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+48,"tag",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->declBus(c+49,"predictedPC",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("TWOBIT_PREDICTOR ");
    tracep->declBit(c+187,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+194,"predictor_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+31,"pc_IF",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+122,"instr_IF",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+33,"pc_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+125,"instr_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+129,"pc_sel_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+126,"aludata_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+142,"flush_br",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+144,"hit",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+145,"npc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+198,"update",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+51,"tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 19,0);
    tracep->declBus(c+52,"predictedPC",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,"predictedbit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("BTB ");
    tracep->declBit(c+187,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+31,"pc_IF",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+198,"update",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+33,"pc_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+126,"aludata_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+51,"tag",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->declBus(c+52,"predictedPC",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+4,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("CU ");
    tracep->declBus(c+137,"control_signal",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 10,0);
    tracep->declBus(c+121,"ALUSel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+120,"ImmSel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+115,"WBSel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+112,"BrUn",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+113,"PCSel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+110,"ASel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+111,"BSel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+114,"MemRW",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+116,"RegWEn",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+147,"dataout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 14,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX_MEM ");
    tracep->declBit(c+187,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+125,"instr_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+33,"pc_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+126,"aludata_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+134,"rs2data_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+28,"ALUSel_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+25,"ImmSel_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+22,"WBSel_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+13,"BrUn_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"PCSel_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"ASel_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"BSel_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"MemRW_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+117,"RegWEn_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+127,"instr_MEM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+37,"pc_MEM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+39,"aludata_MEM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+38,"rs2data_MEM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+29,"ALUSel_MEM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+26,"ImmSel_MEM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+23,"WBSel_MEM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+14,"BrUn_MEM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"PCSel_MEM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"ASel_MEM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"BSel_MEM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"MemRW_MEM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+118,"RegWEn_MEM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("FU ");
    tracep->declBus(c+125,"instr_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+127,"instr_MEM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+128,"instr_WB",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+118,"RegWEn_MEM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+119,"RegWEn_WB",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+138,"fwd_a",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+139,"fwd_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+148,"rs1_addr_EX",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+149,"rs2_addr_EX",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+150,"rd_addr_MEM",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+151,"rd_addr_WB",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("HDU ");
    tracep->declBus(c+123,"instr_ID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+125,"instr_EX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+142,"flush_br",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"stall_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+141,"stall_IF",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"flush_IF",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"flush_ID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+152,"rs1_addr_ID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+153,"rs2_addr_ID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+154,"rd_addr_EX",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+155,"opcode_EX",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+156,"isload_EX",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID_EX ");
    tracep->declBit(c+187,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"flush_ID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+123,"instr_ID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+32,"pc_ID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+190,"rs1data_ID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+191,"rs2data_ID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+124,"imm_ID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+121,"ALUSel_ID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+120,"ImmSel_ID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+115,"WBSel_ID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+112,"BrUn_ID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+113,"PCSel_ID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+110,"ASel_ID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+111,"BSel_ID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+114,"MemRW_ID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+116,"RegWEn_ID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+125,"instr_EX",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+33,"pc_EX",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+34,"rs1data_EX",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+35,"rs2data_EX",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"imm_EX",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+28,"ALUSel_EX",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+25,"ImmSel_EX",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+22,"WBSel_EX",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+13,"BrUn_EX",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"PCSel_EX",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"ASel_EX",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"BSel_EX",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"MemRW_EX",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+117,"RegWEn_EX",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF_ID ");
    tracep->declBit(c+187,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"flush_IF",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+141,"stall_IF",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+122,"instr_IF",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+31,"pc_IF",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+123,"instr_ID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+32,"pc_ID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IMEM ");
    tracep->declBus(c+31,"address",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+122,"data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM_WB ");
    tracep->declBit(c+187,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+127,"instr_MEM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+39,"aludata_MEM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+40,"pcfour_MEM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+192,"lddata_MEM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+29,"ALUSel_MEM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+26,"ImmSel_MEM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+23,"WBSel_MEM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+14,"BrUn_MEM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"PCSel_MEM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"ASel_MEM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"BSel_MEM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"MemRW_MEM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+118,"RegWEn_MEM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+128,"instr_WB",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"lddata_WB",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"aludata_WB",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+41,"pcfour_WB",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+30,"ALUSel_WB",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+27,"ImmSel_WB",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+24,"WBSel_WB",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+15,"BrUn_WB",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"PCSel_WB",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9,"ASel_WB",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+12,"BSel_WB",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"MemRW_WB",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+119,"RegWEn_WB",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC ");
    tracep->declBit(c+144,"br_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+187,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+145,"alu_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+140,"stall_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+31,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+193,"nxt_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,"pc_four",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+135,"operand_a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+136,"operand_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+28,"alu_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+126,"alu_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+157,"signed_operand_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,"ALU_Result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,"un_output_less",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,"output_less",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("compare0 ");
    tracep->declBus(c+135,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+136,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+158,"out_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+160,"index",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_sign0 ");
    tracep->declBus(c+135,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+136,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+159,"out_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+161,"index",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("brcomp ");
    tracep->declBus(c+133,"rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+134,"rs2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+13,"br_unsigned",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+132,"br_less",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+131,"br_equal",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+162,"result_signed",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,"result_unsigned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+164,"result_eq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+165,"unused",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+166,"unused1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+167,"unused2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("compare ");
    tracep->declBus(c+133,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+134,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+163,"out_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+168,"index",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_eq ");
    tracep->declBus(c+133,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+134,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+164,"out_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_sign ");
    tracep->declBus(c+133,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+134,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+162,"out_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+169,"index",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("immGen ");
    tracep->declBus(c+170,"imm_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,7);
    tracep->declBus(c+120,"imm_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+124,"imm_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_fwd_a ");
    tracep->declBus(c+34,"rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+130,"wb_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+39,"ALUOut_reg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+138,"fwd_a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+133,"RegReadData1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_fwd_b ");
    tracep->declBus(c+35,"rs2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+130,"wb_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+39,"ALUOut_reg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+139,"fwd_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+134,"RegReadData2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_op_a ");
    tracep->declBit(c+7,"op_x_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+133,"rsx_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+33,"imm_or_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+135,"operand_x",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_op_b ");
    tracep->declBit(c+10,"op_x_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+134,"rsx_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"imm_or_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+136,"operand_x",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_wb_sel ");
    tracep->declBus(c+24,"wb_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+43,"alu_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"ld_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+41,"pc_four",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+130,"wb_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_sel_block ");
    tracep->declBit(c+131,"BrEq",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+132,"BrLT",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+171,"opcode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+129,"pc_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+172,"combine",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+187,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+188,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+119,"rd_wren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+152,"rs1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+153,"rs2_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+151,"rd_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+130,"rd_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+190,"rs1_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+191,"rs2_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+73,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+74+i*1,"register",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("top_lsu ");
    tracep->declBit(c+187,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+188,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"st_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+173,"func3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+39,"addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+38,"st_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+175,"io_sw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+192,"ld_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+176,"io_lcd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+178,"io_ledr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+177,"io_ledg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+186,"io_hex7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+185,"io_hex6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+184,"io_hex5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+183,"io_hex4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+182,"io_hex3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+181,"io_hex2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+180,"io_hex1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+179,"io_hex0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+174,"lsu_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,"lsu_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("LOAD ");
    tracep->declBus(c+173,"func3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+106,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+192,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+192,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+187,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+188,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"st_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+39,"addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+174,"st_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+175,"io_sw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+106,"ld_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+176,"io_lcd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+178,"io_ledr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+177,"io_ledg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+186,"io_hex7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+185,"io_hex6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+184,"io_hex5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+183,"io_hex4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+182,"io_hex3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+181,"io_hex2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+180,"io_hex1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+179,"io_hex0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+55,"unused",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+107,"st_data_res",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,"st_data_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,"st_data_dmem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,"ld_data_sw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,"ld_data_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,"ld_data_dmem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("DMEM ");
    tracep->declBit(c+187,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"st_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+58,"addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 10,0);
    tracep->declBus(c+109,"st_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+57,"ld_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+5,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBit(c+59,"unused",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("INPUT ");
    tracep->declBit(c+187,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"st_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+175,"sw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+56,"ld_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+56,"ram",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OUTPUT ");
    tracep->declBus(c+176,"lcd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+178,"ledr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+177,"ledg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+186,"hex7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+185,"hex6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+184,"hex5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+183,"hex4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+182,"hex3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+181,"hex2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+180,"hex1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+179,"hex0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+187,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"st_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+60,"addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+108,"st_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+6,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+61+i*1,"ram",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("STORE ");
    tracep->declBus(c+173,"func3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+38,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+174,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+174,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst* tracep);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst* tracep);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullIData(oldp+1,(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_NOT_TAKEN__DOT__BTB__DOT__i),32);
    tracep->fullIData(oldp+2,(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_TAKEN__DOT__BTB__DOT__i),32);
    tracep->fullIData(oldp+3,(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__BTB__DOT__i),32);
    tracep->fullIData(oldp+4,(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__TWOBIT_PREDICTOR__DOT__BTB__DOT__i),32);
    tracep->fullIData(oldp+5,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__DMEM__DOT__i),32);
    tracep->fullIData(oldp+6,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__i),32);
    tracep->fullBit(oldp+7,(vlSelf->top__DOT__pipelined__DOT__ASel_EX));
    tracep->fullBit(oldp+8,(vlSelf->top__DOT__pipelined__DOT__ASel_MEM));
    tracep->fullBit(oldp+9,(vlSelf->top__DOT__pipelined__DOT__ASel_WB));
    tracep->fullBit(oldp+10,(vlSelf->top__DOT__pipelined__DOT__BSel_EX));
    tracep->fullBit(oldp+11,(vlSelf->top__DOT__pipelined__DOT__BSel_MEM));
    tracep->fullBit(oldp+12,(vlSelf->top__DOT__pipelined__DOT__BSel_WB));
    tracep->fullBit(oldp+13,(vlSelf->top__DOT__pipelined__DOT__BrUn_EX));
    tracep->fullBit(oldp+14,(vlSelf->top__DOT__pipelined__DOT__BrUn_MEM));
    tracep->fullBit(oldp+15,(vlSelf->top__DOT__pipelined__DOT__BrUn_WB));
    tracep->fullBit(oldp+16,(vlSelf->top__DOT__pipelined__DOT__PCSel_EX));
    tracep->fullBit(oldp+17,(vlSelf->top__DOT__pipelined__DOT__PCSel_MEM));
    tracep->fullBit(oldp+18,(vlSelf->top__DOT__pipelined__DOT__PCSel_WB));
    tracep->fullBit(oldp+19,(vlSelf->top__DOT__pipelined__DOT__MemRW_EX));
    tracep->fullBit(oldp+20,(vlSelf->top__DOT__pipelined__DOT__MemRW_MEM));
    tracep->fullBit(oldp+21,(vlSelf->top__DOT__pipelined__DOT__MemRW_WB));
    tracep->fullCData(oldp+22,(vlSelf->top__DOT__pipelined__DOT__WBSel_EX),2);
    tracep->fullCData(oldp+23,(vlSelf->top__DOT__pipelined__DOT__WBSel_MEM),2);
    tracep->fullCData(oldp+24,(vlSelf->top__DOT__pipelined__DOT__WBSel_WB),2);
    tracep->fullCData(oldp+25,(vlSelf->top__DOT__pipelined__DOT__ImmSel_EX),3);
    tracep->fullCData(oldp+26,(vlSelf->top__DOT__pipelined__DOT__ImmSel_MEM),3);
    tracep->fullCData(oldp+27,(vlSelf->top__DOT__pipelined__DOT__ImmSel_WB),3);
    tracep->fullCData(oldp+28,(vlSelf->top__DOT__pipelined__DOT__ALUSel_EX),4);
    tracep->fullCData(oldp+29,(vlSelf->top__DOT__pipelined__DOT__ALUSel_MEM),4);
    tracep->fullCData(oldp+30,(vlSelf->top__DOT__pipelined__DOT__ALUSel_WB),4);
    tracep->fullIData(oldp+31,(vlSelf->top__DOT__pipelined__DOT__pc_IF),32);
    tracep->fullIData(oldp+32,(vlSelf->top__DOT__pipelined__DOT__pc_ID),32);
    tracep->fullIData(oldp+33,(vlSelf->top__DOT__pipelined__DOT__pc_EX),32);
    tracep->fullIData(oldp+34,(vlSelf->top__DOT__pipelined__DOT__rs1data_EX),32);
    tracep->fullIData(oldp+35,(vlSelf->top__DOT__pipelined__DOT__rs2data_EX),32);
    tracep->fullIData(oldp+36,(vlSelf->top__DOT__pipelined__DOT__imm_EX),32);
    tracep->fullIData(oldp+37,(vlSelf->top__DOT__pipelined__DOT__pc_MEM),32);
    tracep->fullIData(oldp+38,(vlSelf->top__DOT__pipelined__DOT__rs2data_MEM),32);
    tracep->fullIData(oldp+39,(vlSelf->top__DOT__pipelined__DOT__aludata_MEM),32);
    tracep->fullIData(oldp+40,(((IData)(4U) + vlSelf->top__DOT__pipelined__DOT__pc_MEM)),32);
    tracep->fullIData(oldp+41,(vlSelf->top__DOT__pipelined__DOT__pcfour_WB),32);
    tracep->fullIData(oldp+42,(vlSelf->top__DOT__pipelined__DOT__lddata_WB),32);
    tracep->fullIData(oldp+43,(vlSelf->top__DOT__pipelined__DOT__aludata_WB),32);
    tracep->fullIData(oldp+44,(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_NOT_TAKEN__DOT__tag),20);
    tracep->fullIData(oldp+45,((IData)(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_NOT_TAKEN__DOT__BTB__DOT__buffer
                                       [(0x3ffU & (vlSelf->top__DOT__pipelined__DOT__pc_IF 
                                                   >> 2U))])),32);
    tracep->fullIData(oldp+46,(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_TAKEN__DOT__tag),20);
    tracep->fullIData(oldp+47,((IData)(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_TAKEN__DOT__BTB__DOT__buffer
                                       [(0x3ffU & (vlSelf->top__DOT__pipelined__DOT__pc_IF 
                                                   >> 2U))])),32);
    tracep->fullIData(oldp+48,(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__tag),20);
    tracep->fullIData(oldp+49,((IData)(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__BTB__DOT__buffer
                                       [(0x3ffU & (vlSelf->top__DOT__pipelined__DOT__pc_IF 
                                                   >> 2U))])),32);
    tracep->fullBit(oldp+50,(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__predictedbit));
    tracep->fullIData(oldp+51,(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__TWOBIT_PREDICTOR__DOT__tag),20);
    tracep->fullIData(oldp+52,((IData)(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__TWOBIT_PREDICTOR__DOT__BTB__DOT__buffer
                                       [(0x3ffU & (vlSelf->top__DOT__pipelined__DOT__pc_IF 
                                                   >> 2U))])),32);
    tracep->fullCData(oldp+53,(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__TWOBIT_PREDICTOR__DOT__predictedbit),2);
    tracep->fullIData(oldp+54,(((IData)(4U) + vlSelf->top__DOT__pipelined__DOT__pc_IF)),32);
    tracep->fullBit(oldp+55,((0U != (vlSelf->top__DOT__pipelined__DOT__aludata_MEM 
                                     >> 0xcU))));
    tracep->fullIData(oldp+56,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__INPUT__DOT__ram),32);
    tracep->fullIData(oldp+57,(((IData)(vlSelf->top__DOT__pipelined__DOT__MemRW_MEM)
                                 ? 0U : vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__DMEM__DOT__ram
                                [(0x1ffU & (vlSelf->top__DOT__pipelined__DOT__aludata_MEM 
                                            >> 2U))])),32);
    tracep->fullSData(oldp+58,((0x7ffU & vlSelf->top__DOT__pipelined__DOT__aludata_MEM)),11);
    tracep->fullBit(oldp+59,((0U != (3U & vlSelf->top__DOT__pipelined__DOT__aludata_MEM))));
    tracep->fullCData(oldp+60,((0xffU & vlSelf->top__DOT__pipelined__DOT__aludata_MEM)),8);
    tracep->fullIData(oldp+61,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[0]),32);
    tracep->fullIData(oldp+62,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[1]),32);
    tracep->fullIData(oldp+63,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[2]),32);
    tracep->fullIData(oldp+64,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[3]),32);
    tracep->fullIData(oldp+65,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[4]),32);
    tracep->fullIData(oldp+66,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[5]),32);
    tracep->fullIData(oldp+67,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[6]),32);
    tracep->fullIData(oldp+68,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[7]),32);
    tracep->fullIData(oldp+69,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[8]),32);
    tracep->fullIData(oldp+70,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[9]),32);
    tracep->fullIData(oldp+71,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[10]),32);
    tracep->fullIData(oldp+72,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[11]),32);
    tracep->fullIData(oldp+73,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__i),32);
    tracep->fullIData(oldp+74,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[0]),32);
    tracep->fullIData(oldp+75,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[1]),32);
    tracep->fullIData(oldp+76,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[2]),32);
    tracep->fullIData(oldp+77,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[3]),32);
    tracep->fullIData(oldp+78,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[4]),32);
    tracep->fullIData(oldp+79,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[5]),32);
    tracep->fullIData(oldp+80,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[6]),32);
    tracep->fullIData(oldp+81,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[7]),32);
    tracep->fullIData(oldp+82,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[8]),32);
    tracep->fullIData(oldp+83,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[9]),32);
    tracep->fullIData(oldp+84,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[10]),32);
    tracep->fullIData(oldp+85,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[11]),32);
    tracep->fullIData(oldp+86,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[12]),32);
    tracep->fullIData(oldp+87,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[13]),32);
    tracep->fullIData(oldp+88,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[14]),32);
    tracep->fullIData(oldp+89,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[15]),32);
    tracep->fullIData(oldp+90,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[16]),32);
    tracep->fullIData(oldp+91,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[17]),32);
    tracep->fullIData(oldp+92,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[18]),32);
    tracep->fullIData(oldp+93,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[19]),32);
    tracep->fullIData(oldp+94,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[20]),32);
    tracep->fullIData(oldp+95,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[21]),32);
    tracep->fullIData(oldp+96,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[22]),32);
    tracep->fullIData(oldp+97,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[23]),32);
    tracep->fullIData(oldp+98,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[24]),32);
    tracep->fullIData(oldp+99,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[25]),32);
    tracep->fullIData(oldp+100,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[26]),32);
    tracep->fullIData(oldp+101,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[27]),32);
    tracep->fullIData(oldp+102,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[28]),32);
    tracep->fullIData(oldp+103,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[29]),32);
    tracep->fullIData(oldp+104,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[30]),32);
    tracep->fullIData(oldp+105,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[31]),32);
    tracep->fullIData(oldp+106,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__ld_data_out),32);
    tracep->fullIData(oldp+107,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__st_data_res),32);
    tracep->fullIData(oldp+108,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__st_data_out),32);
    tracep->fullIData(oldp+109,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__st_data_dmem),32);
    tracep->fullBit(oldp+110,((1U & ((IData)(vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout) 
                                     >> 9U))));
    tracep->fullBit(oldp+111,((1U & ((IData)(vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout) 
                                     >> 8U))));
    tracep->fullBit(oldp+112,((1U & ((IData)(vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout) 
                                     >> 0xeU))));
    tracep->fullBit(oldp+113,((1U & ((IData)(vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout) 
                                     >> 0xdU))));
    tracep->fullBit(oldp+114,((1U & ((IData)(vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout) 
                                     >> 3U))));
    tracep->fullCData(oldp+115,((3U & (IData)(vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout))),2);
    tracep->fullBit(oldp+116,((1U & ((IData)(vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout) 
                                     >> 2U))));
    tracep->fullBit(oldp+117,(vlSelf->top__DOT__pipelined__DOT__RegWEn_EX));
    tracep->fullBit(oldp+118,(vlSelf->top__DOT__pipelined__DOT__RegWEn_MEM));
    tracep->fullBit(oldp+119,(vlSelf->top__DOT__pipelined__DOT__RegWEn_WB));
    tracep->fullCData(oldp+120,((7U & ((IData)(vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout) 
                                       >> 0xaU))),3);
    tracep->fullCData(oldp+121,((0xfU & ((IData)(vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout) 
                                         >> 4U))),4);
    tracep->fullIData(oldp+122,(vlSelf->top__DOT__pipelined__DOT__instr_IF),32);
    tracep->fullIData(oldp+123,(vlSelf->top__DOT__pipelined__DOT__instr_ID),32);
    tracep->fullIData(oldp+124,(vlSelf->top__DOT__pipelined__DOT__imm_ID),32);
    tracep->fullIData(oldp+125,(vlSelf->top__DOT__pipelined__DOT__instr_EX),32);
    tracep->fullIData(oldp+126,(vlSelf->top__DOT__pipelined__DOT__alu__DOT__ALU_Result),32);
    tracep->fullIData(oldp+127,(vlSelf->top__DOT__pipelined__DOT__instr_MEM),32);
    tracep->fullIData(oldp+128,(vlSelf->top__DOT__pipelined__DOT__instr_WB),32);
    tracep->fullBit(oldp+129,(vlSelf->top__DOT__pipelined__DOT__pc_sel_EX));
    tracep->fullIData(oldp+130,(vlSelf->top__DOT__pipelined__DOT__wb_data),32);
    tracep->fullBit(oldp+131,((1U & vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__result_eq)));
    tracep->fullBit(oldp+132,(vlSelf->top__DOT__pipelined__DOT__BrLT));
    tracep->fullIData(oldp+133,(vlSelf->top__DOT__pipelined__DOT__rs1_data),32);
    tracep->fullIData(oldp+134,(vlSelf->top__DOT__pipelined__DOT__rs2_data),32);
    tracep->fullIData(oldp+135,(vlSelf->top__DOT__pipelined__DOT__operand_a),32);
    tracep->fullIData(oldp+136,(vlSelf->top__DOT__pipelined__DOT__operand_b),32);
    tracep->fullSData(oldp+137,(vlSelf->top__DOT__pipelined__DOT__control_signal),11);
    tracep->fullCData(oldp+138,(vlSelf->top__DOT__pipelined__DOT__fwd_a),2);
    tracep->fullCData(oldp+139,(vlSelf->top__DOT__pipelined__DOT__fwd_b),2);
    tracep->fullBit(oldp+140,((((~ (IData)((0U != (0x1fU 
                                                   & (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                                                      >> 2U))))) 
                                & (0U != (0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                                                   >> 7U)))) 
                               & (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                                             >> 7U)) 
                                   == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_ID 
                                                >> 0xfU))) 
                                  | ((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                                               >> 7U)) 
                                     == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_ID 
                                                  >> 0x14U)))))));
    tracep->fullBit(oldp+141,(vlSelf->top__DOT__pipelined__DOT__stall_IF));
    tracep->fullBit(oldp+142,(vlSelf->top__DOT__pipelined__DOT__flush_br));
    tracep->fullBit(oldp+143,(vlSelf->top__DOT__pipelined__DOT__flush_ID));
    tracep->fullBit(oldp+144,(vlSelf->top__DOT__pipelined__DOT__hit));
    tracep->fullIData(oldp+145,(vlSelf->top__DOT__pipelined__DOT__npc),32);
    tracep->fullBit(oldp+146,(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__update));
    tracep->fullSData(oldp+147,(vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout),15);
    tracep->fullCData(oldp+148,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+149,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                                          >> 0x14U))),5);
    tracep->fullCData(oldp+150,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_MEM 
                                          >> 7U))),5);
    tracep->fullCData(oldp+151,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_WB 
                                          >> 7U))),5);
    tracep->fullCData(oldp+152,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_ID 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+153,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_ID 
                                          >> 0x14U))),5);
    tracep->fullCData(oldp+154,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                                          >> 7U))),5);
    tracep->fullCData(oldp+155,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                                          >> 2U))),5);
    tracep->fullBit(oldp+156,((1U & (~ (IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                                                    >> 2U))))))));
    tracep->fullIData(oldp+157,(vlSelf->top__DOT__pipelined__DOT__alu__DOT__signed_operand_a),32);
    tracep->fullIData(oldp+158,(vlSelf->top__DOT__pipelined__DOT__alu__DOT__un_output_less),32);
    tracep->fullIData(oldp+159,(vlSelf->top__DOT__pipelined__DOT__alu__DOT__output_less),32);
    tracep->fullIData(oldp+160,(vlSelf->top__DOT__pipelined__DOT__alu__DOT__compare0__DOT__index),32);
    tracep->fullIData(oldp+161,(vlSelf->top__DOT__pipelined__DOT__alu__DOT__compare_sign0__DOT__index),32);
    tracep->fullIData(oldp+162,(vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__result_signed),32);
    tracep->fullIData(oldp+163,(vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__result_unsigned),32);
    tracep->fullIData(oldp+164,(vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__result_eq),32);
    tracep->fullBit(oldp+165,((0U != (vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__result_unsigned 
                                      >> 1U))));
    tracep->fullBit(oldp+166,((0U != (vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__result_signed 
                                      >> 1U))));
    tracep->fullBit(oldp+167,((0U != (vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__result_eq 
                                      >> 1U))));
    tracep->fullIData(oldp+168,(vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__compare__DOT__index),32);
    tracep->fullIData(oldp+169,(vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__compare_sign__DOT__index),32);
    tracep->fullIData(oldp+170,((vlSelf->top__DOT__pipelined__DOT__instr_ID 
                                 >> 7U)),25);
    tracep->fullCData(oldp+171,(vlSelf->top__DOT__pipelined__DOT____Vcellinp__pc_sel_block__opcode),8);
    tracep->fullCData(oldp+172,(vlSelf->top__DOT__pipelined__DOT__pc_sel_block__DOT__combine),2);
    tracep->fullCData(oldp+173,((7U & (vlSelf->top__DOT__pipelined__DOT__instr_MEM 
                                       >> 0xcU))),3);
    tracep->fullIData(oldp+174,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__STORE__DOT__data),32);
    tracep->fullIData(oldp+175,(vlSelf->io_sw_i),32);
    tracep->fullIData(oldp+176,(vlSelf->io_lcd_o),32);
    tracep->fullIData(oldp+177,(vlSelf->io_ledg_o),32);
    tracep->fullIData(oldp+178,(vlSelf->io_ledr_o),32);
    tracep->fullIData(oldp+179,(vlSelf->io_hex0_o),32);
    tracep->fullIData(oldp+180,(vlSelf->io_hex1_o),32);
    tracep->fullIData(oldp+181,(vlSelf->io_hex2_o),32);
    tracep->fullIData(oldp+182,(vlSelf->io_hex3_o),32);
    tracep->fullIData(oldp+183,(vlSelf->io_hex4_o),32);
    tracep->fullIData(oldp+184,(vlSelf->io_hex5_o),32);
    tracep->fullIData(oldp+185,(vlSelf->io_hex6_o),32);
    tracep->fullIData(oldp+186,(vlSelf->io_hex7_o),32);
    tracep->fullBit(oldp+187,(vlSelf->clk_i));
    tracep->fullBit(oldp+188,(vlSelf->rst_ni));
    tracep->fullBit(oldp+189,((0U != (vlSelf->io_sw_i 
                                      >> 0x11U))));
    tracep->fullIData(oldp+190,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register
                                [(0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_ID 
                                           >> 0xfU))]),32);
    tracep->fullIData(oldp+191,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register
                                [(0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_ID 
                                           >> 0x14U))]),32);
    tracep->fullIData(oldp+192,(((0x4000U & vlSelf->top__DOT__pipelined__DOT__instr_MEM)
                                  ? ((0x2000U & vlSelf->top__DOT__pipelined__DOT__instr_MEM)
                                      ? vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__ld_data_out
                                      : ((0x1000U & vlSelf->top__DOT__pipelined__DOT__instr_MEM)
                                          ? (0xffffU 
                                             & vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__ld_data_out)
                                          : (0xffU 
                                             & vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__ld_data_out)))
                                  : ((0x2000U & vlSelf->top__DOT__pipelined__DOT__instr_MEM)
                                      ? vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__ld_data_out
                                      : ((0x1000U & vlSelf->top__DOT__pipelined__DOT__instr_MEM)
                                          ? ((0x8000U 
                                              & vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__ld_data_out)
                                              ? (0xffff0000U 
                                                 | (0xffffU 
                                                    & vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__ld_data_out))
                                              : (0xffffU 
                                                 & vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__ld_data_out))
                                          : ((0x80U 
                                              & vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__ld_data_out)
                                              ? (0xffffff00U 
                                                 | (0xffU 
                                                    & vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__ld_data_out))
                                              : (0xffU 
                                                 & vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__ld_data_out)))))),32);
    tracep->fullIData(oldp+193,(((IData)(vlSelf->top__DOT__pipelined__DOT__hit)
                                  ? vlSelf->top__DOT__pipelined__DOT__npc
                                  : ((IData)(4U) + vlSelf->top__DOT__pipelined__DOT__pc_IF))),32);
    tracep->fullBit(oldp+194,(0U));
    tracep->fullBit(oldp+195,(1U));
    tracep->fullBit(oldp+196,(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_NOT_TAKEN__DOT__update));
    tracep->fullBit(oldp+197,(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_TAKEN__DOT__update));
    tracep->fullBit(oldp+198,(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__TWOBIT_PREDICTOR__DOT__update));
}
