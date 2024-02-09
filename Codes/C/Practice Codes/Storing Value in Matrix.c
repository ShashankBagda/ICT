#include<stdio.h>
#include<stdlib.h>
int main()
{
	int **q;
	int r=4,c,i,j;
	
	q = (int **)malloc(sizeof(int *)*r);
	
	for(i=0;i<r;i++)
	{
		printf("\n Enter Column : ");
		scanf("%d",&c);
		*(q+i) = (int *)malloc(sizeof(int)*c);
		for(j=0;j<c;j++)
		{
			printf("\n Enter Value [%d][%d] = ",i,j);
			scanf("%d",(*(q+i)+j));
		}
	}
	
	return 0;
}
