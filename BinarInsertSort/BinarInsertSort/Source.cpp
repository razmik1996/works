#include <iostream>
#include <ctime>

template <class T>
void BinaryInsertionSort(T *a, int n);

int main() {
	srand(time(NULL));
	const int arraySize = 20;
	int sortArray[arraySize];

	for (int i = 0; i < arraySize; i++) {
		sortArray[i] = rand() % 100;
	}

	for (int i = 0; i < arraySize; i++) {
		std::cout << sortArray[i] << " ";
	}

	std::cout << std::endl;

	BinaryInsertionSort(sortArray, arraySize);

	for (int i = 0; i < arraySize; i++) {
		std::cout << sortArray[i] << " ";
	}

	std::cout << std::endl;
	system("PAUSE");
	return 0;
}


template <class T>
void BinaryInsertionSort(T *a, int n)
{
	for (int i = 1; i < n; i++)
	{
		T x = a[i];
		int left = 0;
		int right = i - 1;
		while (left <= right)
		{
			int j = (left + right) / 2;
			if (x < a[j]) {
				right = j - 1;
			}

			else {
				left = j + 1;
			}
		}


		for (int k = i - 1; k >= left; k--) {
			a[k + 1] = a[k];
		}
		a[left] = x;
	}
}