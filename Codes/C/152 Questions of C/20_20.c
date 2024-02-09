/*
20. Write a program that interchange or swap the values of 2 variables
11-10-21
Shashank Bagda
*/

#include<stdio.h>
int main()
{
	float a,b,c;
	
	printf("Enter the value A = ");
		scanf("%f",&a);
	
	printf("\nEnter the value B = ");
		scanf("%f",&b);
	
c = a;  
a = b; 
b = c;

printf("\nAfter swapping the entered value of A = %.2f",a);
printf("\nAfter swapping the entered value of B = %.2f",b);


	return 0;
}
