#include <iostream>

using std::endl;
using std::cout;

#include <iterator>
#include <algorithm>

int main()
{
	const int SIZE = 10, SIZE2 = 5, SIZE3 = 20;
	int a1[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int a2[SIZE2] = { 4, 5, 6, 7, 8 };
	int a3[SIZE3] = { 4, 5, 6, 11, 15 };
	std::ostream_iterator<int> output(cout, " ");

	cout << "a1 contains: ";
	std::copy(a1, a1 + SIZE, output);
	cout << "\na2 contains: ";
	std::copy(a2, a2 + SIZE2, output);
	cout << "\na3 contains: ";
	std::copy(a3, a3 + SIZE2, output);

	if (std::includes(a1, a1 + SIZE, a2, a2 + SIZE2)) {
		cout << "\n\na1 includes a2";
	}
	else {
		cout << "\n\na1 does not include a2";
	}

	if (std::includes(a1, a1 + SIZE, a3, a3 + SIZE2)) {
		cout << "\n\na1 includes a3";
	}
	else {
		cout << "\n\na1 does not include a3";
	}

	int difference[SIZE];

	int *ptr = std::set_difference(a1, a1 + SIZE, a2, a2 + SIZE2, difference);
	cout << "\n\nset_difference of a1 and a2 is: ";
	std::copy(difference, ptr, output);

	int intersection[SIZE];

	ptr = std::set_intersection(a1, a1 + SIZE, a2, a2 + SIZE2, intersection);
	cout << "\n\nset_intersection of a1 and a2 is: ";
	std::copy(intersection, ptr, output);

	int symmetric_diference[SIZE + SIZE2];

	ptr = std::set_symmetric_difference(a1, a1 + SIZE, a3, a3 + SIZE2, symmetric_diference);
	cout << "\n\nset_symmetric_difference of a1 and a3 is: ";
	std::copy(symmetric_diference, ptr, output);

	int unionSet[SIZE3];

	ptr = std::set_union(a1, a1 + SIZE, a3, a3 + SIZE2, unionSet);
	cout << "\n\nset_union of a1 and a3 is: ";
	std::copy(unionSet, ptr, output);
	cout << endl;
	return 0;
}