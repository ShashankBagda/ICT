// Lab Experiment 2 - Pre Lab Circuit

module exp2_prelab(inA, inB, out);
    input inA, inB;
    wire w1, w2, w3;
    output out;

    nand(w1, inA, inA);
    nand(w2, inB, inB);
    nand(w3, w2, w1);
    nand(out, w3, w3);
    
endmodule


// Testbench 

module exp2_prelab_tb;
  reg x1=0, x2=0;
  wire out;
  reg [2:0] inputs; // 3-bit binary counter
  
  exp2_prelab a(x1, x2, out);

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