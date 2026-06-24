/*Example of Selection Sort*/
#include<iostream>
using namespace std;
void printArray(int arr[], int n) {
	for (int i = 0; i < n; ++i) {
		cout << arr[i] << " ";
	}

}
void SelectionSort(int arr[], int n) {
	for (int i = 0; i < n - 1; ++i) {
		int min = i;
		for (int j = i + 1; j < n; ++j) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		if (min != i) {
			int temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
			cout << "\nReplace :";
			printArray(arr, n);
		}
	}
}
int main() {
	int arr[] = { 67, 32, 12, 5, 0, 100, 25 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "--- Selection Sort ---\nOrigin Sort: ";
	printArray(arr, n);
	SelectionSort(arr, n);
	cout << "\nSorted array: ";
	printArray(arr, n);
	return 0;
}