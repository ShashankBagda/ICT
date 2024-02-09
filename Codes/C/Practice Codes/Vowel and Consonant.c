#include<stdio.h>
int main()
{
	char ch;
	printf("\n Enter Character : ");
	scanf("%c",&ch);
	//Lower Case
	// if(ch>=97 && ch<=122)
	printf("\n %d %d",'a','z');
	
	if(ch>='a' && ch<='z')
	{
		ch = ch - 32;
	}
	printf("\n new Ch = %c", ch);
	
	if(ch=='A' || ch=='E' || ch=='I' || ch=='O' ||ch=='U' ) //....
	{
		printf("\n Vowel");
	}
	else
	{
		printf("\n Consonant");
	}
	return 0;
}


