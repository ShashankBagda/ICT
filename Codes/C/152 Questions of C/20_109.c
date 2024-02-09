/* 
109. Write a C Program to arrange the array values in reverse order.
Shashank Bagda
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,j,a=0,c;
    printf("how many numbers you have : ");
    scanf("%d",&n);
    
    int *array1 = (int*)calloc(n, sizeof(int));
    int *array2 = (int*)calloc(n, sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("array[%d] :",i);
        scanf("%d",&array1[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        array2[a]=array1[i];
        a++;
    }
    for(i=0;i<a;i++)
    {
        printf("%d",array2[i]);
    }
    
    return 0;
}
