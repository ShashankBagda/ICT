#include<stdio.h>
int main()
{
	int a=10, b=20, c;
	printf("\n Before Swaping");
	printf("\n a = %d  b = %d", a, b);
	//Logic of Swaping
	a = a ^ b;
	b = b ^ a;
	a = a ^ b;
	
	printf("\n After Swaping");
	printf("\n a = %d  b = %d", a, b);
	return 0;
}

/*
//Using 3rd Variable  a = 10 b = 20
c = a;   // a = 10   b = 20  c = 10
a = b;   // a = 20   b = 20  c = 10
b = c;   // a = 20   b = 10  c = 10

//Without 3rd Variable  a = 10 b = 20
a = a + b;  // a = 30  b = 20
b = a - b;  // a = 30  b = 10
a = a - b;  // a = 20  b = 10

//Without 3rd Variable a = 10 b = 20
a = a * b;  // a = 200  b = 20
b = a / b;  // a = 200  b = 10
a = a / b;  // a = 20   b = 10

*/
