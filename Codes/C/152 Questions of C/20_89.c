/*
89. Write a program that take input of  name of 10 students  with gets() and just print them with puts() function.
Shashank Bagda
*/
#include<stdio.h>  
#include <string.h>    
int main()
{    
	int i;
	char name[50][10];
	for(i=0; i<10;i++)
	{
		printf("Enter your name: ");    
		gets(name[i]);    
	}
	for(i=0;i<10;i++)
	{
		printf("Your name is: ");    
		puts(name[i]);   
	}
	return 0;   
}    
