/*
59. Print pattern like follow. 
 2  4  6  8 10
 4  6  8 10
 6  8 10
 8 10
10

Shashank Bagda
1-12-21
*/

#include<stdio.h>
int main()
{
	int i,j,k;
	
	for(i=0;i<5;i++)
	{
		for(j=i;j<5;j++)
		{
			k=(j+1)*2;
			printf("%d  ",k);
		}
		printf("\n");
	}	

	return 0;
}
