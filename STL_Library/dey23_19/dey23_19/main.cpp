#include <iostream>

using std::endl;
using std::cout;

#include <set>

typedef std::multiset<int, std::less<int>> muSet;

#include <algorithm>
#include <iterator>

int main()
{
	const int SIZE = 10;
	int a[SIZE] = { 7,22,9,1,18,30,100,22,85,13 };
	muSet intMultiSet;
	std::ostream_iterator<int> output(cout, " ");

	cout << "There are currently " << intMultiSet.count(15) << " values of 15 in the multiset\n";

	intMultiSet.insert(15);
	intMultiSet.insert(15);
	cout << "After inserts, there are " << intMultiSet.count(15) << " values of 15 in the multiset\n\n";

	std::multiset<int, std::less<int>>::const_iterator result;
	
	result = intMultiSet.find(15);

	if (result != intMultiSet.end()) {
		cout << "Found value: " << *result << "\n";
	}

	result = intMultiSet.find(20);

	if (result == intMultiSet.end()) {
		cout << "Didn't find value 20\n";
	}

	intMultiSet.insert(a, a + SIZE);
	cout << "\nAfter insert, intMultiSet contains:\n";
	std::copy(intMultiSet.begin(), intMultiSet.end(), output);

	cout << "\n\nLower bound of 22: "
		<< *(intMultiSet.lower_bound(22));
	cout << "\n\nUpper bound of 22: " << *(intMultiSet.upper_bound(22));

	std::pair<muSet::const_iterator, muSet::const_iterator> p;

	p = intMultiSet.equal_range(22);

	cout << "\n\nequal_range of 22:" << "\n    Lower bound: " << *(p.first)
		<< "\n    Upper bound: " << *(p.second);

	cout << endl;
	return 0;
}