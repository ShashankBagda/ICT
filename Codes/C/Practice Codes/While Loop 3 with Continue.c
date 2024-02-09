//Demo of Continue
#include<stdio.h>
int main()
{
	int i=0;
	while(i<10)
	{
		if(i%2!=0)
		{
			i++;
			continue;
		}
		printf("\n%d is Even",i);
		i++;
		
	}
	return 0;
}
