#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node *left;
		Node *right;
		
		Node(int val)
		{
			data=val;
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
void inOrder(Node *t)
{
	if(t==NULL)
	{
		return;
	}
	inOrder(t->left);   //left
	cout<<t->data<<" "; //root
	inOrder(t->right);  //right
}
int main()
{
	Tree t1;
	t1.root = new Node(3);
	t1.root->left = new Node(7);
	t1.root->right = new Node(4);
	t1.root->left->left=new Node(1);
	t1.root->left->right=new Node(5);
	t1.root->right->left = new Node(2);
	t1.root->right->right = new Node(6);
	
	Node *r = t1.root;
	inOrder(r);
}
