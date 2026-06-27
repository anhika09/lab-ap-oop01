/*Queue Example*/
#include<iostream>
using namespace std;
class Queue {
private:
	struct Node {
		int data;
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
	void enqueue(int data) {
		Node* newNode = new Node;
		newNode->data = data;
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
	void clear() {
		while (!isEmpty()) {
			dequeue();
		}
	}
};
int main() {
	Queue q;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	cout << "The elements of Queue:" << endl;
	q.display();
	cout << "Deleting first in element:" << endl;
	q.dequeue();
	q.display();
	cout << "Deleting queue..." << endl;
	q.clear();
	cout << "Trying to read queue:" << endl;
	q.display();
	return 0;
}