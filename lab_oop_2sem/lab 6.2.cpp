/*Smart pointers - unique_ptr(Shop) ; shared_ptr(list of customers); weak_ptr(last custumer)*/
#include <iostream>
#include <string>
#include <list>
#include <memory>
using namespace std;

struct Customer {
    string name;
    double money;
    int priority;

    Customer(string n, double m, int p = 0)
        : name(n), money(m), priority(p) {
    }
    ~Customer() {
        cout << "Customer - " << name << " was deleted\n";
    }
};
class ShopQueue {
protected:
    list<shared_ptr<Customer>> line;
    weak_ptr<Customer> lastServed;
    size_t capacity;
    double totalCassa = 0;
    bool isOpen = true;

public:
    ShopQueue(size_t max_len) : capacity(max_len) {}

    virtual void enqueue(shared_ptr<Customer> c) {
        if (!isOpen) {
            cout << "Shop is closed! Cannot add customer.\n";
            return;
        }
        if (line.size() >= capacity) {
            cout << "Queue is full. Customer " << c->name << " can't enter.\n";
            return;
        }
        line.push_back(c);
        cout << "+ " << c->name << " is in queue\n";
    }
    virtual void dequeue() {
        if (!isOpen) {
            cout << "Shop is closed! No service now.\n";
            return;
        }
        if (line.empty()) {
            cout << "Queue is empty\n";
            return;
        }
        auto c = line.front();
        totalCassa += c->money;
        lastServed = c;
        cout << c->name << " was serviced. Amount: " << c->money << endl;
        line.pop_front();
    }
    void showQueue() const {
        cout << "\nCurrent queue (" << line.size() << "/" << capacity << "):\n";
        if (line.empty()) {
            cout << "Queue is empty\n";
        }
        else {
            for (const auto& c : line) {
                cout << "[ " << c->name << " | prio: " << c->priority << " ] ";
            }
            cout << endl;
        }
        cout << "----------------------------------------\n";
    }
    void showLastServed() {
        if (auto ptr = lastServed.lock()) {
            cout << "Last served: " << ptr->name << endl;
        }
        else {
            cout << "No customer served yet.\n";
        }
    }
    void clearQueue() {
        cout << "Cleaning the queue...\n";
        line.clear();
    }
    void openShop() {
        isOpen = true;
        cout << ">>> Shop is OPEN <<<\n";
    }
    void closeShop() {
        isOpen = false;
        cout << ">>> Shop is CLOSED <<<\n";
    }
    double getCassa() const {
        return totalCassa;
    }
};
class PriorityQueue : public ShopQueue {
public:
    PriorityQueue(size_t max_len) : ShopQueue(max_len) {}

    void enqueue(shared_ptr<Customer> c) override {
        if (!isOpen) {
            cout << "Shop is closed! Cannot add customer.\n";
            return;
        }
        if (line.size() >= capacity) {
            cout << "Queue is full for " << c->name << endl;
            return;
        }
        auto it = line.begin();
        while (it != line.end() && (*it)->priority >= c->priority) {
            ++it;
        }
        line.insert(it, c);
        cout << "+ " << c->name << " entered by priority " << c->priority << endl;
    }
};
void runStoreSimulation() {
    size_t limit;
    cout << "Enter queue capacity: ";
    cin >> limit;
    unique_ptr<ShopQueue> myStore = make_unique<PriorityQueue>(limit);
    cout << "\n>>> Store is OPEN <<<\n";
    int choice;
    do {
        cout << "\n1. New customer"
            << "\n2. Service customer"
            << "\n3. Lunch break (close)"
            << "\n4. Resume work (open)"
            << "\n5. Show last served"
            << "\n6. End shift"
            << "\nChoose: ";
        cin >> choice;
        switch (choice) {
        case 1: {
            string name;
            double price;
            int prio;
            cout << "Name: ";
            cin >> name;
            cout << "Amount: ";
            cin >> price;
            cout << "Priority: ";
            cin >> prio;
            auto newCustomer = make_shared<Customer>(name, price, prio);
            myStore->enqueue(newCustomer);
            break;
        }
        case 2:
            myStore->dequeue();
            break;
        case 3:
            cout << "\n>>> Lunch break <<<\n";
            myStore->closeShop();
            break;
        case 4:
            myStore->openShop();
            break;
        case 5:
            myStore->showLastServed();
            break;
        case 6:
            cout << "\n>>> End of shift <<<\n";
            myStore->clearQueue();
            cout << "Total amount: " << myStore->getCassa() << endl;
            break;
        default:
            cout << "Invalid option\n";
        }
        myStore->showQueue();
    } while (choice != 6);
}
int main() {
    runStoreSimulation();
    return 0;
}