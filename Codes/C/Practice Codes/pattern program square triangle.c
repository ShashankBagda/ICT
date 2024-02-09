#include<stdio.h>

int main()
{
    int i, j, k=1;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<5;j++)
        {
            printf("    ");
        }
        for(j=1;j<(i*2);j++)
        {
            printf("%3d ",k*k);
            k++;
        }
        printf("\n");
    }
    return 0;
}
