#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *str;
	int i,count=0,flag=0; // 0 - space | 1 - NonSpace
	str = (char *)malloc(sizeof(char)*20);
	printf("\n Enter String : ");
	scanf("%[^\n]s",str);
	
	i=0;
	while(*(str+i)!='\0')
	{
		if(*(str+i)!=' ' && flag==0)
		{
			count++;
			flag=1;
		}
		else if(*(str+i)==' ' && flag==1)
		{
			flag=0;
		}
		//printf("\n%c    %2d    %2d    %2d",*(str+i),i,flag,count);
		i++;
	}
	printf("\n Word Count = %d",count);
	return 0;
}
