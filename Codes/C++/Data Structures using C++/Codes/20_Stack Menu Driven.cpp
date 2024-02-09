//	Practical - 04 : Implementations of stack menu driven program
//	Shashank Bagda - 92100133020

#include <iostream>
using namespace std;

class Stack;

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
		Node *top;
		Stack()
	{
		top=NULL;	
	}

	void Display();
	void pushD(int i);
	int popD();
	void Print_stack();
};

void Stack::Display()
{
    int choice , data;
		
	while(choice!=-1)
	{
		cout << endl <<"Enter 1 to PUSH the Data\n";
		cout << endl <<"Enter 2 to POP the Data\n";
		cout << endl <<"Enter 3 to VIEW the Stack\n";
		cout << endl <<"Enter your choice : ";
		
		cin >> choice;
		switch(choice)
		{
			case 1:
				cout << "Enter Data : ";
				cin >> data;
				pushD(data);
				cout << data <<"Data Pushed" << endl;
				break;
			case 2:
				popD();
				cout << "Data Poped" << endl;
				break;
			case 3:
				cout << "Data :  ";
				Print_stack();
				break;
			default:
				cout << endl << "Please Enter a Valid Choice!!!" << endl;
				break;
		}
	}
}

void Stack::pushD(int i)
{
	Node *ptr = new Node(i);
	
	if(top==NULL)
	{
		top=ptr;
	}
	else
	{
		ptr->next=top;
		top=ptr;
	}
}

int Stack::popD()
{
	if(top==NULL)
	{
		cout<<endl<<"Stack is Empty";
		return -1;
	}
	else
	{
		Node *temp=top;
		int val =temp->data;
		top=top->next;
		delete temp;
		return val;
	}
}

void Stack::Print_stack()
{
	if(top==NULL)
	{
		cout<<endl<<"Stack is Empty";
	}
	else
	{
		Node *t=top;
		while(t!=NULL)
		{
			cout<<t->data<<" <- " ;
			t=t->next;
		}
		cout << endl;
	}
}		

int main()
{
	Stack n;
	n.Display();
	return 0;
}
