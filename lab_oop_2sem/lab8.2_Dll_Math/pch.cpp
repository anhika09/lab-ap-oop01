#include "pch.h"
#include <cmath>
using namespace std;
double __stdcall ConvertLength(double value, int fromUnit, int toUnit) {
	if (value < 0) return -1.0;
	double inMeters = value;
	if (fromUnit == 0) inMeters = value / 1000.0;
	else if (fromUnit == 1) inMeters = value / 100.0;
	else if (fromUnit == 2) inMeters = value / 10.0;
	else if (fromUnit == 3) inMeters = value;
	else if (fromUnit == 4) inMeters = value * 1000.0;

	if (toUnit == 0) return inMeters * 1000.0;
	if (toUnit == 1) return inMeters * 100.0;
	if (toUnit == 2) return inMeters * 10.0;
	if (toUnit == 3) return inMeters;
	if (toUnit == 4) return inMeters / 1000.0;

	return inMeters;
}
double __stdcall CalcPolynom(double x) {
	return 3.5 * pow(x, 4) + 3 * pow(x, 3) + 10 * pow(x, 2) + 8.3;
}
double __stdcall TrapezoidArea(double a, double b, double h){
	if (a <= 0 || b <= 0 || h <= 0) return -1.0;
	return((a + b) / 2 )* h;
}
double __stdcall TrapezoidRadius(double a, double b, double c, double d, double h) {
	if (a <= 0 || b <= 0 || c <= 0 || d <= 0) return -1.0;
	if (abs((a + b) - (c + d)) < 0.0001) {
		return h / 2.0; 
	}
	return -1.0;
}