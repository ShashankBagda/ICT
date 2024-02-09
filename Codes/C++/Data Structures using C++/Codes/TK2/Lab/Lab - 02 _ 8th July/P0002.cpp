#include<iostream>
using namespace std;
int main()
{
	string str;
	cout<<endl<<"Enter Infix Expression : ";
	cin>>str;
	
	for(int i=0;i<str.length();i++)
	{
		cout<<endl<<str.at(i);
	}
	return 0;
}
