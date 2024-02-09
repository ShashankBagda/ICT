/*
42. Accept one number from the user and display the sum of its digits.
Shashank Bagda
27-11-21
*/

#include<stdio.h>
int main()
{
	int i,j,k=0;
	printf("Enter the number : ");
	scanf("%d",&i);
	
	while(i>0)
	{
		j=i%10;
		k=k+j;
		i=i/10;
	}
	printf("The sum of number is : %d",k);
	return 0;
}
