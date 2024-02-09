#include<stdio.h>
int main()
{
	int i;
	
	printf("Enter the value of Month = ");
	scanf("%d",&i);
	
	switch(i)
	{
		case 4:
		case 6:
		case 9:
		case 11:
			printf("It has 30 Days");
		break;
		case 2:
			printf("It has 28 Days");
		break;
		default: 
			printf("It has 31 Days");
	}
	
	return 0;
}
