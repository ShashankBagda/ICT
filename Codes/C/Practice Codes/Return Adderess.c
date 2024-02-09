/*
Return your Adderess
2-12-21
Shashank Bagda
*/

#include<stdio.h>
char* myBDate();

int main()
{
	char* myBD;
	
	//Function Call
	myBD = myBDate();
	
	printf("My Adderess is %s",myBD);
	return 0;
}

//Function Body or Defination
char * myBDate()
{
	return "\n\n'Shashank', 20 - Anamika Society,\nUniversity Road,\n Rajkot, Gujarat";
}
