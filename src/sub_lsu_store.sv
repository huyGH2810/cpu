module sub_lsu_store (
		input 	[2:0] 	func3,
		input 	[31:0] 	data_in,
		output	[31:0]	data_out
);

logic	[31:0]	data;
assign	data_out	=	data;

	always @(*) begin
		case (func3)
			3'b000:	data = {24'b0, data_in[7:0]};
			3'b001:	data = {16'b0, data_in[15:0]};
			3'b010:	data = data_in;
			default:	data = data_in;
		endcase	
	end
endmodule
