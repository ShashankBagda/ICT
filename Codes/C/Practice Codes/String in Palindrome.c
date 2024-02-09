#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *str;
	int i,j=0;
	str = (char *)malloc(sizeof(char)*20);
	printf("\n Enter String : ");
	scanf("%[^\n]s",str);
	
	i=0;
	while(*(str+i)!='\0')
	{
		i++;
	}
	i--;
	while(*(str+i) == *(str+j))
	{
		i--;
		j++;
		if(j>=i)
		{
			printf("\n String is Palindrome");
			break;
		}
	}
	if(j<i)
	{
		printf("\n String is NOT Palindrome");
	}
	return 0;
}
