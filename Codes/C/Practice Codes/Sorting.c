#include <stdio.h>
void swap_ele(int *p, int *q)
{
	int temp = *p;
	*p = *q;
	*q = temp;
}
void bubble_Sort(int a[], int n)
{
	int i, j;
	for (i = 0; i < n-1; i++)
	for (j = 0; j < n-i-1; j++)
	if (a[j] > a[j+1])
	swap_ele(&a[j], &a[j+1]);
}
void print_list(int a[], int size)
{
	int i;
	for (i=0; i < size; i++)
	printf("%d ", a[i]);
	printf("\n");
}
int main()
{
	int a[] = {46, 43, 52, 21, 33, 22, 89};
	int n = sizeof(a)/sizeof(a[0]);
	bubble_Sort(a, n);
	printf("Sorted list using bubble sort: \n");
	print_list(a, n);
	return 0;
}
