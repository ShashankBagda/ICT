/*
Shashank Bagda
92100133020
DSC - Mid 1 - Task 1
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

struct Students
{
	struct Students *pre;
	int RollNo;
	char Name[20];
	int Marks;
	struct Students *next;
};

struct Students *create_node()
{
	struct Students *n = new struct Students;
	n->pre = NULL;
	n->next = NULL;
	return n;
}

struct Students *insert_node(struct Students *head)
{
	struct Students *n = create_node();
	cout<<"Enter Roll No of Student : ";
	cin>>n->RollNo;
	cin.ignore();
	cout<<"Enter Name of Student : ";
	cin.getline(n->Name,20);
	cout<<"Enter Marks of Student : ";
	cin>>n->Marks;
	if(head==NULL)
	{
		n->pre = n;
		n->next = n;
		head = n;
//		head->next = head;
//		head->pre = head;
		return head;
	}
	else
	{
		struct Students *ptr = head->pre;
		n->next = head;
		head->pre = n;
		n->pre = ptr;
		ptr->next=n;
		return head;
	}
}

void display(struct Students *head)
{
	if(head==NULL)
	{
		cout<<"DCLL is Empty\n";
	}
	else
	{
		struct Students *ptr = head;
		while(ptr->next != head)
		{
			cout<<"Roll No of Student is "<<ptr->RollNo<<endl;
			cout<<"Name of Student is "<<ptr->Name<<endl;
			cout<<"Makrs of Student is "<<ptr->Marks<<endl;
			ptr = ptr->next;
		}
		cout<<"Roll No of Student is "<<ptr->RollNo<<endl;
		cout<<"Name of Student is "<<ptr->Name<<endl;
		cout<<"Makrs of Student is "<<ptr->Marks<<endl;
	}
}

bool getPrime(int num)
{
	if (num <= 1)
        return false;
 
    for (int i = 2; i < num; i++)
        if (num % i == 0)
            return false;
 
    return true;

}

void *delete_node(struct Students *ptr)
{
	struct Students *preptr = ptr->pre;
	struct Students *postptr = ptr->next;
	preptr->next = postptr;
	postptr->pre = preptr;
	free(ptr);
}

struct Students *delete_prime(struct Students *head)
{
	int i=0;
	struct Students *ptr = head;
	while(ptr->next != head)
	{
		if(getPrime(i))
		{
			struct Students *tmp = ptr;
			ptr = ptr->next;
			delete_node(tmp);
		}
		else
		{
			ptr = ptr->next;	
		}
		i++;
	}
	return head;
}

int main()
{
	struct Students *head=NULL;
	int ch;
	cout<<"1 to Add Students\n2 to Perform Sorting\n3 to Delete all Prime no Position\n4 to Display Data\n5 to Exit\n";
	do
	{
		cout<<"Enter you choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				head = insert_node(head);
				break;
			case 3:
				head = delete_prime(head);
				break;
			case 4:
				display(head);
				break;
		}
	}while(ch!=5);
	return 0;
}
