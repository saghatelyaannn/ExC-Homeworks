#include <iostream>
#define MAX_SIZE 100


void printSpiral(int matrix[][MAX_SIZE], int endRow, int endCol, int startRow = 0, int startCol = 0) {
    if (startRow > endRow || startCol > endCol) {

        return;
    }

    for (int i = startCol; i < endCol; ++i) {
        std::cout << matrix[startRow][i] << " ";
    }

    for (int i = startRow + 1; i < endRow; ++i) {
        std::cout << matrix[i][endCol] << " ";
    }

    if (startRow < endRow) {
        for (int i = endCol - 1; i > startCol; --i) {
            std::cout << matrix[endRow][i] << " ";
        }
    }

    if (startCol < endCol) {
        for (int i = endRow - 1; i > startRow; --i) {
            std::cout << matrix[i][startCol] << " ";
        }
    }

    printSpiral(matrix, endRow - 1, endCol - 1, startRow + 1, startCol + 1);
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

	printSpiral(matrix, rows, cols);
	

	return 0;
}
