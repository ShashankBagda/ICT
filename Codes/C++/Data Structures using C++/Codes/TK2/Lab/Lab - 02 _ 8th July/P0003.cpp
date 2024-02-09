#include<iostream>
using namespace std;
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
				cout<<endl<<str.at(i)<<" is Operator";
				break;
			default:
				cout<<endl<<str.at(i)<<" is Operand";
		}
	}
	return 0;
}
