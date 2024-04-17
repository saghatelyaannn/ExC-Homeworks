#include <iostream>

const int MAX_SIZE = 100;

void printSpiral(int matrix[][MAX_SIZE], int rows, int cols) {
	int top = 0;
	int bottom = rows - 1;
	int left = 0;
	int right = cols - 1;

	while (top <= bottom && left <= right) {
		for (int i = left; i <= right; ++i) {
			std::cout << matrix[top][i] << " ";
		}
		++top;

		for (int i = top; i <= bottom; ++i) {
			std::cout << matrix[i][right] << " ";
		}
		--right;

		for (int i = right; i >= left; --i) {
			std::cout << matrix[bottom][i] << " ";
		}
		--bottom;

		for (int i = bottom; i >= top; --i) {
			std::cout << matrix[i][left] << " ";
		}
		++left;
	}
}

int main() {
    int rows = 0;
	int cols = 0;

	do {
		std::cout << "Input row and column: ";
		std::cin >> rows >> cols;
	} while (cols < 0 || rows < 0);

    int matrix[MAX_SIZE][MAX_SIZE];

    std::cout << "Enter the elements of the matrix." << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    std::cout << "Matrix elements in spiral." << std::endl;
    printSpiral(matrix, rows, cols);
    std::cout << std::endl;

    return 0;
}

