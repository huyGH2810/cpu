module sub_lsu_load (
		input 	[2 :0] 	func3,
		input 	[31:0] 	data_in,
		output	[31:0]	data_out
);

logic [31:0] data;
assign 	data_out	=	data;

	always @(*) begin
		case (func3)
			3'b000:	begin
				if (data_in[7] == 1) 
					data = {24'hFFFFFF, data_in[7:0]};
				else	
					data = {24'b0, data_in[7:0]};
			end
			3'b001:	begin
				if (data_in[15] == 1) 
					data = {16'hFFFF, data_in[15:0]};
				else	
					data = {16'b0, data_in[15:0]};
			end
			
			3'b010:		data = data_in;
			3'b100:		data = {24'b0, data_in[7:0]};
			3'b101:		data = {16'b0, data_in[15:0]};
			default: 	data = data_in;
		endcase	
	end
endmodule
