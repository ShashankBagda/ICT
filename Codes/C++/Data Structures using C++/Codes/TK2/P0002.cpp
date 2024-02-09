#include<iostream>
using namespace std;
class Rect
{
	//Attributes
		int l,b;
	public:
		//Methods
		Rect();
		Rect(int i,int j);	
		friend void printData(Rect);
};


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
void printData(Rect r)
{
	cout<<"L = "<<r.l<<endl<<"B = "<<r.b;
}


int main()
{
	Rect r1(4,10);
	printData(r1);

	return 0;
}
