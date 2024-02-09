//Pending
//FUNCTION
//Function Declaration
int i;
int addition(int,int); //Return, Argument
void printName(char *);//No Return, Argument
float getPI();         //Return, No Argument
void menu();           //No Return, No Argument
int main()
{
	char *s ="PQRS";
	int k;
	k = addition(10,15);
	printf("\n %d ",k );
	printName(s);
	printf("\n %f",getPI());
	menu();
	return 0;
}
//Function Definition or Body
int addition(int p1,int p2)
{
	return (p1+p2);
}
void printName(char *str)
{
	printf("\n Name  = %s",str);
}
float getPI()
{
	return 3.142915f;
}
void menu()
{
	printf("\n 1 - Addition");
	printf("\n 1 - Addition");
	printf("\n 1 - Addition");
	printf("\n 1 - Addition");
}
