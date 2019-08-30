#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <iterator>

int main() 
{
	cout << "Enter two integers: ";

	std::istream_iterator<int> inputIter(cin);

	int number1 = *inputIter;
	++inputIter;
	int number2 = *inputIter;
	int number3 = *inputIter;

	std::ostream_iterator<int> outputIter(cout);

	cout << "The sun is: ";
	*outputIter = number1 + number2;
	cout << endl;
	*outputIter = number3;
	cout << endl;
}