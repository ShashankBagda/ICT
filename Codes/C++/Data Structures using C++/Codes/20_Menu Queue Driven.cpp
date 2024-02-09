//	Practical - 06 : Implementations of queue menu driven program
//	Shashank Bagda

#include<iostream>
using namespace std;
class Queue;

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

class Queue
{
	public:
	Node *head;
		
	Queue() 
	{
		head=NULL;	
	}

	void Display();
	void enqueueData(int i);
	int dequeueData();
	void print();
};

void Queue::Display()
{
	int choice , data;
	
	while(choice!=-1)
	{
		cout << endl <<"Enter 1 to Enqueue Data \n";
		cout << endl <<"Enter 2 to Dequeue Data \n";
		cout << endl <<"Enter 3 to View Queue \n";
		cout << endl <<"Enter your choice : " ;
		cin >> choice;

		switch(choice)
		{
			case 1:
				cout << "Enter Data to Enqueue : ";
				cin >> data;
				enqueueData(data);
				cout << data <<" Enqueued Successfully" << endl;
				break;
			case 2:
				dequeueData();
				cout << "Data Dequeued Successfully" << endl;
				break;
			case 3:
				cout << "Data : ";
				print();
				break;
			default:
				cout << endl << "Please Enter a Valid Choice" << endl;
				break;
		}				
	}
}

void Queue::enqueueData(int i)
{
	Node *temp = new Node(i);
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		Node *it = head;
		while(it->next!=NULL)
		{
			it= it->next;
		}
		it->next=temp;		
	}
}
		
void Queue::print()
{
	Node *it = head;
	while(it!=NULL)
	{
		cout<<it->data<<" -> ";
		it= it->next;
	}
}
		
int Queue::dequeueData()
{
	int val;
	if(head==NULL)
	{
		cout<<endl<<"The Queue is empty!";
		return -1;
	}
	else
	{
		Node *temp=head;
		head=head->next;
		val=temp->data;
		delete temp;
		return val;
	}
}
		
int main()
{
	Queue q;
	q.Display();
	return 0;
}
