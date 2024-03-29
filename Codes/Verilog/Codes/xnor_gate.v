// XNOR Gate

module xnor_gate (in1,in2,out);
  input in1;
  input in2;
  output out;
  xnor(out,in1,in2);
endmodule

// Testbench

module xnor_gate_tb;
  reg in1;
  reg in2;
  wire out;
  
  xnor_gate uut(in1,in2,out);
  
  initial begin
  in1 = 0;
  in2 = 0;
  #10   // Delay of 10 nanoseconds
  $display("%b",in1," - ","%b",in2," -> ","%b",out);
  
  in1 = 0;
  in2 = 1;
  #10   // Delay of 10 nanoseconds
  $display("%b",in1," - ","%b",in2," -> ","%b",out);
  
  in1 = 1;
  in2 = 0;
  #10   // Delay of 10 nanoseconds
  $display("%b",in1," - ","%b",in2," -> ","%b",out);
  
  in1 = 1;
  in2 = 1;
  #10   // Delay of 10 nanoseconds
  $display("%b",in1," - ","%b",in2," -> ","%b",out);
  
  $finish();
  end
endmodule

