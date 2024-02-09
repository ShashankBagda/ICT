/*
53. Print pattern like follow. 
1
21
321
4321
54321

Shashank Bagda
4-12-21
*/

#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
	    
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
    }
}
