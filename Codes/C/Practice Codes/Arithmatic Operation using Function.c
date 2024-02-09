#include<stdio.h>

void calc(int,int,int*,int*,int*,int*);
int main()
{
	int i=10,j=5,add,sub,mul,div;
	calc(i,j,&add,&sub,&mul,&div);
	printf("\n add=%d \n sub=%d \n mul=%d \n div=%d",add,sub,mul,div);
	return 0;
}
void calc(int a,int b,int* c,int* d,int* e,int* f)
{
	*c=a+b;
	*d=a-b;
	*e=a*b;
	*f=a/b;
}
