/*
48. Accept 2 numbers from the user and print its GCD and LCM.
Shashank Bagda
4-12-21
*/

#include<stdio.h>
int main()
{
	int i,j,gcd,lcm,n1,n2;
	printf("Enter first number : ");
	scanf("%d",&n1);
	
	printf("Enter second number : ");
	scanf("%d",&n2);
	
	i=n1;
	j=n2;
	while(n1!=n2)
	{
		if(n1>n2)
		{
			n1=n1-n2;
		}
		else
		{
			n2=n2-n1;
		}
	}
	
	lcm=i*j/n1;
	printf("GCD is %d",n1);
	printf("\nLCM is %d",lcm);
	
	return 0;
}
