/*
8. To verify x=((k-4)*(a*4))/100
8-10-21
Shashank Bagda
*/

#include<stdio.h>
int main()
{
	int x,k,a;
	
printf("To verify x=((k-4)*(a*4))/100\n");
	
	printf("Enter the value of k =");
		scanf("%d",&k);
	
	printf("Enter the value of a =");
		scanf("%d",&a);
 
 x=((k-4)*(a*4))/100;
 
	printf("By solving the equation x=((k-4)*(a*4))/100 we get x = %d",x);

	return 0;
}
