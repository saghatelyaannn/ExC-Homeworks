#include <iostream>

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void reverse_matrix(int arr[][1000], int m, int n) {
	for (int i = 0; i < m; ++i) {
		for (int j = i + 1; j < n; ++j) {
			swap(arr[i][j], arr[j][i]);
		}
	}
}


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

	int arr[m][1000] = {};

	std::cout << "Input elements." << std::endl;
	for (int i = 0;i < m;++i) {
		for (int j = 0;j < n;++j) {
			std::cin >> arr[i][j];
		}
	}

	reverse_matrix(arr, m, n);

	std::cout << "Reversed array." << std::endl;
	print_matrix(arr, n, m);

	return 0;
}


