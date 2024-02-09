#include <stdio.h>
/*
54321
2345
543
45
5
*/

#include <stdio.h>
int main() 
{
   int i, j, rows, num, num2;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   
   for (i = rows; i >= 1; --i) 
   {
   	  num = rows;
   	  num2 = i;
      for (j = 1; j <= i; ++j) 
	  {
	  	if(i%2 != 0)
	  	{
	  		printf("%d ", num);
        	num--;
		}
		else
		{
			
			printf("%d ", num2);
			num2++;
			
		}
        
      }
      printf("\n");
   }
   return 0;
}
