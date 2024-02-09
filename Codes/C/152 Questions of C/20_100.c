/*
100. Write a C Program which accepts n numbers in an array and display its average.
Shashank Bagda
*/
#include<stdio.h>
#include<stdlib.h>
int  main()
{
	int n,*a,i,s=0;
	float avg=0.0,sum=0.0;
	printf("\n Enter number");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	if(a==NULL)
	{
		printf("\n Memory allocation unsuccessful");
		exit(0);
	}

	for(i=0;i<n;i++);
	{
		printf("\n Enter the value [%d]",i);
		scanf("%d",&a[i]);
		sum +=sum+a[i];
	}
	
	avg=sum/n;
	printf("\n Average=%.2f",avg);
    
	return 0;
}
