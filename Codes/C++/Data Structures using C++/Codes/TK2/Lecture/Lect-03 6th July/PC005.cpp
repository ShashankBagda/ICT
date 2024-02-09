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
		Node *front;
		Node *rear;
		
		Queue()
		{
			front=NULL;
			rear=NULL;
		}	
		void enqueue_rear(int i)
		{
			Node *temp = new Node(i);
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
		void enqueue_front(int i)
		{
			Node *temp = new Node(i);
			if(front==NULL && rear==NULL)
			{
				front=temp;
				rear=temp;
			}
			else
			{
				temp->next=front;
				front=temp;
			}
		}
		void dequeue_front()
		{
			if(front==NULL && rear==NULL)
			{
				cout<<endl<<"Double Ended Queue is Empty...!";
			}
			else
			{
				Node *temp=front;
				front=front->next;
				if(front==NULL)
				{
					rear=NULL;
				}
				cout<<endl<<temp->data<<" is Dequeued from Front";
				delete temp;
			}
		}
		void dequeue_rear()
		{
			if(front==NULL && rear==NULL)
			{
				cout<<endl<<"Double Ended Queue is Empty...!";
			}
			else if(front==rear)
			{		
				cout<<endl<<front->data<<" is dequeued from rear";
				delete front;
				front=NULL;
				rear=NULL;
			}
			else
			{
				Node *temp=front;
				while(temp->next!=rear)
				{
					temp=temp->next;
				}
				rear=temp;
				temp=temp->next;
				rear->next=NULL;
				cout<<endl<<temp->data<<" is dequeued from rear";
				delete temp;
			}
		}
		void printQueueFront()
		{
			if(front==NULL && rear==NULL)
			{
				cout<<endl<<"Double Ended Queue is Empty...!";
			}
			else
			{
				Node *temp=front;
				while(temp!=rear->next)
				{
					cout<<temp->data<<" -> ";
					temp=temp->next;
				}
			}
		}
		
};
int main()
{
	int i=0;
	Queue q;
	q.enqueue_front(3);
	q.enqueue_rear(4);
	q.enqueue_front(5);
	q.enqueue_rear(6);
	q.enqueue_front(7);
	q.enqueue_front(8);
	
	q.dequeue_rear();
	q.dequeue_front();
	q.dequeue_rear();
	q.dequeue_front();
	q.dequeue_rear();
	cout<<endl;
	q.printQueueFront();
	
	
	return 0;
}
