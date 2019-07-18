#include <iostream>
#include <cctype>

void convertToUpper(char *);

int main()
{
	char phrase[] = "Just Text";
	std::cout << "Text before: " << phrase << std::endl;
	convertToUpper(phrase);
	std::cout << "Text after: " << phrase << std::endl;

	system("PAUSE");
	return 0;
}

void convertToUpper(char *ptr) {
	while (*ptr != '\0') {
		if (islower(*ptr)) {
			*ptr = toupper(*ptr);
		}
		ptr++;
	}
}