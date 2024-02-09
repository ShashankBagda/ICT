#include<stdio.h>
int main()
{
	int a=5, b=3;
	if(a>b)
	{
		printf("\n a is Max");
	}
	else
	{
		printf("\n b is Max");
	}
	//Ternary or Conditional Operator
	(a>b) ? printf("\n a is Max") : printf("\n b is Max");
	return 0;
}
