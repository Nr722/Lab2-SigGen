module counter #(
    parameter WIDTH = 8
)(
    input logic clk,    // Clock
    input logic rst,    // Reset
    input logic en,
    input logic [WIDTH-1:0] offset,
    output logic [WIDTH-1:0] count1, // Count output
   output logic [WIDTH-1:0] count2  // Count output
);

initial 
    begin
        count1 <= {WIDTH{1'b0}};
        count2 <= {WIDTH{1'b0}};
    end


always_ff @ (posedge clk)

    begin
    count1 <= count1 + 1;
    count2 <= count1 + offset;
    end
endmodule



