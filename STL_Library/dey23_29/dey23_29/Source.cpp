#include <iostream>

using std::endl;
using std::cout;

#include <algorithm>
#include <iterator>
#include <vector>
#include <set>

typedef std::set<int, std::less<int>> tSet;

bool greater9(int);

int main()
{
	

	const int SIZE = 10;
	int a[SIZE] = { 10, 2, 10, 4, 16, 6, 14, 8, 12, 10 };
	std::ostream_iterator<int> output(cout, " ");

	tSet setConteiner(a, a+SIZE);
	cout << "SET\n";
	std::copy(setConteiner.begin(), setConteiner.end(), output);
	cout << endl;

	cout << "SET after\n";
	setConteiner.insert(11);
	//std::remove(setConteiner.begin(), setConteiner.end(), 2); not true
	std::copy(setConteiner.begin(), setConteiner.end(), output);
	cout << endl;

	std::vector<int> v1(a, a + SIZE);
	cout << "Vector v1 before replacing all 10s: \n";	
	std::copy(v1.begin(), v1.end(), output);

	std::replace(v1.begin(), v1.end(), 10, 100);
	cout << "\nVector v1 after replacing all 10s with 100s: \n";
	std::copy(v1.begin(), v1.end(), output);

	std::vector<int> v2(a, a + SIZE);
	std::vector<int> c1(SIZE, 0);
	cout << "\nVector v2 before replacing all 10s with 100s and copying: \n";
	std::copy(v2.begin(), v2.end(), output);

	std::replace_copy(v1.begin(), v1.end(), c1.begin(), 10, 100);
	cout << "\nVector c1 after replacing all 10s with 100s and copying from v2: \n";
	std::copy(c1.begin(), c1.end(), output);

	std::vector<int> v3(a, a + SIZE);
	cout << "\n\nVector v3 before replacing values greater than 9: \n";
	std::copy(v3.begin(), v3.end(), output);

	std::replace_if(v3.begin(), v3.end(), greater9, 100);
	cout << "\n\nVector v3 after replacing values greater than 9 with 100s: \n";
	std::copy(v3.begin(), v3.end(), output);

	std::vector<int> v4(a, a + SIZE);
	std::vector<int> c2(SIZE, 0);
	cout << "\n\nVector v4 before replacing values greater than 9 and copying: \n";
	std::copy(v4.begin(), v4.end(), output);

	std::replace_copy_if(v4.begin(), v4.end(), c2.begin(), greater9, 100);
	cout << "\n\nVector c2 after replacing values greater than 9 with 100s and copying from v4: \n";
	std::copy(c2.begin(), c2.end(), output);
	std::cout << endl;
	return 0;
}

bool greater9(int numb)
{
	return numb > 9;
}