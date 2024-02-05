module pipelined
(
	input 			clk_i ,
	input 			rst_ni,
	input  [31:0]	io_sw_i  ,
	output [31:0]	io_lcd_o ,
	output [31:0]	io_ledg_o,
	output [31:0]	io_ledr_o,
	output [31:0]   io_hex7_o, io_hex6_o, io_hex5_o, io_hex4_o, io_hex3_o, io_hex2_o, io_hex1_o, io_hex0_o
);

//Control Units
/* verilator lint_off UNUSED */
logic 		   ASel_ID,   ASel_EX,   ASel_MEM,   ASel_WB;
logic 		   BSel_ID,   BSel_EX,   BSel_MEM,   BSel_WB;
logic 		   BrUn_ID,   BrUn_EX,   BrUn_MEM,   BrUn_WB;
logic 		  PCSel_ID,  PCSel_EX,  PCSel_MEM,  PCSel_WB;
logic 		  MemRW_ID,  MemRW_EX,  MemRW_MEM,  MemRW_WB;
logic [1:0]   WBSel_ID,  WBSel_EX,  WBSel_MEM,  WBSel_WB;
logic 		 RegWEn_ID, RegWEn_EX, RegWEn_MEM, RegWEn_WB;
logic [2:0]	 ImmSel_ID, ImmSel_EX, ImmSel_MEM, ImmSel_WB;
logic [3:0]  ALUSel_ID, ALUSel_EX, ALUSel_MEM, ALUSel_WB;


logic [31:0] pc_IF   , instr_IF ;
logic [31:0] pc_ID   , instr_ID , rs1data_ID , rs2data_ID , imm_ID    ;
logic [31:0] pc_EX   , instr_EX , rs1data_EX , rs2data_EX , imm_EX    , aludata_EX;
logic [31:0] pc_MEM  , instr_MEM, rs2data_MEM, aludata_MEM, pcfour_MEM, lddata_MEM;
logic [31:0] instr_WB, pcfour_WB, lddata_WB  , aludata_WB ;
/* verilator lint_off UNUSED */


//PC
logic		 pc_sel_EX;			

//IMEM	

//regfile
logic [31:0] wb_data;

//immGen
	
//brcomp
logic		 BrEq;
logic		 BrLT;
logic [31:0] rs1_data, rs2_data;

//mux_op_a			
logic [31:0] operand_a;	

//mux_op_b			
logic [31:0] operand_b;		

//alu

//CU
logic [10:0] control_signal;

//mux_wb_sel

assign pcfour_MEM = pc_MEM + 4;
assign control_signal = {instr_ID[30], instr_ID[14:12], instr_ID[6:2], BrEq, BrLT};

//IF stage//
PC	PC (
	.clk 		(clk_i),
	.br_sel 	(hit), 
	.alu_data	(npc),
	.stall_pc	(stall_pc),
	.pc 		(pc_IF)
);

IMEM IMEM (
	.address	(pc_IF),
	.data		(instr_IF)
);

//ID stage//
regfile regfile (
	.clk_i   	(clk_i),
	.rst_ni  	(rst_ni),
	
	.rd_wren 	(RegWEn_WB),
	.rd_addr 	(instr_WB[11:7]),
	.rd_data 	(wb_data),
	
	.rs1_addr 	(instr_ID[19:15]),
	.rs2_addr 	(instr_ID[24:20]),	
	
	.rs1_data 	(rs1data_ID),
	.rs2_data 	(rs2data_ID)
);

immGen immGen(
	.imm_in  	(instr_ID[31:7]),
	.imm_sel 	(ImmSel_ID),
	.imm_out 	(imm_ID)
);

CU CU(
	.control_signal (control_signal),
	
	.ALUSel	    (ALUSel_ID),
	.ImmSel	    (ImmSel_ID),
	.WBSel		(WBSel_ID),
	.BrUn		(BrUn_ID),
	.PCSel		(PCSel_ID),
	.ASel		(ASel_ID),
	.BSel		(BSel_ID),
	.MemRW		(MemRW_ID),
	.RegWEn		(RegWEn_ID)	
);

//EX stage//
mux_fwd_a mux_fwd_a
(
	.rs1_data 	(rs1data_EX),
	.wb_data 	(wb_data),
	.ALUOut_reg (aludata_MEM), 
	
	.fwd_a 		(fwd_a),
	.RegReadData1(rs1_data)
);

mux_fwd_b mux_fwd_b
(
	.rs2_data 	(rs2data_EX),
	.wb_data 	(wb_data),
	.ALUOut_reg (aludata_MEM),
	
	.fwd_b 		(fwd_b),
	.RegReadData2(rs2_data)
);

brcomp brcomp(    
    .rs1_data 	(rs1_data),
    .rs2_data 	(rs2_data),
    .br_unsigned(BrUn_EX),
    .br_less 	(BrLT),
    .br_equal 	(BrEq)
);

pc_sel_block pc_sel_block
(
	.BrEq 		(BrEq),
	.BrLT 		(BrLT),
	.opcode 	({instr_EX[14:12],instr_EX[6:2]}),
	.pc_sel 	(pc_sel_EX) 
);


alu alu (
	.operand_a 	(operand_a),
	.operand_b 	(operand_b),
	.alu_op	  	(ALUSel_EX),
	.alu_data 	(aludata_EX)
);

mux_op_x mux_op_a
(
	.op_x_sel  	(ASel_EX),
	.rsx_data  	(rs1_data),
	.imm_or_pc 	(pc_EX),
	.operand_x 	(operand_a)
);

mux_op_x mux_op_b
(
	.op_x_sel  	(BSel_EX),
	.rsx_data  	(rs2_data),
	.imm_or_pc 	(imm_EX),
	.operand_x 	(operand_b)
);

//MEM stage//
top_lsu	top_lsu(
	.clk_i	 	(clk_i), 
	.rst_ni	 	(rst_ni), 
	
	.st_en	 	(MemRW_MEM),
	.func3	 	(instr_MEM[14:12]),
	.addr	 	(aludata_MEM),
	.st_data 	(rs2data_MEM),
	
	.io_sw   	(io_sw_i),
	.ld_data 	(lddata_MEM),
	.io_lcd  	(io_lcd_o), 
	.io_ledr 	(io_ledr_o), 
	.io_ledg 	(io_ledg_o), 
	.io_hex7 	(io_hex7_o),
	.io_hex6 	(io_hex6_o), 
	.io_hex5 	(io_hex5_o), 
	.io_hex4 	(io_hex4_o), 	
	.io_hex3 	(io_hex3_o), 
	.io_hex2 	(io_hex2_o), 
	.io_hex1 	(io_hex1_o), 
	.io_hex0 	(io_hex0_o)
);

//WB stage//
mux_wb_sel mux_wb_sel (
	.wb_sel   	(WBSel_WB),
	.alu_data 	(aludata_WB),
	.ld_data  	(lddata_WB),
	.pc_four  	(pcfour_WB),
	.wb_data  	(wb_data)
);

logic [1:0] fwd_a;
logic [1:0] fwd_b;
logic stall_pc;
logic stall_IF;

logic flush_br;
logic flush_IF;
logic flush_ID;

logic hit;
logic [31:0] npc;

BPU BPU(
	.clk_i 		(clk_i),
	.pc_IF 		(pc_IF),
	.instr_IF 	(instr_IF),

	.pc_EX 		(pc_EX),
	.instr_EX 	(instr_EX),

	.pc_sel_EX 	(pc_sel_EX),
	.aludata_EX (aludata_EX),

	.flush_br 	(flush_br),
	.hit 		(hit),
	.npc 		(npc)
);

HDU HDU(
	.instr_ID 	(instr_ID),
	.instr_EX 	(instr_EX),
	//.RegWEn_EX,
	.flush_br 	(flush_br),
	.stall_pc 	(stall_pc),
	.stall_IF 	(stall_IF),
	.flush_IF 	(flush_IF),
	.flush_ID 	(flush_ID)
);

FU FU(
	.instr_EX 	(instr_EX),
	.instr_MEM 	(instr_MEM),
	.instr_WB 	(instr_WB),
	
	//input  logic 			WBSel_MEM,
	//input  logic 			WBSel_WB,
	
	.RegWEn_MEM (RegWEn_MEM),
	.RegWEn_WB 	(RegWEn_WB),
	
	.fwd_a 	 	(fwd_a),
	.fwd_b 	 	(fwd_b)
);

/*
FWD_control FWD_control
(	
	.rs1_addr_EX(instr_EX[19:15]),
	.rs2_addr_EX(instr_EX[24:20]),
	
	.rd_addr_MEM(instr_MEM[11:7]),
	
	.rd_addr_WB(instr_WB[11:7]),
	
	.rd_wren_MEM(RegWEn_MEM),
	.rd_wren_WB(RegWEn_WB),

	//res_stall
	.rs1_addr_ID(instr_ID[19:15]),
	.rs2_addr_ID(instr_ID[24:20]),

	//dest_stall
	.rd_addr_EX(instr_EX[11:7]),

	//in_detect_lw
	.WBSel_EX(WBSel_EX[0]),
	.inst_EX(instr_EX[6:2]),
	
	//in_detect_br/jmp
	.pc_sel_EX(pc_sel_EX),

	.fwd_a(fwd_a),
	.fwd_b(fwd_b),

	//control_stall
	.stall_pc(stall_pc),
	.stall_IF(stall_IF),

	//control_flush
	.flush_IF(flush_IF),
	.flush_ID(flush_ID)
);
*/

//reg//
IF_ID IF_ID(
	.clk_i		(clk_i)   ,
	.flush_IF	(flush_IF),
	.stall_IF	(stall_IF),
	
	.instr_IF	(instr_IF),
	.pc_IF		(pc_IF)   ,
	
	.instr_ID	(instr_ID),
	.pc_ID		(pc_ID)
);

ID_EX ID_EX(
	.clk_i		(clk_i)     ,
	.flush_ID	(flush_ID)  ,
	
	.instr_ID	(instr_ID)  ,
	.pc_ID		(pc_ID)     ,
	.rs1data_ID (rs1data_ID),
	.rs2data_ID (rs2data_ID),
	.imm_ID		(imm_ID)    ,
	
	.ALUSel_ID	(ALUSel_ID),
	.ImmSel_ID	(ImmSel_ID),
	.WBSel_ID   (WBSel_ID) ,
	.BrUn_ID	(BrUn_ID)  ,
	.PCSel_ID	(PCSel_ID) ,
	.ASel_ID	(ASel_ID)  ,
	.BSel_ID	(BSel_ID)  ,
	.MemRW_ID	(MemRW_ID) ,
	.RegWEn_ID	(RegWEn_ID),
	
	.instr_EX	(instr_EX)  ,
	.pc_EX		(pc_EX)     ,
	.rs1data_EX	(rs1data_EX),
	.rs2data_EX	(rs2data_EX),
	.imm_EX		(imm_EX)    ,
	
	.ALUSel_EX	(ALUSel_EX),
	.ImmSel_EX	(ImmSel_EX),
	.WBSel_EX	(WBSel_EX) ,
	.BrUn_EX	(BrUn_EX)  ,
	.PCSel_EX	(PCSel_EX) ,
	.ASel_EX	(ASel_EX)  ,
	.BSel_EX	(BSel_EX)  ,
	.MemRW_EX	(MemRW_EX) ,
	.RegWEn_EX	(RegWEn_EX)
);

EX_MEM EX_MEM(
	.clk_i		(clk_i),
	
	.instr_EX	(instr_EX)  ,
	.pc_EX		(pc_EX)     ,
	.aludata_EX (aludata_EX),
	.rs2data_EX (rs2_data),
	
	.ALUSel_EX	(ALUSel_EX),
	.ImmSel_EX	(ImmSel_EX),
	.WBSel_EX   (WBSel_EX) ,
	.BrUn_EX	(BrUn_EX)  ,
	.PCSel_EX	(PCSel_EX) ,
	.ASel_EX	(ASel_EX)  ,
	.BSel_EX	(BSel_EX)  ,
	.MemRW_EX	(MemRW_EX) ,
	.RegWEn_EX	(RegWEn_EX),
	
	.instr_MEM	(instr_MEM)  ,
	.pc_MEM		(pc_MEM)     ,
	.aludata_MEM(aludata_MEM),
	.rs2data_MEM(rs2data_MEM),
	
	.ALUSel_MEM (ALUSel_MEM),
	.ImmSel_MEM	(ImmSel_MEM),
	.WBSel_MEM	(WBSel_MEM) ,
	.BrUn_MEM	(BrUn_MEM)  ,
	.PCSel_MEM	(PCSel_MEM) ,
	.ASel_MEM	(ASel_MEM)  ,
	.BSel_MEM	(BSel_MEM)  ,
	.MemRW_MEM	(MemRW_MEM) ,
	.RegWEn_MEM	(RegWEn_MEM)
);

MEM_WB MEM_WB(
	.clk_i		(clk_i)      ,
	
	.instr_MEM	(instr_MEM)  ,
	.lddata_MEM	(lddata_MEM) ,
	.aludata_MEM(aludata_MEM),
	.pcfour_MEM (pcfour_MEM) ,
	
	.ALUSel_MEM (ALUSel_MEM),
	.ImmSel_MEM (ImmSel_MEM),
	.WBSel_MEM  (WBSel_MEM) ,
	.BrUn_MEM	(BrUn_MEM)  ,
	.PCSel_MEM	(PCSel_MEM) ,
	.ASel_MEM	(ASel_MEM)  ,
	.BSel_MEM	(BSel_MEM)  ,
	.MemRW_MEM	(MemRW_MEM) ,
	.RegWEn_MEM (RegWEn_MEM),
	
	.instr_WB	(instr_WB)  ,
	.lddata_WB	(lddata_WB) ,
	.aludata_WB (aludata_WB),
	.pcfour_WB  (pcfour_WB) ,
	
	.ALUSel_WB  (ALUSel_WB) ,
	.ImmSel_WB	(ImmSel_WB) ,
	.WBSel_WB	(WBSel_WB)  ,
	.BrUn_WB	(BrUn_WB)   ,
	.PCSel_WB	(PCSel_WB)  ,
	.ASel_WB	(ASel_WB)   ,
	.BSel_WB	(BSel_WB)   ,
	.MemRW_WB	(MemRW_WB)  ,
	.RegWEn_WB	(RegWEn_WB)
);

endmodule
