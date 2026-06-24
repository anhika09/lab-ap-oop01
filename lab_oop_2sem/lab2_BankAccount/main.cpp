#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "BankAccount.h"
#include "BankArray.h" 
using namespace std;

int main() {
	cout << "\n\n ---- Task 1: Bank Account ---" << endl;

	BankAccount myAcc(1, "09.10.2022", 500.50, "Anna Goncharuk");
	myAcc.setTransaction("+2000 Scholarship");
	myAcc.setTransaction("-50.36 toSim");
	myAcc.printInfo();

	cout << "Changed account:" << endl;
	myAcc.setDate("30.12.2023");
	myAcc.setOwner("Peter Pen");
	myAcc.setSum(50.20);
	myAcc.setTransaction("-80.32 ATB");
	myAcc.printInfo();

	cout << "Errors:" << endl;
	myAcc.setSum(-200.60);

	cout << "\n\n ---- Task 2: Bank Array ---" << endl;
	BankArray myBank;

	cout << "--- 1. Adding accounts --- " << endl;
	myBank.addAccount(myAcc);
	BankAccount acc2(4, "01.01.2012", 9999.99, "Harry Potter");
	acc2.setTransaction("+56.8 Grefindor");
	myBank.addAccount(acc2);

	BankAccount acc3(3, "05.05.2000", 320.7, "Hermione Granger");
	myBank.addAccount(acc3);

	BankAccount acc4(2, "08.10.2010", 8500.0, "Draco Malfoi");
	acc4.setTransaction("-50.6 Slizarin");
	myBank.addAccount(acc4);

	cout << "\n--- 2. Printing ALL accounts ---" << endl;
	myBank.printAll();

	cout << "\n--- 3. Sorting by Number ---" << endl;
	myBank.sortAccounts();
	myBank.printAll();

	cout << "\n--- 4. Search by Owner 'Harry Potter' ---" << endl;
	myBank.printByOwner("Harry Potter");

	cout << "\n--- 5. Editing account #0 ---" << endl;
	myBank.editAccount(0);
	cout << "[Check after edit:]" << endl;
	myBank.printOne(0);

	cout << "\n--- 6. Deleting account #1 ---" << endl;
	myBank.deleteAccount(1);

	cout << "\n--- 7. Final list ---" << endl;
	myBank.printAll();

	return 0;
}