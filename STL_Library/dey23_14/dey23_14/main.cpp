#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

template <typename T> void printVector(const std::vector<T> &integers2);

int main()
{
	const int SIZE = 6;
	int array[SIZE] = { 1, 2, 3, 4, 5, 6 };
	vector<int> integers;

	cout << "The initial size of integers is: " << integers.size() << "\nThe initial capacity of integers is: "
		<< integers.capacity();

	integers.emplace_back(2);
	integers.emplace_back(3);
	integers.emplace_back(4);

	cout << "\nThe size of integers is: " << integers.size() << "\nThe capacity of integers is: " << integers.capacity();
	cout << "\n\nOutput array using pointer notation: ";

	for (int *ptr = array; ptr != array + SIZE; ++ptr) {
		cout << *ptr << " ";
	}

	cout << "\nOutput vector using iterator notation: ";
	printVector(integers);
	cout << "\nReversed contents of vector integers: ";

	vector<int>::const_reverse_iterator reverseIterator;
	vector<int>::const_reverse_iterator tempIterator = integers.rend();

	for (reverseIterator = integers.rbegin(); reverseIterator != tempIterator; ++reverseIterator) {
		cout << *reverseIterator << " ";
	}

	cout << endl;
	return 0;
}

template<typename T>
void printVector(const vector<T> &integers2)
{
	typename vector<T>::const_iterator constIterator;

	for (constIterator = integers2.begin(); constIterator != integers2.end(); ++constIterator) {
		cout << *constIterator << " ";
	}
}
