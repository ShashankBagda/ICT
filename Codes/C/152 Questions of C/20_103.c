/*
103. Write a C Program which accepts n numbers in an array and find the total no of positive and negative no.
Shashank Bagda
*/
#include<stdio.h>
int main()
{
   int a[100], z, i, p=0, n=0;

   printf("Enter array size [1-100]: ");
   scanf("%d", &z);
   printf("Enter %d elements: ",z);

   for(i=0; i<z; i++)
   {
     scanf("%d", &a[i]);
     if(a[i]>0) 
	 	{
	 		p++;
     	}
	 else
	 	{
	 		n++;
   		}
   }

   printf("Positive numbers are %d", p);
   printf("\nNegative numbers are %d", n);
   return 0;
}
