#include<stdio.h>
int main()
{
	int i, j;
	printf("\n Enter Value of I : ");
	scanf("%d",&i);
	printf("\n Enter Value of J : ");
	scanf("%d",&j);
	
	if(i>j)
	{
		printf("\n %d is Greater than %d",i,j);
	}
	else if(j>i)
	{
		printf("\n %d is Greater than %d",j,i);
	}
	else
	{
		printf("\n %d and %d are Equal",j,i);
	}
	return 0;
}
