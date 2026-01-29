#include <iostream>
#include <string>
#include <cctype>

using namespace std;
string getString() {
	string s;
	while (true) {
		cout << "Please, enter string:";
		getline(cin, s);
		if (s.length() > 100) {
			cout << "Your input is too long. Please, try again:" << endl;
		}
		else break;
	}
	return s;
}
int main() {
	string s1 = getString();
	string s2 = getString();

	string specialChars = "";

	for (char c: s2) {
		if (!isalpha((unsigned char)c) && !isdigit((unsigned char)c)) {
			specialChars += c;
			specialChars += ' ';
		}
	}
	size_t mid = s1.length() / 2;
	string result = s1.substr(0, mid) + ' ' + specialChars + s1.substr(mid);
	cout << "\nResult:" << result;
	return 0;
}
