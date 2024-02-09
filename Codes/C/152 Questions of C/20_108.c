/* 
108. Write a C Program to generate the array of distinct or unique values from the array given by the user.
Shashank Bagda
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,j,a=0,c;
    printf("How many numbers you have : ");
    scanf("%d",&n);
    
    int *a1 = (int*)calloc(n, sizeof(int));
    int *a2 = (int*)calloc(n, sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("array[%d] :",i);
        scanf("%d",&a1[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a1[i]==a2[j])
            {
                c++;
            }
        }
        if(c==0)
        {
            a2[i]=a1[i];
            i++;
        }
    }
    for(i=0;i<a;i++)
    {
        printf("%d",a2[i]);
    }
    return 0;
}
