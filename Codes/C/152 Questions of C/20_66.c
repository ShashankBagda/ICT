/*
66. Create a user define function named triangle which accept one argument (of integer type) and display a triangle like. (If you have given 4 as argument)
1
1 2
1 2 3
1 2 3 4
Shashank Bagda
*/

#include<stdio.h>
int triangle(int);

int main()
{
	int a;
	printf("Enter number : ");
	scanf("%d", &a);
		
	triangle(a);
	return 0;
}

int triangle (int k)
{
	int i,j, factorial=1;
	for(i=1; i<=k;i++)
	{
		for(j=1; j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
