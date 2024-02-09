/*
Printing Adderess using function
Shashank Bagda
2-12-21
*/

#include<stdio.h>

//Function Declaration
void add();
void locality();
void region();

int main()
{
	//Function Call
	add();
	locality();
	region();
	
	return 0;
}

//Function Body or Defination
void add()
{
	printf("'Shashank', Anamika Society");
}

void locality()
{
	printf("\nUniversity Road");
}

void region()
{
	printf("\nRajkot - Gujarat");
}
