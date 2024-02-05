module compare_eq (
    input           [31:0]  a,
    input           [31:0]  b,
    output  logic   [31:0]  out_data
);

always_comb begin
    if (a == b)
        out_data = 32'h00000001;
    else 
        out_data = 32'h00000000;
    end
endmodule : compare_eq
