#include<stdio.h>

void calc(int,int,int*);
int main()
{
	int i=10,j=5,ans[4];
	calc(i,j,ans);
	printf("\n add=%d \n sub=%d \n mul=%d \n div=%d",ans[0],ans[1],ans[2],ans[3]);
	return 0;
}
void calc(int a,int b,int* c)
{
	c[0]=a+b;
	*(c+1)=a-b;
	c[2]=a*b;
	c[3]=a/b;
}
