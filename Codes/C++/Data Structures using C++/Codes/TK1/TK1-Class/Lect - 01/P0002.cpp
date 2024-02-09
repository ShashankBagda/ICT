#include<iostream>
using namespace std;
class Node
{
	public:
		int no;
		Node *next;
		Node *prev;
		Node()
		{
			no=0;
			next=NULL;	
			prev=NULL;	
		}
		Node(int i)
		{
			no=i;
			next=NULL;
			prev=NULL;
		}
};
void printNode(Node *ptr)
{
	if(ptr==NULL)
	{
		return;
	}
	cout<<ptr->no<<" -> "; //enrollment
	printNode(ptr->next);
	cout<<ptr->no<<" -> "; //name;
}
int main()
{
	Node n1(10);
	Node n2(20);
	Node n3(30);
	
	Node *head=&n1;
	Node *tail=NULL;
	
	n1.next=&n2;
	n2.next=&n3;
	
	n3.prev=&n2;
	n2.prev=&n1;
	
	//cout<<endl<<n1.no;
	//cout<<endl<<n1.next->prev->no;
	//cout<<endl<<n1.next->next->prev->prev->no;
	
	while(head!=NULL)
	{
		cout<<endl<<head->no;
		tail=head;
		head=head->next;
	}
	while(tail!=NULL)
	{
		cout<<endl<<tail->no;
		tail=tail->prev;
	}
	
	cout<<endl<<endl;
	head=&n1;
	printNode(head);
	return 0;
}
