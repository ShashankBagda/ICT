#include<stdio.h>
int main()
{
	float a,b,Total_Amount;
	
	printf("Enter the Price = ");
	scanf("%f",&a);
	
	printf("Enter the Quantity = ");
	scanf("%f",&b);
	
	Total_Amount=a*b;
	
	if(Total_Amount<1000)
	{
		printf("NO-DISCOUNT");
	}
	
	else if(Total_Amount<2000)
	{
		printf("5% DISCOUNT = %f",((5*Total_Amount)/100)*10);
	}
	
	else if(Total_Amount<3000)
	{
		printf("10% DISCOUNT = %f",((10*Total_Amount)/100)*10);
	}
	
	else if(Total_Amount<5000)
	{
		printf("15% DISCOUNT = %f",((15*Total_Amount)/100)*10);
	}
	
	else if(Total_Amount=5000)
	{
		printf("25% DISCOUNT = %f",((25*Total_Amount)/100)*10);
	}
	
	return 0;
}
