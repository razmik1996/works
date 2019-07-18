#include <iostream>
#include <ctime>
template <typename T>
void selectionSort(T arrayForSort, int size);

int main()
{
	srand(time(NULL));
	const int arraySize = 100;
	int array[arraySize];
	
	for (int i = 0; i < 100; i++) {
		array[i] = rand() % 100;
	}

	for (int i = 0; i < 100; i++) {
		std::cout << array[i] << " ";
	}

	std::cout << std::endl;

	selectionSort(array, arraySize);

	for (int i = 0; i < 100; i++) {
		std::cout << array[i] << " ";
	}
}

template <typename T>
void selectionSort(T arrayForSort, int size) {
	for (int i = 0; i < size - 1; i++) {
		int minElement = i;
		for (int j = i + 1; j < size; j++) {
			if (arrayForSort[minElement] > arrayForSort[j]) {
				minElement = j;
			}
		}
		if (minElement != i) {
			auto temp = arrayForSort[i];
			arrayForSort[i] = arrayForSort[minElement];
			arrayForSort[minElement] = temp;
		}
	}
}
