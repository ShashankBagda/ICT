#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *str;
	int i=0,a=0,d=0,s=0;
	str  = (char *)malloc(sizeof(char)*20);
	
	printf("\n Enter String : ");
	scanf("%[^\n]s",str);
	

	while(*(str+i)!='\0')
	{
		if( (*(str+i)>='a' && *(str+i)<='z') || (*(str+i)>='A' && *(str+i)<='Z'))
		{
			a++;
		}
		else if((*(str+i)>='0' && *(str+i)<='9'))
		{
			d++;
		}
		else
		{
			s++;
		}
		i++;
	}
	printf("\n Alphabet = %d",a);
	printf("\n Digit = %d",d);
	printf("\n Space = %d",s);
	return 0;
}
