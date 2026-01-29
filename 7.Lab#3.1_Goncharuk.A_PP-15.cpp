#include <iostream>
#include <cmath>
#include <iomanip>
#define N 15
using namespace std;
/*int main() {
	double a = 0.00, b = 3.14, x = 0.00, y = 0.00, sum = 0.00;
	double step = (b - a) / N;

	cout << fixed << setprecision(5);

	for (int i = 0; i < N; i++) {
		y = 1 / 3.14 * atan((2 * x - 1) / 2 + 3.14);

		cout << "Step #" << setw(2) << i + 1;
		cout << setw(10) << "x = " << setw(5) << x;
		cout << setw(10) << "y = " << setw(5) << y << endl;

		x = x + step;
		sum += y;
	}
	cout << "\nThe sum of the calculated values is: " << sum << endl;
	return 0;
}*/

/*int main() {
	double a = 0.00, b = 3.14, x = 0.00, y = 0.00, sum = 0.00;
	double step = (b - a) / N;

	cout << fixed << setprecision(5);

	int i = 0;
	while (i < N) {
		y = 1 / 3.14 * atan((2 * x - 1) / 2 + 3.14);

		cout << "Step #" << setw(2) << i + 1;
		cout << setw(10) << "x = " << setw(5) << x;
		cout << setw(10) << "y = " << setw(5) << y << endl;

		x = x + step;
		sum += y;
		i++;
	}
	cout << "\nThe sum of the calculated values is: " << sum << endl;

	return 0;
}*/

int main() {

	double a = 0.00, b = 3.14, x = 0.00, y = 0.00, sum = 0.00;
	double step = (b - a) / N;

	cout << fixed << setprecision(5);

	int i = 0;
	do {
		y = 1 / 3.14 * atan((2 * x - 1) / 2 + 3.14);

		cout << "Step #" << setw(2) << i + 1;
		cout << setw(10) << "x = " << setw(5) << x;
		cout << setw(10) << "y = " << setw(5) << y << endl;

		x = x + step;
		sum += y;
		i++;
	} while (i < N);

	cout << "\nThe sum of the calculated values is: " << sum << endl;

	return 0;
}

