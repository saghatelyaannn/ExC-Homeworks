#include <iostream>

int main() {
	int number = 0;
	unsigned long int factorial = 1;
	
	do {
		if(number < 0) {
			std::cout << "Input valid number: ";
		} else {
			std::cout << "Input the number: ";
		}
		std::cin >> number;
	} while(number < 0);
	
	if(0 == number) {
		std::cout << "Factorial of 0 is 0" << std::endl;
	} else {	
		for(int i = 2;i <= number;++i) {
			factorial *= i;
		}
		std::cout << "Factorial of " << number << " is " << factorial << std::endl;
	}

	return 0;
}
