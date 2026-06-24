/*Exeptions - example with stack*/
#include <iostream>
#include <stdexcept>
using namespace std;
struct Node{
	int data;
	Node* next;
};
class Stack {
private:
	Node* top;
public:
	Stack() {
		top = nullptr;
	}
	bool isEmpty() {
		return top == nullptr;
	}
	void push(int value) {
		Node* newNode = new Node;
		newNode->data = value;
		newNode->next = top;
		top = newNode;
	}
	int peek() {
		try {
			if (isEmpty()) {
				throw runtime_error("Stack is empty");
			}
			return top->data;
		}
		catch (const exception& e) {
			cout << e.what() << endl;
			return -1;
		}
	}
	void pop() {
		try {
			if (isEmpty()) {
				throw runtime_error("Cannot pop from empty stack!");
			}
			Node* temp = top;
			top = top->next;
			delete temp;
		}
		catch (const exception& e) {
			cout << e.what() << endl;
		}
	}
	void print() {
		try {
			if (isEmpty()) {
				throw runtime_error("Stack is empty!");
			}
			Node* temp = top;
			while (temp != nullptr) {
				cout << temp->data << " ], [ ";
				temp = temp->next;
			}
		}
		catch (const exception& e) {
			cout << e.what() << endl;
		}
	}
	~Stack() {
		while (!isEmpty()) {
			pop();
		}
	}
};
int main() {
	Stack s;
	cout << "Trying to read from empty stack..." << endl;
	s.print();
	s.push(1);
	s.push(2);
	cout << "Top -> [ ";
	s.print();
	cout << " ] <- End" << endl;
	s.pop();
	s.pop();
	cout << "Trying to delete from empty stack..." << endl;
	s.pop();
	cout << "Trying to read from empty stack..." << endl;
	s.peek();
	return 0;
}