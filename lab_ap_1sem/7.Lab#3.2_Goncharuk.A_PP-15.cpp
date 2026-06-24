/*Тема - оператори циклу. Завдання - обчислення значення функції, перевірка на ввід */
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	double x, e;
	bool valid_input = false;

	cout << "Please enter a value for x:";
	while (!valid_input) {
		cin >> x;
		if (cin.fail()) {
			cout << "\nInvalid input, please try again :";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else if (x <= 0 || x >= 1) {
			cout << "The value for \"x\" is incorect. It shoude be 0<|x|<1 :" << endl;
		}
		else valid_input = true;
	} 
	cout << "Please enter a value for e:";
	valid_input = false;
	while (!valid_input) {
		cin >> e ;
		if (cin.fail()) {
			cout << "\nInvalid input, please try again :" ;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else if (e >= 0.0001) {
			cout << "The value for \"e\" is too large. It shoude be less than 0.0001 : ";
		}
		else valid_input = true;
	}
	double y = (-0.5 * log(1 - (2 * x * (cos(3.14 / 3))) + pow(x, 2)));
	double s = 0.00;

	int k = 1;

	do {
		s += (pow(x,k) * cos((k * 3.14)/3)) / k ;
		k++;
	} while (fabs(s - y) <= e);

	cout << fixed << setprecision(5) << endl;
	cout << "The exact value of the function Y(x) is: " << y << endl;
	cout << "The approximate value of the function S(x) is: " << s << endl;
	cout << "The absolute error |S(x) - Y(x)| is: " << fabs(s - y) << endl;

	return 0;
}

	
