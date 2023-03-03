#pragma once
#include "List.h"
class Cqueue {
private:
	List list;
public:
	void push(int val);
	void pop();
	int front();
	int size();
	bool isEmpty();
};
void Cqueue::push(int val)
{
	list.insert(val);
}
void Cqueue::pop()
{
	list.erase();
}
bool Cqueue::isEmpty()
{
	return list.size() == 0;
}
int Cqueue::front()
{
	return list.getHead();
}
int Cqueue::size()
{
	return list.size();
}
