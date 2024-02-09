#include<stdio.h>
int main()
{
	int no=25,r=0,t,i;
	t=no;
	for(i=1;i<no;i++)
	{
		if(no%i==0)
		{
			r=r+i;
		}
	}
	if(t==r)
	{
		printf("\n Perfect No")
	}
	else
	{
		printf("\n NOT Perfect No");
	}
	printf("%d",r);
	return 0;
}
