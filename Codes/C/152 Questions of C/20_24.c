/*
24. Get a character from user and print tell that is it vowel or consonant.
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

	switch(ch)
	{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
				printf("\n Vowel");
			break;
		default:
			printf("\n Consonant");
	}
	return 0;
}


