/*
27. Write a program that count the area for circle, square, rectangle 
and triangle using switch-case control structure.
28-10-21
Shashank Bagda
*/

#include<stdio.h>
int main()
{
int a;

printf("Area of Circle - Enter 1\n Area of Square - Enter 2\n Area of Rectangle - Enter 3\n Area of Triangle - Enter 4\n Enter Value = ");
	scanf("%d",&a);
		
	switch(a)
	{
	//
		case 1:
		{
		float b;
		printf("Enter the Radius = ");
			scanf("%f",&b);
			
		printf("Area of Circle = %.2f",3.14*b*b);
		}
		break;
	//
		case 2:
		{
		float c;
		printf("Enter the Length = ");
			scanf("%f",&c);
			
		printf("Area of Square = %.2f",c*c);
		}
		break;
	//	
		case 3:
		{
		float d,e;
	
		printf("Enter the Length of Rectangle = ");
			scanf("%f",&d);
		
		printf("Enter the Breath of Rectangle = ");
			scanf("%f",&e);	
		
		printf("Area of Rectangle = %.2f",d*e);
		}
		break;
	//	
		case 4:
	
		{
		float f,g;
		
		printf("Enter the Height of Triangle = ");
			scanf("%f",&f);
		
		printf("Enter the Base of Triangle = ");
			scanf("%f",&g);
			
		printf("Area of Triangle = %.2f",0.5*g*f);
		}
	
		break;
		
	}	
	
	return 0;
}
