/*
65. Create a user define function named prime which accept one argument (of integer type) and display that the no is prime or not. (no need to return value)
Shashank Bagda
*/
#include<stdio.h>
int prime(int);

int main()
{
	int n;
	printf("Enter number :");
	scanf("%d", &n);
	
	prime(n);
	
	return 0;
}

int prime(int a)
{
	int i=1, j=0, c=0;
	while(i<=a)
	{
		if(a%i==0)
		{
			j++;
		}
		if(j>2)
		{
			c=1;
			break;
		}
		i++;
	}
	if(c==0)
	{
		printf("Number is Prime");
	}
	else if(c==1)
	{
		printf("Number is not prime");
	}
	return 0;
}
