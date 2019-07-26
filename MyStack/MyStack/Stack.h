#pragma once
#include <iostream>
class Stack
{
	friend std::ostream &operator<<(std::ostream &os, Stack& other);
public:
	class Node {
	public:
		int value;
		Node *nextPtr;

		Node(const int& data, Node* ptr = nullptr) {
			this->value = data;
			this->nextPtr = ptr;
		}

	};
	Stack &operator++();
	int operator++(int);
	Stack &operator--();
	int operator--(int);
	Stack();
	void pop();
	Stack push(const int&);
	int top();
	int popWithValue();
	bool isEmpty();
	~Stack();
	int getSize() const {
		return Size;
	}
private:
	Node *head;
	int Size;
};

