#include<iostream>
using namespace std;
class C;
class A;
class B
{
	private:
		int age;
	public:
		//Methods
		B();
		B(int i);
	 	friend class A;
};
class A
{
	public:
		//Methods
		A();
		void printData(B b)
		{
			cout<<b.age;
		}
		friend class C;
};
class C
{
	public:
		
		C();
		void printData(A a,B b)
		{
			a.printData(b);
		}
};

A::A()
{
	
}
C::C()
{
	
}

B::B()
{
	age=0;
}
B::B(int i)
{
	age=i;
}


int main()
{
	A a;
	C c;
	B b(20);
	c.printData(a,b);

	return 0;
}
