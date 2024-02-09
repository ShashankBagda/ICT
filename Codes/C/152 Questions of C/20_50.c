/*
50. Print pattern like follow. 
A A A A A
B B B B B 
C C C C C
D D D D D
E E E E E

Shashank Bagda
28-11-21
*/

#include<stdio.h>
int main()
{
	char i,j;
	for(i='A';i<'F';i++)
	{
		for(j='A';j<'F';j++)
		{
			printf("%c",i);
		}
		printf("\n");
	}
	return 0;
}
