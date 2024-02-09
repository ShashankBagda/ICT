/*
37. Print first 100 odd numbers.
Shashank Bagda
26-11-21
*/

#include<stdio.h>
int main()
{
	int i,j;
	
	printf("Enter Starting Range = ");
	scanf("%d",&i);
	
	printf("Enter Ending Range = ");
	scanf("%d",&j);
	
	do
	{
		if(i%2!=0)
		{
			printf("%d  ",i);
		}
		i++;
	}while(i<j);
	
	printf("\nHacking Complete");
		
	return 0;
}
