module MEM_WB (
	input  logic		  clk_i		 ,
	
	input	 logic [31:0] instr_MEM	 ,
	input  logic [31:0] aludata_MEM,
	input  logic [31:0] pcfour_MEM ,
	input	 logic [31:0] lddata_MEM ,
	
	input  logic [3:0]  ALUSel_MEM ,
	input  logic [2:0]  ImmSel_MEM ,
	input  logic [1:0]  WBSel_MEM  ,
	input  logic		  BrUn_MEM	 ,
	input  logic		  PCSel_MEM	 ,
	input  logic		  ASel_MEM	 ,
	input  logic		  BSel_MEM	 ,
	input  logic		  MemRW_MEM	 ,
	input  logic		  RegWEn_MEM ,
	
	output logic [31:0] instr_WB	 ,
	output logic [31:0] lddata_WB	 ,
	output logic [31:0] aludata_WB ,
	output logic [31:0] pcfour_WB  ,
	
	output logic [3:0] ALUSel_WB   ,
	output logic [2:0] ImmSel_WB	 ,
	output logic [1:0] WBSel_WB	 ,
	output logic		 BrUn_WB	    ,
	output logic		 PCSel_WB	 ,
	output logic		 ASel_WB	    ,
	output logic		 BSel_WB	    ,
	output logic		 MemRW_WB	 ,
	output logic		 RegWEn_WB	
);

	always_ff @(posedge clk_i) begin
			instr_WB 	<= instr_MEM;
			lddata_WB	<= lddata_MEM;
			aludata_WB 	<= aludata_MEM;
			pcfour_WB 	<= pcfour_MEM;
			ALUSel_WB 	<= ALUSel_MEM;
			ImmSel_WB 	<= ImmSel_MEM;
			WBSel_WB 	<= WBSel_MEM;
			BrUn_WB 	<= BrUn_MEM;
			PCSel_WB 	<= PCSel_MEM;
			ASel_WB 	<= ASel_MEM;
			BSel_WB 	<= BSel_MEM;
			MemRW_WB 	<= MemRW_MEM; 
			RegWEn_WB 	<= RegWEn_MEM;	
	end
endmodule
