#include "LinkedList.h"

template<class T>
inline void LinkedList<T>::pushBegin(const T & data)
{
	Node <T> *item = new Node<T>(data, head);
	head = item;
}

template<class T>
void LinkedList<T>::pushBack(const T & data)
{
	Node<T> *item = new Node<T>(data);

	if (head == 0) {
		head = item;
		return;
	}

	node<T> *current = head;
	while (current->next != 0) {
		current = current->next;
	}

	current->next = item;
	return;
}

template<class T>
void LinkedList<T>::removeBegin()
{
}

template<class T>
void LinkedList<T>::removeAll()
{
}

template<class T>
void LinkedList<T>::removeEnd()
{
}

template<class T>
bool LinkedList<T>::hasItem(const T & dataForFind)
{
	return false;
}

template<class T>
void LinkedList<T>::print(ostream & out)
{
}