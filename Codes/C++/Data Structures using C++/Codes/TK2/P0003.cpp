#include<iostream>
using namespace std;
class B;
class A
{
		int age;
	public:
		//Methods
		A();
		A(int i);	
		friend void comp(A,B);
};
class B
{
		int age;
	public:
		//Methods
		B();
		B(int i);
		friend void comp(A,B);	
};

A::A()
{
	age=0;
}
A::A(int i)
{
	age=i;
}
B::B()
{
	age=0;
}
B::B(int i)
{
	age=i;
}

void comp(A a, B b)
{
	if(a.age>b.age)
	{
		cout<<"A is Elder";
	}
	else
	{
		cout<<"B is Elder";
	}
}
int main()
{
	A a(10);
	B b(20);
	comp(a,b);

	return 0;
}
