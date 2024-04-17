#include <iostream> 
#define MAX(a, b)  (a > b ? a : b)
#define MIN(a, b)  (a < b ? a : b)

int main() {
	int size = 0;
	std::cout << "Input the quantity of numbers: ";
	std::cin >> size;
	int arr[size] = {0};

	std::cout << "Input the numbers: ";

	for (int i = 0; i < size;++i) {
		std::cin >> arr[i];
	}

	int max = arr[0];
	int min = arr[0];
	for (int i = 1; i < size;++i) {
		max = MAX(max, arr[i]);
	}

	for (int i = 1; i < size;++i) {
		min = MIN(min, arr[i]);
	}

	std::cout << "The biggest number is " << max << std::endl;
	std::cout << "The smallest number is " << min << std::endl;

	return 0;
}
