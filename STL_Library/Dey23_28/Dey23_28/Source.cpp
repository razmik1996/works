#include <iostream>

using std::endl;
using std::cout;

#include <algorithm>
#include <vector>
#include <iterator>

bool greater9(int);

int main()
{
	const int SIZE = 10;
	int	a[SIZE] = { 10,2,10,4,16,6,14,8,12,10 };
	std::ostream_iterator<int> output(cout, " ");
	std::vector<int > v(a, a + SIZE);
	std::vector<int >::iterator newLastElement;

	cout << "Vector v before removing all 10s:\n  ";
	std::copy(v.begin(), v.end(), output);

	newLastElement = std::remove(v.begin(), v.end(), 10);
	cout << "\nVector v after removing all 10s with and without elements:\n  ";
	std::copy(v.begin(), v.end(), output);
	cout << endl;
	std::copy(v.begin(), newLastElement, output);

	std::vector<int> v2(a, a + SIZE);
	std::vector<int> c(SIZE, 0);
	cout << "\nVector v2 before removing all 10s and copying elements:\n  ";
	std::copy(v2.begin(), v2.end(), output);

	std::remove_copy(v2.begin(), v2.end(), c.begin(), 10);
	cout << "\nVector c after removing all 10s from v2:\n  ";
	std::copy(c.begin(), c.end(), output);

	std::vector<int> v3(a, a + SIZE);
	cout << "\n\nVector v3 before removing all elements"
		<< "\ngreater than 9:\n ";
	std::copy(v3.begin(), v3.end(), output);

	newLastElement = std::remove_if(v3.begin(), v3.end(), greater9);
	cout << "\n\nVector v3 after removing all elements"
		<< "\ngreater than 9:\n ";
	std::copy(v3.begin(), newLastElement, output);

	std::vector<int> v4(a, a + SIZE);
	std::vector<int> c2(SIZE, 0);
	cout << "\n\nVector v4 before removing all elements"
		<< "\ngreater than 9 and copying:\n ";
	std::copy(v4.begin(), v4.end(), output);

	std::remove_copy_if(v4.begin(), v4.end(), c2.begin(), greater9);
	cout << "\n\nVector v4 after removing all elements"
		<< "\ngreater than 9 and copying:\n ";
	std::copy(c2.begin(), c2.end(), output);
	cout << endl;
	return 0;
}

bool greater9(int x) {
	return x > 9;
}