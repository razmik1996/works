#include <iostream>

using std::cout;
using std::endl;

#include <map>

typedef std::multimap<int, double, std::less<int>> MMAP;

int main()
{
	MMAP pairs;
	cout << "There are currently pairs: " << pairs.count(15)
		<< " pairs with key 15 in the multimap\n";

	pairs.insert(MMAP::value_type(15, 2.7));
	pairs.insert(MMAP::value_type(15, 99.3));

	cout << "After inserts, there are " << pairs.count(15)
		<< " pairs with key 15\n\n";

	pairs.insert(MMAP::value_type(30, 111.11));
	pairs.insert(MMAP::value_type(10, 22.22));
	pairs.insert(MMAP::value_type(25, 33.33));
	pairs.insert(MMAP::value_type(20, 9.345));
	pairs.insert(MMAP::value_type(5, 77.54));

	cout << "Multimap pairs contains: \nKey\tValue\n";

	for (MMAP::const_iterator iter = pairs.begin(); iter != pairs.end(); ++iter) {
		cout << iter->first << "\t" << iter->second << "\n";
	}

	cout << endl;
	return 0;
}