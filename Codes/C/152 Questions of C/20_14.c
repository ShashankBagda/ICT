/*
14. Verify the formula c=(a+b)*(a+b)
27-10-21
Shashank Bagda
*/

#include<stdio.h>
int main()
{
	float a,b,c;
	
	printf("To Verify the formula c=(a+b)*(a+b)\n");
	
	printf("Enter A = ");
		scanf("%f",&a);
		
	printf("Enter B = ");
		scanf("%f",&b);
		
c=((a+b)*(a+b));

	printf("By solving equation C = %.2f",c);

	return 0;
}
