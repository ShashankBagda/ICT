#include<stdio.h>
#define size 3
int main()
{
	int a[5]={1,2,3,4,5};
	char c[size]={'I','C','T'}; // Character Array
	char *dept;   // Pointer to String OR Character Pointer
	
	int i;
	

	dept = (char *)malloc(sizeof(char)*10);
	printf("\n Enter String : ");
	scanf("%s",dept);
	
	i=0;
	while(dept[i]!='\0')
	{
		printf("%c",dept[i]);
		i++;
	}
	return 0;
}
