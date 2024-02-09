//Array of Pointer
#include<stdio.h>
#include<stdlib.h>
#define size 5
int main()
{
	char *str[size];
	int i;
	for(i=0;i<size;i++)
	{
		str[i]=(char *)malloc(sizeof(char)*20);
		printf("\n Enter String [%d]",i);
		gets(str[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("\n String [%d] = ",i);
		puts(str[i]);
	}
	return 0;
}
