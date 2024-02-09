#include<stdio.h>
#define size 5
int main()
{
	//int a[size]={7, 8 , 6, 1, 9};
	int *a;
	int temp, i,j;
	a = (int *)malloc(size*sizeof(int));
	for(i=0;i<size;i++)
	{
		printf("\n Enter Value : ");
		scanf("%d",(a+i));
	}
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(*(a+j) > *(a+i))
			{
				temp = *(a+i);
				*(a+i) = *(a+j);
				*(a+j) = temp;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		printf("%d ",*(a+i));
	}
	return 0;
}

