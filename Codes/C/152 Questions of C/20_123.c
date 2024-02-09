/* 
123. Write a C Program to convert String into float.
Shashank Bagda
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int loop;
    float rem=0;
    float k;
    char *str = (char*) malloc(10* sizeof(char));
    printf("enter string :");
    scanf("%s",str);
    for (loop = 0; str[loop]!='\0'; loop++)
  	{
        rem = rem*10 + (str[loop]-'0');
  	}
  	printf("%f",rem);
    return 0;
}
  
