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
class Queue
{
	public:
		Node *front,*rear;
		Queue()
		{
			front=NULL;
			rear=NULL;
		}
		void enqueue(int i)
		{
			Node *temp=new Node(i);
			if(front==NULL && rear==NULL)
			{
				front=temp;
				rear=temp;
			}
			else
			{
				rear->next=temp;
				rear=temp;
			}
		}
		void dequeue()
		{
			if(front==NULL && rear==NULL)
			{
				cout<<endl<<"Queue is EMPTY.. Dequeue is not possible..!";
			}
			else
			{
				Node *temp=front;
				front=front->next;
				if(front==NULL)
				{
					rear=NULL;
				}
				cout<<endl<<temp->value<<" is dequeued";
			}
		}
		void printQueue()
		{
			if(front==NULL && rear==NULL)
			{
				cout<<endl<<"Queue is EMPTY..";
			}
			else
			{
				Node *temp=front;
				while(temp!=rear)
				{
					cout<<temp->value<<" -> ";
					temp=temp->next;
				}
				cout<<rear->value<<" -> ";
			}
		}
};
int main()
{
	Queue q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.printQueue();
	cout<<endl;
	
	q.dequeue();
	q.dequeue();
	
	cout<<endl;
	q.printQueue();

	return 0;
}
