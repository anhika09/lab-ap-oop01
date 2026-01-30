/*Тема - вказівники в мові С++. Завдання - Створити масив вказівників на окремі слова, посортувати 
їх за довжинами (у векторі). Вивести посортовані слова на екран.*/
# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
using namespace std;
bool lengthCompare(const string& str1, const string& str2) {
	return str1.length() > str2.length();
}
int main() {
	string sentence = "That was the obvious test string to verify the code, all right.";
	string delim = " ";
	vector <string> words;
	cout << sentence << endl;
	cout << endl;

	size_t start = 0;
	size_t end = sentence.find(delim);

	while (end != string::npos) {
		string word = sentence.substr(start, end - start);
		words.push_back(word);
		start = end + delim.length();
		end = sentence.find(delim, start);
	}
	string lastWord = sentence.substr(start);
	words.push_back(lastWord);

	vector < const string* > wordPointers;
	for (const string& word : words) {
		wordPointers.push_back(&word);
	}
	cout << "Sorted words by lenght:" << endl;

	size_t psize = wordPointers.size();
	for (size_t i = 0; i < psize - 1; i++) {
		for (size_t j = i + 1; j < psize; j++) {
			if (lengthCompare(*wordPointers[i], *wordPointers[j])) {
				swap(wordPointers[i], wordPointers[j]);
			}
		}
	}
	for (const string* pWord : wordPointers) {
		cout << *pWord << " ";
	}
cout << endl;
return 0;
}




