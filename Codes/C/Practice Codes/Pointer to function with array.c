/*
+, -, * and / using pointer to function with array
3-12-21
Shashank Bagda
*/

#include<stdio.h>
int sum(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

int main()
{
	int (*q[4])(int,int);
	
	q[0]=&sum;
	q[1]=&sub;
	q[2]=&mul;
	q[3]=&div;
	
	printf("\n The Sum = %d",(*q[0])(2,3));
	printf("\n The Sub = %d",(*q[1])(2,3));
	printf("\n The Mul = %d",(*q[2])(2,3));
	printf("\n The Div = %d",(*q[3])(2,3));
	
	return 0;
}

int sum(int i, int j)
{
	return(i+j);
}

int sub(int i, int j)
{
	return(i-j);
}

int mul(int i, int j)
{
	return(i*j);
}

int div(int i, int j)
{
	return(i/j);
}
