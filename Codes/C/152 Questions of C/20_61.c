/*
61. Create a user define function named sum which accept 2 arguments (of integer type) and return the sum of them. 
Shashank Bagda
*/
#include<stdio.h>
int sum(int, int);

int main()
{
	int a, b;
	
	printf("Enter a : ");
	scanf("%d", &a);
	printf("Enter b : ");
	scanf("%d", &b);
	
	printf("Sum = %d", sum(a,b));
	return 0;
}

int sum (int i, int j)
{
	return i+j;
}
