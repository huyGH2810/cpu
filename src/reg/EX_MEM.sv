module EX_MEM (
	input  logic		  clk_i		 ,
	
	input	 logic [31:0] instr_EX	 ,
	input	 logic [31:0] pc_EX		 ,
	input  logic [31:0] aludata_EX ,
	input  logic [31:0] rs2data_EX ,
	
	input  logic [3:0]  ALUSel_EX	 ,
	input  logic [2:0]  ImmSel_EX	 ,
	input  logic [1:0]  WBSel_EX   ,
	input  logic		  BrUn_EX	 ,
	input  logic		  PCSel_EX	 ,
	input  logic		  ASel_EX	 ,
	input  logic		  BSel_EX	 ,
	input  logic		  MemRW_EX	 ,
	input  logic		  RegWEn_EX	 ,
	
	output logic [31:0] instr_MEM	 ,
	output logic [31:0] pc_MEM		 ,
	output logic [31:0] aludata_MEM,
	output logic [31:0] rs2data_MEM,
	
	output logic [3:0] ALUSel_MEM  ,
	output logic [2:0] ImmSel_MEM	 ,
	output logic [1:0] WBSel_MEM	 ,
	output logic		 BrUn_MEM	 ,
	output logic		 PCSel_MEM	 ,
	output logic		 ASel_MEM	 ,
	output logic		 BSel_MEM	 ,
	output logic		 MemRW_MEM	 ,
	output logic		 RegWEn_MEM	
);

	always_ff @(posedge clk_i) begin
			instr_MEM 	<= instr_EX;
			pc_MEM	 	<= pc_EX;
			aludata_MEM <= aludata_EX;
			rs2data_MEM <= rs2data_EX;
			ALUSel_MEM 	<= ALUSel_EX;
			ImmSel_MEM 	<= ImmSel_EX;
			WBSel_MEM 	<= WBSel_EX;
			BrUn_MEM 	<= BrUn_EX;
			PCSel_MEM 	<= PCSel_EX;
			ASel_MEM 	<= ASel_EX;
			BSel_MEM 	<= BSel_EX;
			MemRW_MEM 	<= MemRW_EX; 
			RegWEn_MEM 	<= RegWEn_EX;	
	end
endmodule
