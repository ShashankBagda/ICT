/*
73. Write a function to generate the square of any given number 
Shashank Bagda
*/
#include<stdio.h>
int sqr(int);

int main()
{
	int a;
	
	printf("Enter number : ");
	scanf("%d", &a);
	printf("Square of %d is  %d",a, sqr(a));
	
	return 0;
}

int sqr (int n)
{
	return n*n;
}
