/* 
121. Write a C Program to print String after changing its case.
Shashank Bagda
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int loop;
    char *str = (char*) malloc(10* sizeof(char));
    printf("enter string :");
    scanf("%s",str);
    printf("Reverse of string is : ");
    for (loop = 0; str[loop]!='\0'; loop++)
  	{
  		if(str[loop] >= 'a' && str[loop] <= 'z')
  		{
  			str[loop] = str[loop] -32;
		}
		else if(str[loop] >= 'A' && str[loop] <= 'Z')
  		{
  			str[loop] = str[loop] + 32;
		}
  	}
  	printf("%s",str);
    return 0;
}
  
