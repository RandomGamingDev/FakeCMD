#include <iostream>
#include <climits>
#include <unistd.h>
#include <stdlib.h>

char currentPath[256];

int main() {
	getcwd(currentPath, 256);
	#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)	
	system("cls");
	#else
	system("clear");
	#endif
	while (true) {
		std::cout << currentPath << '>';
		std::string input;
		std::cin >> input;
		std::cin.clear();
		std::cin.ignore(LONG_MAX, '\n');
		std::cout << '\'' << input << "\' is not recognized as an internal or external command,\noperable program or batch file.\n\n";
	}
}
