#include <iostream>
using namespace std;
template <typename T>
node<T> *copyList(node<T> *front)
{
	node<T> *tempHead = new node<T>(front->nodeValue);
	node<T> *temp;
	while(front->next != NULL)
	{
		temp = new node<T>;
		temp = tempHead->next;
	}
	node<T> *temp2 = tempHead;
	return temp2;
}

template <typename T>
void writeLinkedList(node<T> *front, const string& separator = " ")
{
	node<T> *curr;
	curr = front;

	while (curr != NULL)
	{
		cout << curr->nodeValue << separator;
		curr = curr->next;
	}
}
int main()
{
	node<double> *front = NULL, *p, *newHead = NULL;
	int i = 0, n = 0;
	p = new node<double>(5.5, front);
	front = p;
	p = new node<double>(6.7, front);
	front = p;
	p = new node<double>(15.3, front);
	front = p;
	p = new node<double>(3.14, front);
	front = p;
	p = new node<double>(2.718, front);
	front = p;
	p = new node<double>(15.3, front);
	front = p;
	p = new node<double>(3.5, front);
	front = p;
	cout << "List One: " << endl;
	writeLinkedList(front, " ");
	cout << endl << endl;

	cout << "Copied List: " << endl;
	newHead = copyList(front);
	writeLinkedList(newHead, " ");
	cout << endl << endl;

	system("PAUSE");
	return(0);
}
