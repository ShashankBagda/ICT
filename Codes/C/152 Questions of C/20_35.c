/*
35. Print 1,10,2,9,3,8,4,7,5,6
Shashank Bagda
26-11-21
*/

#include<stdio.h>
int main()
{
	int i=1,j=10;
	
	do
	{
		printf("%d ",i);
		i++;
		
		printf("%d ",j);
		j--;
	}while(i<6 && j>5);
	
	return 0;
}
