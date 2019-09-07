#include <iostream>

using std::cout;
using std::endl;

#include <set>

typedef std::set<double, std::less<double>> DoubleSet;

#include <algorithm>
#include <iterator>

int main()
{
	const int SIZE = 5;
	double a[SIZE] = { 2.1, 4.2, 9.5, 2.1, 3.7 };
	DoubleSet doubleSet(a, a + SIZE);
	std::ostream_iterator<double> output(cout, " ");

	cout << "DoubleSet contains: ";
	std::copy(doubleSet.begin(), doubleSet.end(), output);

	std::pair<std::set<double, std::less<double>>::const_iterator, bool> p;

	p = doubleSet.insert(13.8);
	cout << "\n\n" << *(p.first) << (p.second ? " was" : " was not") << " inserted";
	cout << "\ndoubleSet contains: ";
	std::copy(doubleSet.begin(), doubleSet.end(), output);

	p = doubleSet.insert(9.5);
	cout << "\n\n" << *(p.first) << (p.second ? " was" : " was not") << " inserted";
	cout << "\ndoubleSet contains: ";
	std::copy(doubleSet.begin(), doubleSet.end(), output);
	cout << endl;

	return 0;
}