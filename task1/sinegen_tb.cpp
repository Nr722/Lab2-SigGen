#include "Vsinegen.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#include "vbuddy.cpp"     // include vbuddy code
#define MAX_SIM_CYC 1000000
#define ADDRESS_WIDTH 8
#define ROM_SZ 256

int main (int argc, char **argv, char **ev){
  int i;
  int clk;
    
    Verilated::commandArgs(argc, argv);

    //init top verilog instance
    Vsinegen * top = new Vsinegen;

    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp,99);
    tfp->open ("Vsinegen.vcd");

    //init Vbuddy
    if(vbdOpen()!=1) return (-1);
    vbdHeader("lab 2: Sinegen");
    //initialize simulation inputs
    top->clk = 1;
    top->rst = 0;
    top->en = 1;

    for(i=0; i<MAX_SIM_CYC; i++){
        //dump values into vcd file
        for(clk=0; clk<2; clk++){
          tfp->dump (2*i+clk);
          top->clk = !top->clk;
          top->eval ();
        }
  //  top->incr = 1;
    top->incr = vbdValue(); //not sure what this does

    //plot ROM output and print cycle
    vbdPlot(int (top->dout), 0, 255);
    vbdCycle(i+1);

    // either simulation finished, or 'q' is pressed
    if ((Verilated::gotFinish()) || (vbdGetkey()=='q'))
      exit(0);                // ... exit if finish OR 'q' pressed
    }
    vbdClose(); //++++
    tfp->close();
    exit(0);
}