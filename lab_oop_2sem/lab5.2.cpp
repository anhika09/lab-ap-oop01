/*Inheritance - example with Students (Base Class)...*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Students{
protected:
    string surname;
    string name;
    string group;
    int grades[3];
public:
    Students(string s, string n, string g, int g1, int g2, int g3) {
        surname = s; name = n; group = g;
        grades[0] = g1; grades[1] = g2; grades[2] = g3;
    }
    virtual ~Students() {}
    virtual void show() {
        cout << surname << " " << name << " (Group: " << group << ") \n Grades for the semester: \n"
            << "1. history -  "<< grades[0] << "\n"
            << "2. english -  "<< grades[1] << "\n"
            << "3. maths   -  "<< grades[2] << endl;
    }
};
class Z_Student : public Students {
private:
    double price;
    string workplace;
public:
    Z_Student(string s, string n, string g, int g1, int g2, int g3, double p, string work)
        : Students(s, n, g, g1, g2, g3) {
        price = p;
        workplace = work;
    }
    void show() override {
        Students::show();
        cout << "Form of styding : part-time \n"
            << "Price : " << price << endl;
        cout << "Workplace : " << workplace << endl;
    }
};
class UniversityDB {
private:
    vector<Students*> db;
public:
    void add(Students* student) {
        db.push_back(student);
    }
    void remove(int index) {
        if (index > 0 && index <= db.size()) {
            cout << ">>> Delete [" << index << "]..." << endl;
            delete db[index - 1];
            db.erase(db.begin() + (index - 1));
        }
        else {
            cout << "Error! Such student doesn't exict" << endl;
        }
    }
    void showAll() {
        cout << "=== DATABASE OF STUDENTS ===" << endl;
        if (db.empty()) {
            cout << "Datebase is empty." << endl;
            return;
        }
        for (int i = 0; i < db.size(); i++) {
            cout << "[" << i + 1 << "] ";
            db[i]->show();
            cout << "----------------------" << endl;
        }
    }
    ~UniversityDB() {
        for (int i = 0; i < db.size(); i++) {
            delete db[i];
        }
        db.clear();
    }
};
    int main() {
        UniversityDB DB;
        DB.add(new Z_Student("Bereziuk", "Nadia", "VP-11", 4, 5, 3, 39200, "pab 'Good Friend'"));
        DB.add(new Students("Ksendzova", "Katia", "PZ-17", 5, 5, 5));
        DB.add(new Students("Fedyshin", "Victoria", "OI-14", 5, 5, 5));
        DB.add(new Students("Goncharuk", "Anna", "PP-15", 3, 4, 3));
        DB.showAll();
        DB.remove(4);
        DB.remove(15);
        DB.showAll();
        return 0;
    }