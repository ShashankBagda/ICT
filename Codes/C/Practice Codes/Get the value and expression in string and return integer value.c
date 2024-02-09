/*
Get the value and expression in string and return integer value
Shashank Bagda
17-12-21
*/

#include<stdio.h>
int cal(int, int, char);
int expression(char *);

int main()
{
	char *exp;
	exp = (char *)malloc(sizeof(char)*10);

	printf("\nEnter Expression : ");
	scanf("%s",exp);

	printf("\n Answer = %d",expression(exp));
	return 0;
}

int expression(char *s)
{
	int a, b,i=0;
	char ch;		// + - * / %
	int sum =0;
	
	while(s[i]!=s[1])
	{
		s[i]=sum=s[i]-'0';
		no1=s[i];
		i++;
	}
	ch=s[i];
	i++;
	no2=
	return cal(a, b, ch);
}

int cal(int a, int b, char ch)
{
	switch(ch)
	{
		case '+':
			{
				return (a+b);
				break;
			}
		
		case '-':
			{
				return (a-b);
				break;
			}
		case '*':
			{
				return (a*b);
				break;
			}
		case '/':
			{
				return (a/b);
				break;
			}				
	}
}
