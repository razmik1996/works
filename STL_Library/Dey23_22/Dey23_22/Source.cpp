#include <iostream>

using std::cout;
using std::endl;

#include <exception>

#include <map>

typedef std::map<int, double, std::less<int>> MAP;

int main()
{
	MAP pairs;

	pairs.insert(MAP::value_type(15, 2.7));
	pairs.insert(MAP::value_type(30, 111.11));
	pairs.insert(MAP::value_type(5, 1010.1));
	pairs.insert(MAP::value_type(10, 22.22));
	pairs.insert(MAP::value_type(25, 33.333));
	pairs.insert(MAP::value_type(5, 77.54));
	pairs.insert(MAP::value_type(20, 9.345));
	pairs.insert(MAP::value_type(15, 99.3));

	cout << "Pairs contains:\nKey\tValue\n";

	for (std::map<int, double, std::less<int>>::const_iterator iter = pairs.cbegin(); iter != pairs.end(); ++iter) {
		cout << iter->first << "\t" << iter->second << "\n";
	}

	pairs[25] = 9999.99;
	pairs[40] = 8765.43;
	try {
		pairs.at(40) = 666.66;
	}
	catch (std::out_of_range e) {
		std::cout << e.what() << std::endl;
	}
	cout << "\nAfter subscript operations, pairs contains:\nKey\tValue\n";
	for (MAP::const_iterator iter = pairs.begin(); iter != pairs.end(); ++iter) {
		cout << iter->first << "\t" << iter->second << "\n";
	}
	
	cout << endl;
	return 0;
}