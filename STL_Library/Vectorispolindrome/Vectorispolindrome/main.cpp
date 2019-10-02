#include <iostream>
#include <vector>
#include <iterator>

bool isPolindrom(std::vector<int> vec);

int main()
{
	std::vector<int> vec;
	vec.push_back(5);
	vec.push_back(6);
	vec.push_back(5);

	std::cout << "Vector " << (isPolindrom(vec) ? "is" : "is not") << " Polindrom\n";

	vec.pop_back();

	std::cout << "Vector " << (isPolindrom(vec) ? "is" : "is not") << " Polindrom\n";
	
	vec.push_back(6);
	vec.push_back(5);

	std::cout << "Vector " << (isPolindrom(vec) ? "is" : "is not") << " Polindrom\n";

	return 0;
}

bool isPolindrom(std::vector<int> vec)
{
	int Size = vec.size() - 1;
	std::vector<int>::iterator mid;
	mid = vec.end() - (Size / 2);
	std::vector<int>::iterator ptr;
	int i = 0;
	for (ptr = vec.begin(); ptr != mid; ptr++) {
		if (*ptr == *(ptr + (Size - i))) {
			i += 2;
			continue;
		}
		else {
			return false;
		}
	}
	return true;
}