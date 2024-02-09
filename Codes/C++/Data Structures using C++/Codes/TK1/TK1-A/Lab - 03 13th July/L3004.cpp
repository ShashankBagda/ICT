#include<iostream>
using namespace std;
int whoAmI(char );
int getPriority(char);
void rev_print(string );
int main()
{
	string infix;
	string postfix;
	string stack;
	int i;
	stack=stack+'$'; //push $ in stack
	
	cout<<endl<<"Enter Infix Expression : ";
	cin>>infix;
	for(i=0;i<infix.length();i++)
	{
		if(whoAmI(infix.at(i))) //Operand
		{
			postfix = postfix + infix.at(i);
		}
		else  //Operator
		{
			if(getPriority(infix.at(i))  > getPriority(stack.at(stack.length()-1)))
			{
				stack = stack + infix.at(i); //Push	
			}
			else
			{
				while(getPriority(infix.at(i)) <= getPriority(stack.at(stack.length()-1)))
				{
					postfix = postfix + stack.at(stack.length()-1);	
					stack.erase(stack.length()-1,stack.length()-1);
				}
				stack = stack + infix.at(i);
			}
		}	
		cout<<endl<<infix.at(i)<<"   |   "<<postfix<<"   |   ";
		rev_print(stack);
	}
	//Reach to End of Infix
	int j=stack.length()-1;
	while(stack.at(j)!='$')
	{
		postfix = postfix + stack.at(j);
		stack.erase(j,j);
		--j;
	}
	cout<<endl<<postfix;
	return 0;
}

int whoAmI(char ch)
{
	switch(ch)
	{
		case '+':
		case '-':
		case '*':
		case '/':
		case '^':
			return 0; //Operator
		default:
			return 1; //Operand
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
void rev_print(string s)
{
	int j=s.length()-1;
	while(j>=0)
	{
		cout<<s.at(j);
		j--;
	}
	
}
