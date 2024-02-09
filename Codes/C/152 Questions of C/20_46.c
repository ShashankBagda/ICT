/*
46. Print 0 1 1 2 3 5 8 13 21 34 55 … (Fibonanci series)
Shashank Bagda
28-11-21
*/

#include<stdio.h>
int main()
{
	int fib[11];
	int i;
	
	fib[0] = 0;
	fib[1] = 1;
	
	for(i = 2; i < 11; i++)
	fib[i] = fib[i-1] + fib[i-2];
	
	for(i = 0; i < 11; i++)
	
	printf("%d\n",fib[i]);
	
	return 0;
}
