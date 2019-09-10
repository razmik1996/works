#include <iostream>

using std::cout;
using std::endl;

#include <algorithm>
#include <iterator>

int main()
{
	const int SIZE = 10;
	int a[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	std::ostream_iterator<int> output(cout, " ");

	cout << "Array a contains:\n    ";
	std::copy(a, a + SIZE, output);

	std::swap(a[0], a[1]);

	cout << "\nAfter swap array a contains:\n    ";
	std::copy(a, a + SIZE, output);

	std::iter_swap(&a[0], &a[1]);
	cout << "\nAfter iter_swap array a contains:\n    ";
	std::copy(a, a + SIZE, output);

	std::swap_ranges(a, a + 5, a + 5);
	cout << "\nArray a after swapping the first five elements\nwith the last five elements: \n";
	std::copy(a, a + SIZE, output);
	cout << endl;
	return 0;
}