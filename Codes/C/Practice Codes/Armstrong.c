#include<stdio.h>
int main()
{
	int no=153,r=0,t,start=1,end=1000;
	for( ;start<=end;start++)
	{
		r=0;
		no=start;
		while(no>0)
		{
			r=r+(no%10)*(no%10)*(no%10);
			no=no/10;
		}
		if(start==r)
		{
			printf("\n %d is armstrong No",start);
		}
	}
	return 0;
}
