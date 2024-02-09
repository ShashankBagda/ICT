/*
50. Write a C-Program to 
list all primes in the given range
INPUT: 10 30
OUTPUT: 11 13 17 19 23 29
*/
int main()
{
	int no,i=2,start,end;
	printf("\n Enter Number Range : ");
	scanf("%d %d",&start,&end);
	//no = 10 .... 30
	for(no=start;no<=end;no++)
	{
		for(i=2;i<no;i++)
		{
			if(no%i==0)
			{
				break; 
			}	
		}
		if(no==i)
		{
			printf("%d ",no);
		}
	}
	return 0;
}

