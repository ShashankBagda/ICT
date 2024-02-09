/*
71. Write a function to count the simple interest..
Shashank Bagda
*/
#include<stdio.h>
int SIP(int,int,int);

int main()
{
	int p, r, n;
	printf("Enter p : ");
	scanf("%d", &p);
	printf("Enter r : ");
	scanf("%d", &r);
	printf("Enter n : ");
	scanf("%d", &n);
		
	printf("Simple interest is %d", SIP(p,r,n));
	return 0;
}

int SIP (int p, int r, int n)
{
	return (p*r*n)/100;
}
