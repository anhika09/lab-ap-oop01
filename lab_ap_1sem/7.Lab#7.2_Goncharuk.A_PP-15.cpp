/*Тема - функції в мові С++. Робота з файлами. Завдання - Виконати аналіз текстового файлу
( Визначити кількість рядків та абзаців). Ввід-вивід даних та 
виконання інших окремих логічних дій необхідно реалізувати в окремих 
функціях. У головній функції необхідно виконувати лише їх виклик.
Використання глобальних змінних не допускається. Інформація повинна 
передаватися у функції лише за допомогою параметрів. Назва текстового 
файлу та інші вхідні дані задаються в тексті програми. Вихідні дані 
виводяться на консоль.*/
#include <iostream>
#include <fstream>
#include <iomanip>
#include <iterator>

using namespace std;

string readTextFromFile(const string& filename);
void countLinesandParagraphs(const string& text);

int main(int argc, char* argv[]) {
	string filename = "C:\\test.txt";
	string text_to_analyze = readTextFromFile(filename);
	
	if (text_to_analyze.empty()) {
		cout << "Lines: 0\nParagraphs: 0" << endl;
		return 1;
	}
	cout << "--- Start ---\n";
	cout << text_to_analyze << endl;
	cout << "--- End ---\n\n";
	
	countLinesandParagraphs(text_to_analyze);
	return 0;
}
string readTextFromFile(const string& filename) {
	ifstream file(filename);
	if (!file.is_open()) {
		cout << "Error opening file. " << endl;
		return "";
	}
	string text;
	file.seekg(0, ios::end);
	text.reserve(file.tellg());
	file.seekg(0, ios::beg);

	text.assign((istreambuf_iterator<char>(file)), istreambuf_iterator<char>());
	file.close();
	return text;
}
void countLinesandParagraphs(const string& text) {
	int lines = 0;
	int paragraphs = 0;
	for (size_t i = 0; i < text.length(); i++) {
		if (text[i] == '\n') {
			lines++;
		}
		if (text[i] == '\t') {
			paragraphs++;
		}
	}
	cout << "Number of lines: " << lines << endl;
	cout << "Number of paragraphs: " << paragraphs << endl;

}
