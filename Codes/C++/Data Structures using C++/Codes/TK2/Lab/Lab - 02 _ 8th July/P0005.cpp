#include<iostream>
using namespace std;
int getPriority(char);
void printStack(string, int);
int main()
{
	string str;
	string postfix;
	string stack="$$$$$";
	
	int tos=1;
	cout<<endl<<"Enter Infix Expression : ";
	cin>>str;
	
	for(int i=0;i<str.length();i++)
	{
		switch(str.at(i))
		{
			case '+':
			case '-':
			case '*':
			case '/':
			case '^':
					//Operator
					if(getPriority(str.at(i)) > getPriority(stack.at(tos-1)))
					{
						stack[tos]=str.at(i);
						tos++;
					}
					else
					{
						while(getPriority(str.at(i)) <= getPriority(stack.at(tos-1)))
						{
							postfix = postfix + stack.at(tos-1);
							tos--;	
						}
						stack[tos]=str.at(i);
						tos++;
					}
				break;
			default:
					//Operand
				postfix = postfix + str.at(i);	
				
		}
		cout<<endl<<str.at(i) <<"  |  "<< postfix << "  |  ";
		printStack(stack,tos);
	}
	while(tos>1)
	{
		postfix=postfix + stack.at(tos-1);
		tos--;
	}
	
	cout<<endl<<"POSTFIX = "<<postfix;
	return 0;
}
void printStack(string stack, int tos)
{
	int i=1;
	while(i<tos)
	{
		cout<<stack.at(i);
		i++;
	}
}
int getPriority(char ch)
{
	switch(ch)
	{
		case '^':
			return 3;
		case '*':
		case '/':
			return 2;
		case '+':
		case '-':
			return 1;
		default:
			return 0;
	}
}
