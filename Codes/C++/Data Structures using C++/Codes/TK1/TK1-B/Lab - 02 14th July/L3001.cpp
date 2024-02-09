#include<iostream>
using namespace std;
int isOperand(char);
int getPriority(char );
void printStack(string);
int main()
{
	string infix;
	string postfix;
	string stack;
	
	stack=stack+'$';
	
	cout<<"Enter INFIX expression : ";
	cin>>infix;
	for(int i=0; i<infix.length();i++)
	{
		if(isOperand(infix.at(i)))
		{
			postfix = postfix + infix.at(i);
			
		}
		else
		{
			if(getPriority(infix.at(i))  > getPriority(stack.at(stack.length()-1)))
			{
				stack=stack+infix.at(i);
				
			}
			else
			{
				while(getPriority(infix.at(i))  <= getPriority(stack.at(stack.length()-1)))
				{
					postfix = postfix + stack.at(stack.length()-1);
					stack.erase(stack.length()-1); //POP
					
				}
				stack=stack+infix.at(i); //Push
			}
		}
		
		cout<<endl<<infix.at(i)<<"   |   "<<postfix<<"     |    ";
		printStack(stack);
	}
	while(stack.at(stack.length()-1)!='$')
	{
		postfix = postfix + stack.at(stack.length()-1);
		stack.erase(stack.length()-1);
	}
	
	cout<<endl<<"Postfix  = "<<postfix;
	return 0;
}

void printStack(string str)
{
	for(int i=str.length()-1;i>=0;i--)
	{
		cout<<str.at(i);
	}
}
int getPriority(char ch)
{
	if(ch=='^')
	{
		return 3;
	}
	else if(ch=='*' || ch=='/')
	{
		return 2;
	}
	else if(ch=='+' || ch=='-')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isOperand(char ch)
{
	switch(ch)
	{
		case '+':
		case '-':
		case '*':
		case '/':
		case '^':
			return 0;
		default:
			return 1;
	}
}
