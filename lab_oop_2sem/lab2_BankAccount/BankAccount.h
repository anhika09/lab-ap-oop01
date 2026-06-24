#pragma once 
#include <iostream>
#include <cstring>
using namespace std;

class BankAccount {
private:
    int number;
    char date[15];             
    double sum;                 
    char owner[100];             
    char* transactions[10]; 
    int transCount{0};

public:
    BankAccount();
    BankAccount(int n, const char* d, double s, const char* o);

    void setNumber(int n);
    void setDate(const char* d);
    void setSum(double s);
    void setOwner(const char* o);
    void setTransaction(const char* info);

    int getNumber();
    const char* getDate();
    double getSum();
    const char* getOwner();
   

    void printInfo();
};

