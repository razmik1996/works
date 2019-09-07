#include <iostream>

using std::cout;
using std::endl;

#include <stack>
#include <vector>
#include <list>

template <typename T> void pushElements(T &stackRef);
template <typename T> void popElements(T &stackRef);

int main()
{
	std::stack<int> intDequeStack;

	std::stack<int, std::list<int>> intListStack;

	std::stack<int, std::vector<int>> intVectorStack;

	cout << "Pushing onto intDequeStack: ";
	pushElements(intDequeStack);
	cout << "\nPushing onto intListStack: ";
	pushElements(intListStack);
	cout << "\nPushing onto intVectorStack: ";
	pushElements(intVectorStack);
	cout << endl << endl;

	cout << "Poping from intDequeStack: ";
	pushElements(intDequeStack);
	cout << "\nPoping from intListStack: ";
	pushElements(intListStack);
	cout << "\nPoping from intVectorStack: ";
	pushElements(intVectorStack);
	cout << endl << endl;
	return 0;
}

template<typename T>
void pushElements(T & stackRef)
{
	for (int i = 0; i < 10; i++) {
		stackRef.push(i);
		cout << stackRef.top() << " ";
	}
}

template<typename T>
void popElements(T & stackRef)
{
	while (!stackRef.empty())
	{
		cout << stackRef.top() << " ";
		stackRef.pop();
	}
}