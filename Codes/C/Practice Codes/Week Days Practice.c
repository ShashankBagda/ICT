#include<stdio.h>
int main()
{
	int a;
	
	printf("Enter Number = ");
	scanf("%d",&a);
	
	switch (a)
	{
		case 1:
			printf("MONDAY");
		break;
		
		case 2:
			printf("TUESDAY");
		break;
		
		case 3:
			printf("WEDNESDAY");
		break;
		
		case 4:
			printf("THURSDAY");
		break;
		
		case 5:
			printf("FRIDAY");
		break;
		
		case 6:
			printf("SATURDAY");
		break;
		
		case 7:
			printf("SUNDAY");
		break;	
		
		default:
			printf("ENTER DAY OF WEK IN RANGE OF 1 TO 7 ONLY");
	}
	
	
	return 0;
}
