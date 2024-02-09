// 4-Bit Ripple Carry Adder

module full_adder_4bit (input [3:0] a, input [3:0] b, input cin, output reg [3:0] sum, output reg cout);
  
    reg[2:0] c;

    always @(a or b or cin) begin
        sum[0] = a[0] ^ b[0] ^ cin;
        sum[1] = a[1] ^ b[1] ^ c[0];
        sum[2] = a[2] ^ b[2] ^ c[1];
        sum[3] = a[3] ^ b[3] ^ c[2];
    end

    always @(a or b or cin) begin
        c[0]  = (a[0] & b[0]) | (a[0] & cin) | (b[0] & cin);
        c[1]  = (a[1] & b[1]) | (a[1] & c[0]) | (b[1] & c[0]);
        c[2]  = (a[2] & b[2]) | (a[2] & c[1]) | (b[2] & c[1]);
        cout = (a[3] & b[3]) | (a[3] & c[2]) | (b[3] & c[2]);
    end

endmodule


// Testbench

module full_adder_4bit_tb;
  
  reg [3:0] a, b;
  reg cin;
  wire [3:0] sum;
  wire cout;
  reg [5:0] inputs; 

  full_adder_4bit uut(a, b, cin, sum, cout);
  
  initial begin

    $display(" Carry In |                   Input A                 |                   Input B                 |              Sum                  -> Carry Out");
    $display("   CIN    | Input A3 | Input A2 | Input A1 | Input A0 | Input B3 | Input B2 | Input B1 | Input B0 | Sum S3 | Sum S2 | Sum S1 | Sum S0 ->   COUT ");
        
    for (inputs = 0; inputs < 32; inputs = inputs + 1) begin
        a[0] = inputs[0];        b[0] = inputs[0];
        a[1] = inputs[1];        b[1] = inputs[1];
        a[2] = inputs[2];        b[2] = inputs[2];
        a[3] = inputs[3];        b[3] = inputs[3];
        cin = inputs[4];
        #100; 
      
        // Display inputs and corresponding outputs
        $display("    %b     |    %b     |     %b    |     %b    |    %b     |    %b     |     %b    |    %b     |     %b    |    %b   |    %b   |    %b   |    %b   ->     %b ", cin, a[3], a[2], a[1], a[0], b[3], b[2], b[1], b[0], sum[3], sum[2], sum[1], sum[0], cout);
    end
    $finish;
  end
endmodule