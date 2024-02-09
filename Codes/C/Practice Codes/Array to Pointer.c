#include<stdio.h>
int main()
{
	int a[5]={2,4,6,8,10};
	int *q;
	int i;
	q=a;
	printf("\n a  = %u",a);
	printf("\n &a = %u",&a);
	for(i=0;i<5;i++)
	{
		printf("\n *q = %d",*q);
		q++;
	}
	
	
	return 0;
}
