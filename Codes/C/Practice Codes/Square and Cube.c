	#include<stdio.h>
int square(int);
int cube(int);

int main()
{
	//pointer to function
	int (*q[2])(int);
	q[0]=&square;
	q[1]=&cube;
	printf("\n square = %d",(*q[0])(3));
	printf("\n cube   = %d",(*q[1])(3));
	return 0;
}
int square(int i )
{
	return (i*i);
}
int cube(int i )
{
	return (i*i*i);
}

