// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst* tracep);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        tracep->chgIData(oldp+0,(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_NOT_TAKEN__DOT__BTB__DOT__i),32);
        tracep->chgIData(oldp+1,(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_TAKEN__DOT__BTB__DOT__i),32);
        tracep->chgIData(oldp+2,(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__BTB__DOT__i),32);
        tracep->chgIData(oldp+3,(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__TWOBIT_PREDICTOR__DOT__BTB__DOT__i),32);
        tracep->chgIData(oldp+4,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__DMEM__DOT__i),32);
        tracep->chgIData(oldp+5,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+6,(vlSelf->top__DOT__pipelined__DOT__ASel_EX));
        tracep->chgBit(oldp+7,(vlSelf->top__DOT__pipelined__DOT__ASel_MEM));
        tracep->chgBit(oldp+8,(vlSelf->top__DOT__pipelined__DOT__ASel_WB));
        tracep->chgBit(oldp+9,(vlSelf->top__DOT__pipelined__DOT__BSel_EX));
        tracep->chgBit(oldp+10,(vlSelf->top__DOT__pipelined__DOT__BSel_MEM));
        tracep->chgBit(oldp+11,(vlSelf->top__DOT__pipelined__DOT__BSel_WB));
        tracep->chgBit(oldp+12,(vlSelf->top__DOT__pipelined__DOT__BrUn_EX));
        tracep->chgBit(oldp+13,(vlSelf->top__DOT__pipelined__DOT__BrUn_MEM));
        tracep->chgBit(oldp+14,(vlSelf->top__DOT__pipelined__DOT__BrUn_WB));
        tracep->chgBit(oldp+15,(vlSelf->top__DOT__pipelined__DOT__PCSel_EX));
        tracep->chgBit(oldp+16,(vlSelf->top__DOT__pipelined__DOT__PCSel_MEM));
        tracep->chgBit(oldp+17,(vlSelf->top__DOT__pipelined__DOT__PCSel_WB));
        tracep->chgBit(oldp+18,(vlSelf->top__DOT__pipelined__DOT__MemRW_EX));
        tracep->chgBit(oldp+19,(vlSelf->top__DOT__pipelined__DOT__MemRW_MEM));
        tracep->chgBit(oldp+20,(vlSelf->top__DOT__pipelined__DOT__MemRW_WB));
        tracep->chgCData(oldp+21,(vlSelf->top__DOT__pipelined__DOT__WBSel_EX),2);
        tracep->chgCData(oldp+22,(vlSelf->top__DOT__pipelined__DOT__WBSel_MEM),2);
        tracep->chgCData(oldp+23,(vlSelf->top__DOT__pipelined__DOT__WBSel_WB),2);
        tracep->chgCData(oldp+24,(vlSelf->top__DOT__pipelined__DOT__ImmSel_EX),3);
        tracep->chgCData(oldp+25,(vlSelf->top__DOT__pipelined__DOT__ImmSel_MEM),3);
        tracep->chgCData(oldp+26,(vlSelf->top__DOT__pipelined__DOT__ImmSel_WB),3);
        tracep->chgCData(oldp+27,(vlSelf->top__DOT__pipelined__DOT__ALUSel_EX),4);
        tracep->chgCData(oldp+28,(vlSelf->top__DOT__pipelined__DOT__ALUSel_MEM),4);
        tracep->chgCData(oldp+29,(vlSelf->top__DOT__pipelined__DOT__ALUSel_WB),4);
        tracep->chgIData(oldp+30,(vlSelf->top__DOT__pipelined__DOT__pc_IF),32);
        tracep->chgIData(oldp+31,(vlSelf->top__DOT__pipelined__DOT__pc_ID),32);
        tracep->chgIData(oldp+32,(vlSelf->top__DOT__pipelined__DOT__pc_EX),32);
        tracep->chgIData(oldp+33,(vlSelf->top__DOT__pipelined__DOT__rs1data_EX),32);
        tracep->chgIData(oldp+34,(vlSelf->top__DOT__pipelined__DOT__rs2data_EX),32);
        tracep->chgIData(oldp+35,(vlSelf->top__DOT__pipelined__DOT__imm_EX),32);
        tracep->chgIData(oldp+36,(vlSelf->top__DOT__pipelined__DOT__pc_MEM),32);
        tracep->chgIData(oldp+37,(vlSelf->top__DOT__pipelined__DOT__rs2data_MEM),32);
        tracep->chgIData(oldp+38,(vlSelf->top__DOT__pipelined__DOT__aludata_MEM),32);
        tracep->chgIData(oldp+39,(((IData)(4U) + vlSelf->top__DOT__pipelined__DOT__pc_MEM)),32);
        tracep->chgIData(oldp+40,(vlSelf->top__DOT__pipelined__DOT__pcfour_WB),32);
        tracep->chgIData(oldp+41,(vlSelf->top__DOT__pipelined__DOT__lddata_WB),32);
        tracep->chgIData(oldp+42,(vlSelf->top__DOT__pipelined__DOT__aludata_WB),32);
        tracep->chgIData(oldp+43,(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_NOT_TAKEN__DOT__tag),20);
        tracep->chgIData(oldp+44,((IData)(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_NOT_TAKEN__DOT__BTB__DOT__buffer
                                          [(0x3ffU 
                                            & (vlSelf->top__DOT__pipelined__DOT__pc_IF 
                                               >> 2U))])),32);
        tracep->chgIData(oldp+45,(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_TAKEN__DOT__tag),20);
        tracep->chgIData(oldp+46,((IData)(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_TAKEN__DOT__BTB__DOT__buffer
                                          [(0x3ffU 
                                            & (vlSelf->top__DOT__pipelined__DOT__pc_IF 
                                               >> 2U))])),32);
        tracep->chgIData(oldp+47,(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__tag),20);
        tracep->chgIData(oldp+48,((IData)(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__BTB__DOT__buffer
                                          [(0x3ffU 
                                            & (vlSelf->top__DOT__pipelined__DOT__pc_IF 
                                               >> 2U))])),32);
        tracep->chgBit(oldp+49,(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__predictedbit));
        tracep->chgIData(oldp+50,(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__TWOBIT_PREDICTOR__DOT__tag),20);
        tracep->chgIData(oldp+51,((IData)(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__TWOBIT_PREDICTOR__DOT__BTB__DOT__buffer
                                          [(0x3ffU 
                                            & (vlSelf->top__DOT__pipelined__DOT__pc_IF 
                                               >> 2U))])),32);
        tracep->chgCData(oldp+52,(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__TWOBIT_PREDICTOR__DOT__predictedbit),2);
        tracep->chgIData(oldp+53,(((IData)(4U) + vlSelf->top__DOT__pipelined__DOT__pc_IF)),32);
        tracep->chgBit(oldp+54,((0U != (vlSelf->top__DOT__pipelined__DOT__aludata_MEM 
                                        >> 0xcU))));
        tracep->chgIData(oldp+55,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__INPUT__DOT__ram),32);
        tracep->chgIData(oldp+56,(((IData)(vlSelf->top__DOT__pipelined__DOT__MemRW_MEM)
                                    ? 0U : vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__DMEM__DOT__ram
                                   [(0x1ffU & (vlSelf->top__DOT__pipelined__DOT__aludata_MEM 
                                               >> 2U))])),32);
        tracep->chgSData(oldp+57,((0x7ffU & vlSelf->top__DOT__pipelined__DOT__aludata_MEM)),11);
        tracep->chgBit(oldp+58,((0U != (3U & vlSelf->top__DOT__pipelined__DOT__aludata_MEM))));
        tracep->chgCData(oldp+59,((0xffU & vlSelf->top__DOT__pipelined__DOT__aludata_MEM)),8);
        tracep->chgIData(oldp+60,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[0]),32);
        tracep->chgIData(oldp+61,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[1]),32);
        tracep->chgIData(oldp+62,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[2]),32);
        tracep->chgIData(oldp+63,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[3]),32);
        tracep->chgIData(oldp+64,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[4]),32);
        tracep->chgIData(oldp+65,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[5]),32);
        tracep->chgIData(oldp+66,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[6]),32);
        tracep->chgIData(oldp+67,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[7]),32);
        tracep->chgIData(oldp+68,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[8]),32);
        tracep->chgIData(oldp+69,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[9]),32);
        tracep->chgIData(oldp+70,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[10]),32);
        tracep->chgIData(oldp+71,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[11]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgIData(oldp+72,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__i),32);
        tracep->chgIData(oldp+73,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[0]),32);
        tracep->chgIData(oldp+74,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[1]),32);
        tracep->chgIData(oldp+75,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[2]),32);
        tracep->chgIData(oldp+76,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[3]),32);
        tracep->chgIData(oldp+77,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[4]),32);
        tracep->chgIData(oldp+78,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[5]),32);
        tracep->chgIData(oldp+79,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[6]),32);
        tracep->chgIData(oldp+80,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[7]),32);
        tracep->chgIData(oldp+81,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[8]),32);
        tracep->chgIData(oldp+82,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[9]),32);
        tracep->chgIData(oldp+83,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[10]),32);
        tracep->chgIData(oldp+84,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[11]),32);
        tracep->chgIData(oldp+85,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[12]),32);
        tracep->chgIData(oldp+86,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[13]),32);
        tracep->chgIData(oldp+87,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[14]),32);
        tracep->chgIData(oldp+88,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[15]),32);
        tracep->chgIData(oldp+89,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[16]),32);
        tracep->chgIData(oldp+90,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[17]),32);
        tracep->chgIData(oldp+91,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[18]),32);
        tracep->chgIData(oldp+92,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[19]),32);
        tracep->chgIData(oldp+93,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[20]),32);
        tracep->chgIData(oldp+94,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[21]),32);
        tracep->chgIData(oldp+95,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[22]),32);
        tracep->chgIData(oldp+96,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[23]),32);
        tracep->chgIData(oldp+97,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[24]),32);
        tracep->chgIData(oldp+98,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[25]),32);
        tracep->chgIData(oldp+99,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[26]),32);
        tracep->chgIData(oldp+100,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[27]),32);
        tracep->chgIData(oldp+101,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[28]),32);
        tracep->chgIData(oldp+102,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[29]),32);
        tracep->chgIData(oldp+103,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[30]),32);
        tracep->chgIData(oldp+104,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgIData(oldp+105,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__ld_data_out),32);
        tracep->chgIData(oldp+106,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__st_data_res),32);
        tracep->chgIData(oldp+107,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__st_data_out),32);
        tracep->chgIData(oldp+108,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__st_data_dmem),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        tracep->chgBit(oldp+109,((1U & ((IData)(vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout) 
                                        >> 9U))));
        tracep->chgBit(oldp+110,((1U & ((IData)(vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout) 
                                        >> 8U))));
        tracep->chgBit(oldp+111,((1U & ((IData)(vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout) 
                                        >> 0xeU))));
        tracep->chgBit(oldp+112,((1U & ((IData)(vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout) 
                                        >> 0xdU))));
        tracep->chgBit(oldp+113,((1U & ((IData)(vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout) 
                                        >> 3U))));
        tracep->chgCData(oldp+114,((3U & (IData)(vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout))),2);
        tracep->chgBit(oldp+115,((1U & ((IData)(vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout) 
                                        >> 2U))));
        tracep->chgBit(oldp+116,(vlSelf->top__DOT__pipelined__DOT__RegWEn_EX));
        tracep->chgBit(oldp+117,(vlSelf->top__DOT__pipelined__DOT__RegWEn_MEM));
        tracep->chgBit(oldp+118,(vlSelf->top__DOT__pipelined__DOT__RegWEn_WB));
        tracep->chgCData(oldp+119,((7U & ((IData)(vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout) 
                                          >> 0xaU))),3);
        tracep->chgCData(oldp+120,((0xfU & ((IData)(vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout) 
                                            >> 4U))),4);
        tracep->chgIData(oldp+121,(vlSelf->top__DOT__pipelined__DOT__instr_IF),32);
        tracep->chgIData(oldp+122,(vlSelf->top__DOT__pipelined__DOT__instr_ID),32);
        tracep->chgIData(oldp+123,(vlSelf->top__DOT__pipelined__DOT__imm_ID),32);
        tracep->chgIData(oldp+124,(vlSelf->top__DOT__pipelined__DOT__instr_EX),32);
        tracep->chgIData(oldp+125,(vlSelf->top__DOT__pipelined__DOT__alu__DOT__ALU_Result),32);
        tracep->chgIData(oldp+126,(vlSelf->top__DOT__pipelined__DOT__instr_MEM),32);
        tracep->chgIData(oldp+127,(vlSelf->top__DOT__pipelined__DOT__instr_WB),32);
        tracep->chgBit(oldp+128,(vlSelf->top__DOT__pipelined__DOT__pc_sel_EX));
        tracep->chgIData(oldp+129,(vlSelf->top__DOT__pipelined__DOT__wb_data),32);
        tracep->chgBit(oldp+130,((1U & vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__result_eq)));
        tracep->chgBit(oldp+131,(vlSelf->top__DOT__pipelined__DOT__BrLT));
        tracep->chgIData(oldp+132,(vlSelf->top__DOT__pipelined__DOT__rs1_data),32);
        tracep->chgIData(oldp+133,(vlSelf->top__DOT__pipelined__DOT__rs2_data),32);
        tracep->chgIData(oldp+134,(vlSelf->top__DOT__pipelined__DOT__operand_a),32);
        tracep->chgIData(oldp+135,(vlSelf->top__DOT__pipelined__DOT__operand_b),32);
        tracep->chgSData(oldp+136,(vlSelf->top__DOT__pipelined__DOT__control_signal),11);
        tracep->chgCData(oldp+137,(vlSelf->top__DOT__pipelined__DOT__fwd_a),2);
        tracep->chgCData(oldp+138,(vlSelf->top__DOT__pipelined__DOT__fwd_b),2);
        tracep->chgBit(oldp+139,((((~ (IData)((0U != 
                                               (0x1fU 
                                                & (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                                                   >> 2U))))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                                                >> 7U)))) 
                                  & (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                                                >> 7U)) 
                                      == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_ID 
                                                   >> 0xfU))) 
                                     | ((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                                                  >> 7U)) 
                                        == (0x1fU & 
                                            (vlSelf->top__DOT__pipelined__DOT__instr_ID 
                                             >> 0x14U)))))));
        tracep->chgBit(oldp+140,(vlSelf->top__DOT__pipelined__DOT__stall_IF));
        tracep->chgBit(oldp+141,(vlSelf->top__DOT__pipelined__DOT__flush_br));
        tracep->chgBit(oldp+142,(vlSelf->top__DOT__pipelined__DOT__flush_ID));
        tracep->chgBit(oldp+143,(vlSelf->top__DOT__pipelined__DOT__hit));
        tracep->chgIData(oldp+144,(vlSelf->top__DOT__pipelined__DOT__npc),32);
        tracep->chgBit(oldp+145,(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__update));
        tracep->chgSData(oldp+146,(vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout),15);
        tracep->chgCData(oldp+147,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+148,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+149,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_MEM 
                                             >> 7U))),5);
        tracep->chgCData(oldp+150,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_WB 
                                             >> 7U))),5);
        tracep->chgCData(oldp+151,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_ID 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+152,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_ID 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+153,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                                             >> 7U))),5);
        tracep->chgCData(oldp+154,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                                             >> 2U))),5);
        tracep->chgBit(oldp+155,((1U & (~ (IData)((0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                                                       >> 2U))))))));
        tracep->chgIData(oldp+156,(vlSelf->top__DOT__pipelined__DOT__alu__DOT__signed_operand_a),32);
        tracep->chgIData(oldp+157,(vlSelf->top__DOT__pipelined__DOT__alu__DOT__un_output_less),32);
        tracep->chgIData(oldp+158,(vlSelf->top__DOT__pipelined__DOT__alu__DOT__output_less),32);
        tracep->chgIData(oldp+159,(vlSelf->top__DOT__pipelined__DOT__alu__DOT__compare0__DOT__index),32);
        tracep->chgIData(oldp+160,(vlSelf->top__DOT__pipelined__DOT__alu__DOT__compare_sign0__DOT__index),32);
        tracep->chgIData(oldp+161,(vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__result_signed),32);
        tracep->chgIData(oldp+162,(vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__result_unsigned),32);
        tracep->chgIData(oldp+163,(vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__result_eq),32);
        tracep->chgBit(oldp+164,((0U != (vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__result_unsigned 
                                         >> 1U))));
        tracep->chgBit(oldp+165,((0U != (vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__result_signed 
                                         >> 1U))));
        tracep->chgBit(oldp+166,((0U != (vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__result_eq 
                                         >> 1U))));
        tracep->chgIData(oldp+167,(vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__compare__DOT__index),32);
        tracep->chgIData(oldp+168,(vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__compare_sign__DOT__index),32);
        tracep->chgIData(oldp+169,((vlSelf->top__DOT__pipelined__DOT__instr_ID 
                                    >> 7U)),25);
        tracep->chgCData(oldp+170,(vlSelf->top__DOT__pipelined__DOT____Vcellinp__pc_sel_block__opcode),8);
        tracep->chgCData(oldp+171,(vlSelf->top__DOT__pipelined__DOT__pc_sel_block__DOT__combine),2);
        tracep->chgCData(oldp+172,((7U & (vlSelf->top__DOT__pipelined__DOT__instr_MEM 
                                          >> 0xcU))),3);
        tracep->chgIData(oldp+173,(vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__STORE__DOT__data),32);
    }
    tracep->chgIData(oldp+174,(vlSelf->io_sw_i),32);
    tracep->chgIData(oldp+175,(vlSelf->io_lcd_o),32);
    tracep->chgIData(oldp+176,(vlSelf->io_ledg_o),32);
    tracep->chgIData(oldp+177,(vlSelf->io_ledr_o),32);
    tracep->chgIData(oldp+178,(vlSelf->io_hex0_o),32);
    tracep->chgIData(oldp+179,(vlSelf->io_hex1_o),32);
    tracep->chgIData(oldp+180,(vlSelf->io_hex2_o),32);
    tracep->chgIData(oldp+181,(vlSelf->io_hex3_o),32);
    tracep->chgIData(oldp+182,(vlSelf->io_hex4_o),32);
    tracep->chgIData(oldp+183,(vlSelf->io_hex5_o),32);
    tracep->chgIData(oldp+184,(vlSelf->io_hex6_o),32);
    tracep->chgIData(oldp+185,(vlSelf->io_hex7_o),32);
    tracep->chgBit(oldp+186,(vlSelf->clk_i));
    tracep->chgBit(oldp+187,(vlSelf->rst_ni));
    tracep->chgBit(oldp+188,((0U != (vlSelf->io_sw_i 
                                     >> 0x11U))));
    tracep->chgIData(oldp+189,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register
                               [(0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_ID 
                                          >> 0xfU))]),32);
    tracep->chgIData(oldp+190,(vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register
                               [(0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_ID 
                                          >> 0x14U))]),32);
    tracep->chgIData(oldp+191,(((0x4000U & vlSelf->top__DOT__pipelined__DOT__instr_MEM)
                                 ? ((0x2000U & vlSelf->top__DOT__pipelined__DOT__instr_MEM)
                                     ? vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__ld_data_out
                                     : ((0x1000U & vlSelf->top__DOT__pipelined__DOT__instr_MEM)
                                         ? (0xffffU 
                                            & vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__ld_data_out)
                                         : (0xffU & vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__ld_data_out)))
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
    tracep->chgIData(oldp+192,(((IData)(vlSelf->top__DOT__pipelined__DOT__hit)
                                 ? vlSelf->top__DOT__pipelined__DOT__npc
                                 : ((IData)(4U) + vlSelf->top__DOT__pipelined__DOT__pc_IF))),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
