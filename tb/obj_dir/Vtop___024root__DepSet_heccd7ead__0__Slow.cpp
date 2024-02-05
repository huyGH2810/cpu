// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___settle__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__1\n"); );
    // Body
    if ((0U == (IData)(vlSelf->top__DOT__pipelined__DOT__WBSel_WB))) {
        vlSelf->top__DOT__pipelined__DOT__wb_data = vlSelf->top__DOT__pipelined__DOT__aludata_WB;
    }
    if ((1U == (IData)(vlSelf->top__DOT__pipelined__DOT__WBSel_WB))) {
        vlSelf->top__DOT__pipelined__DOT__wb_data = vlSelf->top__DOT__pipelined__DOT__lddata_WB;
    }
    if ((2U == (IData)(vlSelf->top__DOT__pipelined__DOT__WBSel_WB))) {
        vlSelf->top__DOT__pipelined__DOT__wb_data = vlSelf->top__DOT__pipelined__DOT__pcfour_WB;
    }
    vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__STORE__DOT__data 
        = ((0U == (7U & (vlSelf->top__DOT__pipelined__DOT__instr_MEM 
                         >> 0xcU))) ? (0xffU & vlSelf->top__DOT__pipelined__DOT__rs2data_MEM)
            : ((1U == (7U & (vlSelf->top__DOT__pipelined__DOT__instr_MEM 
                             >> 0xcU))) ? (0xffffU 
                                           & vlSelf->top__DOT__pipelined__DOT__rs2data_MEM)
                : vlSelf->top__DOT__pipelined__DOT__rs2data_MEM));
    vlSelf->top__DOT__pipelined__DOT____Vcellinp__pc_sel_block__opcode 
        = ((0xe0U & (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                     >> 7U)) | (0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                                         >> 2U)));
    vlSelf->top__DOT__pipelined__DOT__fwd_a = 0U;
    if ((0U != (0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                         >> 0xfU)))) {
        if ((((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_MEM 
                        >> 7U)) == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                                             >> 0xfU))) 
             & (IData)(vlSelf->top__DOT__pipelined__DOT__RegWEn_MEM))) {
            vlSelf->top__DOT__pipelined__DOT__fwd_a = 2U;
        } else if ((((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_WB 
                               >> 7U)) == (0x1fU & 
                                           (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                                            >> 0xfU))) 
                    & (IData)(vlSelf->top__DOT__pipelined__DOT__RegWEn_WB))) {
            vlSelf->top__DOT__pipelined__DOT__fwd_a = 1U;
        }
    }
    vlSelf->top__DOT__pipelined__DOT__fwd_b = 0U;
    if ((0U != (0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                         >> 0x14U)))) {
        if ((((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_MEM 
                        >> 7U)) == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                                             >> 0x14U))) 
             & (IData)(vlSelf->top__DOT__pipelined__DOT__RegWEn_MEM))) {
            vlSelf->top__DOT__pipelined__DOT__fwd_b = 2U;
        } else if ((((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_WB 
                               >> 7U)) == (0x1fU & 
                                           (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                                            >> 0x14U))) 
                    & (IData)(vlSelf->top__DOT__pipelined__DOT__RegWEn_WB))) {
            vlSelf->top__DOT__pipelined__DOT__fwd_b = 1U;
        }
    }
    vlSelf->top__DOT__pipelined__DOT__stall_IF = ((
                                                   (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x1fU 
                                                                & (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                                                                   >> 2U))))) 
                                                   & (0U 
                                                      != 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                                                          >> 7U)))) 
                                                  & (((0x1fU 
                                                       & (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                                                          >> 7U)) 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__pipelined__DOT__instr_ID 
                                                          >> 0xfU))) 
                                                     | ((0x1fU 
                                                         & (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                                                            >> 7U)) 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__pipelined__DOT__instr_ID 
                                                            >> 0x14U)))));
    if (vlSelf->rst_ni) {
        if (vlSelf->top__DOT__pipelined__DOT__MemRW_MEM) {
            if ((1U != (3U & (vlSelf->top__DOT__pipelined__DOT__aludata_MEM 
                              >> 0xaU)))) {
                if ((0U == (3U & (vlSelf->top__DOT__pipelined__DOT__aludata_MEM 
                                  >> 0xaU)))) {
                    vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__st_data_dmem 
                        = vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__STORE__DOT__data;
                }
            }
            if ((1U == (3U & (vlSelf->top__DOT__pipelined__DOT__aludata_MEM 
                              >> 0xaU)))) {
                if ((0U == (3U & (vlSelf->top__DOT__pipelined__DOT__aludata_MEM 
                                  >> 8U)))) {
                    vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__st_data_out 
                        = vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__STORE__DOT__data;
                }
                if ((0U != (3U & (vlSelf->top__DOT__pipelined__DOT__aludata_MEM 
                                  >> 8U)))) {
                    vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__st_data_res 
                        = vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__STORE__DOT__data;
                }
            } else if ((0U != (3U & (vlSelf->top__DOT__pipelined__DOT__aludata_MEM 
                                     >> 0xaU)))) {
                vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__st_data_res 
                    = vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__STORE__DOT__data;
            }
        }
    }
    vlSelf->top__DOT__pipelined__DOT__rs1_data = ((0U 
                                                   == (IData)(vlSelf->top__DOT__pipelined__DOT__fwd_a))
                                                   ? vlSelf->top__DOT__pipelined__DOT__rs1data_EX
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->top__DOT__pipelined__DOT__fwd_a))
                                                    ? vlSelf->top__DOT__pipelined__DOT__wb_data
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->top__DOT__pipelined__DOT__fwd_a))
                                                     ? vlSelf->top__DOT__pipelined__DOT__aludata_MEM
                                                     : vlSelf->top__DOT__pipelined__DOT__rs1data_EX)));
    vlSelf->top__DOT__pipelined__DOT__rs2_data = ((0U 
                                                   == (IData)(vlSelf->top__DOT__pipelined__DOT__fwd_b))
                                                   ? vlSelf->top__DOT__pipelined__DOT__rs2data_EX
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->top__DOT__pipelined__DOT__fwd_b))
                                                    ? vlSelf->top__DOT__pipelined__DOT__wb_data
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->top__DOT__pipelined__DOT__fwd_b))
                                                     ? vlSelf->top__DOT__pipelined__DOT__aludata_MEM
                                                     : vlSelf->top__DOT__pipelined__DOT__rs2data_EX)));
    vlSelf->top__DOT__pipelined__DOT__operand_a = ((IData)(vlSelf->top__DOT__pipelined__DOT__ASel_EX)
                                                    ? vlSelf->top__DOT__pipelined__DOT__pc_EX
                                                    : vlSelf->top__DOT__pipelined__DOT__rs1_data);
    vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__result_eq 
        = ((vlSelf->top__DOT__pipelined__DOT__rs1_data 
            == vlSelf->top__DOT__pipelined__DOT__rs2_data)
            ? 1U : 0U);
    vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__result_unsigned = 0U;
    vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__compare__DOT__index = 0x1fU;
    {
        {
            while (VL_LTES_III(32, 0U, vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__compare__DOT__index)) {
                if ((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data 
                            >> (0x1fU & vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__compare__DOT__index)) 
                           & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data 
                                 >> (0x1fU & vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__compare__DOT__index)))))) {
                    vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__result_unsigned = 0U;
                    goto __Vlabel1;
                }
                if ((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data 
                               >> (0x1fU & vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__compare__DOT__index))) 
                           & (vlSelf->top__DOT__pipelined__DOT__rs2_data 
                              >> (0x1fU & vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__compare__DOT__index))))) {
                    vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__result_unsigned = 1U;
                    goto __Vlabel2;
                }
                vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__compare__DOT__index 
                    = (vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__compare__DOT__index 
                       - (IData)(1U));
            }
            __Vlabel2: ;
        }
        __Vlabel1: ;
    }
    vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__result_signed = 0U;
    vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__compare_sign__DOT__index = 0x1fU;
    {
        {
            {
                {
                    {
                        {
                            while (VL_LTES_III(32, 0U, vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__compare_sign__DOT__index)) {
                                if ((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data 
                                               >> 0x1fU)) 
                                           & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data 
                                                 >> 0x1fU))))) {
                                    if ((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__compare_sign__DOT__index)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__pipelined__DOT__rs2_data 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__compare_sign__DOT__index)))))) {
                                        vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__result_signed = 0U;
                                        goto __Vlabel3;
                                    }
                                    if ((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__compare_sign__DOT__index))) 
                                               & (vlSelf->top__DOT__pipelined__DOT__rs2_data 
                                                  >> 
                                                  (0x1fU 
                                                   & vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__compare_sign__DOT__index))))) {
                                        vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__result_signed = 1U;
                                        goto __Vlabel4;
                                    }
                                }
                                if (((vlSelf->top__DOT__pipelined__DOT__rs1_data 
                                      & vlSelf->top__DOT__pipelined__DOT__rs2_data) 
                                     >> 0x1fU)) {
                                    if ((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__compare_sign__DOT__index)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__pipelined__DOT__rs2_data 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__compare_sign__DOT__index)))))) {
                                        vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__result_signed = 1U;
                                        goto __Vlabel5;
                                    }
                                    if ((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__compare_sign__DOT__index))) 
                                               & (vlSelf->top__DOT__pipelined__DOT__rs2_data 
                                                  >> 
                                                  (0x1fU 
                                                   & vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__compare_sign__DOT__index))))) {
                                        vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__result_signed = 0U;
                                        goto __Vlabel6;
                                    }
                                }
                                if (((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data 
                                         >> 0x1fU)) 
                                     & (vlSelf->top__DOT__pipelined__DOT__rs2_data 
                                        >> 0x1fU))) {
                                    vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__result_signed = 0U;
                                    goto __Vlabel7;
                                }
                                if (((vlSelf->top__DOT__pipelined__DOT__rs1_data 
                                      >> 0x1fU) & (~ 
                                                   (vlSelf->top__DOT__pipelined__DOT__rs2_data 
                                                    >> 0x1fU)))) {
                                    vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__result_signed = 1U;
                                    goto __Vlabel8;
                                }
                                vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__compare_sign__DOT__index 
                                    = (vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__compare_sign__DOT__index 
                                       - (IData)(1U));
                            }
                            __Vlabel8: ;
                        }
                        __Vlabel7: ;
                    }
                    __Vlabel6: ;
                }
                __Vlabel5: ;
            }
            __Vlabel4: ;
        }
        __Vlabel3: ;
    }
    vlSelf->top__DOT__pipelined__DOT__operand_b = ((IData)(vlSelf->top__DOT__pipelined__DOT__BSel_EX)
                                                    ? vlSelf->top__DOT__pipelined__DOT__imm_EX
                                                    : vlSelf->top__DOT__pipelined__DOT__rs2_data);
    vlSelf->top__DOT__pipelined__DOT__BrLT = (1U & 
                                              ((IData)(vlSelf->top__DOT__pipelined__DOT__BrUn_EX)
                                                ? vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__result_unsigned
                                                : vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__result_signed));
    vlSelf->top__DOT__pipelined__DOT__alu__DOT__un_output_less = 0U;
    vlSelf->top__DOT__pipelined__DOT__alu__DOT__compare0__DOT__index = 0x1fU;
    {
        {
            while (VL_LTES_III(32, 0U, vlSelf->top__DOT__pipelined__DOT__alu__DOT__compare0__DOT__index)) {
                if ((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                            >> (0x1fU & vlSelf->top__DOT__pipelined__DOT__alu__DOT__compare0__DOT__index)) 
                           & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                 >> (0x1fU & vlSelf->top__DOT__pipelined__DOT__alu__DOT__compare0__DOT__index)))))) {
                    vlSelf->top__DOT__pipelined__DOT__alu__DOT__un_output_less = 0U;
                    goto __Vlabel9;
                }
                if ((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                               >> (0x1fU & vlSelf->top__DOT__pipelined__DOT__alu__DOT__compare0__DOT__index))) 
                           & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                              >> (0x1fU & vlSelf->top__DOT__pipelined__DOT__alu__DOT__compare0__DOT__index))))) {
                    vlSelf->top__DOT__pipelined__DOT__alu__DOT__un_output_less = 1U;
                    goto __Vlabel10;
                }
                vlSelf->top__DOT__pipelined__DOT__alu__DOT__compare0__DOT__index 
                    = (vlSelf->top__DOT__pipelined__DOT__alu__DOT__compare0__DOT__index 
                       - (IData)(1U));
            }
            __Vlabel10: ;
        }
        __Vlabel9: ;
    }
    vlSelf->top__DOT__pipelined__DOT__alu__DOT__output_less = 0U;
    vlSelf->top__DOT__pipelined__DOT__alu__DOT__compare_sign0__DOT__index = 0x1fU;
    {
        {
            {
                {
                    {
                        {
                            while (VL_LTES_III(32, 0U, vlSelf->top__DOT__pipelined__DOT__alu__DOT__compare_sign0__DOT__index)) {
                                if ((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                               >> 0x1fU)) 
                                           & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                 >> 0x1fU))))) {
                                    if ((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__pipelined__DOT__alu__DOT__compare_sign0__DOT__index)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__pipelined__DOT__alu__DOT__compare_sign0__DOT__index)))))) {
                                        vlSelf->top__DOT__pipelined__DOT__alu__DOT__output_less = 0U;
                                        goto __Vlabel11;
                                    }
                                    if ((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__pipelined__DOT__alu__DOT__compare_sign0__DOT__index))) 
                                               & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 
                                                  (0x1fU 
                                                   & vlSelf->top__DOT__pipelined__DOT__alu__DOT__compare_sign0__DOT__index))))) {
                                        vlSelf->top__DOT__pipelined__DOT__alu__DOT__output_less = 1U;
                                        goto __Vlabel12;
                                    }
                                }
                                if (((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      & vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                     >> 0x1fU)) {
                                    if ((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__pipelined__DOT__alu__DOT__compare_sign0__DOT__index)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__pipelined__DOT__alu__DOT__compare_sign0__DOT__index)))))) {
                                        vlSelf->top__DOT__pipelined__DOT__alu__DOT__output_less = 1U;
                                        goto __Vlabel13;
                                    }
                                    if ((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__pipelined__DOT__alu__DOT__compare_sign0__DOT__index))) 
                                               & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 
                                                  (0x1fU 
                                                   & vlSelf->top__DOT__pipelined__DOT__alu__DOT__compare_sign0__DOT__index))))) {
                                        vlSelf->top__DOT__pipelined__DOT__alu__DOT__output_less = 0U;
                                        goto __Vlabel14;
                                    }
                                }
                                if (((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                         >> 0x1fU)) 
                                     & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                        >> 0x1fU))) {
                                    vlSelf->top__DOT__pipelined__DOT__alu__DOT__output_less = 0U;
                                    goto __Vlabel15;
                                }
                                if (((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0x1fU) & (~ 
                                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                    >> 0x1fU)))) {
                                    vlSelf->top__DOT__pipelined__DOT__alu__DOT__output_less = 1U;
                                    goto __Vlabel16;
                                }
                                vlSelf->top__DOT__pipelined__DOT__alu__DOT__compare_sign0__DOT__index 
                                    = (vlSelf->top__DOT__pipelined__DOT__alu__DOT__compare_sign0__DOT__index 
                                       - (IData)(1U));
                            }
                            __Vlabel16: ;
                        }
                        __Vlabel15: ;
                    }
                    __Vlabel14: ;
                }
                __Vlabel13: ;
            }
            __Vlabel12: ;
        }
        __Vlabel11: ;
    }
    vlSelf->top__DOT__pipelined__DOT__control_signal 
        = ((0x400U & (vlSelf->top__DOT__pipelined__DOT__instr_ID 
                      >> 0x14U)) | ((0x380U & (vlSelf->top__DOT__pipelined__DOT__instr_ID 
                                               >> 5U)) 
                                    | ((0x7cU & vlSelf->top__DOT__pipelined__DOT__instr_ID) 
                                       | ((2U & (vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__result_eq 
                                                 << 1U)) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__BrLT)))));
    vlSelf->top__DOT__pipelined__DOT__pc_sel_block__DOT__combine 
        = ((2U & (vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__result_eq 
                  << 1U)) | (IData)(vlSelf->top__DOT__pipelined__DOT__BrLT));
    vlSelf->top__DOT__pipelined__DOT__alu__DOT__signed_operand_a 
        = vlSelf->top__DOT__pipelined__DOT__operand_a;
    vlSelf->top__DOT__pipelined__DOT__alu__DOT__ALU_Result 
        = ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__ALUSel_EX))
            ? ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__ALUSel_EX))
                ? 0U : ((2U & (IData)(vlSelf->top__DOT__pipelined__DOT__ALUSel_EX))
                         ? 0U : ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__ALUSel_EX))
                                  ? VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__pipelined__DOT__alu__DOT__signed_operand_a, 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__pipelined__DOT__operand_b))
                                  : (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                     >> (0x1fU & vlSelf->top__DOT__pipelined__DOT__operand_b)))))
            : ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__ALUSel_EX))
                ? ((2U & (IData)(vlSelf->top__DOT__pipelined__DOT__ALUSel_EX))
                    ? ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__ALUSel_EX))
                        ? (vlSelf->top__DOT__pipelined__DOT__operand_a 
                           << (0x1fU & vlSelf->top__DOT__pipelined__DOT__operand_b))
                        : vlSelf->top__DOT__pipelined__DOT__alu__DOT__un_output_less)
                    : ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__ALUSel_EX))
                        ? vlSelf->top__DOT__pipelined__DOT__alu__DOT__output_less
                        : (vlSelf->top__DOT__pipelined__DOT__operand_a 
                           & vlSelf->top__DOT__pipelined__DOT__operand_b)))
                : ((2U & (IData)(vlSelf->top__DOT__pipelined__DOT__ALUSel_EX))
                    ? ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__ALUSel_EX))
                        ? (vlSelf->top__DOT__pipelined__DOT__operand_a 
                           | vlSelf->top__DOT__pipelined__DOT__operand_b)
                        : (vlSelf->top__DOT__pipelined__DOT__operand_a 
                           ^ vlSelf->top__DOT__pipelined__DOT__operand_b))
                    : ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__ALUSel_EX))
                        ? ((IData)(1U) + (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)))
                        : (vlSelf->top__DOT__pipelined__DOT__operand_a 
                           + vlSelf->top__DOT__pipelined__DOT__operand_b)))));
}

VL_ATTR_COLD void Vtop___024root___initial__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__2\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hb11e3a36__0;
    // Body
    vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_NOT_TAKEN__DOT__BTB__DOT__i = 0U;
    while (VL_GTES_III(32, 0x3ffU, vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_NOT_TAKEN__DOT__BTB__DOT__i)) {
        vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_NOT_TAKEN__DOT__BTB__DOT__buffer[(0x3ffU 
                                                                                & vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_NOT_TAKEN__DOT__BTB__DOT__i)] = 0ULL;
        vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_NOT_TAKEN__DOT__BTB__DOT__i 
            = ((IData)(1U) + vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_NOT_TAKEN__DOT__BTB__DOT__i);
    }
    vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_TAKEN__DOT__BTB__DOT__i = 0U;
    while (VL_GTES_III(32, 0x3ffU, vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_TAKEN__DOT__BTB__DOT__i)) {
        vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_TAKEN__DOT__BTB__DOT__buffer[(0x3ffU 
                                                                                & vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_TAKEN__DOT__BTB__DOT__i)] = 0ULL;
        vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_TAKEN__DOT__BTB__DOT__i 
            = ((IData)(1U) + vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_TAKEN__DOT__BTB__DOT__i);
    }
    vlSelf->top__DOT__pipelined__DOT__BPU__DOT__TWOBIT_PREDICTOR__DOT__BTB__DOT__i = 0U;
    while (VL_GTES_III(32, 0x3ffU, vlSelf->top__DOT__pipelined__DOT__BPU__DOT__TWOBIT_PREDICTOR__DOT__BTB__DOT__i)) {
        vlSelf->top__DOT__pipelined__DOT__BPU__DOT__TWOBIT_PREDICTOR__DOT__BTB__DOT__buffer[(0x3ffU 
                                                                                & vlSelf->top__DOT__pipelined__DOT__BPU__DOT__TWOBIT_PREDICTOR__DOT__BTB__DOT__i)] = 0ULL;
        vlSelf->top__DOT__pipelined__DOT__BPU__DOT__TWOBIT_PREDICTOR__DOT__BTB__DOT__i 
            = ((IData)(1U) + vlSelf->top__DOT__pipelined__DOT__BPU__DOT__TWOBIT_PREDICTOR__DOT__BTB__DOT__i);
    }
    vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__INPUT__DOT__ram = 0U;
    vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__DMEM__DOT__i = 0U;
    while (VL_GTS_III(32, 0x1ffU, vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__DMEM__DOT__i)) {
        vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__DMEM__DOT__ram[(0x1ffU 
                                                                                & vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__DMEM__DOT__i)] = 0U;
        vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__DMEM__DOT__i 
            = ((IData)(1U) + vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__DMEM__DOT__i);
    }
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h96fd1319__2 
        = (0x508U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h96fd1319__1 
        = (0x508U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h96fd1319__0 
        = (0x508U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h970a8d2f__1 
        = (0x4b00U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h970a8d2f__0 
        = (0x4b00U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h96e2b52f__0 
        = (0x6b00U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h96fa9d2f__3 
        = (0xb00U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h96fa9d2f__2 
        = (0xb00U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h9712852f__1 
        = (0x2b00U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h96fa9d2f__1 
        = (0xb00U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h96fa9d2f__0 
        = (0xb00U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h9712852f__0 
        = (0x2b00U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h9716d348__0 
        = (0x84U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h97171f6c__0 
        = (0x94U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h9716d754__0 
        = (0x74U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h971723b8__0 
        = (0x44U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h971727a4__0 
        = (0x34U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h9716c080__0 
        = (0x24U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h97172b90__0 
        = (0x64U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h97172f7c__0 
        = (0x54U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h9716f8a8__0 
        = (4U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h9716bc8c__0 
        = (0x14U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__pipelined__DOT__IMEM__DOT____Vxrand_h96fcef06__0 
        = VL_RAND_RESET_I(32);
    __Vtemp_hb11e3a36__0[0U] = 0x2e747874U;
    __Vtemp_hb11e3a36__0[1U] = 0x66696c65U;
    __Vtemp_hb11e3a36__0[2U] = 0x726567U;
    VL_READMEM_N(true, 32, 2044, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_hb11e3a36__0)
                 ,  &(vlSelf->top__DOT__pipelined__DOT__IMEM__DOT__Rdata)
                 , 0, ~0ULL);
    vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__BTB__DOT__i = 0U;
    while (VL_GTES_III(32, 0x3ffU, vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__BTB__DOT__i)) {
        vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__BTB__DOT__buffer[(0x3ffU 
                                                                                & vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__BTB__DOT__i)] = 0ULL;
        vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__BTB__DOT__i 
            = ((IData)(1U) + vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__BTB__DOT__i);
    }
    vlSelf->top__DOT__pipelined__DOT__pc_sel_block__DOT____Vxrand_h96fdb8c3__0 
        = (0x1bU | (0xe0U & VL_RAND_RESET_I(8)));
    vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[0U] = 0U;
    vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[1U] = 0U;
    vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[2U] = 0U;
    vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[3U] = 0U;
    vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[4U] = 0U;
    vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[5U] = 0U;
    vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[6U] = 0U;
    vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[7U] = 0U;
    vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[8U] = 0U;
    vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[9U] = 0U;
    vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[0xaU] = 0U;
    vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[0xbU] = 0U;
    vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__i = 0xcU;
    vlSelf->top__DOT__pipelined__DOT__BPU__DOT__TWOBIT_PREDICTOR__DOT__predictedbit = 3U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[0x1fU] = 0U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[0U] = 0U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[1U] = 0U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[2U] = 0U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[3U] = 0U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[4U] = 0U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[5U] = 0U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[6U] = 0U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[7U] = 0U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[8U] = 0U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[9U] = 0U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[0xaU] = 0U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[0xbU] = 0U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[0xcU] = 0U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[0xdU] = 0U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[0xeU] = 0U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[0xfU] = 0U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[0x10U] = 0U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[0x11U] = 0U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[0x12U] = 0U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[0x13U] = 0U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[0x14U] = 0U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[0x15U] = 0U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[0x16U] = 0U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[0x17U] = 0U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[0x18U] = 0U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[0x19U] = 0U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[0x1aU] = 0U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[0x1bU] = 0U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[0x1cU] = 0U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[0x1dU] = 0U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[0x1eU] = 0U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[0x1fU] = 0U;
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__i = 0x20U;
    vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__predictedbit = 1U;
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__5\n"); );
    // Body
    vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_NOT_TAKEN__DOT__tag 
        = (0xfffffU & (IData)((vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_NOT_TAKEN__DOT__BTB__DOT__buffer
                               [(0x3ffU & (vlSelf->top__DOT__pipelined__DOT__pc_IF 
                                           >> 2U))] 
                               >> 0x20U)));
    vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_TAKEN__DOT__tag 
        = (0xfffffU & (IData)((vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_TAKEN__DOT__BTB__DOT__buffer
                               [(0x3ffU & (vlSelf->top__DOT__pipelined__DOT__pc_IF 
                                           >> 2U))] 
                               >> 0x20U)));
    vlSelf->top__DOT__pipelined__DOT__BPU__DOT__TWOBIT_PREDICTOR__DOT__tag 
        = (0xfffffU & (IData)((vlSelf->top__DOT__pipelined__DOT__BPU__DOT__TWOBIT_PREDICTOR__DOT__BTB__DOT__buffer
                               [(0x3ffU & (vlSelf->top__DOT__pipelined__DOT__pc_IF 
                                           >> 2U))] 
                               >> 0x20U)));
    if ((0x200U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
        if ((0x100U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
            if ((0x80U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                if ((0x40U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                    vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout 
                        = ((0x20U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                            ? ((0x10U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                ? 0U : ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                         ? ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                             ? 0x3306U
                                             : 0U) : 0U))
                            : 0U);
                } else if ((0x20U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                    if ((0x10U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                        if ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                            vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout = 0U;
                        } else if ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                            vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout = 0U;
                        } else if ((1U & (~ ((IData)(vlSelf->top__DOT__pipelined__DOT__control_signal) 
                                             >> 0xaU)))) {
                            vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout 
                                = vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h971723b8__0;
                        }
                    } else {
                        vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout = 0U;
                    }
                } else {
                    vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout 
                        = ((0x10U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                            ? ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                ? 0U : ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                         ? 0xf04U : 0x144U))
                            : 0U);
                }
            } else if ((0x40U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                if ((0x20U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                    if ((0x10U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                        vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout = 0U;
                    } else if ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                        vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout 
                            = ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                ? 0x3306U : 0U);
                    } else if ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                        vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout = 0U;
                    } else {
                        if ((1U == (3U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal)))) {
                            vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout 
                                = vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h96e2b52f__0;
                        }
                        if ((0U == (3U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal)))) {
                            vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout 
                                = vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h970a8d2f__0;
                        }
                        if ((2U == (3U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal)))) {
                            vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout 
                                = vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h970a8d2f__1;
                        }
                    }
                } else {
                    vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout = 0U;
                }
            } else if ((0x20U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                if ((0x10U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                    if ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                        vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout = 0U;
                    } else if ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                        vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout = 0U;
                    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__pipelined__DOT__control_signal) 
                                         >> 0xaU)))) {
                        vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout 
                            = vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h971727a4__0;
                    }
                } else {
                    vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout = 0U;
                }
            } else {
                vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout 
                    = ((0x10U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                        ? ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                            ? 0U : ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                     ? 0xf04U : 0x134U))
                        : 0U);
            }
        } else if ((0x80U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
            vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout 
                = ((0x40U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                    ? ((0x20U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                        ? ((0x10U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                            ? 0U : ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                     ? ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                         ? 0x3306U : 0U)
                                     : 0U)) : 0U) : 
                   ((0x20U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                     ? ((0x10U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                         ? ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                             ? 0U : ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                      ? 0U : ((0x400U 
                                               & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                               ? (IData)(vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h97171f6c__0)
                                               : (IData)(vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h9716d348__0))))
                         : 0U) : ((0x10U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                   ? ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                       ? 0U : ((4U 
                                                & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                                ? 0xf04U
                                                : (
                                                   (0x400U 
                                                    & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                                    ? 0x194U
                                                    : 0x184U)))
                                   : ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                       ? 0U : ((4U 
                                                & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                                ? 0U
                                                : 0x105U)))));
        } else if ((0x40U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
            if ((0x20U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                if ((0x10U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                    vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout = 0U;
                } else if ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                    vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout 
                        = ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                            ? 0x3306U : 0U);
                } else if ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                    vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout = 0U;
                } else {
                    if ((1U == (3U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal)))) {
                        vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout 
                            = vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h9712852f__1;
                    }
                    if ((0U == (3U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal)))) {
                        vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout 
                            = vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h96fa9d2f__2;
                    }
                    if ((2U == (3U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal)))) {
                        vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout 
                            = vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h96fa9d2f__3;
                    }
                }
            } else {
                vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout = 0U;
            }
        } else if ((0x20U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
            if ((0x10U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                if ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                    vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout = 0U;
                } else if ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                    vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout = 0U;
                } else if ((1U & (~ ((IData)(vlSelf->top__DOT__pipelined__DOT__control_signal) 
                                     >> 0xaU)))) {
                    vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout 
                        = vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h9716c080__0;
                }
            } else {
                vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout = 0U;
            }
        } else {
            vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout 
                = ((0x10U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                    ? ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                 ? 0xf04U : 0x124U))
                    : ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                 ? 0U : 0x105U)));
        }
    } else if ((0x100U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
        if ((0x80U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
            if ((0x40U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout 
                    = ((0x20U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                        ? ((0x10U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                            ? 0U : ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                     ? ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                         ? 0x3306U : 0U)
                                     : 0U)) : 0U);
            } else if ((0x20U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                if ((0x10U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                    if ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                        vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout = 0U;
                    } else if ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                        vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout = 0U;
                    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__pipelined__DOT__control_signal) 
                                         >> 0xaU)))) {
                        vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout 
                            = vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h97172b90__0;
                    }
                } else {
                    vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout = 0U;
                }
            } else {
                vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout 
                    = ((0x10U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                        ? ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                            ? 0U : ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                     ? 0xf04U : 0x164U))
                        : 0U);
            }
        } else if ((0x40U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
            vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout 
                = ((0x20U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                    ? ((0x10U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                        ? 0U : ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                 ? ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                     ? 0x3306U : 0U)
                                 : 0U)) : 0U);
        } else if ((0x20U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
            if ((0x10U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                if ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                    vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout = 0U;
                } else if ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                    vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout = 0U;
                } else if ((1U & (~ ((IData)(vlSelf->top__DOT__pipelined__DOT__control_signal) 
                                     >> 0xaU)))) {
                    vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout 
                        = vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h97172f7c__0;
                }
            } else {
                vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout 
                    = ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                 ? 0U : (IData)(vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h96fd1319__0)));
            }
        } else {
            vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout 
                = ((0x10U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                    ? ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                 ? 0xf04U : 0x154U))
                    : ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                 ? 0U : 0x105U)));
        }
    } else if ((0x80U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
        if ((0x40U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
            vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout 
                = ((0x20U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                    ? ((0x10U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                        ? 0U : ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                 ? ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                     ? 0x3306U : 0U)
                                 : 0U)) : 0U);
        } else if ((0x20U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
            if ((0x10U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                if ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                    vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout = 0U;
                } else if ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                    vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout = 0U;
                } else if ((1U & (~ ((IData)(vlSelf->top__DOT__pipelined__DOT__control_signal) 
                                     >> 0xaU)))) {
                    vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout 
                        = vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h9716d754__0;
                }
            } else {
                vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout 
                    = ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                 ? 0U : (IData)(vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h96fd1319__2)));
            }
        } else if ((0x10U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
            if ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout = 0U;
            } else if ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout = 0xf04U;
            } else if ((1U & (~ ((IData)(vlSelf->top__DOT__pipelined__DOT__control_signal) 
                                 >> 0xaU)))) {
                vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout = 0x174U;
            }
        } else {
            vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout 
                = ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                    ? 0U : ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                             ? 0U : 0x105U));
        }
    } else if ((0x40U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
        if ((0x20U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
            if ((0x10U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout = 0U;
            } else if ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout 
                    = ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                        ? 0x3306U : 0U);
            } else if ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))) {
                vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout = 0x2106U;
            } else {
                if ((2U == (3U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal)))) {
                    vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout 
                        = vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h9712852f__0;
                }
                if ((0U == (3U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal)))) {
                    vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout 
                        = vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h96fa9d2f__0;
                }
                if ((1U == (3U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal)))) {
                    vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout 
                        = vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h96fa9d2f__1;
                }
            }
        } else {
            vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout = 0U;
        }
    } else {
        vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout 
            = ((0x20U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                ? ((0x10U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                    ? ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                 ? 0U : ((0x400U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                          ? (IData)(vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h9716bc8c__0)
                                          : (IData)(vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h9716f8a8__0))))
                    : ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                 ? 0U : (IData)(vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h96fd1319__1))))
                : ((0x10U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                    ? ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                 ? 0xf04U : 0x104U))
                    : ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__control_signal))
                                 ? 0U : 0x105U))));
    }
    vlSelf->top__DOT__pipelined__DOT__instr_IF = ((0x7fbU 
                                                   >= 
                                                   (0x7ffU 
                                                    & (vlSelf->top__DOT__pipelined__DOT__pc_IF 
                                                       >> 2U)))
                                                   ? 
                                                  vlSelf->top__DOT__pipelined__DOT__IMEM__DOT__Rdata
                                                  [
                                                  (0x7ffU 
                                                   & (vlSelf->top__DOT__pipelined__DOT__pc_IF 
                                                      >> 2U))]
                                                   : vlSelf->top__DOT__pipelined__DOT__IMEM__DOT____Vxrand_h96fcef06__0);
    vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__tag 
        = (0xfffffU & (IData)((vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__BTB__DOT__buffer
                               [(0x3ffU & (vlSelf->top__DOT__pipelined__DOT__pc_IF 
                                           >> 2U))] 
                               >> 0x20U)));
    vlSelf->top__DOT__pipelined__DOT__pc_sel_EX = 0U;
    if ((0x18U == (IData)(vlSelf->top__DOT__pipelined__DOT____Vcellinp__pc_sel_block__opcode))) {
        if ((2U == (IData)(vlSelf->top__DOT__pipelined__DOT__pc_sel_block__DOT__combine))) {
            vlSelf->top__DOT__pipelined__DOT__pc_sel_EX = 1U;
        }
        if ((0U == (IData)(vlSelf->top__DOT__pipelined__DOT__pc_sel_block__DOT__combine))) {
            vlSelf->top__DOT__pipelined__DOT__pc_sel_EX = 0U;
        }
        if ((1U == (IData)(vlSelf->top__DOT__pipelined__DOT__pc_sel_block__DOT__combine))) {
            vlSelf->top__DOT__pipelined__DOT__pc_sel_EX = 0U;
        }
    }
    if ((0x98U == (IData)(vlSelf->top__DOT__pipelined__DOT____Vcellinp__pc_sel_block__opcode))) {
        if ((1U == (IData)(vlSelf->top__DOT__pipelined__DOT__pc_sel_block__DOT__combine))) {
            vlSelf->top__DOT__pipelined__DOT__pc_sel_EX = 1U;
        }
        if ((0U == (IData)(vlSelf->top__DOT__pipelined__DOT__pc_sel_block__DOT__combine))) {
            vlSelf->top__DOT__pipelined__DOT__pc_sel_EX = 0U;
        }
        if ((2U == (IData)(vlSelf->top__DOT__pipelined__DOT__pc_sel_block__DOT__combine))) {
            vlSelf->top__DOT__pipelined__DOT__pc_sel_EX = 0U;
        }
    }
    if ((0xd8U == (IData)(vlSelf->top__DOT__pipelined__DOT____Vcellinp__pc_sel_block__opcode))) {
        if ((1U == (IData)(vlSelf->top__DOT__pipelined__DOT__pc_sel_block__DOT__combine))) {
            vlSelf->top__DOT__pipelined__DOT__pc_sel_EX = 1U;
        }
        if ((0U == (IData)(vlSelf->top__DOT__pipelined__DOT__pc_sel_block__DOT__combine))) {
            vlSelf->top__DOT__pipelined__DOT__pc_sel_EX = 0U;
        }
        if ((2U == (IData)(vlSelf->top__DOT__pipelined__DOT__pc_sel_block__DOT__combine))) {
            vlSelf->top__DOT__pipelined__DOT__pc_sel_EX = 0U;
        }
    }
    if (((0x19U == (IData)(vlSelf->top__DOT__pipelined__DOT____Vcellinp__pc_sel_block__opcode)) 
         & ((IData)(vlSelf->top__DOT__pipelined__DOT__pc_sel_block__DOT____Vxrand_h96fdb8c3__0) 
            == (IData)(vlSelf->top__DOT__pipelined__DOT____Vcellinp__pc_sel_block__opcode)))) {
        vlSelf->top__DOT__pipelined__DOT__pc_sel_EX = 1U;
    }
    vlSelf->io_lcd_o = vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram
        [0xaU];
    vlSelf->io_ledg_o = vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram
        [9U];
    vlSelf->io_ledr_o = vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram
        [8U];
    vlSelf->io_hex7_o = vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram
        [7U];
    vlSelf->io_hex6_o = vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram
        [6U];
    vlSelf->io_hex5_o = vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram
        [5U];
    vlSelf->io_hex4_o = vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram
        [4U];
    vlSelf->io_hex3_o = vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram
        [3U];
    vlSelf->io_hex2_o = vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram
        [2U];
    vlSelf->io_hex1_o = vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram
        [1U];
    vlSelf->io_hex0_o = vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram
        [0U];
    if ((0U == (7U & ((IData)(vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout) 
                      >> 0xaU)))) {
        vlSelf->top__DOT__pipelined__DOT__imm_ID = 
            ((0x7ffU & vlSelf->top__DOT__pipelined__DOT__imm_ID) 
             | ((((vlSelf->top__DOT__pipelined__DOT__instr_ID 
                   >> 0x1fU) ? 0xfffffU : 0U) << 0xcU) 
                | (0x800U & (vlSelf->top__DOT__pipelined__DOT__instr_ID 
                             >> 0x14U))));
        vlSelf->top__DOT__pipelined__DOT__imm_ID = 
            ((0xfffff800U & vlSelf->top__DOT__pipelined__DOT__imm_ID) 
             | (0x7ffU & (vlSelf->top__DOT__pipelined__DOT__instr_ID 
                          >> 0x14U)));
    } else if ((1U == (7U & ((IData)(vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout) 
                             >> 0xaU)))) {
        vlSelf->top__DOT__pipelined__DOT__imm_ID = 
            ((0x7ffU & vlSelf->top__DOT__pipelined__DOT__imm_ID) 
             | ((((vlSelf->top__DOT__pipelined__DOT__instr_ID 
                   >> 0x1fU) ? 0xfffffU : 0U) << 0xcU) 
                | (0x800U & (vlSelf->top__DOT__pipelined__DOT__instr_ID 
                             >> 0x14U))));
        vlSelf->top__DOT__pipelined__DOT__imm_ID = 
            ((0xfffff800U & vlSelf->top__DOT__pipelined__DOT__imm_ID) 
             | ((0x7e0U & (vlSelf->top__DOT__pipelined__DOT__instr_ID 
                           >> 0x14U)) | (0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_ID 
                                                  >> 7U))));
    } else if ((2U == (7U & ((IData)(vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout) 
                             >> 0xaU)))) {
        vlSelf->top__DOT__pipelined__DOT__imm_ID = 
            ((0xfffU & vlSelf->top__DOT__pipelined__DOT__imm_ID) 
             | (((vlSelf->top__DOT__pipelined__DOT__instr_ID 
                  >> 0x1fU) ? 0xfffffU : 0U) << 0xcU));
        vlSelf->top__DOT__pipelined__DOT__imm_ID = 
            ((0xffffe001U & vlSelf->top__DOT__pipelined__DOT__imm_ID) 
             | (((0x1000U & (vlSelf->top__DOT__pipelined__DOT__instr_ID 
                             >> 0x13U)) | (0x800U & 
                                           (vlSelf->top__DOT__pipelined__DOT__instr_ID 
                                            << 4U))) 
                | ((0x7e0U & (vlSelf->top__DOT__pipelined__DOT__instr_ID 
                              >> 0x14U)) | (0x1eU & 
                                            (vlSelf->top__DOT__pipelined__DOT__instr_ID 
                                             >> 7U)))));
        vlSelf->top__DOT__pipelined__DOT__imm_ID = 
            (0xfffffffeU & vlSelf->top__DOT__pipelined__DOT__imm_ID);
    } else if ((3U == (7U & ((IData)(vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout) 
                             >> 0xaU)))) {
        vlSelf->top__DOT__pipelined__DOT__imm_ID = 
            (0xfffff000U & vlSelf->top__DOT__pipelined__DOT__instr_ID);
    } else if ((4U == (7U & ((IData)(vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout) 
                             >> 0xaU)))) {
        vlSelf->top__DOT__pipelined__DOT__imm_ID = 
            ((0xfffffU & vlSelf->top__DOT__pipelined__DOT__imm_ID) 
             | ((((vlSelf->top__DOT__pipelined__DOT__instr_ID 
                   >> 0x1fU) ? 1U : 0U) << 0x15U) | 
                (0x100000U & (vlSelf->top__DOT__pipelined__DOT__instr_ID 
                              >> 0xbU))));
        vlSelf->top__DOT__pipelined__DOT__imm_ID = 
            ((0xfff0001fU & vlSelf->top__DOT__pipelined__DOT__imm_ID) 
             | ((0xff000U & vlSelf->top__DOT__pipelined__DOT__instr_ID) 
                | ((0x800U & (vlSelf->top__DOT__pipelined__DOT__instr_ID 
                              >> 9U)) | (0x7e0U & (vlSelf->top__DOT__pipelined__DOT__instr_ID 
                                                   >> 0x14U)))));
        vlSelf->top__DOT__pipelined__DOT__imm_ID = 
            ((0xffffffe0U & vlSelf->top__DOT__pipelined__DOT__imm_ID) 
             | (0x1eU & (vlSelf->top__DOT__pipelined__DOT__instr_ID 
                         >> 0x14U)));
    }
    if ((((0x63U == (0x7fU & vlSelf->top__DOT__pipelined__DOT__instr_EX)) 
          & (IData)(vlSelf->top__DOT__pipelined__DOT__pc_sel_EX)) 
         & (IData)(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__predictedbit))) {
        if ((vlSelf->top__DOT__pipelined__DOT__pc_EX 
             != vlSelf->top__DOT__pipelined__DOT__alu__DOT__ALU_Result)) {
            vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__update = 1U;
        }
    }
    if ((((0x63U == (0x7fU & vlSelf->top__DOT__pipelined__DOT__instr_EX)) 
          & (IData)(vlSelf->top__DOT__pipelined__DOT__pc_sel_EX)) 
         & (~ (IData)(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__predictedbit)))) {
        vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__update = 0U;
    }
    vlSelf->top__DOT__pipelined__DOT__flush_br = 0U;
    if ((((0x63U == (0x7fU & vlSelf->top__DOT__pipelined__DOT__instr_EX)) 
          & (IData)(vlSelf->top__DOT__pipelined__DOT__pc_sel_EX)) 
         & (IData)(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__predictedbit))) {
        if ((vlSelf->top__DOT__pipelined__DOT__pc_EX 
             != vlSelf->top__DOT__pipelined__DOT__alu__DOT__ALU_Result)) {
            vlSelf->top__DOT__pipelined__DOT__flush_br = 1U;
        }
    } else if ((((0x63U == (0x7fU & vlSelf->top__DOT__pipelined__DOT__instr_EX)) 
                 & (~ (IData)(vlSelf->top__DOT__pipelined__DOT__pc_sel_EX))) 
                & (IData)(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__predictedbit))) {
        vlSelf->top__DOT__pipelined__DOT__flush_br = 1U;
    }
    if ((((0x63U == (0x7fU & vlSelf->top__DOT__pipelined__DOT__instr_EX)) 
          & (IData)(vlSelf->top__DOT__pipelined__DOT__pc_sel_EX)) 
         & (~ (IData)(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__predictedbit)))) {
        vlSelf->top__DOT__pipelined__DOT__flush_br = 1U;
    }
    vlSelf->top__DOT__pipelined__DOT__hit = 0U;
    if (((0x63U == (0x7fU & vlSelf->top__DOT__pipelined__DOT__instr_IF)) 
         & (vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__tag 
            == (vlSelf->top__DOT__pipelined__DOT__pc_IF 
                >> 0xcU)))) {
        vlSelf->top__DOT__pipelined__DOT__hit = vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__predictedbit;
    }
    if ((((0x63U == (0x7fU & vlSelf->top__DOT__pipelined__DOT__instr_EX)) 
          & (IData)(vlSelf->top__DOT__pipelined__DOT__pc_sel_EX)) 
         & (IData)(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__predictedbit))) {
        if ((vlSelf->top__DOT__pipelined__DOT__pc_EX 
             != vlSelf->top__DOT__pipelined__DOT__alu__DOT__ALU_Result)) {
            vlSelf->top__DOT__pipelined__DOT__hit = 1U;
        }
    } else if ((((0x63U == (0x7fU & vlSelf->top__DOT__pipelined__DOT__instr_EX)) 
                 & (~ (IData)(vlSelf->top__DOT__pipelined__DOT__pc_sel_EX))) 
                & (IData)(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__predictedbit))) {
        vlSelf->top__DOT__pipelined__DOT__hit = 1U;
    }
    if ((((0x63U == (0x7fU & vlSelf->top__DOT__pipelined__DOT__instr_EX)) 
          & (IData)(vlSelf->top__DOT__pipelined__DOT__pc_sel_EX)) 
         & (~ (IData)(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__predictedbit)))) {
        vlSelf->top__DOT__pipelined__DOT__hit = 1U;
    }
    if (((0x63U == (0x7fU & vlSelf->top__DOT__pipelined__DOT__instr_IF)) 
         & (vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__tag 
            == (vlSelf->top__DOT__pipelined__DOT__pc_IF 
                >> 0xcU)))) {
        vlSelf->top__DOT__pipelined__DOT__npc = (IData)(
                                                        vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__BTB__DOT__buffer
                                                        [
                                                        (0x3ffU 
                                                         & (vlSelf->top__DOT__pipelined__DOT__pc_IF 
                                                            >> 2U))]);
    }
    if ((((0x63U == (0x7fU & vlSelf->top__DOT__pipelined__DOT__instr_EX)) 
          & (IData)(vlSelf->top__DOT__pipelined__DOT__pc_sel_EX)) 
         & (IData)(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__predictedbit))) {
        if ((vlSelf->top__DOT__pipelined__DOT__pc_EX 
             != vlSelf->top__DOT__pipelined__DOT__alu__DOT__ALU_Result)) {
            vlSelf->top__DOT__pipelined__DOT__npc = vlSelf->top__DOT__pipelined__DOT__alu__DOT__ALU_Result;
        }
    } else if ((((0x63U == (0x7fU & vlSelf->top__DOT__pipelined__DOT__instr_EX)) 
                 & (~ (IData)(vlSelf->top__DOT__pipelined__DOT__pc_sel_EX))) 
                & (IData)(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__predictedbit))) {
        vlSelf->top__DOT__pipelined__DOT__npc = ((IData)(4U) 
                                                 + vlSelf->top__DOT__pipelined__DOT__pc_EX);
    }
    if ((((0x63U == (0x7fU & vlSelf->top__DOT__pipelined__DOT__instr_EX)) 
          & (IData)(vlSelf->top__DOT__pipelined__DOT__pc_sel_EX)) 
         & (~ (IData)(vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__predictedbit)))) {
        vlSelf->top__DOT__pipelined__DOT__npc = vlSelf->top__DOT__pipelined__DOT__alu__DOT__ALU_Result;
    }
    if (vlSelf->rst_ni) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__pipelined__DOT__MemRW_MEM)))) {
            vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__ld_data_out 
                = ((1U == (3U & (vlSelf->top__DOT__pipelined__DOT__aludata_MEM 
                                 >> 0xaU))) ? (((((
                                                   ((((0x500U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__pipelined__DOT__aludata_MEM)) 
                                                      | (0x4a0U 
                                                         == 
                                                         (0xfffU 
                                                          & vlSelf->top__DOT__pipelined__DOT__aludata_MEM))) 
                                                     | (0x490U 
                                                        == 
                                                        (0xfffU 
                                                         & vlSelf->top__DOT__pipelined__DOT__aludata_MEM))) 
                                                    | (0x480U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__pipelined__DOT__aludata_MEM))) 
                                                   | (0x470U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__pipelined__DOT__aludata_MEM))) 
                                                  | (0x460U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__pipelined__DOT__aludata_MEM))) 
                                                 | (0x450U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__pipelined__DOT__aludata_MEM))) 
                                                | (0x440U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__pipelined__DOT__aludata_MEM)))
                                                ? (
                                                   (0x500U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__pipelined__DOT__aludata_MEM))
                                                    ? vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__INPUT__DOT__ram
                                                    : 
                                                   ((0x4a0U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__pipelined__DOT__aludata_MEM))
                                                     ? vlSelf->io_lcd_o
                                                     : 
                                                    ((0x490U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__pipelined__DOT__aludata_MEM))
                                                      ? vlSelf->io_ledg_o
                                                      : 
                                                     ((0x480U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__pipelined__DOT__aludata_MEM))
                                                       ? vlSelf->io_ledr_o
                                                       : 
                                                      ((0x470U 
                                                        == 
                                                        (0xfffU 
                                                         & vlSelf->top__DOT__pipelined__DOT__aludata_MEM))
                                                        ? vlSelf->io_hex7_o
                                                        : 
                                                       ((0x460U 
                                                         == 
                                                         (0xfffU 
                                                          & vlSelf->top__DOT__pipelined__DOT__aludata_MEM))
                                                         ? vlSelf->io_hex6_o
                                                         : 
                                                        ((0x450U 
                                                          == 
                                                          (0xfffU 
                                                           & vlSelf->top__DOT__pipelined__DOT__aludata_MEM))
                                                          ? vlSelf->io_hex5_o
                                                          : vlSelf->io_hex4_o)))))))
                                                : (
                                                   (0x430U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__pipelined__DOT__aludata_MEM))
                                                    ? vlSelf->io_hex3_o
                                                    : 
                                                   ((0x420U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__pipelined__DOT__aludata_MEM))
                                                     ? vlSelf->io_hex2_o
                                                     : 
                                                    ((0x410U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__pipelined__DOT__aludata_MEM))
                                                      ? vlSelf->io_hex1_o
                                                      : 
                                                     ((0x400U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__pipelined__DOT__aludata_MEM))
                                                       ? vlSelf->io_hex0_o
                                                       : 0U)))))
                    : ((0U == (3U & (vlSelf->top__DOT__pipelined__DOT__aludata_MEM 
                                     >> 0xaU))) ? ((IData)(vlSelf->top__DOT__pipelined__DOT__MemRW_MEM)
                                                    ? 0U
                                                    : 
                                                   vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__DMEM__DOT__ram
                                                   [
                                                   (0x1ffU 
                                                    & (vlSelf->top__DOT__pipelined__DOT__aludata_MEM 
                                                       >> 2U))])
                        : 0U));
        }
    }
    vlSelf->top__DOT__pipelined__DOT__flush_ID = vlSelf->top__DOT__pipelined__DOT__flush_br;
    if ((((~ (IData)((0U != (0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                                      >> 2U))))) & 
          (0U != (0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                           >> 7U)))) & (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                                                   >> 7U)) 
                                         == (0x1fU 
                                             & (vlSelf->top__DOT__pipelined__DOT__instr_ID 
                                                >> 0xfU))) 
                                        | ((0x1fU & 
                                            (vlSelf->top__DOT__pipelined__DOT__instr_EX 
                                             >> 7U)) 
                                           == (0x1fU 
                                               & (vlSelf->top__DOT__pipelined__DOT__instr_ID 
                                                  >> 0x14U)))))) {
        vlSelf->top__DOT__pipelined__DOT__flush_ID = 1U;
    }
    vlSelf->top__DOT__pipelined__DOT__PC__DOT__nxt_pc 
        = ((IData)(vlSelf->top__DOT__pipelined__DOT__hit)
            ? vlSelf->top__DOT__pipelined__DOT__npc
            : ((IData)(4U) + vlSelf->top__DOT__pipelined__DOT__pc_IF));
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP__rst_ni = vlSelf->rst_ni;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vtop___024root___settle__TOP__5(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->io_sw_i = VL_RAND_RESET_I(32);
    vlSelf->io_lcd_o = VL_RAND_RESET_I(32);
    vlSelf->io_ledg_o = VL_RAND_RESET_I(32);
    vlSelf->io_ledr_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex0_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex1_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex2_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex3_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex4_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex5_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex6_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex7_o = VL_RAND_RESET_I(32);
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__ASel_EX = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__ASel_MEM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__ASel_WB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__BSel_EX = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__BSel_MEM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__BSel_WB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__BrUn_EX = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__BrUn_MEM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__BrUn_WB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__PCSel_EX = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__PCSel_MEM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__PCSel_WB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__MemRW_EX = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__MemRW_MEM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__MemRW_WB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__WBSel_EX = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipelined__DOT__WBSel_MEM = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipelined__DOT__WBSel_WB = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipelined__DOT__RegWEn_EX = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__RegWEn_MEM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__RegWEn_WB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__ImmSel_EX = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__pipelined__DOT__ImmSel_MEM = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__pipelined__DOT__ImmSel_WB = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__pipelined__DOT__ALUSel_EX = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__ALUSel_MEM = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__ALUSel_WB = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__pc_IF = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__instr_IF = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__pc_ID = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__instr_ID = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__imm_ID = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__pc_EX = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__instr_EX = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__rs1data_EX = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__rs2data_EX = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__imm_EX = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__pc_MEM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__instr_MEM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__rs2data_MEM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__aludata_MEM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__instr_WB = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__pcfour_WB = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__lddata_WB = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__aludata_WB = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__pc_sel_EX = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__wb_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__BrLT = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__operand_a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__operand_b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__control_signal = VL_RAND_RESET_I(11);
    vlSelf->top__DOT__pipelined__DOT____Vcellinp__pc_sel_block__opcode = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__pipelined__DOT__fwd_a = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipelined__DOT__fwd_b = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipelined__DOT__stall_IF = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__flush_br = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__flush_ID = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__npc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__PC__DOT__nxt_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__IMEM__DOT____Vxrand_h96fcef06__0 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2044; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__IMEM__DOT__Rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__pipelined__DOT__regfile__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__regfile__DOT__register[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h96fd1319__2 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h96fd1319__1 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h96fd1319__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h970a8d2f__1 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h970a8d2f__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h96e2b52f__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h96fa9d2f__3 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h96fa9d2f__2 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h9712852f__1 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h96fa9d2f__1 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h96fa9d2f__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h9712852f__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h9716d348__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h97171f6c__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h9716d754__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h971723b8__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h971727a4__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h9716c080__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h97172b90__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h97172f7c__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h9716f8a8__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__pipelined__DOT__CU__DOT____Vxrand_h9716bc8c__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__pipelined__DOT__CU__DOT__dataout = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__result_signed = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__result_unsigned = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__result_eq = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__compare__DOT__index = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__brcomp__DOT__compare_sign__DOT__index = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__pc_sel_block__DOT____Vxrand_h96fdb8c3__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__pipelined__DOT__pc_sel_block__DOT__combine = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipelined__DOT__alu__DOT__signed_operand_a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__alu__DOT__ALU_Result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__alu__DOT__un_output_less = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__alu__DOT__output_less = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__alu__DOT__compare0__DOT__index = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__alu__DOT__compare_sign0__DOT__index = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__st_data_res = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__st_data_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__st_data_dmem = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__ld_data_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__INPUT__DOT__ram = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<12; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__OUTPUT__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__DMEM__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<512; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__LSU__DOT__DMEM__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__pipelined__DOT__top_lsu__DOT__STORE__DOT__data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_NOT_TAKEN__DOT__update = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_NOT_TAKEN__DOT__tag = VL_RAND_RESET_I(20);
    vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_NOT_TAKEN__DOT__BTB__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_NOT_TAKEN__DOT__BTB__DOT__buffer[__Vi0] = VL_RAND_RESET_Q(52);
    }
    vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_TAKEN__DOT__update = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_TAKEN__DOT__tag = VL_RAND_RESET_I(20);
    vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_TAKEN__DOT__BTB__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ALWAYS_TAKEN__DOT__BTB__DOT__buffer[__Vi0] = VL_RAND_RESET_Q(52);
    }
    vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__update = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__tag = VL_RAND_RESET_I(20);
    vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__predictedbit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__BTB__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__BPU__DOT__ONEBIT_PREDICTOR__DOT__BTB__DOT__buffer[__Vi0] = VL_RAND_RESET_Q(52);
    }
    vlSelf->top__DOT__pipelined__DOT__BPU__DOT__TWOBIT_PREDICTOR__DOT__update = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__BPU__DOT__TWOBIT_PREDICTOR__DOT__tag = VL_RAND_RESET_I(20);
    vlSelf->top__DOT__pipelined__DOT__BPU__DOT__TWOBIT_PREDICTOR__DOT__predictedbit = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipelined__DOT__BPU__DOT__TWOBIT_PREDICTOR__DOT__BTB__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__BPU__DOT__TWOBIT_PREDICTOR__DOT__BTB__DOT__buffer[__Vi0] = VL_RAND_RESET_Q(52);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
