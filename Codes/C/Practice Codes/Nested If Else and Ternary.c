#include<stdio.h>
int main()
{
	int a=25, b=13, c=7;
	if(a>b && a>c)
	{
		printf("\n a is Max");
	}
	else if(b>a && b>c)
	{
		printf("\n b is Max");
	}
	else
	{
		printf("\n c is Max");
	}
	//Ternary or Conditional Operator
	(a>b && a>c)
	? printf("\n a is Max") 
	:(b>a && b>c)
		?printf("\n b is Max")
		:printf("\n c is Max");
		
		
	return 0;
}
