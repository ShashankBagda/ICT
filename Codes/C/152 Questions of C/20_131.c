/*
131. Write a C Program using structure EMP that demonstrate a different 
    type of declaration of a structure variable.
Shashank Bagda
06-01-22
*/
#include<stdio.h>
struct EMP
{
	int i;
	float j;
	
}e1;
struct EMP
{
	int i;
	float j;
	
}e2;
 int main()
{
	struct EMP E3;
   return 0;
}
