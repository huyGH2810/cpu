module FWD_control
(	
	//res_fwd
	input logic [4:0] rs1_addr_EX,
	input logic [4:0] rs2_addr_EX,
	
	//dest_fwd
	input logic [4:0] rd_addr_MEM,
	
	input logic [4:0] rd_addr_WB,
	
	//control_unit
	input logic rd_wren_MEM,
	input logic rd_wren_WB,

	//res_stall
	input logic [4:0] rs1_addr_ID,
	input logic [4:0] rs2_addr_ID,

	//dest_stall
	input logic [4:0] rd_addr_EX,

	//in_detect_lw
	input logic WBSel_EX,
	input logic [4:0] inst_EX,
	
	//in_detect_br/jmp
	input logic pc_sel_EX,

	//control_fwd
	output logic [1:0] fwd_a,
	output logic [1:0] fwd_b,

	//control_stall
	output logic stall_pc,
	output logic stall_IF,

	//control_flush
	output logic flush_IF,
	output logic flush_ID

);

logic stall;

always_latch begin

	//foward
	fwd_a = 2'b00;
	fwd_b = 2'b00;
	if (rs1_addr_EX != 0) begin
		if (rd_addr_MEM == rs1_addr_EX && rd_wren_MEM == 1) begin
			fwd_a = 2'b10;
		end	
		
		else if (rd_addr_WB == rs1_addr_EX && rd_wren_WB == 1) begin
			fwd_a = 2'b01;
		end
	end
	
	if (rs2_addr_EX != 0) begin
		if (rd_addr_MEM == rs2_addr_EX && rd_wren_MEM == 1) begin
			fwd_b = 2'b10;
		end	
		
		else if (rd_addr_WB == rs2_addr_EX && rd_wren_WB == 1) begin
			fwd_b = 2'b01;
		end
	end

	//stall
	if (inst_EX == 5'b00000) begin	
		stall    = (WBSel_EX & ((rs1_addr_ID == rd_addr_EX)|(rs2_addr_ID == rd_addr_EX))&(rd_addr_EX!=0));
		stall_IF = stall;
		stall_pc = stall;
		flush_ID = stall | pc_sel_EX;
	end
	

//	if(WBSel_EX == 2'b01 & inst_EX == 5'b00000) & (rd_addr_EX != 0) & ((rs1_addr_ID == rd_addr_EX)|(rs2_addr_ID == rd_addr_EX))
	
	//if ((rs1_addr_IF!=0) && (rs2_addr_IF!=0)) begin
		flush_ID = stall | pc_sel_EX;
		flush_IF = pc_sel_EX;
	//end
end
endmodule
