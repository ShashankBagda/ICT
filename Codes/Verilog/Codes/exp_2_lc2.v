// Lab Experiment 2 - Logic Circuit 2

module exp2_lc2(inA, inB, inC, inD, out);
    input inA, inB, inC, inD;
    wire w1, w2, w3, w4;
    output out;

    and(w1, inA, inB);
    not(w2, inC);
    or(w3, w2, w1);
    and(w4, w3, inD);
    not(out, w4);
    
endmodule


// Testbench 

module exp2_lc2_tb;
  reg x1=0, x2=0, x3=0, x4=0;
  wire out;
  reg [4:0] inputs; // 3-bit binary counter
  
  exp2_lc2 a(x1, x2, x3, x4, out);

  initial begin
    for (inputs = 0; inputs < 16; inputs = inputs + 1) begin
        x1 = inputs[0]; // 0th bit for x1
        x2 = inputs[1]; // 1st bit for x2
        x3 = inputs[2]; // 2nd bit for x3
        x4 = inputs[3]; // 3rd bit for x4
        #10000; // Delay of 1 second
      
        // Display inputs and corresponding outputs
        $display("x4 = %b | x3 = %b | x2 = %b | x1 = %b -> Output : %b", x4, x3, x2, x1, out);
    end
    $finish;
  end
endmodule