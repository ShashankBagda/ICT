/*
41. Accept one number from the user and display the Reverse of it.
Shashank Bagda
27-11-21
*/

#include<stdio.h>
int main()
{
	int a,b;	
	printf("Enter the Number : ");
	scanf("%d",&a);
	
	while(a!=0)
	{
		b=b*10;
		b=b+a%10;
		a=a/10;
	}	
	printf("Reverse of the number = %d",b);
	return 0;
}
