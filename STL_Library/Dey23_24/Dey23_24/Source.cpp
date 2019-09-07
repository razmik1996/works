#include <iostream>
using std::endl;
using std::cout;

#include <queue>

int main()
{
	std::queue<double> values;

	values.push(3.2);
	values.push(5.6);
	values.push(2.6);

	cout << "Popping from values: ";

	while (!values.empty()) {
		cout << values.front() << " ";
		values.pop();
	}

	cout << endl;
	return 0;
}