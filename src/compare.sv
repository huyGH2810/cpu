module compare (
    input           [31:0]  a 		 ,
    input           [31:0]  b 		 ,
    output  logic   [31:0]  out_data
);

integer index;

always_comb begin
	out_data = 32'h0;
    for (index = 31; index >= 0; index--) 
    begin
        if (a[index] == 1'b1 && b[index] == 1'b0) 
        begin
            out_data = 32'h00000000;
            break;
        end

        if (a[index] == 1'b0 && b[index] == 1'b1) 
        begin
            out_data = 32'h00000001;
            break;
        end
    end
end
endmodule : compare

