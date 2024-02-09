#include<iostream>
using namespace std;

class Node
{
	public:
		int no;
		Node *next;
		Node();
		Node(int i);
		
};
Node * reverse (Node *);
class LinkedList
{
	public:
		Node *head;
		LinkedList()
		{
			head=NULL;
		}
		void insert(Node *newNode);
		void printLL();
		
};
Node::Node()
{
	no=0;
	next=NULL;	
}
Node::Node(int i)
{
	no=i;
	next=NULL;
}
void LinkedList::insert(Node *newNode)
{
	if(head==NULL)
	{
		head=newNode;
	}
	else
	{
		Node *temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newNode;
	}
}

Node * reverse(Node *head)
{
	if(head->next==NULL)
	{
		return head;
	}
	Node *temp = reverse(head->next);
	head->next->next=head;
	head->next=NULL;
	return temp;
}

void LinkedList::printLL()
{
	Node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->no<<" -> ";
		temp=temp->next;
	}
}
int main()
{
	LinkedList l1;
	l1.insert(new Node(11));
	l1.insert(new Node(13));
	l1.insert(new Node(14));
	l1.insert(new Node(10));
	l1.insert(new Node(12));
	
	Node *test = reverse(l1.head);
	while(test!=NULL)
	{
		cout<<test->no<<" -> ";
		test=test->next;
	}
	return 0;
}

