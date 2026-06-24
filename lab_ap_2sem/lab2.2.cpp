/*Example of Stack Logic*/
#include <iostream>
#include <cstring>
using namespace std;
struct Phone{
	char model[50];
	double price;
	Phone* next;
};
bool isEmpty(Phone* Top) {
	return Top == nullptr;
}
void push(Phone*& Top, const char* model, double price) {
	Phone* newNode = new Phone;
	strcpy_s(newNode->model, model);
	newNode->price = price;
	newNode->next = Top;
	Top = newNode;
	cout << "Added new phone! Model: " << model << "- Price: " << price << endl;
}
void del(Phone*& Top) {
	if (isEmpty(Top)) {
		cout << "Your list is empty" << endl;
		return;
	}
	Phone* temp = Top;
	cout << "Deleted phone from top" << temp->model << endl;
	Top = Top->next;
	delete temp;
}
void print(Phone* Top) {
	if (isEmpty(Top)) {
		cout << "Your list is empty" << endl;
		return;
	}
	cout << "---- The information of stack ----" << endl;
	Phone* temp = Top;
	while (temp != nullptr) {
		cout << "Phone model:" << temp->model << "- Price: " << temp->price << endl;
		temp = temp->next;
	}
	cout << "-------------------" << endl;
}
void clean(Phone*& Top) {
	while (Top != nullptr) {
		Phone* temp = Top;
		Top = Top->next;
		delete temp;
	}
	cout << "Stack is clean" << endl;
}
void delFirstAdded(Phone*& Top) {
	if (isEmpty(Top)){
		cout << "Your list is empty" << endl;
		return;
	}
	if (Top->next == nullptr) {
		cout << "Only one phone was deleted" << Top->model << endl;
		delete Top;
		Top = nullptr;
		return;
	}
	Phone* tempStack = nullptr;
	while (Top->next != nullptr) {
		Phone* temp = Top;
		Top = Top -> next;
		temp->next = tempStack;
		tempStack = temp;
	}
	cout << "Deleted first phone in stack - "<< Top->model << endl;
	delete Top;
	Top = nullptr;
	while (tempStack != nullptr) {
		Phone* temp = tempStack;
		tempStack = tempStack->next;
		temp->next = Top;
		Top = temp;
	}
}
int main() {
	Phone* myStack = nullptr;
	del(myStack);

	push(myStack, "Samsung",12789);
	push(myStack, "Nokia  ",67800);
	push(myStack, "Poco   ",13000);
	push(myStack, "Redmi  ",9000);
	push(myStack, "Lenovo ",15760);
	push(myStack, "iPhone ",25900);

	print(myStack);
	delFirstAdded(myStack);
	print(myStack);

	clean(myStack);
	return 0;
}