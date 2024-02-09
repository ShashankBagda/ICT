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
		void sort();
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
void LinkedList::sort()
{
	Node *first=head;
	Node *temp=NULL;
	int t;
	while(first->next!=NULL)
	{
		temp=first->next;
		while(temp!=NULL)
		{
			if(first->no > temp->no)
			{
				t = first->no;
				first->no = temp->no;
				temp->no = t;
			}
			temp=temp->next;
		}
		first=first->next;
	}
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
	l1.printLL();
	l1.sort();
	cout<<endl<<"After Sorting"<<endl;
	l1.printLL();
	return 0;
}

