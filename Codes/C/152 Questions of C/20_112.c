/* 
112. Write a C Program to perform the multiplication of two matrices.
Shashank Bagda
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int row1,col1,row2,col2,sum,loop1,loop2,i=0,con,x,y;
    
    printf("Which types of first matrix you have AxB: ");
    scanf("%d %d",&row1,&col1);
    printf("Which types of second matrix you have AxB: ");
    scanf("%d %d",&row2,&col2);
    
    int *array1[row1];
    for(loop1=0;loop1<row1;loop1++)
    {
       array1[loop1]= (int*) malloc(col2 * sizeof(int));
    }
    
    int *array2[row2];
    for(loop1=0;loop1<row2;loop1++)
    {
       array2[loop1]= (int*) malloc(col2 * sizeof(int));
    }
    int *array3[row1];
    for(loop1=0;loop1<row1;loop1++)
    {
       array3[loop1]= (int*) malloc(col2 * sizeof(int));
    }
    printf("enter first matrix\n");
    for(loop1=0;loop1<row1;loop1++)
    {
        for(loop2=0;loop2<col1;loop2++)
        {
            printf("array[%d][%d]:",loop1,loop2);
            scanf("%d",&array1[loop1][loop2]);
        }
    }
    printf("enter second matrix\n");
    for(loop1=0;loop1<row2;loop1++)
    {
        for(loop2=0;loop2<col2;loop2++)
        {
            printf("array[%d][%d]:",loop1,loop2);
            scanf("%d",&array2[loop1][loop2]);
        }
    }
    for(loop1=0;loop1<row1;loop1++)
    {
        
        for(loop2=0;loop2<col2;loop2++)
        {
            sum=0;
            for(x=0;x<col1;x++)
            {
                sum += (array1[loop1][x])*(array2[x][loop2]);
            }
            array3[loop1][loop2]=sum;
        }
        
        
    }
    for(loop1=0;loop1<row1;loop1++)
    {
        for(loop2=0;loop2<col2;loop2++)
        {
            printf("%4d ",array3[loop1][loop2]);
        }
        printf("\n");
    }
    
    
    return 0;
}
