// Lab Experiment 1 - Post Lab 1
// Equation is : AB' + C'(A + B)

module exp1_postlab1(inA, inB, inC, out);
    input inA, inB, inC;
    wire w1, w2, w3, w4, w5;
    output out;

    or(w1, inA, inB);
    not(w2, inC);
    and(w3, w1, w2);
    not(w4, inB);
    and(w5, inA, w4);
    or(out, w3, w5);
endmodule


// Testbench 

module exp1_postlab1_tb;
  reg x1=0, x2=0, x3=0;
  wire out;
  reg [3:0] inputs; // 3-bit binary counter
  
  exp1_postlab1 a(x1, x2, x3, out);

  initial begin
    for (inputs = 0; inputs < 8; inputs = inputs + 1) begin
        x1 = inputs[0]; // 0th bit for x1
        x2 = inputs[1]; // 1st bit for x2
        x3 = inputs[2]; // 2nd bit for x3
        #10000; // Delay of 1 second
      
        // Display inputs and corresponding outputs
        $display("x3 = %b | x2 = %b | x1 = %b -> Output : %b", x3, x2, x1, out);
    end
    $finish;
  end
endmodule