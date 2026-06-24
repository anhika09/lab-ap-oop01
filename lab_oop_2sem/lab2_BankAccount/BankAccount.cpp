#define _CRT_SECURE_NO_WARNINGS
#include <iostream>  
#include <cstring>
#include "BankAccount.h"

BankAccount::BankAccount() {
	transCount = 0;
	for (int i = 0; i < 10; i++) {
		transactions[i] = nullptr;
	}
	setNumber(0);
	setDate("00.00.0000");
	setSum(0.0);
	setOwner("Unknown");
}
BankAccount::BankAccount(int n, const char* d, double s, const char* o) {
	transCount = 0;
	for (int i = 0; i < 10; i++) {
		transactions[i] = nullptr;
	}
	setNumber(n);
	setDate(d);
	setSum(s);
	setOwner(o);
}
void BankAccount::setNumber(int n) {
	number = n;
}
void BankAccount::setDate(const char* d) {
		if (strlen(d) > 0) strcpy(date, d);
}
void BankAccount::setSum(double s) {
		if (s >= 0) sum = s;
		else cout << "Error! Sum can't be negative" << endl;
}
void BankAccount::setOwner(const char* o) {
		if (o[0] != '\0') strcpy(owner, o);
		else cout << "Error! Name can't be empty" << endl;
}
void BankAccount::setTransaction(const char* info) {
		if (transCount == 10) {
			delete[] transactions[0];
			for (int i = 0; i < 9; i++) {
				transactions[i] = transactions[i + 1];
			}
			transCount--;
		}
		transactions[transCount] = new char[strlen(info) + 1];
		strcpy(transactions[transCount], info);
		transCount++;
}
const char* BankAccount::getDate() { return date; }
double BankAccount::getSum() { return sum; }
const char* BankAccount::getOwner() { return owner; }
int BankAccount::getNumber() { return number; }

void BankAccount::printInfo() {
	cout << "# " << number << " ";
	cout << "Bank account of:" << owner << endl;
	cout << "Date of account created:" << date << endl;
	cout << "Sum of money:" << sum << endl;
	cout << "Last 10 transactions:" << endl;
	for (int i = 0; i < transCount; i++) {
		if (transactions[i] != nullptr)
		cout << " " << i + 1 << "." << transactions[i] << endl;
	}
	cout << "___________________________" << endl;
}