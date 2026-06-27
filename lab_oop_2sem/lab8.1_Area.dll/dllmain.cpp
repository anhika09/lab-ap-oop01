#include "pch.h"
#include <cmath>
using namespace std;
double __stdcall PolygonArea(double a, int n) {
	if (n < 3 || a <= 0) {
		return 0.0;
	}
	const double pi = 3.1415926;
	double numerator = n * pow(a, 2);
	double denominator = 4 * tan(pi / n);
	double area = numerator / denominator;
	return area;
}


