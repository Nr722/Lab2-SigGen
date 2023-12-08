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

initial 
    begin
        count <= {WIDTH{1'b0}};
    end

always_ff @ (posedge clk)

    if (en) count <= count + incr;
    else count <= count;
endmodule

