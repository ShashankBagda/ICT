#include<stdio.h>
int main()
{
	float Weekly_Hours, Weekly_Rate;
	
	printf("Enter Total number of Weekly_Hours = ");
	scanf("%f",&Weekly_Hours);
	
	printf("Enter Total number of Weekly_Rate = ");
	scanf("%f",&Weekly_Rate);
	
	if(Weekly_Hours<=40)
	{
	
		printf("\nEarnings = %f",Weekly_Hours*Weekly_Rate);
		
	}
	else
	{
	
		printf("\nEarnings = %f", (Weekly_Hours*Weekly_Rate) + ((0.5*Weekly_Rate)*(Weekly_Hours-40)) );
	
	}	
	return 0;
}
