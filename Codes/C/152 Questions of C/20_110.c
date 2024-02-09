/* 
110. Write a C Program to Print transpose of a matrix.
Shashank Bagda
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int row,col,i,j,a=0,c;
    printf("How many row you have : ");
    scanf("%d",&row);
    printf("How many col you have : ");
    scanf("%d",&col);
    
    int *array1[row];
    for(i=0;i<row;i++)
    {
       array1[i]= (int*) malloc(col * sizeof(int));
    }
    
    int *array2[col];
    for(i=0;i<col;i++)
    {
       array2[i]= (int*) malloc(row * sizeof(int));
    }
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("array[%d][%d]:",i,j);
            scanf("%d",&array1[i][j]);
        }
    }
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            array2[j][i]=array1[i][j];
        }
    }
    
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d ",array2[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
