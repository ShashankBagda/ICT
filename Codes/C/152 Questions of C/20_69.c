/*
69. Create a user define function named ASCII which accept one argument (of character type) and display ASCII value of that character.
Shashank Bagda
*/
#include<stdio.h>
int ASCII(char);

int main()
{
	char a;
	printf("Enter character : ");
	scanf("%C", &a);
		
	ASCII(a);
	return 0;
}

int ASCII (char k)
{
	printf("ANSCII value of %c is %d", k,k);
}
