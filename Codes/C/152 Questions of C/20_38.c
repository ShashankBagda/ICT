/*
38. Print the total of 1 to 50.
Shashank Bagda
26-11-21
*/

#include<stdio.h>
int main()
{
	int i,b;
	
	b=0;
	for(i=0;i<51;i++)
	{
		b=i+b;
	}
	printf("The Total of 1 to 50 is %d",b);
	
	return 0;
}
