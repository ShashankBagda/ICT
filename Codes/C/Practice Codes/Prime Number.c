#include<stdio.h>
int main()
{
	int no=91, i, start, end=200;
	
	for(start=100;start<=end;start++)
	{
	
		for(i=2;i<start;i++)
		{
			if(start%i==0 && start%2==1)
			{
			//	printf("\n %d is NOT PRIME",start);
				break;
			}
		}
		if(i==start)
		{
			printf("\n %d is PRIME",i);
		}
	
	
	}	
	return 0;
}
