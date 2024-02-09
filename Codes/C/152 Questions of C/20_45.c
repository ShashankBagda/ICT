/*
45. Accept one number from the user and find if it is Armstrong or not.
Shashank Bagda
4-12-21
*/

#include<stdio.h>
int main()
{
	int a,b,ans,i;
	printf("ENTER ANY NUMBER : ");
	scanf("%d",&b);
	i=b;
	
	while(b>0)
	{
		a=b%10;
		ans=ans+(a+a+a);
		b=b/10;
	}
	if(i==ans)
	{
		printf("%d IS ARMSTRONG NUMBER",i);
	}
	else
	{
		printf("%d IS NOT ARMSTRONG NUMBER",i);
	}
	return 0;
}
