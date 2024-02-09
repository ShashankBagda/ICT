#include<stdio.h>
int main()
{
	char c='U';
	switch(c)
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

