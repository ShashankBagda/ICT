#include<iostream>
using namespace std;
int getPriority(char);
int main()
{
	string str;
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
				cout<<endl<<str.at(i)<<" is Operator with Priority"<<getPriority(str.at(i));
				break;
			default:
				cout<<endl<<str.at(i)<<" is Operand";
		}
	}
	return 0;
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
