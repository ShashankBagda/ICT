/*
55. Print pattern like follow. 
1
01
010
1010
10101

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
			printf("%d ",k%2);
			k++;
		}
	
		printf("\n");	
	}
	return 0;
}
