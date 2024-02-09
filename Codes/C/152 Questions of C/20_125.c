/*
125. Write a C Program to convert input binary string into a decimal number (integer).
Shashank Bagda
*/
#include <stdio.h>
 
void main()
{
    int  num, binary_val, decimal_val = 0, base = 1, rem;
 
    printf("Enter a binary number \n");
    scanf("%d", &num); 
    binary_val = num;
    while (num > 0)
    {
        rem = num % 10;
        decimal_val = decimal_val + rem * base;
        num = num / 10 ;
        base = base * 2;
    }
    printf("The Binary number is = %d \n", binary_val);
    printf("The Decimal is = %d \n", decimal_val);
}
