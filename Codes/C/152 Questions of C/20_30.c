/*
30. Write a program to find maximum from 3 values using conditional operator.
24-10-21
Shashank Bagda
*/

#include<stdio.h>
int main()
{
	float a,b,c;
	
	printf("Enter the value A = ");
		scanf("%f",&a);	
	
	printf("Enter the value B = ");
		scanf("%f",&b);
	
	printf("Enter the value C = ");
		scanf("%f",&c);
	
	(a>b && a>c)? printf("Value A is maximum") : 
	(b>a && b>c)? printf("Value B is maximum") : 
	printf("Value C is maximum");
	
	return 0;
}
