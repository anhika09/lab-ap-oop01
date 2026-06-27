/*Stack Example*/
#include <iostream>
using namespace std;
struct Node {
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
	void print() {
		if (isEmpty()) {
			cout << "Stack is empty!";
		}
		Node* temp = top;
		while (temp != nullptr) {
			cout << temp->data << " ], \n [ ";
			temp = temp->next;
		}
	}
	int evenElem() {
		int result = 0;
		if (isEmpty()) {
			cout << "Stack is empty!";
			return 0;
		}
		Node* temp = top;
		while (temp != nullptr) {
			if (temp->data % 2 == 0) {
				result++;
			}
			temp = temp->next;
		}
		return result;
	}
	~Stack() {
		Node* temp;
		while (top != nullptr) {
			temp = top;
			top = top->next;
			delete temp;
		}
	}
};
int main() {
	Stack s;
	cout << "Stack of numbers:" << endl;
	s.push(1);
	s.push(2);
	s.push(32);
	s.push(75);
	s.push(216);
	cout << "Top -> [ ";
	s.print();
	cout << " ] <- End" << endl;
	cout << "Number of even stack elevents:" << endl;
	cout << s.evenElem() << endl;
	return 0;
}