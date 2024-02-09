#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *str1,*str2,*str3;
	int i=0,j=0;
	str1  = (char *)malloc(sizeof(char)*20);
	str3  = (char *)malloc(sizeof(char)*20);
	printf("\n Enter Full Name : ");
	scanf("%[^\n]s",str1);
	
	while(*(str1+i)!=' ')
	{
		i++;
	}
	*(str1+i)='\0';
	str2=(str1+i+1);
	
	printf("\n Name : %s",str1);
	printf("\n SurName : %s",str2);
	
	i=0;
	while(*(str1+i)!='\0')
	{
		*(str3+i) = *(str1+i);
		i++;
	}
	*(str3+i)=' ';
	i++;
	j=0;
	while(*(str2+j)!='\0')
	{
		*(str3+i) = *(str2+j);
		i++;
		j++;
	}
	*(str3+i)='\0';
	printf("\n FULL Name : %s",str3);
	return 0;
}
