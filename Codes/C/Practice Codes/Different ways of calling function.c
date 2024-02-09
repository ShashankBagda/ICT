#include<stdio.h>
int sum(int , int );

int main()
{
	int i=10, j= 20, k;
	printf("\n %d",sum(2,4));
	printf("\n %d",sum(i,j));
	printf("\n %d",sum(i,10));
	k = sum(2,2);
	printf("\n %d",k);
	return 0;
}

int sum(int a, int b)
{
	return (a+b);
}
