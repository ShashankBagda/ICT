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




class LinkedList
{
	public:
		Node *head;
		LinkedList();
		void insert(int j);
		void print();
		LinkedList* concate(LinkedList l2);
		Node* split(int k);
		int countNode();
};
int LinkedList::countNode()
{
	Node *temp=this->head;
	int i=0;
	while(temp!=NULL)
	{
		i++;
		temp=temp->next;
	}
	return i;
}
Node* LinkedList::split(int k)
{
	Node *temp=this->head;
	Node *ret=NULL;
	int j=1;
	if(k>8)
	{
		cout<<endl<<"Not Sufficient Node in LL";
	}
	else
	{
		while(j<k)
		{
			j++;
			temp=temp->next;
		}	
		ret = temp->next;
		temp->next=NULL;
	}
	return ret;
}
LinkedList* LinkedList::concate(LinkedList l2)
{
	
	Node *temp=this->head;
	if(temp==NULL)
	{
		this->head= l2.head;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=l2.head;
		l2.head=NULL;
	}
	return this;
}
LinkedList::LinkedList()
{
	head=NULL;
}

void LinkedList::insert(int j)
{
	Node *temp = new Node(j);
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		Node *first=head;
		while(first->next!=NULL)
		{
			first=first->next;
		}
		first->next=temp;
	}
}

void LinkedList::print()
{
	if(head==NULL)
	{
		cout<<endl<<"LinkedList is Empty...!";
	}
	else
	{
		Node *first=head;
		while(first!=NULL)
		{
			cout<<first->no<<" -> ";
			first=first->next;
		}
	}
}




int main()
{
	LinkedList l1;
	l1.insert(10);
	l1.insert(15);
	l1.insert(12);
	l1.insert(11);
	l1.insert(14);
	//l1.print();
	
	LinkedList l2;
	l2.insert(20);
	l2.insert(35);
	l2.insert(42);
	
	LinkedList *l3 = l1.concate(l2);
	l3->print();
	
//	cout<<endl<<"In L3 there are "<<l3->countNode()<<" Nodes";
	
	LinkedList l4;
	l4.head = l3->split(4);
	cout<<endl<<"Linked List l3 : "<<endl;
	l3->print();
	
	cout<<endl<<"Linked List l4 : "<<endl;
	l4.print();
	return 0;
}
