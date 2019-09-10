#include <iostream>

using std::endl;
using std::cout;

#include <algorithm>
#include <vector>
#include <iterator>

bool greater10(int val);

int main()
{
	const int SIZE = 10;
	int a[SIZE] = { 10, 2, 17, 5, 16, 8, 13, 11, 20, 7 };
	std::vector<int> v(a, a + SIZE);
	std::ostream_iterator<int> output(cout, " ");

	cout << "Vector v contains: ";
	std::copy(v.begin(), v.end(), output);

	std::vector<int>::iterator location;
	location = std::find(v.begin(), v.end(), 16);

	if (location != v.end()) {
		cout << "\n\nFound 16 at location " << (location - v.begin());
	}
	else {
		cout << "\n\n16 not found";
	}

	location = std::find(v.begin(), v.end(), 100);

	if (location != v.end()) {
		cout << "\nFound 100 at location " << (location - v.begin());
	}
	else {
		cout << "\n100 not found";
	}

	location = std::find_if(v.begin(), v.end(), greater10);

	if (location != v.end()) {
		cout << "\n\nThe first value greater than 10 is " << *location  << "\nfound at location "<< (location - v.begin());
	}
	else {
		cout << "\nNo values greater than 10 were found";
	}

	std::sort(v.begin(), v.end());
	cout << "\n\nVector v after sort: ";
	std::copy(v.begin(), v.end(), output);

	if (std::binary_search(v.begin(), v.end(), 13)) {
		cout << "\n\n13 was found in v";
	}
	else {
		cout << "\n\n13 was not found in v";
	}

	if (std::binary_search(v.begin(), v.end(), 100)) {
		cout << "\n\n100 was found in v";
	}
	else {
		cout << "\n\n100 was not found in v";
	}

	cout << endl;
	return 0;
}

bool greater10(int value) {
	return value > 10;
}