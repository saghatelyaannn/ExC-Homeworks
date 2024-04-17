#include <iostream>

void fibonacci(unsigned long int n, unsigned long int arr[]) {
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i < n; ++i) {
        arr[i] = arr[i - 2] + arr[i - 1];
    }
}

int main() {
    unsigned long int size = 0;
	std::cout << "Input the number: ";
    std::cin >> size;

    unsigned long int fibonacci_arr[size] = {1};
    fibonacci(size, fibonacci_arr);
    std::cout << "The " << size << "th element is " << fibonacci_arr[size - 1];
	std::cout << std::endl;

    // Print the Fibonacci number in asterisks
	std::cout << std::endl;
	for (int i = 1;i <= size;++i) {
		for (int j = 0;j < i; ++j) {

			std::cout << fibonacci_arr[j] << ' ';
		}
		std::cout << std::endl;
	}

    return 0;
}

