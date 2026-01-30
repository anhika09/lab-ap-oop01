/*Тема - функції в мові С++. Робота з файлами. Завдання - Обчислити означений інтеграл функції 
, на певному інтервалі, використовуючи метод середніх прямокутників. Ввід-вивід даних та виконання інших 
окремих логічних дій необхідно реалізувати в окремих функціях. У 
головній функції необхідно виконувати лише їх виклик. Використання 
глобальних змінних не допускається. Інформація повинна передаватися у 
функції лише за допомогою параметрів. */
#include <iostream>
#include <iomanip>
#include <cmath>
#include <regex>
#include <string>

using namespace std;
double getPrecision();
double calcFunction(double x);
void calcIntegral(double start, double end, double step);

int main() {
    double begin = 2, end = 3, step;
    step = getPrecision();

    calcIntegral(begin, end, step);
	return 0;
}
double calcFunction(double x) {
    return 7 * pow(x, 3) - pow(x, 2) + 3 * x + 2;
}
double getPrecision() {
    double h;
    bool valid_input = false;
    string input;
    regex valid_number("^[+]?([0-9]+[.])?[0-9]+$");

    cout << "Enter integration step (h > 0): ";

    while (!valid_input) {
        cin >> input;
        if (!regex_match(input, valid_number)) {
            cout << "Invalid input. Please enter a positive number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else {
            h = stod(input);
            if (h <= 0) {
                cout << "Step must be > 0. Try again: ";
            }
            else {
                valid_input = true;
            }
        }
    }
    return h;
}
void calcIntegral(double start, double end, double step) {
    double totalSquare = 0;
    for (double a = start; a < end; a += step) {
        double midPoint = a + (step / 2);
        double height = calcFunction(midPoint);
        totalSquare += height * step;
    }
    cout << "----------------------------------------" << endl;
    cout << "Integration result: " << setw(5) << totalSquare << endl;
}

