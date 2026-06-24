/*Тема - вказівники в мові С++. Завдання  - з клавіатури вводимо динамічний рядок. Перевірити, 
чи зустрічається у рядку подвоєння літер, *ch - вказівники*/
#include <iostream>

using namespace std;
int main() {
	char string[1000];
	int count_double = 0;
	cout << "Enter the string to see how many double letters it cointains in words: " << endl;
	cin.getline(string, sizeof(string));

	for (char* ch = string; *ch != '\0'; ch++) {
		if (*ch == *(ch + 1)) count_double++;
	}
	cout << "\n The number of double letters is:" << count_double << endl;

return 0;

} 
