/* 
119. Write a C Program to get and Print String.
Shashank Bagda
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *str = (char*) malloc(100 * sizeof(char));
    printf("Enter string :");
    scanf("%s",str);
    printf("Your string : ");
    printf("%s",str);
    return 0;
}
  
