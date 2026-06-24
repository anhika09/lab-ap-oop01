#pragma once
#include"BankAccount.h"

class BankArray {
private: 
	BankAccount accounts[20];
	int currentCount;
	const int maxCount = 20;
public:
	BankArray();

	void addAccount(BankAccount acc);
	void deleteAccount(int index);
	void editAccount(int index);
	void printOne(int index);
	void printAll();

	void sortAccounts();
	void printByOwner(const char* ownerName);
};