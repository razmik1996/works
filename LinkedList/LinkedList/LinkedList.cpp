#include "LinkedList.h"

void LinkedList::pushBegin(const int data)
{
	node *item = new node(data, head);
	head = item;
}


void LinkedList::pushBack(const int data)
{
	node *item = new node(data);

	if (head == 0) {
		head = item;
		return;
	}

	node *current = head;
	while (current->next != 0) {
		current = current->next;
	}

	current->next = item;
	return;
}


void LinkedList::removeBegin()
{
	node *delItem;
	if (head == 0) {
		throw RemoveItemException();
	}

	delItem = head;
	head = head->next;
	delete delItem;
	return;
}


void LinkedList::removeAll()
{
	if (head == 0) {
		throw RemoveItemException();
	}

	while (head != 0) {
		removeBegin();
	}
	return;
}

void LinkedList::removeEnd()
{
	if (head == 0) {
		throw RemoveItemException();
	}

	node *current = head;
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

bool LinkedList::hasItem(const int dataForFind)
{
	node* currentItem;

	currentItem = head;
	while (currentItem != 0) {
		if (currentItem->data = dataForFind) {
			return true;
		}
		currentItem = currentItem->next;
	}
	return false;
}


//void LinkedList::print()
//{
//	node *current;
//	current = head;
//	while (current != 0) {
//		std::cout << current.data << " ";
//		current = current->next;
//	}
//	return;
//}

//std::ostream & operator<<(std::ostream & os, const node & data)
//{
//	// TODO: вставьте здесь оператор return
//}
