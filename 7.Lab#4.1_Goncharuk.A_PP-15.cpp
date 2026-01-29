#include <iostream>
#include <iomanip>
#include <ctime>

#define N 10

using namespace std;

int main() {
	srand(time(NULL));
	int onedirr[N];
	cout << "Here is the initial array:" << endl;

	for (int i = 0; i < N; i++) {
		onedirr[i] = rand() % 21 - 10;
		cout << onedirr[i] << setw(5);
	}
	cout << "\n..............................." ;

	cout << "\nNumber of occurrences for each element:" << endl;

	for (int i = 0; i < N; i++) {
		int count = 0;
		for (int j = 0; j < N; j++) {
			if (onedirr[j] == onedirr[i])
				count++ ;
			
		}
		int repeat = 0;
		for (int k = 0; k < i; k++) {
			if (onedirr[k] == onedirr[i])
				repeat = 1;
		}

		if (repeat == 0)
		cout << setw(4) << onedirr[i] << " appears " << count << " time(s)" << endl;
	}

	return 0;
}
