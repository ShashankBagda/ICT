/*
39. Print the total of 1/2+2/3+....+9/10
Shashank Bagda
26-11-21
*/

#include<stdio.h>
int main()
{
	float a,b,c,d;
	
	a=1;
	b=2;
	d=0;
	do
	{
		c=a/b;
		a++;
		b++;
		d=d+c;
	}while(a<10);	
	
	printf("%.2f  ",d);
	 	
	return 0;
}
