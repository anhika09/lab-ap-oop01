/*File stream in C++*/
#include <iostream>
#include <fstream>
#include <cctype>
#include <string>
using namespace std;
class TextProcessor {
private:
	string input;
	string output;
	string text;
public:
	TextProcessor(const string& in, const string& out) :
		input(in), output(out) {
	}
	bool readFromFile();
	void copyToFile();
	int countOddLengthWords();
	void letterFrequency();
	bool checkBrackets();
	string removeOddNumbers();
};
	bool TextProcessor::readFromFile() {
		ifstream file(input);
		if (!file) {
			cout << "Problem with opening input file!" << endl;
			return false;
		}
		string line;
		text = "";
		while (getline(file, line)) {
			text += line + "\n";
		}
		file.close();
		return true;
	}
	void TextProcessor::copyToFile() {
		ofstream file(output);
		if (!file) {
			cout << "Problem with opening output file!" << endl;
			return;
		}
		file << text;
		file.close();
	}
	int TextProcessor::countOddLengthWords() {
		int count = 0;
		string word = "";
		for (char c : text) {
			if (isalpha(c)) {
				word += c;
			}
			else {
				if (!word.empty()) {
					if (word.length() % 2 != 0)
						count++;
					word = "";
				}
			}
		}
		if (!word.empty() && word.length() % 2 != 0)
			count++;
		return count;
	}
	void TextProcessor::letterFrequency() {
		int freq[26] = { 0 };
		for (char c : text) {
			if (isalpha(c)) {
				c = tolower(c);
				if (c >= 'a' && c<= 'z')
				freq[c - 'a']++;
			}
		}
		cout << "\nLetter frequency:\n";
		for (int i = 0; i < 26; i++) {
			if (freq[i] > 0)
				cout << char('a' + i) << " : " << freq[i] << endl;
		}
	}
	bool TextProcessor::checkBrackets() {
		int balance = 0;
		for (char c : text) {
			if (c == '(') balance++;
			if (c == ')') balance--;
			if (balance < 0)
				return false;
		}
		return balance == 0;
	}
	string TextProcessor::removeOddNumbers() {
		string result = "";
		string number = "";
		for (char c : text) {
			if (isdigit(c)) {
				number += c; 
			}
			else {
				if (!number.empty()) {
					if ((number.back() - '0') % 2 == 0) {
						result += number;
					}
					number = "";
				}
				result += c;
			}
		}
		if (!number.empty()) {
			if ((number.back() - '0') % 2 == 0) {
				result += number;
			}
		}
		return result;
	}
int main(){
	TextProcessor processor("file_input.txt", "file_output.txt");
	processor.readFromFile();
	
	processor.copyToFile();
	cout << "File copied successfuly." << endl;

	int oddWords = processor.countOddLengthWords();
	cout << "Odd length words: " << oddWords << endl;

	processor.letterFrequency();

	if (processor.checkBrackets())
		cout << "Brackets are correct.\n";
	else
		cout << "Brackets are NOT correct.\n";

	string modifiedText = processor.removeOddNumbers();
	cout << "\nText without odd numbers:\n";
	cout << modifiedText << endl;

	ofstream fout("file_output.txt", ios::app);
	if (fout) {
		fout << "\nOdd length words: " << oddWords << endl;
		fout << "\nText without odd numbers:\n";
		fout << modifiedText << endl;
		fout.close();
	}
	return 0;
}

