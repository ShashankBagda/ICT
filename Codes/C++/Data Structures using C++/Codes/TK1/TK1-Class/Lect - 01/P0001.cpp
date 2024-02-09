#include<iostream>
using namespace std;
class Node
{
	public:
		int no;
		Node *next;
		Node()
		{
			no=0;
			next=NULL;	
		}
		Node(int i)
		{
			no=i;
			next=NULL;
		}
		void printNode()
		{
			cout<<endl<<no;
		}
};
int main()
{
	Node n1(10);
	Node n2(20);
	Node n3(30);
	n1.next=&n2;
	n2.next=&n3;
	cout<<endl<<n1.no<<" -> "<<n1.next->no<<" -> "<<n1.next->next->no;
	return 0;
}
