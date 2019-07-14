#include <iostream>

template <class T>
void quickSort(T* array, int left, int right);

int main()
{

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

	T x = array[(left + right) / 2];

	leftIter = left;
	rightIter = right;

	while (leftIter <= rightIter) {
		while (array[leftIter] < x) { leftIter++; }
		while (x < array[rightIter]) { rightIter--; }

		if (leftIter <= rightIter) {
			copy = array[leftIter];
			array[leftIter] = array[rightIter];
			array[rightIter] = array[leftIter];
			leftIter++;
			rightIter--;
		}
	}
	quickSort(*array, left, rightIter);
	quickSort(*array, leftIter, right);
}
