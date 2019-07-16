#pragma once
#include <iostream>
template <class T>
class LinkedList
{
public:
	class RemoveItemException {}; 
	class InsertItemException {};
private:
	template <class T>
	struct node {
		T data;
		node<T>* next;

		node(const T& data, node<T>* ptr = 0) {
			this->data = data;
			this->next = ptr;
		}
	};
public:
	LinkedList() 
	{
		head = 0;
	}
	~LinkedList()
	{
		if (!isEmpty()) {
			removeAll();
		}
	}
public:
	bool isEmpty() {
		return head == 0;
	}
	
	void pushBegin(const T& data);
	void pushBack(const T& data);
	void removeBegin();
	void removeAll();
	void removeEnd();
	bool hasItem(const T& dataForFind);
	void print(ostream& out = cout);
private:
	node<T> *head;
};