// Lab Experiment 1 - Post Lab 2
/* The Boolean function ( x + y) ( x̄ + z) ( y+ z) is equal to which one of the following  expressions?
(a) (x + y)(y+z)          (b) (x̄ + z)(y+ z)         (c) (x + y)(x̄ + z)   (d) (x + y) (x̄ + z)
Write verilog code for given Boolean function and the answer which you have selected from options, Comment  on the output for the same.*/

module exp1_postlab2(inX, inY, inZ, out);
    input inX, inY, inZ;
    wire w1, w2, w3, w4, w5;
    output out;

    not(w1, inX);
    or(w2, w1, inZ);
    or(w3, inX, inY);
    // or(w4, inY, inZ);
    and(out, w3, w2);
    // and(out, w5, w1);
endmodule

module exp1_postlab2_tb;
  reg x1=0, x2=0, x3=0;
  wire out;
  reg [3:0] inputs; // 3-bit binXry counter
  
  exp1_postlab2 a(x1, x2, x3, out);

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