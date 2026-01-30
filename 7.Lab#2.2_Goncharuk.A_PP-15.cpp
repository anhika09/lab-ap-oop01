/*Тема - основи програмування на С++. Завдання - вирішення функції у при різних значеннях z*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x, y, z;
	bool valid_input = false;

	while (!valid_input) {
		cout << "Please, enter a value for z:";
		cin >> z;
		if (cin.fail()) {
			cout << "Incorrect input, please try again:" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else valid_input = true;
	}
		if (z < 0) {
			x = pow(z, 2) - z;
		}
		else x = pow(z, 3);

	y = pow(sin(x + pow(x, 2) + pow(x, 3)), 3);
	cout << "Result for y is :" << y << endl;

	return 0;
}

