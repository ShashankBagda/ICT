#include<stdio.h>

int sum(int, int);
// int - Return-type of Function
// sum - Function Name
int main()
{
	int x=10, y=20;
	printf("%d",sum(x,y)); //Function Call
	//6 and 3 are called Actual Argument
	return 0;
}
//Function Body or Definition
int sum(int a, int b)  // a and b are Formal Argument
{
	return (a+b);
}
