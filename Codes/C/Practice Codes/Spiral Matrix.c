#include<stdio.h> 
int main()
{
    int a[10][10]={0},i,j,low=0,top=9,n=1;
    for(i=0;i<5;i++,low++,top--)
    {
        for(j=low;j<=top;j++,n++)
            a[i][j]=n;
        for(j=low+1;j<=top;j++,n++)
            a[j][top]=n;
        for(j=top-1;j>=low;j--,n++)
            a[top][j]=n;
        for(j=top-1;j>low;j--,n++)
            a[j][low]=n;
    }
    printf("\t\t\t\tPerfect Square\n");
    for(i=0;i<10;i++)
    {
        printf("\n\n\t");
        for(j=0;j<10;j++)
        {
            printf("%6d",a[i][j]);
            delay(300);
        }
    }
    return 0;
}
