// Dataflow Model of Full Subtractor

module full_subtractor(A, B, Bin, Diff, Bout);
    input A, B, Bin;
    output Diff, Bout;
    wire w1;

    // Difference
    assign Diff = A ^ B ^ Bin;

    // Borrow
    assign Bout = (~A & B) | (~A & Bin) | (B & Bin);
endmodule


// Testbench

module full_subtractor_tb;
  
  reg in1, in2, Bin;
  wire Diff, Bout;
  reg [4:0] inputs; // 4-bit binary counter
  
  full_subtractor a(in1, in2, Bin, Diff, Bout);
  
  initial begin
    for (inputs = 0; inputs < 8; inputs = inputs + 1) begin
        Bin = inputs[0]; // 0th bit for x1
        in2 = inputs[1]; // 1st bit for x2
        in1 = inputs[2]; // 2nd bit for x3
        #10000; // Delay of 1 second
      
        // Display inputs and corresponding outputs
        $display("Input 1 = %b | Input 2 = %b | Bin = %b  -> Difference : %b | Borrow : %b ", in1, in2, Bin, Diff, Bout);
    end
    $finish;
  end
endmodule
