/*
Shashank Bagda
92100133020
DSC - Mid 1 - Task 2
*/

#include<iostream>
#include <queue>
using namespace std;

void showpq (priority_queue<pair<int, string> > g)
{
	while (!g.empty()) 
	{
		string test1, test2;
		test1 = g.top().second;
		test2 = 'F';
		
		cout << endl<< g.top().first<< " ";
		if(test1 == test2)
		{
			cout << g.top().second << " - Higher Priority";
		}
		g.pop();
	}
	cout << endl;
}

int main() 
{
	string name_str, gen_str;
	int age,j=0;
	
	priority_queue<pair<int, string> > p1;

	for(int i=1; i<=10; i++)
	{
		cout<<"Enter Name of Person "<< i <<" : ";
		cin>>name_str;
		
		cout<<"Enter Gender (M/F) : ";
		cin>>gen_str;
		
		cout<<"Enter Age : ";
		cin>>age;
		
		p1.push(make_pair(age, gen_str));
		
		cout<<endl;
	}	
  	
  	cout << "Priority as per Higher AGE " << endl;
  	
  	showpq(p1);
  	
  return 0;
}
