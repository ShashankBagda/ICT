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
void preOrder(Node *t)
{
	if(t==NULL)
	{
		return;
	}
	cout<<t->data<<" "; //root
	preOrder(t->left);   //left
	preOrder(t->right);  //right
}
void postOrder(Node *t)
{
	if(t==NULL)
	{
		return;
	}
	postOrder(t->left);   //left
	postOrder(t->right);  //right
	cout<<t->data<<" "; //root
}
int main()
{
	Tree t;
	t.root = new Node(7);
	t.root->left = new Node(4);
	t.root->right = new Node(6);
	t.root->left->left = new Node(2);
	t.root->left->right = new Node(3);
	t.root->right->left = new Node(5);
	t.root->right->right = new Node(9);
	
	Node *in = t.root;
	cout<<endl<<"In-Order : "<<endl;
	inOrder(in);
	
	in = t.root;
	cout<<endl<<"Pre-Order : "<<endl;
	preOrder(in);
	
	in = t.root;
	cout<<endl<<"Post-Order : "<<endl;
	postOrder(in);
	return 0;
}
