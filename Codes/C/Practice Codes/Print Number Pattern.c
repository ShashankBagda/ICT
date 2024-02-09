#include<stdio.h>
#define row 5
int main()
{
	int i,j,k=1;
	for(i=0;i<row;i++)
	{
		j=0;
		do
		{
			if(j!=0)
			{
			printf(" %2d ",k);
			k++;
			}
			
			j++;
		}while(j<i);
//		k++;
		printf("\n");	
	}	
	return 0;
}
