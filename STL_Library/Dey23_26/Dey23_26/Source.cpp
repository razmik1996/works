#include <iostream>

using std::cout;
using std::endl;

#include <algorithm>
#include <iterator>
#include <vector>

char nextLetter();

int main()
{
	std::vector<char> chars(10);
	std::ostream_iterator<char> output(cout, " ");
	std::fill(chars.begin(), chars.end(), '5');

	cout << "Vector chars after filling with 5s: \n ";
	std::copy(chars.begin(), chars.end(), output);

	std::fill_n(chars.begin(), 5, 'A');

	cout << "\n\nVector chars after filling_n with A's: \n ";
	std::copy(chars.begin(), chars.end(), output);

	std::generate(chars.begin(), chars.end(), nextLetter);

	cout << "\n\nVector chars after generating letters A to J: \n ";
	std::copy(chars.begin(), chars.end(), output);

	std::generate_n(chars.begin(), 5, nextLetter);

	cout << "\n\nVector chars after generating_n K-O for the first five elements: \n ";
	std::copy(chars.begin(), chars.end(), output);
	cout << endl;

	return 0;
}

char nextLetter() 
{
	static char letter = 'A';
	return letter++;
}