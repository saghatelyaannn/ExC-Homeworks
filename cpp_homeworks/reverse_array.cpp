#include <iostream>

void swap(char& a, char& b) {
	char temp = a;
	a = b;
	b = temp;
}

void reverse_array(char arr[], const unsigned long int size) {
	for (int i = 0;i < (size / 2);++i) {
		swap(arr[i], arr[size - i - 1]);
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
	char arr[size];
	std::cout << "Input characters: ";

	for(int i = 0;i < size;++i) {
		std::cin >> arr[i];
	}

	std::cout << "Reversed array: ";
	reverse_array(arr, size);
	for (int i = 0;i < size;++i) {
		std::cout << arr[i];
	}
	std::cout << std::endl;
}
