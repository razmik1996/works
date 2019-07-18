#include "LinkedList.h"
#include <iostream>

int main() {
	LinkedList listPrimer;
	const int flan = 4;
	listPrimer.pushBegin(flan);
	listPrimer.pushBegin(6);
	listPrimer.pushBegin(2);
	listPrimer.pushBegin(8);
	listPrimer.pushBack(6);
	/*listPrimer.print();*/

	system("PAUSE");
	return 0;
}