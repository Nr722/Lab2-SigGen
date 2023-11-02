module sigdelay #(
    parameter   A_WIDTH = 8,
                D_WIDTH = 8
)(
    //interface signals
    input logic clk,
    input logic rst,
//    input logic en,
    input logic wr,
    input logic rd,
    input logic [D_WIDTH-1:0] mic_signal,
    //input logic wr_addr,
    //input logic rd_addr,
    input logic [D_WIDTH-1:0] offset,
    input logic count1,
    input logic count2,
    output logic [D_WIDTH-1:0] delayed_signal
    
);

    logic [A_WIDTH-1:0] address1; //interconnect wire
    logic [A_WIDTH-1:0] address2;

counter addrCounter(
    .clk (clk),
    .rst (rst),
    .offset(offset),
    .count1 (address1),
    .count2 (address2)
);

ram sineRom (
    .clk (clk),
    .wr_en (wr),
    .rd_en (rd),
    .din (mic_signal),
    .wr_addr (address1),
    .rd_addr (address2),
    .dout (delayed_signal)
);
endmodule
