#include <iostream>

void find_additives(int arr[], const unsigned int size, const int number) {
	int num1 = 0;
	int num2 = 0;
	bool done = false;
	
	for (int i = 0;i < size;++i) {
		num1 = arr[i];
		for (int j = i + 1;j < size;++j) {
			num2 = arr[j];
			if (number == num1 + num2) {
				done = true;
				std::cout << '(' << num1 << ", " << num2 << ')' << std::endl;
			}
		}
	}
	if (done == false) {
		std::cout << "There aren't any additives in the array." << std::endl;
	}
}


int main() {
	unsigned long int size1 = 0;

	do {
		if (size1 < 0) {
			std::cout << "Input valid number: ";
		} else {
			std::cout << "Input size of the array: ";
		}
		std::cin >> size1;
	} while (size1 < 0);

	const unsigned long int size = size1;
	int arr[size] = {0};

	std::cout << "Input elements: ";
	for(int i = 0;i < size;++i) {
		std::cin >> arr[i];
	}

	int number = 0;
	std::cout << "Input the number: ";
	std::cin >> number;

	find_additives(arr, size, number);

	return 0;
}
