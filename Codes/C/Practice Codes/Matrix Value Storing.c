//Demo of Array

#include<stdio.h>
int main()
{
	int array[3][2];  // array[row][col]
	int i,j, max;
	for(i=0;i<3;i++) //row
	{
		for(j=0;j<2;j++) //col
		{
			printf("\n Enter Value for Matrix Position [%d][%d] : ",i,j);
			scanf("%d",&array[i][j]);
			//Find MAX
			
		}
	}
	for(i=0;i<3;i++) //row
	{
		for(j=0;j<2;j++) //col
		{
			printf("%2d",array[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
