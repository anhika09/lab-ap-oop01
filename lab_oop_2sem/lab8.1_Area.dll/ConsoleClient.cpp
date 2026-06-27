#include <iostream>
#include <limits>
using namespace std;
__declspec(dllimport) double __stdcall PolygonArea(double a, int n);
int main() {
	cout << "---- Calculating the area of a regular polygon ----" << endl;
	while (true) {
		int n;
		double a;
		cout << "Enter the length of the side (a):";
		cin >> a;
		if (cin.fail() || a <= 0) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Error! Please enter a valid positive number." << endl << endl;
			continue;
		}
		cout << "Enter tne number of sides (n):";
		cin >> n;
		if (cin.fail() || n < 3) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Error! A polygon must have at least 3 sides." << endl << endl;
			continue;
		}
		double result = PolygonArea(a, n);
		cout << "The area of the polygon is:" << result << endl;
	}
	return 0;
}