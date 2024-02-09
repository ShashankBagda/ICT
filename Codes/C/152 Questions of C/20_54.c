/*
54. Print pattern like follow. 
 1
 2  3
 4  5  6
 7  8  9 10
11 12 13 14 15

Shashank Bagda
28-11-21
*/

#include<stdio.h>
int main()
{
	int i,j,k=1;
	for(i=1;i<6;i++)
	{
		for(j=1;j<i+1;j++)
		{
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}
	return 0;
}
