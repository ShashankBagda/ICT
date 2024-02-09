#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *str1, *str2,*str3;
	int i,j,k;
	char c;
	str1 = (char *)malloc(sizeof(char)*4);
	str2 = (char *)malloc(sizeof(char)*4);
	str3 = (char *)malloc(sizeof(char)*4);
	printf("\n Enter String : ");
	//scanf("%s",str);
	scanf("%s %s %s",str1,str2,str3);
	//gets(str);
	printf("\n String1  = %s",str1);
	printf("\n String2  = %s",str2);
	printf("\n String3  = %s",str3);
	
	scanf("%d#%d#%d",&i,&j,&k);
	printf("\n i = %d \n j = %d \n k=%d",i,j,k);

	
	
	return 0;
}
