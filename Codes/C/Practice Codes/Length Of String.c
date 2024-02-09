#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	
	int i;
	char *str;
	str  = (char *)malloc(sizeof(char)*20);
	
	printf("\n Enter String : ");
	scanf("%[^\n]s",str);
	
	printf("\n String  = %s",str);
	//to find length
	i=0;
	while(*(str+i)!='\0')
	{
		i++;
	}
	printf("\n String Length = %d",i);
	printf("\n String Length = %d",strlen(str));
	return 0;
}
