module counter#(
    parameter WIDTH = 8
)(
    //interface signal
    input logic clk, //clock
    input logic rst, //reset
    input logic en, //counter enable
    input logic [WIDTH-1:0] incr, // counter increment
    output logic [WIDTH-1:0]    count   //count output
);

always_ff @ (posedge clk)
 if (rst) count <= {WIDTH{1'b0}};
 else if (en) count <= count + incr; //forms width-1 bits of 0
 else count <= count;
endmodule

