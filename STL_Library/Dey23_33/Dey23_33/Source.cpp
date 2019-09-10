#include <iostream>

using std::endl;
using std::cout;

#include <vector>
#include <iterator>
#include <algorithm>

int main()
{
	const int SIZE = 5;
	int a1[SIZE] = { 1, 3, 5, 7, 9 };
	int a2[SIZE] = { 6, 4, 5, 7, 9 };
	std::vector<int> v1(a1, a1 + SIZE);
	std::vector<int> v2(a2, a2 + SIZE);
	std::ostream_iterator<int> output(cout, " ");

	cout << "Vector v1 contains: ";
	std::copy(v1.begin(), v1.end(), output);
	cout << "\nVector v2 contains: ";
	std::copy(v2.begin(), v2.end(), output);

	std::vector<int> results(v1.size());

	std::copy_backward(v1.begin(), v1.end(), results.end());
	cout << "\nAfter copy_backward results contains: ";
	std::copy(results.begin(), results.end(), output);

	std::sort(v2.begin(), v2.end());
	std::vector<int> result2(v1.size() + v2.size());
	std::merge(v1.begin(), v1.end(), v2.begin(), v2.end(), result2.begin());

	cout << "\n\nAfter merge of v1 and v2 results 2 contains:\n";
	std::copy(result2.begin(), result2.end(), output);

	std::vector<int>::iterator endLocation;
	endLocation = std::unique(result2.begin(), result2.end());
	
	cout << "\n\nAfter unique result2 contains:\n";
	std::copy(result2.begin(), endLocation, output);

	cout << "\nVector 1 after reverse: ";
	std::reverse(v1.begin(), v1.end());
	std::copy(v1.begin(), v1.end(), output);
	cout << endl;
	return 0;
}