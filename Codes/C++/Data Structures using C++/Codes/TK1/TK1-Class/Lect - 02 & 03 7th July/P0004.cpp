#include<iostream>
using namespace std;
class Node
{
	public:
		int p;
		int c;
		Node *next;
		
		Node()
		{
			p=0;
			c=0;
			next=NULL;	
		}	
		Node(int a, int b)
		{
			p=a;
			c=b;
			next=NULL;
		}
};
class Poly
{
	public:
		Node *head;
		Poly()
		{
			head=NULL;	
		}
		void insert(int a, int b)
		{
			Node *temp=new Node(a,b);
			if(head==NULL)
			{
				head=temp;
			}
			else
			{
				Node *ptr=head;
				while(ptr->next!=NULL)
				{
					ptr=ptr->next;
				}
				ptr->next=temp;
			}
		}
		void printEq()
		{
			Node *temp=head;
			while(temp!=NULL)
			{
				cout<<temp->c<<"X^"<<temp->p<<" + ";
				temp=temp->next;
			}
			cout<<" =  0 ";
		}
		Poly addition(Poly p2)
		{
			int maxp;
			Poly ans;
			//maxp = (a>b)?a:b;
			maxp = (this->head->p > p2.head->p)?this->head->p : p2.head->p;
			Node *temp1=this->head;
			Node *temp2=p2.head;
			
			while(maxp>=0)
			{
				if(temp1->p==temp2->p)
				{
					ans.insert(maxp,temp1->c+temp2->c);
					temp1=temp1->next;
					temp2=temp2->next;
				}
				else if(temp1->p>temp2->p)
				{
					ans.insert(maxp,temp1->c);
					temp1=temp1->next;
				}
				else
				{
					ans.insert(maxp,temp2->c);
					temp2=temp2->next;
				}
				maxp--;
			}
			return ans;
		}
		
};
int main()
{
	Poly p1;
	Poly p2;
	Poly p3;
	int maxp,coef;
	
	cout<<endl<<"Enter the Highest Power of Poly - 1 :";
	cin>>maxp; 
	while(maxp>=0)
	{
		cout<<endl<<"Enter Co-efficient for Power "<<maxp<<" : ";
		cin>>coef;
		p1.insert(maxp,coef);
		maxp--;
	}
	
	cout<<endl<<"Enter the Highest Power of Poly - 2 :";
	cin>>maxp; 
	while(maxp>=0)
	{
		cout<<endl<<"Enter Co-efficient for Power "<<maxp<<" : ";
		cin>>coef;
		p2.insert(maxp,coef);
		maxp--;
	}
	
	cout<<endl;
	p1.printEq();
	cout<<endl;
	p2.printEq();
	
	p3 = p1.addition(p2);
	cout<<endl;
	p3.printEq();
	return 0;
}
