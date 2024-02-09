/*
18. To check the entered value is less, equal or greater then 0 
09-10-21
Shashank Bagda
*/

#include<stdio.h>
int main()
{
	float v;
	
	printf("Enter the value : ");
		scanf ("%f",&v);
	
	if(v<0)
	{
		printf("The number is less then 0");
	}
	
	else if(v==0)
	{
		printf("The number is equal to 0");
	}
	
	else if (v>0)
	{
		printf("The number is greater then 0");	
	}
	
	return 0;

}
