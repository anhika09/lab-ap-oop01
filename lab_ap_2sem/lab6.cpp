/*Hash Table - data structure, example without STL*/
#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream> 

using namespace std;

struct WordItem {
    string word;
    int count;
    WordItem* next;
    WordItem(string w) : word(w), count(1), next(nullptr) {}
};
class WordHashTable {
private:
    int SIZE; 
    WordItem** table;

    int hashFunction(string key) {
        unsigned long hash = 0;
        for (char c : key) {
            hash = (hash * 67 + c) % SIZE; 
        }
        return hash % SIZE;
    }
public:
    WordHashTable(int size) {
        SIZE = (size > 0) ? size : 10;
        table = new WordItem * [SIZE]();
    }
    void addWord(string word) {
        int index = hashFunction(word);
        WordItem* temp = table[index];
        while (temp != nullptr) {
            if (temp->word == word) {
                temp->count++;
                return;
            }
            temp = temp->next;
        }
        WordItem* newNode = new WordItem(word);
        newNode->next = table[index];
        table[index] = newNode;
    }

    void display() {
        cout << "--- ���������� �i�������� ��i� ---" << endl;
        cout << "(����i� ���-������i: " << SIZE << " ���i���)" << endl;
        for (int i = 0; i < SIZE; ++i) {
            WordItem* temp = table[i];
            if (temp != nullptr) {
                cout << "[" << i << "] -> ";
                while (temp != nullptr) {
                    cout << temp->word << ": " << temp->count << "  |  ";
                    temp = temp->next;
                }
                cout << endl;
            }
        }
    }
    ~WordHashTable() {
        for (int i = 0; i < SIZE; i++) {
            WordItem* curr = table[i];
            while (curr != nullptr) {
                WordItem* toDelete = curr;
                curr = curr->next;
                delete toDelete;
            }
        }
        delete[] table;
    }
};

int main() {
    setlocale(LC_ALL, "Ukrainian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    ifstream file("text.txt");
    if (!file.is_open()) {
        cout << "�������: �� ������� ������� ���� text.txt!" << endl;
        return 1;
    }
    cout << "----- ���� text.txt �����: -----" << endl;
    string line;
    while (getline(file, line)){
        cout << line << endl;
    }
    cout << "________________________________________" << endl;
    file.clear();
    file.seekg(0, ios::beg);

    string word;
    int totalWords = 0;
    while (file >> word) {
        totalWords++;
    }
    if (totalWords == 0) {
        cout << "���� ������i�!" << endl;
        file.close();
        return 0;
    }
    cout << "�������� ��i� � ����i: " << totalWords << ". ��������� �������..." << endl;
    file.clear();             
    file.seekg(0, ios::beg);  
    WordHashTable count(totalWords);
    while (file >> word) {
        count.addWord(word);
    }
    file.close();
    count.display();
    return 0;
}