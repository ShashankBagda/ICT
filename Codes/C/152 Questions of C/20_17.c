/*
17. To find Cost of each chair
8-10-21
Shashank Bagda
*/

#include<stdio.h>
int main()
{
	float c,p;
	
	printf("Enter the Total Number of Chair = ");
		scanf("%f",&c);

	printf("Enter the Total Cost of Chair = ");
		scanf("%f",&p);
	
	printf("The Cost of Each Chair is %.2f", p/c);

	return 0;
}
