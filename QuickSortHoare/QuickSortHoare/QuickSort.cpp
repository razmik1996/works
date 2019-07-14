#include <iostream>
#include <time.h>

template <class T>
void quickSort(T* array, int left, int right);

int main()
{
	srand((unsigned)time(NULL));
	int testArray[] = { 1,5,6,9,5,3,2,1,12,6 };
	for (int i = 0; i < 10; i++) {
		std::cout << testArray[i] << " ";
	}
	std::cout << std::endl;

	quickSort(testArray, 0, 9);

	for (int i = 0; i < 10; i++) {
		std::cout << testArray[i] << " ";
	}
	std::cout << std::endl;

	system("PAUSE");
	return 0;
}

template<class T>
void quickSort(T* array, int left, int right)
{
	int leftIter;
	int rightIter;
	T copy;

	if (left >= right) {
		return;
	}

	T x = array[left + rand() % (right - left)];

	leftIter = left;
	rightIter = right;

	while (leftIter <= rightIter) {
		while (array[leftIter] < x) { leftIter++; }
		while (x < array[rightIter]) { rightIter--; }

		if (leftIter <= rightIter) {
			copy = array[leftIter];
			array[leftIter] = array[rightIter];
			array[rightIter] = copy;
			leftIter++;
			rightIter--;
		}
	}
	quickSort(array, left, rightIter);
	quickSort(array, leftIter, right);
}
