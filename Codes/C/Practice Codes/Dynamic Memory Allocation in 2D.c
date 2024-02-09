/*
Dynamic Memory Allocation in 2D
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int r,c,j,i;
	int **q;
	
	printf("Enter the number of Row = ");
	scanf("%d",&r);
	
	//Row Allocation
	
	q = (int **)malloc(sizeof(int *)*r);
	
	for(i=0;i<r;i++)
	{
		printf("\n How many Cols you need in Row %d = ",i);
		scanf("%d",&c);
		
		//Column Allocation
		
		*(q+i) = (int *)malloc(sizeof(int)*c);
		
		for(j=0;j<c;j++)
		{
			printf("\nEnter Value [%d][%d] = ",i,j);
			scanf("%d",(*(q+i)+j));
		}
		
	}
	
	return 0;
}
