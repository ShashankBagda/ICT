/*
10. Verify the formula a=p*(1+(r/100)/n)-p
27-10-21
Shashank Bagda
*/

#include<stdio.h>
int main()
{
	float a,p,r,n;
	
	printf("To Verify the formula a=p*(1+(r/100)/n)-p\n");
	
	printf("Enter P = ");
		scanf("%f",&p);
		
	printf("Enter R = ");
		scanf("%f",&r);
		
	printf("Enter N = ");
		scanf("%f",&n);	
		
	a=p*((1+(r/100)/n)-p);
	
	printf("By solving equation a = %.2f",a);
	
	return 0;
}
