#include<iostream>
using namespace std;
string whoAmI(char);
int getPriority(char);
int main()
{
	string str;
	cout<<endl<<"Enter String : ";
	cin>>str;
	
	for(int i=0;i<str.length();i++)
	{
		cout<<endl<<str.at(i)<<" -> "<<whoAmI(str.at(i));
	}
	return 0;
}
string whoAmI(char ch)
{
	string op=" - Operator";
	switch(ch)
	{
		case '+':
		case '-':
		case '*':
		case '/':
		case '^':
			return ((char)(getPriority(ch)+48)+op);
		default:
			return "Operand";
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
