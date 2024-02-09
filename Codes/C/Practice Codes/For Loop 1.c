//FOR LOOP
#include<stdio.h> 
int main()
{
	char i=1,osum=0, esum=0;
	for( ;i; )
	{
		if(i%2==0)
		{
			esum=esum+i;	
		}
		else
		{
			osum=osum+i;
		}
		printf("\n%d",i);
		i++;
	}
	//printf("\n ESUM = %d",esum);
	//printf("\n OSUM = %d",osum);
	return 101;
}
	
