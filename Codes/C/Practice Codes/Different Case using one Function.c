/*
Do +, -, * and / using 1 function
2-12-21
Shashank Bagda
*/

#include<stdio.h>
int function(int a, int b, int flag);

int main()
{
	int a,b,flag;
	printf("Enter Value A ");
	scanf("%d",&a);
	printf("Enter Value B ");
	scanf("%d",&b);
	printf("Enter Value FLAG ");
	scanf("%d",&flag);	
	function(a,b,flag);
	return 0;
}

int function(int a, int b, int flag)
{
	switch(flag)
	{
		case 1:
		{
			printf("%d",a+b);
			break;
		}
		case 2:
		{
			printf("%d",a-b);
			break;
		}
		case 3:
		{
			printf("%d",a*b);
			break;
		}
		case 4:
		{
			printf("%d",a/b);
			break;
		}
	}
}
