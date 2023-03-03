#include "List.h"
class Stack {
private:
	List list;
public:
	void push(int val);
	void pop();
	int top();
	int size();
	bool isEmpty();
};
void Stack::push(int val)
{
	list.insert(val);
}
void Stack::pop()
{
	if(size())
		list.erase();
	else
	{
		cout << "Empty Stack\n";
		return;
	}
}
int Stack::top()
{
	return list.getTail();
}
int Stack::size()
{
	return list.size();
}
bool Stack::isEmpty()
{
	return list.size() == 0;
}