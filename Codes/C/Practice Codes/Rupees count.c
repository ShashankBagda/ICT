#include<stdio.h>
int main()
{
	int amount=216;
	
	printf("\n 10 X %d = %d",amount/10,10*(amount/10));
	amount = amount % 10;
	
	printf("\n 5 X %d = %d",amount/5,5*(amount/5));
	amount = amount % 5;
	
	printf("\n 2 X %d = %d",amount/2,2*(amount/2));
	amount = amount % 2;
	
	printf("\n 1 X %d = %d",amount,amount);
	
	return 0;
}
