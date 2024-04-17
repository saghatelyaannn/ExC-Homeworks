#include <iostream>


void print_matrix(int arr[][1000], int m, int n) {
	for (int i = 0;i < m;++i) {
		for (int j = 0;j < n;++j) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}


int main() {
	int m = 0;
	int n = 0;

	do {
		if (m < 0 || n < 0) {
			std::cout << "Input valid numbers: ";
		} else {
			std::cout << "Input row and column: ";
		}
		std::cin >> m >> n;
	} while (m < 0 || n < 0);

	int arr1[m][n] = {0};
	int arr2[m][n] = {0};

	std::cout << "Input elements of 1st array." << std::endl;
	for (int i = 0;i < m;++i) {
		for (int j = 0;j < n;++j) {
			std::cin >> arr1[i][j];
		}
	}

	std::cout << "Input elements of 2th array." << std::endl;
	for (int i = 0;i < m;++i) {
		for (int j = 0;j < n;++j) {
			std::cin >> arr2[i][j];
		}
	}

	int sumArr[m][1000] = {0};

	for (int i = 0;i < m;++i) {
		for (int j = 0;j < n;++j) {
			sumArr[i][j] = arr1[i][j] + arr2[i][j];
		}
	}

	print_matrix(sumArr, m, n);

	return 0;
}
