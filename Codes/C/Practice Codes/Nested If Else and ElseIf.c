//Nested IF ELSE
#include<stdio.h>
int main()
{
	int i=5, j=6, k=3;
	if(i>j)
	{
		if(i>k)
		{
			printf("i is MAX");
		}
		else
		{
			printf("k is Max");
		}
	}
	else
	{
		if(j>k)
		{
			printf("j is MAX");
		}
		else
		{
			printf("k is Max");
		}
	}
	
	
	
	
	/*
	if(i>j && i>k)
	{
		printf("i is MAX");
	}
	else if(j>i && j>k)
	{
		printf("j is Max");
	}
	else
	{
		printf("k is Max");
	}*/	
	return 0;
}
