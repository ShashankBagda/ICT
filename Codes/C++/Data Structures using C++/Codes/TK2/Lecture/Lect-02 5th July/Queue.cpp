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
class Queue
{
	public:
		Node *head;
		Queue()
		{
			head=NULL;	
		}	
		void enqueue(int i)
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
		void printQueue()
		{
			Node *it = head;
			while(it!=NULL)
			{
				cout<<it->data<<" -> ";
				it= it->next;
			}
		}
		int dequeue()
		{
			int val;
			if(head==NULL)
			{
				cout<<endl<<"Queue is EMPTY";
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
};
int main()
{
	int i=0;
	Queue q;
	q.enqueue(10);
	q.enqueue(9);
	q.enqueue(8);
	q.enqueue(7);
	q.printQueue();
	cout<<endl;
	if( (i=q.dequeue())!=-1)
	{
		cout<<endl<<i<<" is dequeued";
	}
	cout<<endl;
	q.printQueue();
	return 0;
}
