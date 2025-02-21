#include <iostream>
#include "utils.h"

int main() {
	int num1, num2;
	std::cout << "Enter the first number:";
	std::cin >> num1;
	std::cout << "Enter the second number:";
	std::cin >> num2;
	std::cout << add(num1, num2) << std::endl;
	std::cout << minus(num1, num2) << std::endl;
	std::cout << "Im in the main branch" << std::endl;
	return 0;
}