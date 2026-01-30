/*Тема - рядки в мові програмування С++. Завдання - ввести з клавіатури своє прізвище, ім'я та по 
батькові як одне текстове дане. Вивести найдовше слово на екран.*/
#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

using namespace std;

bool correctInput(const string& input) {
    stringstream ss(input);
    string word;
    int count = 0;

    while (ss >> word) {
        count++;
        if (!isupper((unsigned char)word[0])) return false; 

        for (size_t i = 1; i < word.size(); i++) {
            unsigned char ch = word[i];
            if (!isalpha(ch)) return false; 
        }
    }

    return count == 3; 
}
int main() {
    string name;
    cout << "Enter your full name (Surname Name Patronymic): ";
    getline(cin, name);

    while (!correctInput(name)) {
        cout << "Incorrect input! Try again in format (Surname Name Patronymic) : ";
        getline(cin, name);
    }

    cout << "Thank you. Your full name is: " << name << endl;

    stringstream ss(name);
    string w1, w2, w3;
    ss >> w1 >> w2 >> w3;

    string longest = w1;
    if (w2.size() > longest.size()) longest = w2;
    if (w3.size() > longest.size()) longest = w3;

    cout << "The longest word is: " << longest << endl;
    return 0;
}

