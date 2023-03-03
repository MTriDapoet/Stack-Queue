#include "List.h"
#include "Stack.h"



int main()
{
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	cout << "size: " << s.size() << endl;
	while (!s.isEmpty())
	{
		cout << s.top();
		s.pop();
	}
	s.pop();
	s.pop();
}