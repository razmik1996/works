#include <iostream>

using std::cout;
using std::endl;


#include <algorithm>
#include <iterator>
#include <vector>

int main()
{
	const int SIZE = 10;
	int a1[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	int a2[SIZE] = { 1,2,3,4,1000,6,7,8,9,10 };
	std::vector<int> vec1(a1, a1 + SIZE);
	std::vector<int> vec2(a1, a1 + SIZE);
	std::vector<int> vec3(a2, a2 + SIZE);

	std::ostream_iterator<int> output(cout, " ");
	
	cout << "Vector 1 contains: ";
	std::copy(vec1.begin(), vec1.end(), output);
	cout << "\nVector 2 contains: ";
	std::copy(vec2.begin(), vec2.end(), output);
	cout << "\nVector 3 contains: ";
	std::copy(vec3.begin(), vec3.end(), output);

	bool result = std::equal(vec1.begin(), vec1.end(), vec2.begin());
	cout << "\n\nVector vec1 " << (result ? "is" : "is not") << " equal to vector vec2.\n";
	result = std::equal(vec1.begin(), vec1.end(), vec3.begin());
	cout << "Vector vec1 " << (result ? "is" : "is not") << " equal to vector vec3.\n";

	std::pair<std::vector<int>::iterator, std::vector<int>::iterator> location;

	location = std::mismatch(vec1.begin(), vec1.end(), vec3.begin());
	cout << "\nThere is a mismatch between vec1 and vec3 at location "
		<< (location.first - vec1.begin()) << "\nwhere vec1 contains "
		<< *location.first << " and vec3 contains " << *location.second << "\n\n";

	char c1[SIZE] = "HELLO";
	char c2[SIZE] = "BYE BYE";

	result = std::lexicographical_compare(c1, c1 + SIZE, c2, c2 + SIZE);
	cout << c1 << (result ? " is less than " : " is greater than or equal to ") << c2 << endl;
	return 0;
}