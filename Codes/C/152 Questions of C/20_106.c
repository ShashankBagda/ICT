/*
106. Write a C Program which shows the concept of the pointer.
Shashank Bagda
*/
#include<stdio.h>  
int main()
	{  
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);    
	int *a;      
	a=&n;      
	printf("Value of the variable is %d \n",*a);    
	return 0;  
}    
