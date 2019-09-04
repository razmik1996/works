#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
	std::vector<int> vec1(9);
	std::vector<int> vec2;

	for (int j = 1; j < 10; ++j)
		vec2.push_back(j);

	std::cout << "Before changes:" << std::endl;
	std::copy(vec1.begin(), vec1.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
	std::copy(vec2.begin(), vec2.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	std::copy(vec2.begin(), vec2.begin() + 4, vec1.begin());
	std::cout << "After copy:" << std::endl;
	std::copy(vec1.begin(), vec1.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	std::copy_backward(vec2.begin(), vec2.begin() + 4, vec1.end());
	std::cout << "After copy_backward:" << std::endl;
	std::copy(vec1.begin(), vec1.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
}