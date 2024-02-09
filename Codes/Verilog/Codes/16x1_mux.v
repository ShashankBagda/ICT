// 16 x 1 MUX using 2 x 1 MUX

module mux_2x1(input I0, input I1, input S, output R);
    wire W1, W2, S_bar;

    and(W1, I0, S);
    not(S_bar, S);
    and(W2, I1, S_bar);
    or(R, W1, W2);
endmodule

module mux_16x1(input [15:0] in, input [3:0] sel, output G);
    wire [16:0] y;

    mux_2x1 M1 (in[0], in[1], sel[3], y[0]);
    mux_2x1 M2 (in[2], in[3], sel[3], y[1]);
    mux_2x1 M3 (in[4], in[5], sel[3], y[2]);
    mux_2x1 M4 (in[6], in[7], sel[3], y[3]);
    mux_2x1 M5 (in[8], in[9], sel[3], y[4]);
    mux_2x1 M6 (in[10], in[11], sel[3], y[5]);
    mux_2x1 M7 (in[12], in[13], sel[3], y[6]);
    mux_2x1 M8 (in[14], in[15], sel[3], y[7]);

    mux_2x1 M9 (y[0], y[1], sel[2], y[8]);
    mux_2x1 M10 (y[2], y[3], sel[2], y[9]);
    mux_2x1 M11 (y[4], y[5], sel[2], y[10]);
    mux_2x1 M12 (y[6], y[7], sel[2], y[11]);

    mux_2x1 M13 (y[8], y[9], sel[1], y[12]);
    mux_2x1 M14 (y[10], y[11], sel[1], y[13]);

    mux_2x1 M15 (y[12], y[13], sel[0], y[14]);
    mux_2x1 M16 (y[14], 1'b0, 1'b0, G);  // Corrected line

endmodule

// Testbench
module mux_16x1_tb;
  reg [15:0] in;
  reg [3:0] sel;
  wire out;

  mux_16x1 uut(in, sel, out);

  initial begin
    $display(" S3, S2, S1, S0 | In0, In1, In2, In3, In4, In5, In6, In7, In8, In9, In10, In11, In12, In13, In14, In15");
    $monitor(" %b  %b  %b  %b |  %b   %b   %b   %b   %b   %b   %b   %b   %b   %b   %b    %b    %b    %b    %b    %b",
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
