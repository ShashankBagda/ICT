#include<stdio.h>
void swap(int,int);
void swap_add(int*,int*);
int main()
{
	int i=5,j=10;
	printf("\n i=%d j=%d",i,j);
	swap_add(&i,&j);
	printf("\n i=%d j=%d",i,j);
	return 0;
}
void swap_add(int* a,int* b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
	//printf("\n a=%d b=%d",*a,*b);	
}

void swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n a=%d b=%d",a,b);
}


