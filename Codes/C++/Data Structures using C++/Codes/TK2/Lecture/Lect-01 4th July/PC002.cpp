#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node *next;
		Node *prev;
		//Constructors
		Node()
		{
			data=0;
			next=NULL;	
			prev=NULL;
		}	
		Node(int n)
		{
			data=n;
			next=NULL;
			prev=NULL;
		}
};
void printData(Node *head)
{
	int dir=0;
	while(head!=NULL)
	{
		if(head->next==NULL)
		{
			cout<<head->data<<" -> ";
			dir=1;
		}
		switch(dir)
		{
			case 0:
					cout<<head->data<<" -> ";
					head=head->next;
				break;
			case 1:
					cout<<head->data<<" -> ";
					head=head->prev;
				break;
		}
	}
}
void printRec(Node *head)
{
	if(head==NULL)
	{
		return ;
	}
	cout<<head->data<<" -> ";
	printRec(head->next);
	cout<<head->data<<" -> ";
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
	
	n4.prev=&n3;
	n3.prev=&n2;
	n2.prev=&n1;
		
	
	first=&n1;
	printRec(first);
	
	return 0;
}
