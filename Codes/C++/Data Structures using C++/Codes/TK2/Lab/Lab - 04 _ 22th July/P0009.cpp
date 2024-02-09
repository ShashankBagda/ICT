#include<iostream>
using namespace std;
template <typename T,typename U> class Student
{
	public:
		T rollNo;
		U name;
		Student(T p, U q)
		{
			rollNo=p;
			name=q;	
		}
		void print()
		{
			cout<<endl<<" RollNo = "<<rollNo<<endl<<" Name = "<<name;
		}
};
//Default Argumment
int sum(int a, int b=0, int c=0)
{
	return (a+b+c);
}

int main()
{
	Student<int, string> s1(10,"ABC");
	s1.print();
	Student<string, int> s2("ABC",10);
	s2.print();
	cout<<endl<<sum(3,5);
	cout<<endl<<sum(7);
	cout<<endl<<sum(7,5,7);
	return 0;
}
