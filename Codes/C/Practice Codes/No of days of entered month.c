#include<stdio.h>
int main()
{
	int month=12;
	if(month==2)
	{
		printf("\n 28 Days");
	}
	else if(month==4 || month==6 || month==9 || month==11)
	{
		printf("\n 30 Days");
	}
	else
	{
		printf("\n 31 Days");
	}
	return 0;
}

//  0 - False
// Non Zero -  True
