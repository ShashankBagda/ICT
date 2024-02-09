#include<stdio.h>
int main()
{
	int i=10;
	int *p;
	int **q;
	
	p = &i;
	q = &p;
	
	printf("\n  i = %d \t  p = %u \t   q = %u",i,p,q);
	printf("\n &i = %u \t &p = %u \t  &q = %u",&i,&p,&q);
	printf("\n         \t *p = %d \t  *q = %u",*p,*q);
	printf("\n         \t         \t **q = %d",**q);
	
	return 0;
}
