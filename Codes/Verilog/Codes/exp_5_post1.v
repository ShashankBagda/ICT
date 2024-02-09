module carryLookaheadGenerator (in1,in2,sel,out);
  input in1, in2, sel;
  output out;
  wire w1, w2, w3;

  and(w1, sel, in2);
  not(w3, sel);
  and(w2, w3, in1);
  or(out, w1, w2);

endmodule

// Testbench

module carryLookaheadGenerator (
  input [3:0] A,
  input [3:0] B,
  input cin,
  output [3:0] cout
);

  wire [3:0] P, G;

  assign P[0] = A[0] ^ B[0];
  assign G[0] = A[0] & B[0];

  for (int i = 1; i < 4; i++) begin
    assign P[i] = (A[i] ^ B[i]) & P[i-1];
    assign G[i] = A[i] & B[i] | P[i-1] & G[i-1];
  end

  assign cout[0] = cin;
  assign cout[1] = G[0] | (P[0] & cin);
  assign cout[2] = G[1] | (P[1] & G[0]) | (P[1] & P[0] & cin);
  assign cout[3] = G[2] | (P[2] & G[1]) | (P[2] & P[1] & G[0]) | (P[2] & P[1] & P[0] & cin);

endmodule
