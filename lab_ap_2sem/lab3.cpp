/*Queue - data structure, example without STL*/
#include <iostream>
#include <string>
using namespace std;

struct Student {
	string name;
	int course;
	friend ostream& operator<<(ostream& os, const Student& s) {
		os << s.name << " (" << s.course << " course )";
		return os;
	}
};
template <typename T>
class Queue {
private:
	struct Node {
		T data;
		Node* next;
	};
	Node* frontNode;
	Node* rearNode;
public:
	Queue() {
		frontNode = nullptr;
		rearNode = nullptr;
	}
	bool isEmpty() const {
		return frontNode == nullptr;
	}
	void enqueue(T value) {
		Node* newNode = new Node;
		newNode->data = value;
		newNode->next = nullptr;
		if (isEmpty()) {
			frontNode = rearNode = newNode;
		}
		else {
			rearNode->next = newNode;
			rearNode = newNode;
		}
	}
	void dequeue() {
		if (isEmpty()) {
			cout << "Queue is empty!" << endl;
			return;
		}
		Node* temp = frontNode;
		frontNode = frontNode->next;
		delete temp;
		if (frontNode == nullptr) {
			rearNode = nullptr;
		}
	}
	void display() const {
		if (isEmpty()) {
			cout << "Queue is empyty!" << endl;
			return;
		}
		Node* temp = frontNode;
		cout << "Start ->";
		while (temp != nullptr) {
			cout << "[ " << temp->data << " ]";
			temp = temp->next;
		}
		cout << "<- End\n" << endl;
	}
	~Queue() {
		while (!isEmpty()) {
			dequeue();
		}
	}
};
int main() {
	cout << "1. Queue with numbers:" << endl;
	Queue<int> intQueue;
	intQueue.enqueue(10);
	intQueue.enqueue(20);
	intQueue.enqueue(30);
	intQueue.enqueue(40);
	intQueue.display();
	cout << "Delete first element:" << endl;
	intQueue.dequeue();
	intQueue.display();

	cout << "2. Queue with words:" << endl;
	Queue<string> stQueue;
	stQueue.enqueue("Apple");
	stQueue.enqueue("Samsung");
	stQueue.enqueue("Nokia");
	stQueue.enqueue("Lenovo");
	stQueue.display();
	cout << "Delete first element" << endl;
	stQueue.dequeue();
	stQueue.display();

	cout << "3. Queue with another odjects (struct Student): " << endl;
	Queue<Student> studentQ;
	studentQ.enqueue({ "Ivan", 1 });
	studentQ.enqueue({ "Vasyl", 2 });
	studentQ.enqueue({ "Daria", 3 });
	studentQ.enqueue({ "Katya", 4 });
	studentQ.display();
	cout << "Delete first student:" << endl;
	studentQ.dequeue();
	studentQ.display();
	return 0;
}