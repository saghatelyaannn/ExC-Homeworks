#include <iostream>

int main() {
	int number = 0;
	std::cout << "Input any number: ";
	std::cin >> number;

	char symbol = '*';

	for (int i = 1;i <= number;++i) {
		for (int j = 1;j <= i; ++j) {
			std::cout << symbol << ' ';
		}
		std::cout << std::endl;
	}
	

	std::cout << std::endl;

	for (int i = 1;i <= number;++i) {
		for (int j = 1;j <= number - i; ++j) {
			std::cout  << ' ';
		}

		for (int j = 1;j <= i;++j) {
			std::cout << symbol << ' ';
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	for (int i = 1;i <= number;++i) {
		for (int j = 1;j <= 2*(number - i);++j) {
			std::cout << ' ';
		}		
		for (int j = 1;j <= i;++j) {
			std::cout << symbol << ' ';
		}
		std::cout << std::endl;
	}

	return 0;
}
