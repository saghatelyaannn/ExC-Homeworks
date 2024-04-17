#include <iostream>

int reverse_number(int number) {
	int reversed = 0;
	int reminder = 0;
	while(number != 0) {
		reminder = number % 10;
		reversed = reversed * 10 + reminder;
		number /= 10;
	}

	return reversed;
}

int main() {
	int number = 0;

	do {
		if (number < 0) {
			std::cout << "Input valid number: ";
		} else {
			std::cout << "Input the number: ";
		}
		std::cin >> number;
	} while (number < 0);

	if(number == reverse_number(number)) {
		std::cout << number << " is palindrome" << std::endl;
	} else {
		std::cout << number << " is not palindrome" << std::endl;
	}

	return 0;
}
