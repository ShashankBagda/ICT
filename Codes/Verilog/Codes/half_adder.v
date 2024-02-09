// Half Adder

module half_adder (in1, in2, out1, out2);
  input in1;
  input in2;
  output out1;
  output out2;
  
  xor(out1, in1, in2);  // sum output
  and(out2, in1, in2);  // carry output
endmodule

// Testbench

module half_adder_tb;
  
  reg in1;
  reg in2;
  wire out1;
  wire out2;
  
  half_adder uut(in1,in2,out1,out2);
  
  initial begin
  
  in1 = 0;
  in2 = 0;
  #10   // Delay of 10 nanoseconds
  $display("%b",in1," - ","%b",in2," -> "," sum - ","%b",out1," carry - ","%b",out2);

  in1 = 0;
  in2 = 1;
  #10   // Delay of 10 nanoseconds
  $display("%b",in1," - ","%b",in2," -> "," sum - ","%b",out1," carry - ","%b",out2);

  in1 = 1;
  in2 = 0;
  #10   // Delay of 10 nanoseconds
  $display("%b",in1," - ","%b",in2," -> "," sum - ","%b",out1," carry - ","%b",out2);

  in1 = 1;
  in2 = 1;
  #10   // Delay of 10 nanoseconds
  $display("%b",in1," - ","%b",in2," -> "," sum - ","%b",out1," carry - ","%b",out2);
  
  $finish();
  end
endmodule
