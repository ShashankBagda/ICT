/*
76. Write a function to print any character for n no of time.
Shashank Bagda
*/
#include<stdio.h>
int chr(int);

int main()
{
	int a;
	printf("Enter n:");
	scanf("%d",&a);
	chr(a);
}

int chr(int n)
{
	if(n == 0)
	{
		return 0;
	}
	printf("a\n",chr(n-1));
}
