module compare_sign (
    input           [31:0]  a,
    input           [31:0]  b,
    output  logic   [31:0]  out_data
);

integer index;
// if a < b, the out_data is 1 

always_comb begin
	out_data = 32'h0;
    for (index = 31; index >= 0; index--) begin
		if(a[31] == 1'b0 & b[31] == 1'b0) begin
			if(a[index] == 1'b1 &&  b[index] == 1'b0) begin
				out_data = 32'h00000000;
				break;
			end
			
			if(a[index] == 1'b0 && b[index] == 1'b1) begin
				out_data = 32'h00000001;
				break;
			end
		end
		
		if(a[31] == 1'b1 & b[31] == 1'b1) begin
			if(a[index] == 1'b1 &&  b[index] == 1'b0) begin
				out_data = 32'h00000001;
				break;
			end
			
			if(a[index] == 1'b0 && b[index] == 1'b1) begin
				out_data = 32'h00000000;
				break;
			end
		end
		
		if(a[31] == 1'b0 & b[31] == 1'b1) begin
			out_data = 32'h00000000;
			break;
		end	
		if(a[31] == 1'b1 & b[31] == 1'b0) begin
			out_data = 32'h00000001;
			break;	
		end	
		
	end
	
end
endmodule : compare_sign 
