//strlen
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *str1;
	int i=0;
	str1 = (char *)malloc(sizeof(char)*20);
	
	printf("\n Enter String : ");
	scanf("%[^\n]s",str1);
	printf("\n Length = %d",strlen(str1));
	while(*(str1+i)!='\0')
	{
		i++;
	}
	printf("\n Length = %d",i);
	return 0;
}
