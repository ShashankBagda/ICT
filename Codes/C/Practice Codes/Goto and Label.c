//Demo of Goto and Label
#include<stdio.h>
int main()
{
	int i=0;
	kapil:
		
		printf("\n %d",i+1);
		i++;
		if(i<10)
		{
			goto kapil;
		}
	printf("\n Program Done");
	return 0;
}
