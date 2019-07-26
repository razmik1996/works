#include <iostream>
#include "Stack.h"

int main() {
	Stack stack;
	stack.push(5);
	stack.push(9);

	std::cout << stack.getSize() << std::endl;
	std::cout << stack;

	system("PAUSE");
	return 1;
}