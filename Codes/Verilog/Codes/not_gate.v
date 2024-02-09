// NOT Gate

module not_gate (in,out);
  input in;
  output out;
  not(out,in);
endmodule

// Testbench

module not_gate_tb;
  reg in;
  wire out;
  
  not_gate uut(in,out);
  
  initial begin
  in = 0;
  #10   // Delay of 10 nanoseconds
  $display("%b",in," -> ","%b",out);
  
  in = 1;
  #10   // Delay of 10 nanoseconds
  $display("%b",in," -> ","%b",out);
  $finish();
  end
endmodule
