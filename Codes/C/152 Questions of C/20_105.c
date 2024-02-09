/* 
Accepts n*m numbers in an array and find out row total, column total, maximum, minimum and total.  
Shashank Bagda
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,m,i,j,rowsum,colsum,total=0,min,max;
    printf("How many row you have : ");
    scanf("%d",&n);
    printf("How many column you have : ");
    scanf("%d",&m);
    
    int *a[n];
    for(i=0;i<n;i++)
    {
       a[i]= (int*) malloc(m * sizeof(int));
    }
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            printf("array[%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }
    for(i=0;i<n;i++)
    {
        rowsum=0;
        for (j=0;j<m;j++)
        {
            rowsum=rowsum+a[i][j];
        }
        printf("Sum of row %d is %d\n",i+1,rowsum);
    }
    for(j=0;j<m;j++)
    {
        colsum=0;
        for (i=0;i<n;i++)
        {
            colsum=colsum+a[i][j];
        }
        printf("Sum of column %d is %d\n",j+1,colsum);
    }
    min=a[0][0];
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            if(min>a[i][j])
            {
                min=a[i][j];
            }
        }
    }
    printf("Minimum number is %d\n",min);
    max=a[0][0];
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            if(max<a[i][j])
            {
                max=a[i][j];
            }
        }
    }
    printf("Maximum number is %d\n",max);
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            total=total+a[i][j];
        }
    }
    printf("total is %d",total);
    return 0;
}
