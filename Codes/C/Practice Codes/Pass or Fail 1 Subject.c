#include<stdio.h>
int main()
{
	int a,b,c,d,e, fail=0;
	
	printf("\n Enter Subject - 1 Marks : ");
	scanf("%d",&a);
	fail = fail + ((a<40)?1:0);
	
	
	printf("\n Fail = %d",fail);
	return 0;
}
