// 2-bit Ripple Carry Adder (Behavioral Modeling)

module ripple_carry_adder(
    input [1:0] A, B,   // 2-bit inputs
    input Cin,          // Carry in
    output [1:0] Sum,   // 2-bit sum
    output Cout         // Carry out
    );

    assign {Cout, Sum} = A + B + Cin; // Ripple carry addition
    
endmodule

// Test Bench for 2-bit Ripple Carry Adder

module testbench_ripple_carry_adder;

    // Inputs
    reg [1:0] A, B;
    reg Cin;
    
    // Outputs
    wire [1:0] Sum;
    wire Cout;

    reg [3:0] inputs; 
    
    // Instantiate the ripple carry adder
    ripple_carry_adder uut (
        .A(A),
        .B(B),
        .Cin(Cin),
        .Sum(Sum),
        .Cout(Cout)
    );
    
    // Stimulus
    initial begin
        $display("Test Bench for 2-bit Ripple Carry Adder");
        $display("A  B  Cin | Sum  Cout");
        // Loop for multiple test cases
        for (inputs = 0; inputs < 8; inputs = inputs + 1) begin
        A = inputs[0];        
        B = inputs[1];      
        Cin = inputs[2];
        #100; 
      
        // Display inputs and corresponding outputs
        $display("%b  %b  %b  | %b  %b", A, B, Cin, Sum, Cout);
        end
        
        // End simulation
        $finish;
    end
    
endmodule
