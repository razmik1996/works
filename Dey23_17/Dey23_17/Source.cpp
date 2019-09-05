#include <iostream>

using std::endl;
using std::cout;

#include <list>
#include <algorithm>
#include <iterator>

template <typename T> void printList(const std::list<T> &listRef);

int main()
{
	const int SIZE = 4;
	int array[SIZE] = { 2,4,6,8 };
	std::list<int> values;
	std::list<int> otherValues;

	values.push_front(1);
	values.push_front(2);
	values.push_back(4);
	values.push_back(3);

	cout << "values contains: ";
	printList(values);

	values.sort();
	cout << "\nvalues after sorting values contains: ";
	printList(values);

	otherValues.insert(otherValues.begin(), array, array + SIZE);
	cout << "\nafter insert otherValues contains: ";
	printList(otherValues);

	values.splice(values.end(), otherValues);
	cout << "\nafter splice Values contains: ";
	printList(values);

	values.sort();
	cout << "\nvalues after sorting values contains: ";
	printList(values);

	otherValues.insert(otherValues.begin(), array, array + SIZE);
	otherValues.sort();
	cout << "\nafter insert otherValues contains: ";
	printList(otherValues);

	values.merge(otherValues);
	cout << "\nAfter merge:\n   Values contains: ";
	printList(values);
	cout << "\n   otherValues contains: ";
	printList(otherValues);

	values.pop_front();
	values.pop_back();
	cout << "\nafter pop_front and pop_back values contains: ";
	printList(values);

	values.unique();
	cout << "\nafter unique values contains: ";
	printList(values);

	values.swap(otherValues);
	cout << "\nAfter swap: \nValues contains: ";
	printList(values);
	cout << "\notherValues contanis: ";
	printList(otherValues);

	values.assign(otherValues.begin(), otherValues.end());
	cout << "\nafter assign values contains: ";
	printList(values);

	values.merge(otherValues);
	cout << "\nafter merge values contains: ";
	printList(values);
	
	values.remove(4);
	cout << "\nafter remove 4 values contains: ";
	printList(values);
	cout << endl;
	return 0;
}

template<typename T>
void printList(const std::list<T>& listRef)
{
	if (listRef.empty()) {
		std::cout << "\nList is empty";
	}
	else {
		std::ostream_iterator<T> oIter(cout, " ");
		std::copy(listRef.begin(), listRef.end(), oIter);
	}
}