/*
82. Write a function to interchange the two value a and b (Call By Reference) witch passes the 2 arguments in form 
of address of a and b variable with declaration like Void swap(int *, int *).
Shashank Bagda
*/
#include <stdio.h>
void swap(int *, int *);

int main(void)
{
	int I, a,b;
	printf("Enter A:");
	scanf("%d",&a);
	printf("Enter B:");
	scanf("%d",&b);	
	swap(&a,&b);
	printf("A = %d and B = %d", a,b);
	return 0;

}

void swap(int *x, int *y)
{
	int temp;
	
	temp=*x;
	*x=*y;
	*y=temp;
}
