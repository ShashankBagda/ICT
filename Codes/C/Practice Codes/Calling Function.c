#include<stdio.h>

void printNo(int , int, int);
int main()
{
	printNo(10,20,30);
	return 0;
}

void printNo(int i, int j, int k)
{
	printf("%d %d %d",j,i,k);
}
