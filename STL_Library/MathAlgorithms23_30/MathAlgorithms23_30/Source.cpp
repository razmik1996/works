#include <iostream>

using std::endl;
using std::cout;

#include <algorithm>
#include <numeric>
#include <vector>
#include <iterator>
#include <time.h>
#include <list>

bool greater9(int);
void outputSquare(int);
int calculateCube(int);


int main()
{
	srand(time(NULL));
	const int SIZE = 10;
	int a1[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> vec1(a1, a1 + SIZE);
	std::ostream_iterator<int> outputIter(cout, " ");

	std::list<int> ListC(a1, a1 + SIZE);
	//std::random_shuffle(ListC.begin(), ListC.end()); it's not true

	cout << "Vector vec1 before random_Shuffle: ";
	std::copy(vec1.begin(), vec1.end(), outputIter);

	std::random_shuffle(vec1.begin(), vec1.end());
	cout << "\nVector vec1 after random_shuffle: ";
	std::copy(vec1.begin(), vec1.end(), outputIter);

	int a2[SIZE] = { 100, 2, 8, 1, 50, 3, 8, 8, 9, 10 };
	std::vector<int> vec2(a2, a2 + SIZE);
	cout << "\n\nVector vec2 contains: ";
	std::copy(vec2.begin(), vec2.end(), outputIter);

	int result = std::count(vec2.begin(), vec2.end(), 8);
	cout << "\nNumber of elements matching 8: " << result << endl;

	result = std::count_if(vec2.begin(), vec2.end(), greater9);
	cout << "\nNumber of elements greater than 9: " << result << endl;

	cout << "\nMinimum element in vec2 is: " << *(std::min_element(vec2.begin(), vec2.end()));
	cout << "\nMaximum element in vec2 is: " << *(std::max_element(vec2.begin(), vec2.end()));

	cout << "\n\nThe total of elements in vector vec2 is: "
		<< std::accumulate(vec2.begin(), vec2.end(), 0);

	cout << "\n\nThe square of every integer in Vector vec1 is:\n";
	std::for_each(vec1.begin(), vec1.end(), outputSquare);
	
	std::vector<int> cubes(SIZE);
	std::transform(vec1.begin(), vec1.end(), cubes.begin(), calculateCube);
	cout << "\n\nThe cube of every integer in Vector vec1 is: \n";	std::copy(cubes.begin(), cubes.end(), outputIter);
	std::cout << endl;
	return 0;
}

bool greater9(int numb)
{
	return numb > 9;
}

void outputSquare(int value)
{
	cout << value * value << " ";
}

int calculateCube(int value)
{
	return value * value * value;
}