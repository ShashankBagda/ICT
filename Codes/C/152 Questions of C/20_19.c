/*
19. To print Minimum and Maximum value out of 3 input value 
09-10-21
Shashank Bagda
*/

#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter the value A: ");
		scanf ("%d",&a);
	
	printf("Enter the value B: ");
		scanf ("%d",&b);
	
	printf("Enter the value C: ");
		scanf ("%d",&c);
	
	if(a<b && a<c)
	{
		printf("The smaller number is %d",a);
	}
	
	else if(b<a && b<c)
	{
		printf("The smaller number is %d",b);
	}
	
	else if(c<a && c<b)
	{
		printf("The smaller number is %d",c);
	}	
	
	if(a>b && a>c)
	{
		printf("\nThe greater number is %d",a);
	}
	
	else if(b>a && b>c)
	{
		printf("\nThe greater number is %d",b);
	}
	
	else if(c>b && c>a)
	{
		printf("\nThe greater number is %d",c);	
	}
	
	return 0;
}
