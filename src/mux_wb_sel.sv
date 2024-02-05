module mux_wb_sel
(
	input	logic [1:0]	 wb_sel,
	input 	logic [31:0] alu_data,
	input	logic [31:0] ld_data,
	input	logic [31:0] pc_four,
	output	logic [31:0] wb_data
);

always_latch begin
	if(wb_sel==2'b00) 
		wb_data = alu_data;
		
	if(wb_sel==2'b01)
		wb_data = ld_data;
		
	if(wb_sel==2'b10)
		wb_data = pc_four;
end

endmodule
