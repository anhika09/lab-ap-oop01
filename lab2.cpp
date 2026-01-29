# include <iostream>
# include <math.h>

using namespace std;

int main() {
	double x, y, z, gama;
	bool valid_input = false;

	while (!valid_input) {
		cout << "Please enter a value for x:";
		cin >> x;

		if (cin.fail()) {
			cout << "Incorrect input, please try again:" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}

		else if (x > 1 || x < -1) {
			cout << "Can't be solved, arccos x = (-1, 1). Please, try again:" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else {
			while (!valid_input) {
				cout << "Please enter a value for y:";
				cin >> y;

				if (cin.fail()) {
					cout << "Incorrct input, please try again:" << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
				else {
					while (!valid_input) {
						cout << "Please enter a value for z:";
						cin >> z;

						if (cin.fail()) {
							cout << "Incorrct input, please try again:" << endl;
							cin.clear();
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
						}
						else if ((fabs(x - y) * (z + pow(x, 2))) == 0) {
							cout << "Can't be solved, denominator = 0. Please, try again:" << endl;
							cin.clear();
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
						}
						else valid_input = true;
					}
				}
			}
		}
	}
			double act1, act2, act3;
			act1 = 5 * atan(x);
			act2 = 0.25 * acos(x);
			act3 = ((x + 3 * fabs(x - y) + pow(x, 2)) / (fabs(x - y) * z + pow(x, 2)));
			gama = act1 - (act2 * act3);

			cout << "Result, gama =" << gama << endl;
		
	return 0;
}
