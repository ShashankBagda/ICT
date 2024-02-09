#include<stdio.h>
int main()
{
	int i=10;
	int *p;
	int **q;
	p = &i;
	q = &p;
	
	printf("\n i = %d \n &i = %u",i,&i);
	printf("\n p = %d \n &p = %u \n *p = %d",p,&p,*p);
	printf("\n q = %d \n &q = %u \n *q = %u \n **q = %d ",q,&q,*q,**q);
	*p = 20;
	printf("\n i = %d",i);
	**q = 30;
	printf("\n *p = %d",*p);
	printf("\n i = %d",i);
	return 0;
}
