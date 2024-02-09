#include<stdio.h>
int main()
{
	int age;
	char gen;
	printf("\n Enter Your Age : ");
	scanf("%d",&age);
	if(age<18)
	{
		printf("\n Sorry ...! Try Next Year ...!");	
	}
	else
	{
		fflush(stdin);
		printf("\n Enter Your Gender (M/F) : ");
		scanf("%c",&gen);
		if(gen=='F')
		{
			printf("\n Congratulation ...! You Can ...!");
		}
		else if(age>=21 && gen=='M')
		{
			printf("\n Congratulation ...! You Can ...!");
		}
		else
		{
			printf("\n Sorry ...! Try Next Year ...!");	
		}
	}
	
	
	fflush(stdin);
	printf("\n Enter Your Gender (M/F) : ");
	scanf("%c",&gen);
	// if ( (age>=18 && gen=='F') || (age>=21 && gen=='M'))
	if(age>=18 && gen=='F')
	{
		printf("\n Congratulation ...! You Can ...!");
	}
	else if(age>=21 && gen=='M')
	{
		printf("\n Congratulation ...! You Can ...!");
	}
	else
	{
		printf("\n Sorry ...! Try Next Year ...!");
	}
	
	return 0;
}
