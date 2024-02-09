/*
25. Write a program that take input of 5 subjects marks. 
Count the percentage. 
Print the result for following condition 
If student has 70% or more then 70% then DISTINCTION. 
If student has percentage between 60 and 69 then FIRST CLASS. 
If student has percentage between 50 and 59 then SECOND CLASS. 
If student has percentage between 40 and 49 then PASS CLASS. 
If student has percentage less then 40 then FAIL.

21-10-21
Shashank Bagda
*/

#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	float f;
	
		printf("Enter the value of First Subject = ");
	scanf("%d",&a);
	
		printf("\nEnter the value of Second Subject = ");
	scanf("%d",&b);
	
		printf("\nEnter the value of Third Subject = ");
	scanf("%d",&c);
	
		printf("\nEnter the value of Fourth Subject = ");
	scanf("%d",&d);
	
		printf("\nEnter the value of Fifth Subject = ");
	scanf("%d",&e);
	
	 f=(a+b+c+d+e)/5;
	
	printf("\nYou got %.2f Percentage",f);
	
	if(f>=70 && f<=100)
	{
		printf("\nCongratulations you got DISTINCTION");
	}
	
	else if(f>=60)
	{
		printf("\nCongratulations you got FIRST CLASS");
	}
	
	else if(f>=50)
	{
		printf("\nCongratulations you got SECOND CLASS");
	}
	
	else if(f>=40)
	{
		printf("\nCongratulations you got PASS CLASS");
	}
	
	else
	{
		printf("\nSorry you FAILED");
	}
	
	return 0;
}
