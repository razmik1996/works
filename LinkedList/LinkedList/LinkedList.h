#pragma once
#include <iostream>

class LinkedList
{
public:
	class RemoveItemException {};
	class InsertItemException {};
private:
	struct node{
		int data;
		node* next;

		node(const int& data, node* ptr = 0) {
			this->data = data;
			this->next = ptr;
		}
	};
public:
	/*friend std::ostream& operator<<(std::ostream& os, const node& data);*/
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
	bool isEmpty() {
		return head == 0;
	}

	void pushBegin(const int data);
	void pushBack(const int data);
	void removeBegin();
	void removeAll();
	void removeEnd();
	bool hasItem(const int dataForFind);
	/*void print();*/
private:
	node *head;
};