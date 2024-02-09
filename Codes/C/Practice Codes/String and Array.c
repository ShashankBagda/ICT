#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *str = "Marwadi";
	char ch[3]={'I','C','T'};
	char *c;
	int i;
	for(i=0;*(str+i)!='\0';i++)
	{
		printf("%c",*(str+i));
	}
	
	while(*(str)!='\0')
	{
		printf("%c",*(str));
		str++;
	}
	
	c = ch;
	printf("\n%c",*(c+0));
	c++;
	printf("\n%c",*(c-1));
	printf("\n%c",*(c+0));
	printf("\n%c",*(c+1));
	return 0;
}
