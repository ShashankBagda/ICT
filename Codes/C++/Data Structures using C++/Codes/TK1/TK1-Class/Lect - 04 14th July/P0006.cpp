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
		LinkedList getReverseLL();
		void insert_at_first(int i);
		LinkedList makeReverse();
};

LinkedList::LinkedList()
{
	head=NULL;
}
void LinkedList::insert_at_first(int i)
{
	Node *temp = new Node(i);
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		temp->next=head;
		head=temp;
	}
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

LinkedList LinkedList::getReverseLL()
{
	LinkedList ans;
	Node *first=head;
	while(first!=NULL)
	{
		ans.insert_at_first(first->no);
		first=first->next;
	}
	return ans;
}
LinkedList LinkedList::makeReverse()
{
	LinkedList l4;
	Node *first=head;
	Node *temp;
	while(first!=NULL)
	{
		l4.insert_at_first(first->no);
		temp=first;
		first=first->next;
		delete temp;
	}
	return l4;
}

Node * reverse(Node *p)
{
	p->no = (p->no)*2;
	if(p->next==NULL)
	{
		return p;
	}
	
	Node *tmp = reverse(p->next);
	p->next->next=p;
	p->next=NULL;
	return tmp;
}
int main()
{
	LinkedList l1;
	l1.insert(10);
	l1.insert(15);
	l1.insert(12);
	l1.insert(11);
	l1.insert(14);
	l1.print();
	
	LinkedList l2 = l1.getReverseLL();
	cout<<endl<<endl;
	l2.print();
	
	cout<<endl<<endl;
	l1 = l1.makeReverse();
	l1.print();
	
	Node *test = l1.head;
	cout<<endl<<endl;
	l1.head = reverse(test);
	l1.print();
	return 0;
}
