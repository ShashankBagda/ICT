#include<iostream>
using namespace std;

class Parent
{
	private:
		//Private cannot be accessible in Child
		
	protected:
		
		int gold;
	public:
		int age;
		int cloth;
		Parent();
};

class Child:private Parent
{
	public:
		Child();
};

class GrandChild:public Child
{
	public:
		GrandChild();
		void printParentData();
};


Parent::Parent()
{
	age=18;
	gold=10;
	cloth=100;
}

Child::Child()
{
	//Parent();
}
GrandChild::GrandChild()
{
	//Parent();
}
void GrandChild::printParentData()
{
	cout<<endl<<"Cloth = "<<this->cloth;
	cout<<endl<<"Age = "<<this->age;
	cout<<endl<<"Gold = "<<this->gold;
	
}

int main()
{
	GrandChild c;
	c.printParentData();
	return 0;
}
