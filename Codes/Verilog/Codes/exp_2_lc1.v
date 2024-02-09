// Lab Experiment 2 - Logic Circuit 1

module exp2_lc1(inA, inB, out);
    input inA, inB;
    wire w1, w2;
    output out;

    and(w1, inA, inB);
    not(w2, inB);
    or(out, w1, w2);
endmodule


// Testbench 

module exp2_lc1_tb;
  reg x1=0, x2=0;
  wire out;
  reg [3:0] inputs; // 3-bit binary counter
  
  exp2_lc1 a(x2, x1, out);

  initial begin
    for (inputs = 0; inputs < 4; inputs = inputs + 1) begin
        x1 = inputs[0]; // 0th bit for x1
        x2 = inputs[1]; // 1st bit for x2
        #10000; // Delay of 1 second
      
        // Display inputs and corresponding outputs
        $display("x2 = %b | x1 = %b -> Output : %b", x2, x1, out);
    end
    $finish;
  end
endmodule