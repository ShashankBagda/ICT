/*
120. Write a C Program to print String in reverse order.
Shashank Bagda
*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int n,loop;
    char *str = (char*) malloc(10* sizeof(char));
    printf("Enter string :");
    scanf("%s",str);
    n=strlen(str);
    printf("Reverse of string is : ");
    for(loop=n-1;loop>=0;loop--)
    {
       printf("%c",str[loop]);
    }
    return 0;
}
  
