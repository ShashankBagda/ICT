/*
11. To verify t=((v+s)+(l-m)*l)
8-10-21
Shashank Bagda
*/

#include<stdio.h>
int main()
{
	int l,m,v,s,t;
	
	printf("Enter the value of l =");
		scanf("%d",&l);
	
	printf("Enter the value of m =");
		scanf("%d",&m);
	
	printf("Enter the value of v =");
		scanf("%d",&v);
	
	printf("Enter the value of s =");
		scanf("%d",&s);
	
	t=((v+s)+(l-m)*l);
	
	printf("By solving the equation t=((v+s)+(l-m)*l) we get t = %d",t);

	return 0;
}
