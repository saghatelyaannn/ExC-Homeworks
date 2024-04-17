#include <iostream>

int main() {
	int n = 0;
	float max = 0;
	float temp = 0;

	std::cout << "Enter the amount of numbers: ";
	std::cin >> n;

	std::cout << "Enter the numbers." << std::endl;
	std::cin >> max;
	for(int i = 0;i < n - 1;i++) {
		std::cin >> temp;
		if(max < temp) {
			max = temp;
		}
	}

	std::cout << "The maximum is " << max << std::endl;

	return 0;
}
