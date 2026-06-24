/*Example of two Threads in Processes + Set Event*/
#include<iostream>
#include<windows.h>
using namespace std;

const int row = 4;
const int col = 5;
struct Data {
    int matrix[row][col];
    HANDLE rowChanges[row]; 
};
DWORD WINAPI RowChange(LPVOID lpParam) {
    Data* data = (Data*)lpParam;
    for (int i = 0; i < row; ++i) {
        int lastElement = data->matrix[i][col - 1];
        for (int j = 0; j < col; ++j) {
            if (data->matrix[i][j] != 0 && data->matrix[i][j] % 3 == 0) {
                data->matrix[i][j] = lastElement;
            }
        }
        SetEvent(data->rowChanges[i]);
    }
    return 0;
}
DWORD WINAPI ShowRow(LPVOID lpParam) {
    Data* data = (Data*)lpParam;
    for (int i = 0; i < row; ++i) {
        WaitForSingleObject(data->rowChanges[i], INFINITE);
        int lastElement = data->matrix[i][col - 1];
        bool showRow = false;
        for (int j = 0; j < col - 1; ++j) {
            if (data->matrix[i][j] == lastElement) {
                showRow = true;
                break;
            }
        }
        if (showRow) {
            cout << "Row: " << i << " replace num: ";
            for (int j = 0; j < col; ++j) {
                cout << data->matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
int main() {
    Data data = {
        {
        {3, 5, 9, 2, 8},
        {1, 2, 4, 5, 7},
        {6, 1, 2, 3, 4},
        {2, 4, 8, 1, 5},
        }
    };
    cout << "First matrix:" << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << data.matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "---------------------------------" << endl;
    for (int i = 0; i < row; ++i){
        data.rowChanges[i] = CreateEvent(NULL, FALSE, FALSE, NULL);
    }
    HANDLE hThread1 = CreateThread(NULL, 0, RowChange, &data, 0, NULL);
    HANDLE hThread2 = CreateThread(NULL, 0, ShowRow, &data, 0, NULL);

    WaitForSingleObject(hThread1, INFINITE);
    WaitForSingleObject(hThread2, INFINITE);

    for (int i = 0; i < row; ++i) {
        CloseHandle(data.rowChanges[i]);
    }
    CloseHandle(hThread1);
    CloseHandle(hThread2);
    return 0;
}