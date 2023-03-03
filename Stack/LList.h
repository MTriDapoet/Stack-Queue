#pragma once
#include <iostream>
#include <cassert>
#include <string>
using namespace std;
struct Node {
	string data;
	Node* next;
};
// ??nh ngh?a l?p list 
class List {
private:
	Node* Head;
	int count;
	Node* makeNode(int val);
public:
	List();
	~List();
	void insert(int pos, int val);
	void erase(int pos);
	int size() const;
};


