#pragma once
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
	LinkedList();
	~LinkedList();
};

