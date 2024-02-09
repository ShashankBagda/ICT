#include<iostream>
using namespace std;

template <typename T, typename U>class Test
{
	public:
		T a;
		U b;
		Test(T t, U u)
		{
			a=t;
			b=u;	
		}
		void print()
		{
			cout<<endl<<a<<endl<<b;	
		}	
};
int main()
{
	Test<int, string> t1(42,"Parth");
	Test<string, int> t2("Parth",42);
	t1.print();
	t2.print();
	return 0;
}
