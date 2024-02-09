//Merge String
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *str1;
	char *str2;
	int i=0,j=0;
	
	str1 = (char *)malloc(sizeof(char)*20);
	str2 = (char *)malloc(sizeof(char)*20);
	
	printf("\n Enter String 1 : ");
	scanf("%[^\n]s",str1);
	fflush(stdin);
	printf("\n Enter String 2 : ");
	scanf("%[^\n]s",str2);

	while(*(str1+i)!='\0')
	{
		i++;
	}
	while(*(str2+j)!='\0')
	{
		*(str1+i) = *(str2+j);
		i++;
		j++;
	}
	*(str1+i)='\0';
	printf("\n Merged String = %s",str1);
	return 0;
}
