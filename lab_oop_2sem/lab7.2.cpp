/*Example of two Threads in Processes*/
#include <iostream>
#include <windows.h>
using namespace std;

struct Data {
	int* array;
	int size;
	int result;
};
DWORD WINAPI CountZeroNum(LPVOID lpParam) {
	Data* data = (Data*)lpParam;
	int count = 0;
	for (int i = 0; i < data->size; ++i) {
		if (data->array[i] == 0) {
			count++;
		}
	}
	data->result = count;
	return 0;
}
DWORD WINAPI SumNegativeEvenNum(LPVOID lpParam) {
	Data* data = (Data*)lpParam;
	int sum = 0;
	for (int i = 0; i < data->size; ++i) {
		if (data->array[i] < 0 && data->array[i] % 2 == 0) {
			sum += data->array[i];
		}
	}
	data->result = sum;
	return 0;
}
int main() {
	int array[] = { 5, 6, -2, -4, 0, 0, -8, 65, 0 };
	int arraySize = sizeof(array) / sizeof(array[0]);

	Data data1 = {array, arraySize, 0 };
	Data data2 = {array, arraySize, 0 };
	cout << "Array:";
	for (int i = 0; i < arraySize; i++) {
		cout << array[i] << " ; ";
	}
	cout << endl;
	cout << "Adding threads..." << endl;
	HANDLE hThread1 = CreateThread(
		NULL, 0, CountZeroNum, &data1, 0, NULL);
	HANDLE hThread2 = CreateThread(
		NULL, 0, SumNegativeEvenNum, &data2, 0, NULL);

	if (hThread1 == NULL || hThread2 == NULL) {
		cout << "Fail with creating threads!" << endl;
		return 1;
	}
	WaitForSingleObject(hThread1, INFINITE); 
	WaitForSingleObject(hThread2, INFINITE);
	cout << "Threads are finished. Results:" << endl;
	cout << "Number of zero elements: " << data1.result << endl;
	cout << "Sum of negative even numbers: " << data2.result << endl;
	CloseHandle(hThread1);
	CloseHandle(hThread2);
	return 0;
}