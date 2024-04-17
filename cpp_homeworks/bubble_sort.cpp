#include <iostream>

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void bubble_sort(int arr[], int size) {
	bool done = false;

	for(int i = 0;i < size;++i) {
		for(int j = 0;j < size - i;++j){
			if(arr[j] > arr[j + 1]) {
				done = true;
				swap(arr[j], arr[j + 1]);
			}
		}
		//if swaping was not done breaking the loop
		if(!done) {
			break;
		}
	}
}

void printArray(int arr[], int size){
	std::cout << arr[0];
	for (int i = 1;i < size;++i) {
		std::cout << " " << arr[i];
	}
	std::cout << std::endl;
}

unsigned long int input_size() {
	int size = 0; 
	do {
		if (size < 0) {
			std::cout << "Input valid number: ";
		} else {
			std::cout << "Input the size of the array: ";
		}
		std::cin >> size;
	} while (size < 0);

	return size;
}

int main() {
	int size = input_size();

	int arr[size] = {0};
	std::cout << "Input elements of the array: ";
	for (int i = 0;i < size;++i) {
		std::cin >> arr[i];
	}

	std::cout << "Sorted array: ";
	bubble_sort(arr, size);
	printArray(arr, size);

	return 0;
}

