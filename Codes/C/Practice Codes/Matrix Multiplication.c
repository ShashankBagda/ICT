#include<stdio.h>
#define rMax 3
#define cMax 2
int main()
{
	int mat[2][3];  // array-name[row][col]
	int m1[cMax][rMax] = {{1,2,3},{4,5,6}};
	int m2[rMax][cMax] = {{1,2},{3,4},{5,6}};
	
	int m3[cMax][cMax];
	int i,j,k;
	for(i=0;i<cMax;i++)
	{
		for(j=0;j<cMax;j++)
		{
			//m3[i][j]=0;
			*(*(m3+i)+j) = 0;
			for(k=0;k<rMax;k++)
			{
				//m3[i][j] = m3[i][j] + (m1[i][k]*m2[k][j]);
				*(*(m3+i)+j) = *(*(m3+i)+j) + (*(*(m1+i)+k) * *(*(m2+k)+j));
			}
		}
	}
	for(i=0;i<cMax;i++)
	{
		for(j=0;j<cMax;j++)
		{
			printf("%3d ",*(*(m3+i)+j));
		}
		printf("\n");
	}
	return 0;
}
/*

m1[2][3] = {  {1,2,3},
			{4,5,6}};
m2[3][2] = {  {1,2}, 
			{3,4}, 
			{5,6}};
m3
[ (1*1)+(2*3)+(3*5), (1*2)+(2*4)+(3*6) ]
[ (4*1)+(5*3)+(6*5), (4*2)+(5*4)+(6*6) ]
*/






