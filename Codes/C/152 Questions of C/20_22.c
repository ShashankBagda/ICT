/*
22. Write a program to check whether the entered no is odd or even.
12-10-21
Shashank Bagda
*/
#include<stdio.h>
int main()
{
    int a;
	
	printf("Enter the value = ");
		scanf("%d",&a);
	
	if(a%2==0)
	{
		printf("The entered value is EVEN");
	}
	
	else
	{
		printf("The entered value is ODD");
	}
	
	return 0;
}
