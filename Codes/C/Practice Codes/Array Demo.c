//Demo of Array
#include<stdio.h>
int main()
{
	int array[5]={3,6,1,8,5};
	int i;
	int sum=0;
	//Get Values for Array
	for(i=0;i<5;i++)
	{
		printf("\n Enter Value at Position %d : ",i);
		scanf("%d",&array[i]);
	}
	
	for(i=0;i<5;i++)
	{
		sum = sum + array[i];
	}
	printf("\n SUM  = %d",sum);
	
	return 0;
}
