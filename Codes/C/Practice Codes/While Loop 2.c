//LOOP - WHILE, DO..WHILE, FOR
#include<stdio.h> 
int main()
{
	int i=10,osum=0, esum=0;
	while(i>0)
	{
		if(i%2==0)
		{
			esum=esum+i;	
		}
		else
		{
			osum=osum+i;
		}
		i=i-1;
	}
	printf("\n ESUM = %d",esum);
	printf("\n OSUM = %d",osum);
	return 0;
}
	
