// 16 x 1 MUX using 8 x 1 MUX and 2 x 1 MUX

module mux_2x1 (in1,in2,sel,out);
  input in1, in2, sel;
  output out;
  wire w1, w2, w3;

  and(w1, sel, in2);
  not(w3, sel);
  and(w2, w3, in1);
  or(out, w1, w2);

endmodule

module or_8_input (in1, in2, in3, in4, in5, in6, in7, in8, out);
  input in1, in2, in3, in4, in5, in6, in7, in8;
  output out;

  assign out = in1 | in2 | in3 | in4 | in5 | in6 | in7 | in8;

endmodule

module mux_8x1 (input [8:0] in, input [2:0] sel, output out);

    wire w1, w2, w3, w4, w5, w6, w7, w8, in1_out, in2_out, in3_out, in4_out, in5_out, in6_out, in7_out, in8_out;
    wire sel0, sel1, sel2;

    not(sel0, sel[0]);
    not(sel1, sel[1]);
    not(sel2, sel[2]);

    and(w1, in[0], sel0);
    and(w2, sel2, sel1);
    and(in1_out, w1, w2);

    and(w3, in[1], sel0);
    and(w4, sel[2], sel1);
    and(in2_out, w3, w4);

    and(w5, in[2], sel0);
    and(w6, sel2, sel[1]);
    and(in3_out, w5, w6);

    and(w7, in[3], sel0);
    and(w8, sel[2], sel[1]);
    and(in4_out, w7, w8);

    and(w9, in[4], sel[0]);
    and(w10, sel2, sel1);
    and(in5_out, w9, w10);

    and(w11, in[5], sel[0]);
    and(w12, sel[2], sel1);
    and(in6_out, w11, w12);

    and(w13, in[6], sel[0]);
    and(w14, sel2, sel[1]);
    and(in7_out, w13, w14);

    and(w15, in[7], sel[0]);
    and(w16, sel[2], sel[1]);
    and(in8_out, w15, w16);

    or_8_input a(in1_out, in2_out, in3_out, in4_out, in5_out, in6_out, in7_out, in8_out, out);
  
endmodule

module mux_16x1(input [15:0] in, input [3:0] sel, output f_out);
  wire w1, w2;

  mux_8x1 a(in[8:0], sel[2:0], w1);
  mux_8x1 b(in[15:8], sel[2:0], w2);

  mux_2x1 c(w1, w2, sel[3], f_out);
endmodule



// Testbench
module mux_16x1_using_8x1_tb;
  reg [15:0] in;
  reg [3:0] sel;
  wire out;

  mux_16x1 uut(in, sel, out);
$display(" S3, S2, S1, S0 | In0, In1, In2, In3, In4, In5, In6, In7, In8, In9, In10, In11, In12, In13, In14, In15");
    
  initial begin
    $display(" %b  %b  %b  %b |  %b   %b   %b   %b   %b   %b   %b   %b   %b   %b   %b    %b    %b    %b    %b    %b",
    sel[3], sel[2], sel[1], sel[0], in[0], in[1], in[2], in[3], in[4], in[5], in[6], in[7], in[8], in[9], in[10], in[11], in[12], in[13], in[14], in[15]);

       in = 16'h0001; sel = 4'b0000;
    #50 in = 16'h0002; sel = 4'b0001;
    #50 in = 16'h0004; sel = 4'b0010;
    #50 in = 16'h0008; sel = 4'b0011;
    #50 in = 16'h0010; sel = 4'b0100;
    #50 in = 16'h0020; sel = 4'b0101;
    #50 in = 16'h0040; sel = 4'b0110;
    #50 in = 16'h0080; sel = 4'b0111;
    #50 in = 16'h0100; sel = 4'b1000;
    #50 in = 16'h0200; sel = 4'b1001;
    #50 in = 16'h0400; sel = 4'b1010;
    #50 in = 16'h0800; sel = 4'b1011;
    #50 in = 16'h1000; sel = 4'b1100;
    #50 in = 16'h2000; sel = 4'b1101;
    #50 in = 16'h4000; sel = 4'b1110;
    #50 in = 16'h8000; sel = 4'b1111;

    $dumpfile("MUX_16x1.vcd");
    $dumpvars(1);
    #50 $finish;

  $finish();
  end
endmodule
