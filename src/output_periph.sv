module output_periph(
		// Peripheral 
		output	[31:0]		lcd, 
		output	[31:0]		ledr, 
		output	[31:0]		ledg, 
		output	[31:0]		hex7,
		output	[31:0]		hex6,
		output	[31:0] 		hex5,
		output	[31:0] 		hex4,
		output	[31:0] 		hex3, 
		output	[31:0] 		hex2,
		output	[31:0] 		hex1,
		output	[31:0] 		hex0,

	  	// Clock and asynchronous reset active low
	  	input 				clk_i,
	  	input 				st_en,
	  	input 	[7:0]		addr, 
	  	input 	[31:0]		st_data
);

	integer i;
	logic 	[31:0]	ram [11:0];
	
	initial begin
		for (i = 0; i < 12; i++) 
			ram[i] = 32'd0;
	end
	
	always_ff @(posedge clk_i) begin
		if(st_en)	begin
			case(addr)
				8'hA0:	ram[4'hA] <= st_data;
				8'h90:	ram[4'h9] <= st_data;
				8'h80:	ram[4'h8] <= st_data;
				8'h70:	ram[4'h7] <= st_data;
				8'h60:	ram[4'h6] <= st_data;
				8'h50:	ram[4'h5] <= st_data;
				8'h40:	ram[4'h4] <= st_data;
				8'h30:	ram[4'h3] <= st_data;
				8'h20:	ram[4'h2] <= st_data;
				8'h10:	ram[4'h1] <= st_data;
				8'h00:	ram[4'h0] <= st_data;
				default:ram[4'hB] <= st_data;
			endcase
		end
	end
	
	assign lcd  	= ram[4'hA];
	assign ledg 	= ram[4'h9];
	assign ledr 	= ram[4'h8];
	assign hex7 	= ram[4'h7];
	assign hex6 	= ram[4'h6];
	assign hex5 	= ram[4'h5];
	assign hex4 	= ram[4'h4];
	assign hex3 	= ram[4'h3];
	assign hex2 	= ram[4'h2];
	assign hex1 	= ram[4'h1];
	assign hex0 	= ram[4'h0];
	
endmodule
