// Full Adder

module full_adder (in1, in2, cin, sum, cout);
  input in1, in2, cin;
  output sum, cout;
  wire w1;
  
  // sum output
  xor(w1, in1, in2);  
  xor(sum, cin, w1);

  // carry output
  and(w2, in1, in2);  
  and(w3, in1, cin);  
  and(w4, cin, in2);  

  or(w5, w2, w3);
  or(cout, w5, w4);
  
  endmodule


// Testbench

module full_adder_tb;
  
  reg in1, in2, cin;
  wire sum, cout;
  reg [4:0] inputs; // 4-bit binary counter
  
  full_adder a(in1, in2, cin, sum, cout);
  
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
