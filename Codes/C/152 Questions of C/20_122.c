/* 
122. Write a C Program to convert String into an integer.
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
    for (loop = 0; str[loop]!='\0' && str[loop]!='.' ; loop++)
  	{
        printf("%d",str[loop]-'0');
  	}
    return 0;
}
  
