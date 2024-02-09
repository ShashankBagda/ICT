#include<stdio.h>
int main()
{
	char *str="Marwadi";
	int i;
	for(i=0;(*(str+0)!='\0');i++)
	{
		printf("\n String = %10s",str);
		str++;
	}
	
	do
	{
		str--;
		printf("\n String = %10s",str);
	}while((*(str+0)!='M'));

	
	
	return 0;
}
