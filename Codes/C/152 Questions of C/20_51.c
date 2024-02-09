/*
51. Print pattern like follow. 
1
22
333
4444
55555

Shashank Bagda
28-11-21
*/

#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<6;i++)
	{
		for(j=1;j<i+1;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	
	return 0;
}
