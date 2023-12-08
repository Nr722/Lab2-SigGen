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

initial 
    begin
        count1 <= {WIDTH{1'b0}};
        count2 <= {WIDTH{1'b0}};
    end
always_ff @ (posedge clk)
        
    if (en)
    begin
    count1 <= count1 + 1;
    count2 <= count1 + diff;
    end

    else
    begin
        count1 <= count1;
        count2 <= count2;
    end
endmodule

