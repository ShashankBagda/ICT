/*
49. Print pattern like follow. 
1  2  3  4  5
2  4  6  8 10
3  6  9 12 15
4  8 12 16 20
5 10 15 20 25

Shashank Bagda
28-11-21
*/

#include<stdio.h>
int main()
{
	int i,r=1,v;
	
	for(i=1;i<6;i++)
	{
		for(r=1;r<6;r++)
		{
			printf("%d  ",i*r);
		}
		printf("\n");
	}
	
	return 0;
}
