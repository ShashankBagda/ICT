/*
102. Write a C Program which accepts n x m numbers in the 2-d array and display it.
Shashank Bagda
*/
#include<stdio.h>
int main()
{
   int a[2][3];
   int i, j;
   for(i=0; i<2; i++) 
   {
      for(j=0;j<3;j++)
	   {
         printf("Enter value for array[%d][%d]:", i, j);
         scanf("%d", &a[i][j]);
      }
   }
   printf("\n Two Dimensional array elements:\n");
   for(i=0; i<2; i++) 
   {
      for(j=0;j<3;j++)
	   {
         printf("%d ", a[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   return 0;
}
