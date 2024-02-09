#include<iostream>
using namespace std;
class Rect
{
	public:
		//Attributes
		int l,b;
		//Methods
		Rect();
		Rect(int i,int j);	
		void printData();
		string compObjClass(Rect );
};

string compObjOutSide(Rect, Rect );


Rect::Rect()
{
	l=0;
	b=0;
}
Rect::Rect(int i, int j)
{
	l=i;
	b=j;
}
void Rect::printData()
{
	cout<<"L = "<<l<<endl<<"B = "<<b;
}
string Rect::compObjClass(Rect r1)
{
	//this r1
	if((this->l*this->b) > (r1.b*r1.l))
	{
		return "Calling Rect Object Size is Big";
	}
	else
	{
		return "Parameter Rect Object Size is Big";
	}
}
string compObjOutSide(Rect t1, Rect t2)
{
	if((t1.l*t1.b) > (t2.b*t2.l))
	{
		return "Second Parameter Rect Object Size is Small";
	}
	else
	{
		return "First Parameter Rect Object Size is Small";
	}
}
int main()
{
	Rect r1(4,6);
	r1.printData();
	Rect r2(5,6);
	
	cout<<endl<<r1.compObjClass(r2)<<endl;
	cout<<compObjOutSide(r1,r2);
	return 0;
}
