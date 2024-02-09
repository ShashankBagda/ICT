#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node *next;
		Node()
		{
			data=0;
			next=NULL;	
		}
		Node(int i)
		{
			data = i;
			next = NULL;
		}
};
class Stack
{
	public:
		Node *tos;
		Stack()
		{
			tos=NULL;	
		}	
		void push(int i)
		{
			Node *ptr = new Node(i);
			if(tos==NULL)
			{
				tos=ptr;
			}
			else
			{
				ptr->next=tos;
				tos=ptr;
			}
		}
		void printStack()
		{
			if(tos==NULL)
			{
				cout<<endl<<"Stack is EMPTY";
			}
			else
			{
				Node *t=tos;
				while(t!=NULL)
				{
					cout<<t->data<<" <- ";
					t=t->next;
				}
			}
		}
		int pop()
		{
			if(tos==NULL)
			{
				cout<<endl<<"Stack is Empty";
				return -1;
			}
			else
			{
				Node *temp=tos;
				int val =temp->data;
				tos=tos->next;
				delete temp;
				return val;
			}
		}
};
int main()
{
	int i=0;
	Stack s;
	s.push(10);
	s.push(9);
	s.push(8);
	s.push(7);
	s.printStack();
	cout<<endl<<endl;
	if( (i=s.pop()) !=-1)
	{
		cout<<endl<<i<<" is Poped";
	}
	cout<<endl<<endl;
	s.printStack();
	return 0;
}
