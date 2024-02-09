/*
107. Write a C Program to swap two values using function and pointer. 
Shashank Bagda
*/
#include<stdio.h>
int main()
{
	int i,j;
	printf("Enter the value ");
	scanf("%d",&i);
	
	printf("Enter the value");
	scanf("%d",&j);
	i=j;
	j=i;
	printf("Before swapping: i is %d,j is %d\n",i,j);
	swap(&i,&j);
	printf("After swapping: i is %d,j is %d\n",i,j);
	
	return 0;
}
