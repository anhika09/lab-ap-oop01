/*Exeptions - example with factorial*/
#include <iostream>
#include <stdexcept>
using namespace std;
class Factorial {
private:
	int n;
public:
	void setNumber(double value);
	long long getFactorial();
	Factorial() {
		n = -1;
	}
};
void Factorial::setNumber(double value) {
	try {
		if (value < 0)
			throw runtime_error("Negative number!");
		if (value != (int)value)
			throw runtime_error("Number not integer!");
		n = value;
	}
	catch (const exception& e) {
		cout << "Error: " << e.what() << endl;
		n = -1;
	}
}
long long Factorial::getFactorial() {
	try {
		if (n == -1)
			throw runtime_error("Number was not set!");

		long long result = 1;
		for (int i = 1; i <= n; i++) {
			result *= i;
		}
		return result;
	}
	catch (const exception& e) {
		cout << "Error: " << e.what() << endl;
		return -1;
	}
}
int main() {
	Factorial f;
	double n;
	cout << "--- Factorial Calculator ---" << endl;
	while (true) {
		cout << "Enter number: ";
		cin >> n;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Invalid input. Try again:" << endl;
			continue;
		}
		f.setNumber(n);
		long long result = f.getFactorial();
		if(result != -1){
			cout << "Factorial (n!) = " << f.getFactorial() << endl;
			break;
		}
		cout << "__________________" << endl;
	}
	return 0;
}