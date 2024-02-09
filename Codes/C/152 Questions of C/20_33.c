/*
33. Print 1,2,4,8,16,32,64,
Shashank Bagda
26-11-21
*/

#include<stdio.h>
int main()
{
	int i=1;
	
	do
	{
		printf("%d  ",i);
		i = i*2;
	}while(i<65);
	
	return 0;
}
