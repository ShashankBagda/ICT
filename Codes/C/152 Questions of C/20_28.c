/*
28. Write a program that take input of year in 4 digit. 
Determine whether the year is leap year or not.
(try to solve this problem with && and or operator)

24-10-21
Shashank Bagda
*/

#include<stdio.h>
int main()
{
	int year,a;
	
	printf("Enter Year = ");
		scanf("%d",&year);
	
	if(year%4==0 && year<=9999)
	{
		printf("%d is a LEAP YEAR",year);
	}
	
	else 
	{
		printf("%d is Not a LEAP YEAR",year);
	}
	
	return 0;
}
