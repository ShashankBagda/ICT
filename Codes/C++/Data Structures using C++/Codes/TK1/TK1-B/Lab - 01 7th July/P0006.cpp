#include<iostream>
using namespace std;
class Node
{
	public:
		int value;
		Node *next;
		
		Node()
		{
			value=0;
			next=NULL;	
		}
		Node(int a)
		{
			value=a;
			next=NULL;
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
		void push(int v)
		{
			Node *temp=new Node(v);
			if(tos==NULL)
			{
				tos=temp;
			}
			else
			{
				temp->next=tos;
				tos=temp;
			}
		}
		void pop()
		{
			if(tos==NULL)
			{
				cout<<endl<<"Stack is EMPTY.. We cannot perform POP Operation";
			}
			else
			{
				Node *temp=tos;
				tos=tos->next;
				cout<<endl<<temp->value<<" is Poped";
				delete temp;
			}
		}
		void printStack()
		{
			if(tos==NULL)
			{
				cout<<endl<<"STACK IS EMPTY...!";
			}
			else
			{
				Node *temp=tos;
				while(temp!=NULL)
				{
					cout<<temp->value<<" -> ";
					temp=temp->next;
				}
			}
			
		}
};
int main()
{
	Stack s;
	s.push(10);
	s.push(20);
	
	s.printStack();
	cout<<endl;
	
	s.pop();
	s.pop();
	s.pop();
	cout<<endl;
	s.printStack();
	
	
	return 0;
}
