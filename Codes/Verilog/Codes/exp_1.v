// Experiment 1

// Write the Verilog code to implement given logic functions using continuous assignments.  

// g= x1x3 + x2x4
// h = (x1 + x3 bar)(x2bar + x4)
// f = g + h

module and_gate (in1,in2,out);
  input in1;
  input in2;
  output out;
  and(out,in1,in2);
endmodule

module or_gate (in1,in2,out);
  input in1;
  input in2;
  output out;
  or(out,in1,in2);
endmodule

module not_gate (in,out);
  input in;
  output out;
  not(out,in);
endmodule

// Testbench

module and_gate_tb;
  reg x1=0, x2=0, x3=0, x4=0;
  wire g_out, h_out, f_out, out1, out2, x3_bar, x2_bar, out3, out4;
  reg [4:0] inputs; // 4-bit binary counter
  
  and_gate a(x1, x3, out1);
  and_gate b(x2, x4, out2);
  or_gate c(out1, out2, g_out);
  
  not_gate d(x3, x3_bar);
  not_gate e(x2, x2_bar);
  
  or_gate f(x1, x3_bar, out3);
  or_gate g(x2_bar, x4, out4);
  and_gate h(out3, out4, h_out);
  
  or_gate i(g_out, h_out, f_out);
  
  initial begin
    for (inputs = 0; inputs < 16; inputs = inputs + 1) begin
        x1 = inputs[0]; // 0th bit for x1
        x2 = inputs[1]; // 1st bit for x2
        x3 = inputs[2]; // 2nd bit for x3
        x4 = inputs[3]; // 3rd bit for x4
        #10000; // Delay of 1 second
      
        // Display inputs and corresponding outputs
        $display("x4 = %b | x3 = %b | x2 = %b | x1 = %b | x2_bar = %b | x3_bar = %b -> G_Out: %b | H_Out: %b | F_Out: %b", x4, x3, x2, x1, x2_bar, x3_bar, g_out, h_out, f_out);
    end
    $finish;
  end
endmodule