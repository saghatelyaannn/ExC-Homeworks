#include <iostream>

int main() {
	int m = 0; 
	int n = 0;
	do {
		std::cout << "Input row and column: ";
		std::cin >> m >> n;
	} while (m < 0 || n < 0);

	int arr[m][n];

	std::cout << "Input the elements of the array." << std::endl;
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			std::cin >> arr[i][j];
		}
	}

	int unique[m * n] = {0};
	int iter = 0;
	int count = 0;

	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			count = 0;
			for (int k = 0; k < m; ++k) {
				for (int l = 0; l < n; ++l) {
					if (arr[i][j] == arr[k][l]) {
						if (i == k && j == l) {
							continue;	
						}
						++count;
						break;
					}
				}
			}
			if (count == 0) {
				unique[iter++] = arr[i][j];
			}
		}
	}

	std::cout << "These elements are unique: ";
	for (int i = 0; i < iter; ++i) {
		std::cout << unique[i] << " ";
	}

	std::cout << std::endl;

	return 0;
}

