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
	node<T> delItem;
	if (head == 0) {
		throw RemoveItemException();
	}

	delItem = head;
	head = head->next;
	delete delItem;
	return;
}

template<class T>
void LinkedList<T>::removeAll()
{
	if (head == 0) {
		throw RemoveItemException();
	}

	while (head != 0) {
		removeBegin();
	}
	return;
}

template<class T>
void LinkedList<T>::removeEnd()
{
	if (head == 0) {
		throw RemoveItemException();
	}

	node<T> *current = head;
	if (current->next == 0) {
		removeBegin();
		return;
	}

	while (current->next->next != 0) {
		current->next = current;
	}

	delete current->next;
	current->next = 0;
	return;
}

template<class T>
bool LinkedList<T>::hasItem(const T & dataForFind)
{
	node<T>* currentItem;
		
	currentItem = head;
	while (currentItem != 0) {
		if (currentItem->data = dataForFind) {
			return true;
		}
		currentItem = currentItem->next;
	}
	return false;
}

template<class T>
void LinkedList<T>::print(ostream & out)
{
}