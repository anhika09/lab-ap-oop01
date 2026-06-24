/*Lists - data structure, example of a Circular List without STL*/
# include <iostream>
# include <Windows.h>
using namespace std;
struct Node {
	char letters;
	Node* next;
};
class CircularLinkedList {
private:
	Node* head;
public:
	CircularLinkedList();
	void addLetter(char letter);
	void deleteLetter();
	void printList();
	void clearList();
};
CircularLinkedList::CircularLinkedList() {
	head = new Node;
	head->next = head;
}
void CircularLinkedList::addLetter(char letter) {
	Node* newNode = new Node;
	newNode->letters = letter;

	Node* temp = head;
	while (temp->next != head) {
		temp = temp->next;
	}
	temp->next = newNode;
	newNode->next = head;
}
void CircularLinkedList::deleteLetter() {
	if (head->next == head) {
		return;
	}
	Node* temp = head;
	while (temp->next->next != head) {
		temp = temp->next;
	}
	Node* last = temp->next;
	temp->next = head;
	delete last;
}
void CircularLinkedList::printList() {
	if (head->next == head) {
		cout << "List is empty" << endl;
		return;
	}
	Node* temp = head->next;
	while (temp != head) {
		cout << temp->letters << " ";
		temp = temp->next;
	}
	cout << endl;
}
void CircularLinkedList::clearList() {
	Node* temp = head->next;
	while (temp != head) {
		Node* toDelete = temp;
		temp = temp->next;
		delete toDelete;
	}
	delete head;
	head = nullptr;
}
int main() {
	CircularLinkedList list;
	list.addLetter('A');
	list.addLetter('B');
	list.addLetter('C');
	list.addLetter('D');
	cout << "First list:" << endl;
	list.printList();

	cout << "Delete last letter!" << endl << endl;
	list.deleteLetter();

	cout << "List after delete:" << endl;
	list.printList();

	list.clearList();
	return 0;
}