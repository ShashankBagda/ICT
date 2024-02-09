#include<iostream>
using namespace std;
class Node
{
	public:
		int no;
		int priority;  
		Node *next;
		
		Node()
		{
			no=0;
			priority = 0;
			next=NULL;	
		}
		Node(int n,int p)
		{
			no=n;
			priority = p;
			next=NULL;	
		}	
};
class PriorityQueue
{
	public:
		Node *front;
		Node *rear;
		PriorityQueue()
		{
			front=NULL;
			rear=NULL;
		}
		void enqueue(int i,int p)
		{
			Node *temp=new Node(i,p);   
			if(front==NULL && rear==NULL)
			{
				front=temp;
				rear=temp;
			}
			else if(temp->priority > front->priority)
			{
				temp->next = front;
				front = temp;
				
			}
			else if(temp->priority <= rear->priority)
			{
				rear->next=temp;
				rear=temp;
			}
			else
			{
				Node *head = front;
				while(temp->priority < head->next->priority)
				{
					head = head->next; 
				}
				temp->next = front->next;
				front->next = temp;
			}
		}
		void dequeue()
		{
			if(front==NULL && rear==NULL)
			{
				cout<<endl<<"Queue is Empty";
			}
			else
			{
				Node *temp=front;
				front=front->next;
				if(front==NULL)
				{
					rear=NULL;
				}
				cout<<endl<<temp->no<<" Queue is Dequeued";
				delete temp;
			}
		}
		void printQueue()
		{
			if(front==NULL && rear==NULL)
			{
				cout<<endl<<"Queue is Empty";
			}
			else
			{
				Node *ptr = front;
				do
				{
					cout<<ptr->no<<" -> ";
					ptr=ptr->next;
				}while(ptr!=rear->next);
			}
			
		}
};

int main()
{
	PriorityQueue q;
	int ch;
	while(ch!=5)
	{
		cout<<endl<<"Enqueue - 1";
		cout<<endl<<"Dequeue - 2";
		cout<<endl<<"Print Queue - 3";
		cout<<endl<<"Exit - 4";
		cout<<endl<<"Enter your choice : ";
		cin>>ch;
		int i,p;
		switch(ch)
		{
			case 1:
			{
				cout<<"Enter the value : "<<endl;
				cin>>i;
				cout<<"Enter the priority: "<<endl;
				cin>>p;
				q.enqueue(i,p);
				break;
			}
			case 2:
			{
				q.dequeue();
				break;	
			}
			case 3:
			{
				cout<<endl<<"Your Queue :"<<endl;
				q.printQueue();
				break;
			}
			case 4:
			{
				return 0;
				break;
			}
			default:
			{
				cout<<"Invalid choice"<<endl;
			}
		}
	}
	return 0;
}
