//Demo of Array

#include<stdio.h>
int main()
{
	int array[5];
	int i, max;
	for(i=0;i<5;i++)
	{
		printf("\n Enter Marks for Subject [%d] : ",i+1);
		scanf("%d",&array[i]);
		if(i==0)
		{
			max=array[i];
		}
		if(array[i]>max)
		{
			max=array[i];
		}
	}
	printf("\n Max  = %d",max);
	return 0;
}
