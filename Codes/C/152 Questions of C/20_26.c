/*
26. Write a program that take input of 5 subjects marks. 
If student get 40 or more than 40 then he is PASS in that subject otherwise FAIL 
print the result for following condition. 
If student is pass in all subjects then declare PASS. 
Is student is fail in 1 or 2 subject then declare ATKT. 
If student is fail in more then 2 subject then declare FAIL.

23-10-21
Shashank Bagda
*/

#include<stdio.h>
int main()
{
	float a,b,c,d,e,f=0;
	
	printf("Enter marks of Subject A = ");
		scanf("%f",&a);
	
	printf("Enter marks of Subject B = ");
		scanf("%f",&b);
	
	printf("Enter marks of Subject C = ");
		scanf("%f",&c);
	
	printf("Enter marks of Subject D = ");
		scanf("%f",&d);
	
	printf("Enter marks of Subject E = ");
		scanf("%f",&e);
	
	if(a>=40)
	{ 
		printf("\nYou passed Subject A");
		f++;
	}
	
	else
	{
		printf("\nYou failed Subject A");
	}
	
	if(b>=40)
	{
		printf("\nYou passed Subject B");
		f++;
	}
	
	else
	{
		printf("\nYou failed Subject B");
	}
	
	if(c>=40)
	{
		printf("\nYou passed Subject C");
		f++;
	}
	
	else
	{
		printf("\nYou failed Subject C");
	}
	
	if(d>=40)
	{
		printf("\nYou passed Subject D");
		f++;
	}
	
	else
	{
		printf("\nYou failed Subject D");
	}
	
	if(e>=40)
	{
		printf("\nYou passed Subject E");
		f++;
	}
	
	else
	{
		printf("\nYou failed Subject E");
	}
	
	if(f==5)
	{
		printf("\n\nYou Passed ALL SUBJECT");
	}
	
	else if(f>=3)
	{
		printf("\n\nYou Got ATKT");
	}
	
	else
	{
		printf("\n\nYou Failed ALL SUBJECT");	
	}
	
	return 0;
}
