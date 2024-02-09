#include<stdio.h>
#include<stdlib.h>
int main()
{
	//int a[100];
	int *p;
	int i;
	p = (int *)malloc(5*sizeof(int)); // void *
	for(i=0;i<5;i++)
	{
		printf("\n Enter Value at [%d] : ",i);
		scanf("%d",(p+i));
	}
	for(i=0;i<5;i++)
	{
		printf("\n p[%d] = %d",i,*(p+i));
	}
	printf("\n Value = %d", p[2]);
	printf("\n Value = %d", *(p+2));
	printf("\n Value = %d", *(&(*(p+2))));
	printf("\n Address = %u", &p[2]);
	printf("\n Address = %u", (p+2));
	printf("\n Address = %u", &(*(p+2)));
	return 0;
}
