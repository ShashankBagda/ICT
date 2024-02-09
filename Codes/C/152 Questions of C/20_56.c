/*
56. Print pattern like follow. 
z
y x
w v u
t s r q
p o n m l

Shashank Bagda
29-11-21
*/

#include<stdio.h>
int main()
{
	int i,j;
	char k='z';
	for(i=5;i>0;i--)
	{
		for(j=5;j>=i;j--)
		{
			printf("%c ",k);
			k--;
		}
		printf("\n");
	}
	return 0;
}
