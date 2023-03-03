#include"List.h"
#include"Queue.h"

int main()
{
	Cqueue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);
	q.push(7);
	cout << "q size: " << q.size() << endl;
	while (!q.isEmpty())
	{
		cout << q.front() << " ";
		q.pop();
	}
}