//LOOP - DO..WHILE
#include<stdio.h> 
int main()
{
	int i=10,osum=0, esum=0;
	do
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
	}while(i>0);
	
	printf("\n ESUM = %d",esum);
	printf("\n OSUM = %d",osum);
	return 0;
}
	
