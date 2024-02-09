/*
47. Generate the value of n! factorial for n number
Shashank Bagda
4-12-21
*/

#include<stdio.h>
int main()
{
	int i,n,f=1;
		printf("ENTER THE VALUE : ");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			f=f*i;
			printf("\nTHE FACTORIAL OF %d IS %d",i,f);
		}
	return 0;
}
