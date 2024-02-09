#include<iostream>
using namespace std;
class Node
{
	public:
		int priority;
		int value;
		Node *next;
		

		Node(int a, int b)
		{
			priority=a;
			value=b;
			next=NULL;
		}
};
class PriQueue
{
	public:
		Node *front,*rear;
		PriQueue()
		{
			front=NULL;
			rear=NULL;
		}
		void enqueue(int i, int j)
		{
			Node *temp=new Node(i,j);
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
					cout<<"[ "<<temp->priority<<" | "<<temp->value<<" ] -> ";
					temp=temp->next;
				}
				cout<<"[ "<<rear->priority<<" | "<<rear->value<<" ]";
			}
		}
};
int main()
{
	PriQueue q;
	q.enqueue(3,10);
	q.enqueue(2,20);
	q.enqueue(3,30);
	q.printQueue();
	//cout<<endl;
	
	//q.dequeue();
	//q.dequeue();
	
	//cout<<endl;
	//q.printQueue();

	return 0;
}
