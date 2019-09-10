#include <iostream>

using std::endl;
using std::cout;

#include <vector>
#include <algorithm>
#include <iterator>

int main()
{
	const int SIZE = 10;
	int a1[SIZE] = { 1, 3, 5, 7, 9, 1, 3, 5, 7, 9 };
	std::vector<int> v1( a1, a1 + SIZE );
	std::ostream_iterator<int> ostream(cout, " ");

	cout << "Before inplace_merge v1 contains: \n";
	std::copy(v1.begin(), v1.end(), ostream);
	std::inplace_merge(v1.begin(), v1.begin() + 5, v1.end());
	cout << "\nAfter inplace_merge v1 contains: \n";
	std::copy(v1.begin(), v1.end(), ostream);

	std::vector<int> result;

	std::unique_copy(v1.begin(), v1.end(), std::back_inserter(result));
	cout << "\nAfter unique_copy result contains: \n";
	std::copy(result.begin(), result.end(), ostream);

	result.clear();

	std::reverse_copy(v1.begin(), v1.end(), std::back_inserter(result));
	cout << "\nAfter reverse_copy result contains: \n";
	std::copy(result.begin(), result.end(), ostream);

	std::cout << endl;

	return 0;
}