// Experiment 4 - Post Lab Task 2

module mux_2x1 (in1,in2,sel,out);
  input in1, in2, sel;
  output out;
  wire w1, w2, w3;

  and(w1, sel, in2);
  not(w3, sel);
  and(w2, w3, in1);
  or(out, w1, w2);

endmodule

// Testbench
module mux_2x1_tb;
  reg inA, inB, inC;
  wire not_C, outE, out;
  reg [5:0] inputs;

  not(not_C, inC);
  mux_2x1 a(inC, not_C, inB, outE);
  mux_2x1 b(, inA, outE, out);

  initial begin

    for (inputs = 0; inputs < 8; inputs = inputs + 1) begin
        inA = inputs[0];       
        inB = inputs[1];       
        inC = inputs[2];       
        #100; 
      
        // Display inputs and corresponding outputs
        $display("A = %b | B = %b | C = %b | C' = %b | E = %b | F = %b",inA, inB, inC, not_C, outE, out);
    end
  $finish();
  end
endmodule