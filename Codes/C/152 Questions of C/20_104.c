/* 
Accepts n numbers in an array and find the maximum and minimum value.
Shashank Bagda
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,min=0,max=0;
    printf("How many numbers you have : ");
    scanf("%d",&n);
    
    int *a = (int*)calloc(n, sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("array[%d] :",i);
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("Maximum number is %d\n",max);
    printf("Minimum number is %d",min);
    return 0;
}
