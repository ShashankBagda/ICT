/*
15. To find the Simple Interest = SI = P × R × T/100
	 P = Principal, R = Rate of Interest, and T = Time period
8-10-21
Shashank Bagda
*/

#include<stdio.h>
int main()
{
	float p,r,t,z;
	
	printf("Enter the Value of Principle = ");
		scanf("%f",&p);
	
	printf("Enter the Value of Rate of Interest = ");
		scanf("%f",&r);
	
	printf("Enter the Value of Time Period = ");
		scanf("%f",&t);

z=(p*r*t)/100;
	
	printf("The Simple Interest is %.2f",z);
	
	return 0;
}
