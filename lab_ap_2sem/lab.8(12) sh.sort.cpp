/*Example of Shaker Sort*/
#include <iostream>
using namespace std;

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
void printArray(int arr[], int size) {
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void ShakerSort(int arr[], int n) {
	bool swapped = true;
	int start = 0;
	int end = n - 1;
	while (swapped) {
		swapped = false;
		for (int i = start; i < end; ++i) {
			if (arr[i] > arr[i + 1]) {
				swap(arr[i], arr[i + 1]);
				swapped = true;
				cout << "(->) Swap:";
				printArray(arr, n);
			}
		}
		if (!swapped)
			break;
		swapped = false;
		end--;
		for (int i = end - 1; i >= start; --i) {
			if (arr[i] > arr[i + 1]) {
				swap(arr[i], arr[i + 1]);
				swapped = true;
				cout << "(<-) Swap:";
;				printArray(arr, n);
			}
		}
		start++;
	}
}
int main() {
	cout << "\n--- Shaker Sort --- \n";
	int arr[] = { 17, 5, 9, 67, 2, 1, 33, 0 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Original array: ";
	printArray(arr, n);
	cout << "\nShaker Sort process:\n";
	ShakerSort(arr, n);
	cout << "\nSorted array: ";
	printArray(arr, n);
	return 0;
}