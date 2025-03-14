//chp2ex9.cpp
#include <iostream>

int main() {
	int num1, num2;

	std::cout << "enter num1: ";
	std::cin >> num1;
	std::cout << "enter num2: ";
	std::cin >> num2;

	if (num1 > num2) {
		std::cout << num1 << "is bigger than " << num2;
	}
	else {
		std::cout << num2 << "is bigger than " << num1;
	}

	return 0;
}