#include<iostream>
using namespace std;
int main()
{
	int i,j,ch;
	cout<<"Enter Value of i & j: ";
	cin>>i>>j;
	cout<<endl<<" 1 : +";
	cout<<endl<<" 2 : -";
	cout<<endl<<" 3 : *";
	cout<<endl<<" 4 : /";
	cout<<endl<<"Enter Your Choice : ";
	cin>>ch;
	switch(ch)
	{
		case 1:
				cout<<endl<<"SUM = "<<i+j;
			break;
		case 2:
				cout<<endl<<"SUB = "<<i-j;
			break;
		case 3:
				cout<<endl<<"MUL = "<<i*j;
			break;
		case 4:
				cout<<endl<<"DIV = "<<i/j;
			break;
		default:
			cout<<endl<<"Improper Choice";
	}
	return 0;
}
