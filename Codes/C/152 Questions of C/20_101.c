/*
101. Write a C Program which accepts n numbers in an array, sort it and display it.
Shashank Bagda
*/
#include<stdio.h>
void sort(int[],int);
int main()
{
	int i,j;
	printf("\nEnter the numbers");
	scanf("%d",&i);
	int arr[i];
	for(j=0;j<i;j++)
	{
		printf("\n Enter the value [%d]",j);
		scanf("%d",&arr[j]);
	}
	sort (arr, i);
	printf("\n\n The array after the sort\n");
	for(j=0;j<i;j++)
	printf("%d ",arr[j]);
	return 0;
}
void sort(int a[],int b)
{
	int i,j,temp;
	for(i=0;i<b-1;++i)
	for(j=0;j<b-i-1;++j)
	
	if(a[j]>a[j+1])
	{
		temp = a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
		
	}
}
