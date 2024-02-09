//Demo of Array
#include<stdio.h>
int main()
{
	int india_team[11];   //  array-name[size] | index 0-10
	int rgb[3]={2, 4, 6};  //Initualization
	
	printf("\n %d",rgb[1]);
	
	rgb[2]=8;
	printf("\n %d",rgb[2]);
	
	printf("\n Enter Value for Position - 0 : ");
	scanf("%d",&rgb[0]);
	printf("\n %d",rgb[0]);
	
	

	return 0;
}
