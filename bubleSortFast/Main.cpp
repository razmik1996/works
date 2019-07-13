#include <iostream>
#include "Points.h"

template <class T>
void bubleSort(T *array, int Size) {
	bool changed = true;
	int i = 1;
	while (changed) {
		changed = false;
		for (int j = Size - 1; j >= i; j--) {
			if (array[j] < array[j - 1]) {
				T copy = array[j];
				array[j] = array[j - 1];
				array[j - 1] = copy;

				changed = true;
			}
		}

		i++;
	}
}

int main() {
	int const Size = 4;

	Points flan(2, 4);
	Points cardon(8, 2);
	Points tvar(3, 2);
	Points enExon(9, 9);

	Points array[4] = { flan, cardon, tvar, enExon};
	
	for (int i = 0; i < Size; i++) {
		std::cout << array[i] << " ";
	}

	std::cin >> array[2];
	//std::cout << std::endl;
	
	bubleSort(array, Size);

	for (int i = 0; i < Size; i++) {
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;

	system("PAUSE");
}