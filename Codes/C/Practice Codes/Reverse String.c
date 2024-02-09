#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *str,*revstr;
	int i,j=0;
	str = (char *)malloc(sizeof(char)*20);
	revstr = (char *)malloc(sizeof(char)*20);
	printf("\n Enter String : ");
	scanf("%[^\n]s",str);
	
	i=0;
	while(*(str+i)!='\0')
	{
		i++;
	}
	i--;
	printf("\n Reverse String  = ");
	while(i>=0)
	{
		*(revstr+j) = *(str+i);
		printf("%c",*(str+i));
		j++;
		i--;
	}
	*(revstr+j)='\0';
	printf("\n Revstr = %s",revstr);
	return 0;
}
