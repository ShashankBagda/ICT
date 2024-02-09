/*
21. Write a program to interchange the value of 2 variable without using 3rd variable
11-10-21
Shashank Bagda
*/

#include<stdio.h>
int main()
{
	int a,b;
	
	printf("Enter the value A = ");
		scanf("%d",&a);
	
	printf("\nEnter the value B = ");
		scanf("%d",&b);

	a = a ^ b;
	b = b ^ a;
	a = a ^ b;

printf("\nAfter swapping the entered value of A = %d",a);
printf("\nAfter swapping the entered value of B = %d",b);
	
	return 0;
}
