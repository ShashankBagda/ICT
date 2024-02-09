#include<stdio.h>
//Declaration of Function
int sumOfDigit(int);
int main()
{
	//Function Call
	int no=12345;
	printf("\n SUM of Digit = %d",sumOfDigit(no));
	return 0;
}

//Function Body or Definition
int sumOfDigit(int no)
{
	int sum=0;
	while(no>0)
	{
		sum = sum + (no%10);
		no = no/10;
	}
	return sum;
}
