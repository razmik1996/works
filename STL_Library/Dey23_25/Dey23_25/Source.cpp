#include <iostream>

using std::endl;
using std::cout;

#include <queue>

int main()
{
	std::priority_queue<double> prioritets;

	prioritets.push(3.2);
	prioritets.push(9.8);
	prioritets.push(5.4);

	cout << "Popping from prioritets: ";

	while (!prioritets.empty()) {
		cout << prioritets.top() << " ";
		prioritets.pop();
	}

	cout << endl;
	return 0;
}