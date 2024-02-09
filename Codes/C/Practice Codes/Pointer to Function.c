/*
Pointer to function
3-12-21
Shashank Bagda
*/

#include<stdio.h>
int sum(int, int);

int main()
{
	int (*q)(int, int);
	q = &sum;
	printf("\nSum = %d",(*q)(5, 5));
	
	return 0;
}

int sum(int i, int j)
{
	return (i+j);
}
