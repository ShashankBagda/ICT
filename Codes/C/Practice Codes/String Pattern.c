#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char *str;
	int i;
	
	str = (char *)malloc(sizeof(char)*20);
	
	printf("\n Enter String : ");
	scanf("%s",str);
	
	printf("\n String  = %s",str);
	printf("\n");
	for(i=0;*(str+i)!='\0';i++)
	{
		printf("\n%*.*s",20,i+1,str);	
	}
	
	return 0;
}
