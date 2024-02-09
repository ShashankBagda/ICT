#include<stdio.h>
int main()
{
	char *c;
	int *i;
	float *f;
	double *d;
	printf("c = %u\n",sizeof(c));
	printf("i = %u\n",sizeof(i));
	printf("f = %u\n",sizeof(f));
	printf("d = %u\n",sizeof(d));
	return 0;
}
