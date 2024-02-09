/*
57. Print pattern like follow. 
5
45
345
2345
12345

Shashank Bagda
4-12-21
*/

#include<stdio.h>
int main()
{
	int i,j,n=5;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",n-i+j);
		}
		printf("\n");
	}
	return 0;
}
