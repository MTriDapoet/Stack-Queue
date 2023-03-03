#pragma once

#include <iostream>
#include <cassert>
#include <string>
using namespace std;
struct Node {
	int data;
	Node* next;
};
// Định nghĩa lớp list 
class List {
private:
	Node* Head;
	Node* makeNode(int val);
	int count;
public:
	List();
	~List();
	void insert(int val);
	void erase();
	int getHead(); // get the value of Head
	int size();
	void printl();
};
List::List()
{
	count = 0;
	cout << "[    A list has been created    ]\n";
}
List::~List()
{
	cout << "[    A list has been deleted    ]\n";
}
Node* List::makeNode(int val)
{
	Node* p = new Node;
	p->data = val;
	p->next = NULL;
	return p;
}
void List::insert(int val) // Add Tail only
{
	if (Head == NULL)
	{
		Head = makeNode(val);
		count++;
	}
	else
	{
		Node* p = Head;
		while (p->next != NULL)
			p = p->next;
		p->next = makeNode(val);
		count++;
	}
}
void List::erase() // erase head
{
	if (Head == NULL)
	{
		cout << "Empty Queue";
		return;
	}
	if (Head->next == NULL)
	{
		delete Head;
		count--;
		return;
	}
	Node* p = Head;
	Head = Head->next;
	delete p;
	count--;
}
int List::size()
{
	return count;
}
int List::getHead()
{
	Node* p = Head;
	if (p != NULL)
	{
		return p->data;
	}
	else
	{
		cout << "Empty Queue\n";
		return 0;
	}
}
void List::printl()
{
	Node* p = Head;
	while (p != NULL)
	{
		cout << p->data << " ";
		p = p->next;
	}
}
