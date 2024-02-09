//Function
#include<stdio.h>
//Declaration
void printHW();       // No Return Value, No Argument/Parameter
int sum(int, int);    // Return Value , With Argument/Parameter
float getPI();        // Return Value , No Argument/Parameter
void printTable(int); // No Return Value, With Argument/Parameter
int main()
{
	int i=10,j=20,k;
	//Function Call
	printf("\n Function Start");
	printHW();
	k = sum(i,j);
	printf("\n SUM  = %d",k);
	printf("\n PI  = %f",getPI());
	printTable(5);
	printTable(i);
	printf("\n Function End");
	return 0;
}
//Function Body - Definition
/*
return-type Function_Name (Argument list)
{
	return [value];
}
*/
void printHW()
{
	printf("\n Hello World..!");
}
int sum(int a, int b)
{
	return (a+b);
}
float getPI()
{
	return 3.14f;
}
void printTable(int n)
{
	int i=1;
	for(i=1;i<11;i++)
	{
		printf("\n %3d X %3d = %3d",n,i,n*i);
	}
}


