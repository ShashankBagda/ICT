#include<stdio.h>
int main()
{
	int a;
	printf("Enter your age = ");
	scanf("%d",&a);
	
	if(a>=18)
	{
		printf("ELIGIBLE for Voting");
	}
		
	else
	{
		printf("After %d years you will be eligible for Voting",18-a);
	}
		
	
	
	
	return 0;
}
