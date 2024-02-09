/*
58. Print pattern like follow. 
54321
4321
321
21
1

Shashank Bagda
4-12-21
*/

#include<stdio.h>
int main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
