module counter #(
    parameter WIDTH = 8
)(
    input logic clk,    // Clock
    input logic rst,    // Reset
    input logic en,     // Counter enable
    input logic [WIDTH-1:0] diff,
    output logic [WIDTH-1:0] count1, // Count output
    output logic [WIDTH-1:0] count2  // Count output
);


always_ff @ (posedge clk)
    //if (rst) count <= {WIDTH{1'b0}};
    if (en)
    begin
    count1 <= count1 + 1;
    count2 <= count1 + diff; //forms width-1 bits of 0
    end

    else
    begin
        count1 <= count1;
        count2 <= count2;
    end
endmodule
