/*
60. Write a program that performs the following output for n rows
1
3 
5 6
8 9 10

Shashank Bagda
4-12-21
*/

#include<stdio.h>
int main()
{
	int i,j,k=1;
	
	for(i=0;i<4;i++)
	{
		j=0;
		do
		{
			printf("%2d  ",k);
			k++;
			j++;
		}while(j<i);
		k++;
		printf("\n");
	}
	return 0;
}
