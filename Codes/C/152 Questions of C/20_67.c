/*
67. Create a user define function named power which accept two arguments (of integer type)  (i) base (ii) expon and display the base^expon value. 
Shashank Bagda
*/
#include<stdio.h>
int power(int,int);

int main()
{
	int a,b;
	
	printf("Enter base : ");
	scanf("%d", &a);
	printf("Enter power : ");
	scanf("%d", &b);
		
	printf("Answer = %d", power(a,b));
	return 0;
}

int power (int b, int e)
{
	int i, ans=1;
	for(i=1; i<=e; i++)
	{
		ans *= b; 
	}
	return ans;
}
