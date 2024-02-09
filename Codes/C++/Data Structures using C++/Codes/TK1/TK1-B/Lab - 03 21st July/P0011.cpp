#include<iostream>
using namespace std;

template <typename T>class Node
{
	public:
		T value;
		Node *next;
		
		Node()
		{
			//value=0;
			next=NULL;	
		}
		Node(T a)
		{
			value=a;
			next=NULL;
		}
};


class Stack
{
	public:
		Node <string> *tos;
		Stack()
		{
			tos=NULL;	
		}
		void push(string v)
		{
			Node<string> *temp=new Node<string>(v);
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
				Node<string> *temp=tos;
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
				Node <string> *temp=tos;
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
	s.push("ABC");
	s.push("XYZ");
	
	s.printStack();
	cout<<endl;
	
	s.pop();
	s.pop();
	s.pop();
	cout<<endl;
	s.printStack();
	return 0;
}
