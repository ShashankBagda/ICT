/*
75. Write a functions to count the area of circle, triangle, rectangle and square.
Shashank Bagda
*/
#include<stdio.h>
int sqr(int);
int rec(int, int);
float cir(int);
float tri(int, int);

int main()
{
	printf("%d", sqr(5));
	printf("\n%d", rec(5,10));
	printf("\n%.2f", cir(5));
    printf("\n%.2f", tri(5,10));
    return 0;
}
int sqr(int s)
{
    int k;
    k = s*s;
    return k;
}
int rec(int l, int b)
{
    int h;
    h = l*b;
    return h;
}
float cir(int r)
{
    float pi=3.14159265;
    float i;
    i = pi*r*r;
    return i;
}
float tri(int b, int h)
{
    float k;
    k = (0.5*b*h);
    return k;
}
