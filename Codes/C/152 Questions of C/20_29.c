/*
29. Write a program that determine the grade of steel according to following condition. 
1 Hardness must be greater then 50 
2 Carbon must be less then 0.7 
3 Tensile must be greater then 5500
Take the input for above qualities through keyboard from user Grades are decided as follows. 
Grade A if all 3 conditions are met. 
Grade B if condition (1) and (2) are met. 
Grade C if condition (2) and (3) are met. 
Grade D if condition (1) and (3) are met. 
Grade E if only one condition met. 
Grade F if none of conditions are met.

24-10-21
Shashank Bagda
*/

#include<stdio.h>
int main()
{
	float a,b,c,d;
	
	printf("Enter the Hardness of the Steel = ");
		scanf("%f",&a);
	
	printf("Enter the Carbon of the Steel = ");
		scanf("%f",&b);
	
	printf("Enter the Tensile of the Steel = ");
		scanf("%f",&c);
	
	if(a>50 && b<0.7 && c>5500)
	{
		printf("Your STEEL is of A GRADE");
	}
	
	else if(c>5500 && b<0.7)
	{
		printf("Your STEEL is of C GRADE");
	}
	
	else if(a>50 && b<0.7)
	{
		printf("Your STEEL is of B GRADE");
	}
	
	else if(a>50 && c>5500)
	{
		printf("Your STEEL is of D GRADE");
	}
	
	else if(a>50 || b<0.7 || c>5500)
	{
		printf("Your STEEL is of E GRADE");
	}
	
	else
	{
		printf("Your STEEL is of F GRADE");
	}
	
	return 0;
}
