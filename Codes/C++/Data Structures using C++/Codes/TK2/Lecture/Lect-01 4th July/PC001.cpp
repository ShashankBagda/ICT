#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node *next;
		//Constructors
		Node()
		{
			data=0;
			next=NULL;	
		}	
		Node(int n)
		{
			data=n;
			next=NULL;
		}
};
void printData(Node *head)
{
	while(head!=NULL)
	{
		cout<<endl<<head->data;
		head=head->next;
	}
}
int main()
{
	Node n1(3);
	Node n2(5);
	Node n3(7);
	Node n4(9);
	Node *first=NULL;
	
	n1.next=&n2;
	n2.next=&n3;
	n3.next=&n4;
	
	//cout<<endl<<n1.data<<"->"<<n1.next->data<<"->"<<n1.next->next->data;;
	first=&n1;
	printData(first);
	
	return 0;
}
