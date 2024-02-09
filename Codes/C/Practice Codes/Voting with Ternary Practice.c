#include<stdio.h>
int main()
{
	int a;
	printf("Enter your age = ");
	scanf("%d",&a);
	
	(a>=18)? 	printf("ELIGIBLE for Voting") : 
	printf("After %d years you will be eligible for Voting",18-a);  ;
	
	
	return 0;
}
