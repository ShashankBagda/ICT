/*
63. Create a user define function named evenodd which accept one argument (of integer type) and return if the number is even or odd.
Shashank Bagda
*/

#include<stdio.h>
int evenodd(int);

int main()
{
	int a;
	
	printf("Enter number : ");
	scanf("%d", &a);
	evenodd(a);
	return 0;
}

int evenodd (int i)
{
	if(i%2==0)
	{
		printf("Number is even");
	}
	else
	{
		printf("Number is odd");
	}
}
