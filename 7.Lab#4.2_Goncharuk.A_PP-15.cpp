#include <iostream>
#include <ctime>
#include <iomanip>
#define N 4
using namespace std;

int main() {
	srand(time(NULL));
		int array[N][N];
		cout << "Here is the initial array:\n"<< endl;

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				array[i][j] = rand() % 21 - 10;
				cout << setw(7) << array[i][j];
			}
			cout << endl;
		}
		cout << "------------------------------------------" << endl;
		int sum = 0;

		for (int i = 0; i < N; i++) {
			for (int j = i + 1; j < N; j++) {  
				sum += array[i][j];
			}
		}

		cout << "The sum of elements above the main diagonal is: " << sum << endl;

		return 0;
}
       