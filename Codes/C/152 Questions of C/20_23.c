/*
23. Get a character in lower case form user and display it in upper case.
22-10-21
Shashank Bagda
*/

#include<stdio.h>
int main()
{
	char ch;
	
	printf("\n Enter Character : ");
		scanf("%c",&ch);

	if(ch>='a' && ch<='z')
	{
		ch = ch - 32;
	}

	printf("\n New Character : %c", ch);
		
	return 0;
}
