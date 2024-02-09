/*
40. 0.1+0.02+0.003+0.0004+0.000005.
Shashank Bagda
26-11-21
*/

#include<stdio.h>
int main()
{
	float a,b,c,d;
	
	a=1;
	b=10;
	d=0;
	
	do
	{
		c=a/b;
		b=b*10;
		a++;
		printf("%.5f  ",c);
		d=d+c;	
	}while(a<=5);
	printf("\nThe total is %f",d);

	return 0;
}
