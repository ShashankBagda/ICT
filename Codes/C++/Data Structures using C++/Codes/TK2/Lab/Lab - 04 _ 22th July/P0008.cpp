#include<iostream>
using namespace std;
template <typename T> class Demo
{
	public:
		T a;
		T b;
		Demo(T p, T q)
		{
			a=p;
			b=q;	
		}
		void print()
		{
			cout<<endl<<" a = "<<a<<endl<<" b = "<<b;
		}
};

int main()
{
	Demo<int> d1(10,20);
	d1.print();
	Demo<double> d2(10.50,20.60);
	d2.print();
	Demo<char> d3('A','B');
	d3.print();
	Demo<string> d4("AAA","BBB");
	d4.print();
	return 0;
}
