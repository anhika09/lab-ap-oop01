/*Тема - Структури та об'єднання в мові С++. Завдання - Розробити програму 
яку забезпечує опрацювання структур даних -  Замовлення в бюро перекладів
(клієнт, мова, к-сть. сторінок, перекладач, дата, вартість . Необхідно 
забезпечити опрацювання 3-5 полів елементів з використанням різних простих 
типів даних (стрічки, символи, числа). Забезпечити виконання таких операцій: 
• додавання нового елементу; 
• пошук елементу за значенням полів; 
• послідовний перегляд елементів; 
• модифікація значень полів елементу; 
• видалення елементу; 
• сортування за значеннями полів. 
Результати всіх операцій повинні зберігатись у файлі (створити не менше 
десяти відповідних записів у файлі).*/
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>
#include <cctype>
#include <limits> 

using namespace std;

struct Order {
    string client;
    string language;
    int pages;
    string translator;
    string date;
    double cost;
};
void addOrder(vector<Order>& orders, const string& filename);
void searchByLanguage(const vector<Order>& orders);
void showAllOrders(const vector<Order>& orders);
void modifyOrder(vector<Order>& orders, const string& filename);
void deleteOrder(vector<Order>& orders, const string& filename);
void sortOrders(vector<Order>& orders, const string& filename);
vector<Order> readOrderFromFile(const string& filename);
void saveOrdersToFile(const vector<Order>& orders, const string& filename);

bool compareByDate(const Order& a, const Order& b) {
    return a.date < b.date;
}
bool compareByCost(const Order& a, const Order& b) {
    return a.cost > b.cost;
}
bool isValidText(string s) {
    if (s.empty()) return false;
    for (char c : s) {
        if (!isalpha(c) && c != ' ') return false;
    }
    return true;
}
bool isValidNumber(string s) {
    if (s.empty()) return false;
    for (char c : s) {
        if (!isdigit(c)) return false;
    }
    return true;
}
int main() {
    const string filename = "C:\\orders.txt";
    vector<Order> orders = readOrderFromFile(filename);
    char choice = '\0';
    while (choice != 'q') {
        cout << "\n--- Translation Bureau Menu ---\n";
        cout << "1. Add new order\n";
        cout << "2. Show all orders\n";
        cout << "3. Search by language\n";
        cout << "4. Modify an order\n";
        cout << "5. Delete an order\n";
        cout << "6. Sort orders\n";
        cout << "q. Exit\n";
        cout << "Your choice: ";
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        switch (choice) {
        case '1': addOrder(orders, filename); break;
        case '2': showAllOrders(orders); break;
        case '3': searchByLanguage(orders); break;
        case '4': modifyOrder(orders, filename); break;
        case '5': deleteOrder(orders, filename); break;
        case '6': sortOrders(orders, filename); break;
        case 'q': cout << "Exiting...\n"; break;
        default: cout << "Invalid option. Please select 1-6 or q.\n";
        }
    }
    return 0;
}

void saveOrdersToFile(const vector<Order>& orders, const string& filename) {
    ofstream outputFile(filename, ios::trunc);
    if (!outputFile.is_open()) {
        cerr << "Error opening file for writing!" << endl;
        return;
    }
    for (size_t i = 0; i < orders.size(); i++) {
        outputFile << orders[i].client << " "
            << orders[i].language << " "
            << orders[i].pages << " "
            << orders[i].translator << " "
            << orders[i].date << " "
            << orders[i].cost << endl;
    }
    outputFile.close();
}

void searchByLanguage(const vector<Order>& orders) {
    string langToFind;
    cout << "Please enter the language you need: ";
    getline(cin, langToFind);
    bool found = false;
    cout << "\nLooking for: " << langToFind << "...\n";
    for (size_t i = 0; i < orders.size(); i++) {
        if (orders[i].language == langToFind) {
            cout << "--------------------------------\n";
            cout << "Client:     " << orders[i].client << endl;
            cout << "Language:   " << orders[i].language << endl;
            cout << "Translator: " << orders[i].translator << endl;
            cout << "Cost:       " << orders[i].cost << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "\nNothing found. Check if you typed the language exactly as in the file.\n";
    }
    cout << "--------------------------------\n";
}

vector<Order> readOrderFromFile(const string& filename) {
    vector<Order> orders;
    ifstream file(filename);
    if (!file.is_open()) {
        return orders; 
    }
    Order temp;
    while (file >> temp.client >> temp.language >> temp.pages >>
        temp.translator >> temp.date >> temp.cost) {
        orders.push_back(temp);
    }
    file.close();
    return orders;
}

void addOrder(vector<Order>& orders, const string& filename) {
    Order neworder;
    string tempInput;
    bool isInputCorrect;
    cout << "\n--- Adding New Order ---\n";
    isInputCorrect = false;
    while (!isInputCorrect) {
        cout << "Please enter your name: ";
        getline(cin, neworder.client);
        if (isValidText(neworder.client)) {
            isInputCorrect = true;
        }
        else {
            cout << "Error: Name must contain only letters.\n";
        }
    }
    isInputCorrect = false;
    while (!isInputCorrect) {
        cout << "Please enter a language: ";
        getline(cin, neworder.language);
        if (isValidText(neworder.language)) {
            isInputCorrect = true;
        }
        else {
            cout << "Error: Language must contain only letters.\n";
        }
    }
    isInputCorrect = false;
    while (!isInputCorrect) {
        cout << "Please enter number of pages: ";
        getline(cin, tempInput);
        if (isValidNumber(tempInput)) {
            neworder.pages = stoi(tempInput);
            if (neworder.pages > 0) {
                isInputCorrect = true;
            }
            else {
                cout << "Error: Pages must be > 0.\n";
            }
        }
        else {
            cout << "Error: Pages must be a valid integer number.\n";
        }
    }
    isInputCorrect = false;
    while (!isInputCorrect) {
        cout << "Please enter translator's name: ";
        getline(cin, neworder.translator);
        if (isValidText(neworder.translator)) {
            isInputCorrect = true;
        }
        else {
            cout << "Error: Translator's name must contain only letters.\n";
        }
    }
    isInputCorrect = false;
    while (!isInputCorrect) {
        cout << "Please enter date (YYYY-MM-DD): ";
        getline(cin, neworder.date);
        if (neworder.date.length() == 10) {
            isInputCorrect = true;
        }
        else {
            cout << "Error: Date format invalid. Use YYYY-MM-DD (10 characters).\n";
        }
    }
    isInputCorrect = false;
    while (!isInputCorrect) {
        cout << "Please enter the cost: ";
        getline(cin, tempInput);
        if (isValidNumber(tempInput)) {
            neworder.cost = stoi(tempInput);
            if (neworder.cost > 0) {
                isInputCorrect = true;
            }
            else {
                cout << "Error: Сost must be > 0.\n";
            }
        }
        else {
            cout << "Error: Invalid cost. Use numbers.\n";
        }
    }
    orders.push_back(neworder);
    ofstream outputFile(filename, ios::app);
    if (outputFile.is_open()) {
        outputFile << neworder.client << " "
            << neworder.language << " "
            << neworder.pages << " "
            << neworder.translator << " "
            << neworder.date << " "
            << neworder.cost << endl;
        outputFile.close();
        cout << "\n New order added and written to the file successfully.\n" << endl;
    }
    else {
        cout << "Error opening the file for writing." << endl;
    }
}

void showAllOrders(const vector<Order>& orders) {
    if (orders.empty()) {
        cout << "No orders found.\n";
        return;
    }
    cout << "\n--- Order List ---\n";
    cout << left << setw(5) << "#" << setw(20) << "Client" << setw(15) 
        << "Language"<< setw(10) << "Pages" << setw(15) 
        << "Translator" << setw(15) << "Date" << "Cost" << endl;

    for (size_t i = 0; i < orders.size(); i++) {
        cout << left << setw(5) << i + 1
            << setw(20) << orders[i].client
            << setw(15) << orders[i].language
            << setw(10) << orders[i].pages
            << setw(15) << orders[i].translator
            << setw(15) << orders[i].date
            << orders[i].cost << endl;
    }
}

void modifyOrder(vector<Order>& orders, const string& filename) {
    showAllOrders(orders);
    int index;
    cout << "\nEnter the number of the order to modify: ";
    cin >> index;

    if (index < 1 || index >(int)orders.size()) return;
    Order& order = orders[index - 1];

    cout << "Modifying order for " << order.client << ". Select field:\n";
    cout << "1. Change Pages\n2. Change Cost\nChoice: ";
    int field;
    cin >> field;

    if (field == 1) {
        cout << "Current pages: " << order.pages << ". Enter new: ";
        cin >> order.pages;
    }
    else if (field == 2) {
        cout << "Current cost: " << order.cost << ". Enter new: ";
        cin >> order.cost;
    }
    saveOrdersToFile(orders, filename);
    cout << "Order updated successfully.\n";
}

void deleteOrder(vector<Order>& orders, const string& filename) {
    showAllOrders(orders);
    int index;
    cout << "\nEnter the number of the order to DELETE : ";
    cin >> index;

    if (index < 1 || index >(int)orders.size()) return;
    orders.erase(orders.begin() + (index - 1));
    saveOrdersToFile(orders, filename);
    cout << "Order deleted.\n";
}

void sortOrders(vector<Order>& orders, const string& filename) {
    cout << "Sort by: 1. Date (Oldest first)  2. Cost (Highest first)\nChoice: ";
    int choice;
    cin >> choice;

    if (choice == 1) {
        sort(orders.begin(), orders.end(), compareByDate);
    }
    else if (choice == 2) {
        sort(orders.begin(), orders.end(), compareByCost);
    }
    saveOrdersToFile(orders, filename);
    cout << "Orders sorted and saved.\n";
    showAllOrders(orders);

}
