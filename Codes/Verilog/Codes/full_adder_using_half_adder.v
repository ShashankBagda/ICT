// Full Adder using 2 Half Adder and 1 OR Gate

module half_adder (in1, in2, sum, carry);
  input in1;
  input in2;
  output sum;
  output carry;
  
  xor(sum, in1, in2);  // sum output
  and(carry, in1, in2);  // carry output
  endmodule

module or_gate (in1,in2,out);
  input in1;
  input in2;
  output out;
  or(out,in1,in2);
endmodule

// Testbench

module full_adder_tb;
  
  reg in1, in2, cin;
  wire sum1, sum2, cout, carry1, carry2;
  reg [4:0] inputs; // 4-bit binary counter
  
  half_adder a(in1,in2,sum1,carry1);
  half_adder b(sum1,cin,sum,carry2);
  or c(cout, carry1, carry2);
  
  initial begin
    for (inputs = 0; inputs < 8; inputs = inputs + 1) begin
        in1 = inputs[0]; // 0th bit for x1
        in2 = inputs[1]; // 1st bit for x2
        cin = inputs[2]; // 2nd bit for x3
        #10000; // Delay of 1 second
      
        // Display inputs and corresponding outputs
        $display("Cin = %b | Input 2 = %b | Input 1 = %b  -> Sum : %b | Carry : %b ", cin, in2, in1, sum, cout);
    end
    $finish;
  end
endmodule
