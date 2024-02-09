#include<stdio.h>
int main()
{
	int **q;
	int r,c,i,j;
	printf("\n How many rows you want : ");
	scanf("%d",&r);
	//Row Allocation
	q = (int **)malloc(sizeof(int *)*r);
	for(i=0;i<r;i++)
	{
		printf("\n How many Cols you need in Row %d : ",i);
		scanf("%d",&c);
		//Column Allocation
		*(q+i) = (int *)malloc(sizeof(int)*c);
		for(j=0;j<c;j++)
		{
			printf("\n Enter Value [%d][%d] : ",i,j);
			scanf("%d",(*(q+i)+j));
		}
	}
	
	
	
	return 0;
}
