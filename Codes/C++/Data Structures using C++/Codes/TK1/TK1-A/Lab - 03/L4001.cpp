#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node *left;
		Node *right;
	
		Node(int i)
		{
			data=i;
			left=NULL;
			right=NULL;
		}	
};
class Tree
{
	public:
		Node *root;	
	Tree()
	{
		root=NULL;
	}
};
void inOrder(Node *test)
{
	if(test==NULL)
	{
		return;
	}
	inOrder(test->left);   //left
	cout<<test->data<<" "; //root
	inOrder(test->right);  //right
}
void preOrder(Node *test)
{
	if(test==NULL)
	{
		return;
	}
	cout<<test->data<<" "; //root
	preOrder(test->left);   //left
	preOrder(test->right);  //right
}
int main()
{
	Tree t1;
	t1.root = new Node(1);
	t1.root->left = new Node(2);
	t1.root->right = new Node(3);
	t1.root->left->left = new Node(4);
	t1.root->left->right = new Node(5);
	t1.root->right->left = new Node(6);
	cout<<endl<<"IN-ORDER"<<endl;
	Node *t=t1.root;
	inOrder(t);
	cout<<endl<<"PRE-ORDER"<<endl;
	t=t1.root;
	preOrder(t);
	return 0;
}
