/*
43. Accept one number from the user and display its factorial form.
Shashank Bagda
27-11-21
*/

#include<stdio.h>
int main()
{
	int a,b,c=1;
	
	printf("Enter the number : ");
	scanf("%d",&b);
	for(a=1;a<=b;a++)
	{
		c=c*a;
	}
	printf("Factorial of %d = %d",b,c);
	return 0;
}
