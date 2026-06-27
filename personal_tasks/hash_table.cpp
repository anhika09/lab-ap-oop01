/*Hash Table Example*/
#include <iostream>
#include <Windows.h>
using namespace std;

class HashItem {
public:
    int key;
    int value;
    HashItem* next;
    HashItem(int key, int value) : key(key), value(value), next(nullptr) {}
};
class HashTable {
private:
    static const int SIZE = 10;
    HashItem** table;
public:
    HashTable() {
        table = new HashItem * [SIZE]();
        for (int i = 0; i < SIZE; ++i) {
            table[i] = nullptr;

        }
    }
    int hashFunction(int key) {
        return key % SIZE;
    }
    void insert(int key, int value) {
        int hash = hashFunction(key);
        HashItem* newItem = new HashItem(key, value);
        if (table[hash] == nullptr) {
            table[hash] = newItem;
            cout << " hash= " << hash << " table[hash]= " << table[hash] << endl;
        }
        else {
            HashItem* temp = table[hash];
            while (temp->next != nullptr){
                temp = temp->next;
            }
            temp->next = newItem;
        }
    }
    void remove(int key){
        int hash = hashFunction(key);
        HashItem* curr = table[hash];
        HashItem* prev = nullptr;
        while (curr != nullptr && curr->key != key){
            prev = curr;
            curr = curr->next;
        }
        if (curr == nullptr){
            cout << "Елемент з ключем  " << key << "  не знайдено\n";
            return;
        }
        if (prev == nullptr){
            table[hash] = curr->next;
        }
        else{
            prev->next = curr->next;
        }
        delete curr;
        cout << "Елемент з ключем  " << key << " видалено" << "\n";
    }
    void display(){
        for (int i = 0; i < SIZE; ++i) {
            HashItem* temp = table[i];
            cout << i << ": " << table[i];
            while (temp != nullptr) {
                cout << "[" << temp->key << "," << temp->value << "] ";
                temp = temp->next;
                cout << temp;
            }
            cout << endl;
        }
    }
};
int main() {
    setlocale(LC_ALL, "Ukrainian");
    HashTable hashTable;
    hashTable.insert(1, 10);
    hashTable.insert(2, 20);
    hashTable.insert(11, 30);
    hashTable.insert(13, 130);
    hashTable.insert(21, 120);
    hashTable.insert(115, 330);
    cout << "Хеш-таблиця до видалення:\n";
    hashTable.display();
    hashTable.remove(2);
    cout << "Хеш-таблиця пiсля видалення:\n";
    hashTable.display();
    return 0;
}
