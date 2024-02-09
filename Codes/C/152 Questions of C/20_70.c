/*
70. Create a user define function named CHR which accept one argument (of integer type) and display character of that ASCII value.
Shashank Bagda
*/
#include<stdio.h>
int CHR(int);

int main()
{
	int a;
	printf("Enter number : ");
	scanf("%d", &a);
		
	CHR(a);
	return 0;
}

int CHR (int k)
{
	printf("ANSCII character of %d is %c", k,k);
}
