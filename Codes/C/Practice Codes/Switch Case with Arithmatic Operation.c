#include<stdio.h>
void calc(int , int, int);
int main()
{
	calc(6,3,1);
	return 0;
}
void calc(int a, int b,int choice)
{
	switch(choice)
	{
		case 1:
				printf("\n Add = %d",a+b);
			break;
		case 2:
				printf("\n Sub = %d",a-b);
			break;
		case 3:
				printf("\n Mul = %d",a*b);
			break;
		case 4:
				printf("\n Div = %d",a/b);
			break;
		case 5:
				printf("\n Mod = %d",a%b);
			break;
		default:
				printf("\n Choice is Improper");	
	}
}

