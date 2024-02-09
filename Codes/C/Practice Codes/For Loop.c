//LOOP - FOR
#include<stdio.h> 
int main()
{
	int i=10,osum=0, esum=0;
	for( ; ; )
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
		if(i==0)
		{
			return;
		}
	}
	printf("\n ESUM = %d",esum);
	printf("\n OSUM = %d",osum);
	return 0;
}
	
