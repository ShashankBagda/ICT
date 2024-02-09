/*
98. Write a program that take input paragraph of 10 lines. Count total no of word and total no of characters (Excluding blank spaces).
Shashank Bagda
*/
#include<stdio.h>
int main()
{
   char str[200];
   int word, ch,i;
   word = ch = 0;
   printf("Enter string terminated with ~ :\n");
   scanf("%[^~]", str);

   for(i=0; str[i]!='\0'; i++)
   {
      if(str[i]=='\n')
      {
         word++;
      }
      else 
      {
         if(str[i]==' '||str[i]=='\t')
         {
            word++;
            ch++;
         }
         else 
		 {
            ch++;
         }
      }
   }

   printf("\nCharacter counts = %d\n", ch);
   printf("Word counts = %d\n", word);

   return 0;
}
