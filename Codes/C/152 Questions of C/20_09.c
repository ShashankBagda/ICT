/*
9. Verify the formula s=((4*a+c)-2*a*b)/100
27-10-21
Shashank Bagda
*/

#include<stdio.h>
int main()
{
	float s,a,c,b;
	
	printf("To Verify the formula s=((4*a+c)-2*a*b)/100\n");
	
	printf("Enter A = ");
		scanf("%f",&a);
		
	printf("Enter C = ");
		scanf("%f",&c);
		
	printf("Enter B = ");
		scanf("%f",&b);	
		
	s=((4*a+c)-(2*a*b))/100;
	
	printf("By solving equation s = %.2f",s);
		
	return 0;
}
