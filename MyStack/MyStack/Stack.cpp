#include "Stack.h"

Stack::Stack()
{
	Size = 0;
	head = nullptr;
}

void Stack::pop()
{
	Node *temp = head;
	head = head->nextPtr;
	delete temp;
	Size--;
}

Stack Stack::push(const int &value)
{
	Node *item = new Node(value, head);
	head = item;
	Size++;
	return *this;
}

int Stack::top()
{
	if (isEmpty()) {
		std::cout << "Error1: You can't take first element of stack, stack is empty" << std::endl;
		return 1;
	}
	return head->value;
}

int Stack::popWithValue()
{
	Node *temp = head;
	int tempValue = head->value;
	head = head->nextPtr;
	delete temp;
	Size--;
	return tempValue;
}

bool Stack::isEmpty()
{
	return Size == 0;
}


Stack::~Stack()
{
}

std::ostream & operator<<(std::ostream & os, Stack & other)
{
	os << "The last added element of Stack is: " << other.top() << std::endl;
	return os;
}
