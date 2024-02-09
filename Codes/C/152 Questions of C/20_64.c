/*
64. Create a user define function named fact which accept one argument (of integer type) and return the factorial of given number.
Shashank Bagda
*/
#include<stdio.h>
int fact(int);

int main()
{
	int a;
	printf("Enter nmber : ");
	scanf("%d", &a);
		
	printf("Factorial = %d", fact(a));
	return 0;
}

int fact (int k)
{
	int i, factorial=1;
	for(i=1; i<=k;i++)
	{
		factorial = factorial*i;
	}
	return factorial;
}
