/*
44. Accept one number from the user and find if it is prime or not.
Shashank Bagda
4-12-21
*/

#include<stdio.h>
int main()
{
	int i,j=1,n;
	printf("ENTER ANY NUMBER : ");
	scanf("%d",&n);
	
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			j++;
		}
	}
		if(j==2)
		{
			printf("%d IS PRIME NUMBER",n);
		}
		else
		{
			printf("%d IS NOT PRIME NUMBER",n);
		}
	
	return 0;
}
