/*
36. Print 1,11,20,28,35,41,46,50,53,55,56
Shashank Bagda
26-11-21
*/

#include<stdio.h>
int main()
{
	int a=1,b,c=0;
	
	b=10;
	c=1;
	
	for(a=1;a<12;a++)
	{
		printf("%d ",c);
		c=b+c;
		b--;	
	}	

	return 0;
}
