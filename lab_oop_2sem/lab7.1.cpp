/*Processes and Threads in Windows OS*/
#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	STARTUPINFO si;
	PROCESS_INFORMATION pi;
	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi));

	LPCWSTR appPath = L"C:\\Program Files\\Microsoft Office\\root\\Office16\\EXCEL.EXE";
	cout << "Starting MS Excel..." << endl;
	BOOL success = CreateProcess(
		appPath, NULL, NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS, NULL, NULL, &si, &pi);
	if (!success) {
		cout << "Fail with opening program" << GetLastError() << endl;
		return 1;
	}
	cout << "Exel is running for 12 seconds..." << endl;
	Sleep(12000);
	TerminateProcess(pi.hProcess, 0);
	CloseHandle(pi.hProcess);
	CloseHandle(pi.hThread);
	cout << "Exel is closed" << endl;
	return 0; 
}