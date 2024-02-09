#include<stdio.h>
#define size 5
int main()
{
	int *p;
	int i;
	p = (int *)malloc(size*sizeof(int)); //void *
	for(i=0;i<size;i++)
	{
		printf("\n Enter Value at Position [%d] : ",i);
		scanf("%d",(p+i));  
	}
	for(i=0;i<size;i++)
	{
		printf("\n p[%d] = %d",i,*(p+i));
	}
	free(p);
	return 0;
}
