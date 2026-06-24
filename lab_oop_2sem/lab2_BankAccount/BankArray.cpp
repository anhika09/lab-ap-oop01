#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include "BankArray.h"
using namespace std;

BankArray::BankArray() {
	currentCount = 0;
}
void BankArray::addAccount(BankAccount acc){
	if (currentCount < maxCount) {
		accounts[currentCount] = acc;
		currentCount++;
		cout << "Account was added! (All accounts:" << currentCount << ")\n";
	}
	else {
		cout << "Error! Array full" << endl; 
	}
}
void BankArray::printAll() {
	if (currentCount == 0) {
		cout << "Array is empty" << endl;
	}
	cout << "------- Array of accounts: --------" << endl;
	for (int i = 0; i < currentCount; i++) {
		cout << "[ID : " << i << " ]";
		accounts[i].printInfo();
	}
}  
void BankArray::printOne(int index) {
	if (index >= 0 && index < currentCount) {
		cout << "Informations about account [ " << index << " ]" << endl;
		accounts[index].printInfo();
	}
	else {
		cout << "Error! Incorrect number of account" << endl;
	}
}
void BankArray::deleteAccount(int index) {
	if (index >= 0 && index < currentCount) {
		for (int i = index; i < currentCount - 1; i++) {
			accounts[i] = accounts[i + 1];
		}
		currentCount--;
		cout << "Account [ " << index << " ] deleted!" << endl;
	}
	else {
		cout << "Error! Incorrect account number " << endl;
	}
}
void BankArray::editAccount(int index) {
	if (index >= 0 && index < currentCount) {
		cout << "Choose option whith you what to edit:" << endl;
		cout << "1 - Owner name" << endl;
		cout << "2 - Sum of money" << endl;
		cout << "3 - Date" << endl;
		cout << "4 - Exit editing" << endl;
		cout << "Enter your choise:";
		while (true) {
			int choise;
			cin >> choise;
			if (cin.peek() == '\n') {
				cin.ignore();
			}
			switch (choise) {
			case 1: {
				char newName[50];
				cout << "Enter new name: ";
				cin.getline(newName, 50);
				accounts[index].setOwner(newName);
				accounts[index].setTransaction("New edit");
				cout << "Name updated succesfuly!" << endl << "Enter choise:";
				break;
			}
			case 2: {
				double newSum;
				cout << "Enter new sum: ";
				cin >> newSum;
				accounts[index].setSum(newSum);
				accounts[index].setTransaction("New edit");
				cout << "Sum updated succesfuly!" << endl << "Enter choise:";
				break;
			}
			case 3: {
				char newDate[50];
				cout << "Enter new date: ";
				cin.getline(newDate, 50);
				accounts[index].setDate(newDate);
				accounts[index].setTransaction("New edit");
				cout << "Date updated succesfuly!" << endl << "Enter choise:";
				break;
			}
			case 4: {
				cout << "Exit editing..." << endl;
				return;
			}
			default:
				cout << "Error! Wrong choise" << endl;
				break;
			}
		}
	}
	else {
		cout << "Error! Incorrect account number." << endl;
	}
}
void BankArray::sortAccounts() {
	cout << "Sort by number:" << endl;
	bool swapped;
	for (int i = 0; i < currentCount - 1; i++) {
		swapped = false;
		for (int j = 0; j < currentCount - i - 1; j++) {
			if (accounts[j].getNumber() > accounts[j + 1].getNumber()) {
				swap(accounts[j], accounts[j + 1]);
				swapped = true;
			}
		}
		if (swapped == false) {
			cout << "Array is already sordet" << endl;
			break;
		}
	}
	cout << "Sort Finished!\n";
}
void BankArray::printByOwner(const char* ownerName) {
	cout << "\n--- Serch account by owner name: " << ownerName << " ---\n";
	bool found = false;
	for (int i = 0; i < currentCount; i++) {
		if (strcmp(accounts[i].getOwner(), ownerName) == 0) {
			accounts[i].printInfo();
			found = true;
		}
	}
	if (!found) {
		cout << "Accound no found.\n";
	}
}