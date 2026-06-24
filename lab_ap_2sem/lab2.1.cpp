/*Stack - data structure, example without STL*/
#include <iostream>
using namespace std;
struct Stack {
	int inf;
	Stack* next;
};
bool isEmpty(Stack* Top) {
	return Top == nullptr;
}
void Push(Stack*& Top, int newElem) {
	Stack* q = new Stack;
	q->inf = newElem;
	q->next = Top;
	Top = q;
}
int Pop(Stack*& Top) {
	if (isEmpty(Top)) {
		cout << "Stack is empty" << endl;
		return -1;
	}
	Stack* p = Top;
	int val = p->inf;
	Top = Top->next;
	delete p;
	return val;
}
void Print(Stack* Top) {
	if (isEmpty(Top)) {
		cout << "Stack is empty." << endl;
		return;
	}
	Stack* p = Top;
	cout << "Top -> ";
	while (p != nullptr) {
		cout << p->inf << " ";
		p = p->next;
	}
	cout << "<- End" << endl;
}
int Peek(Stack* Top) {
	if (isEmpty(Top)) return -1;
	return Top->inf;
}
void SortStack(Stack*& originalTop) {
	Stack* tempStack = nullptr;
	while (!isEmpty(originalTop)) {
		int temp = Pop(originalTop);
		while (!isEmpty(tempStack) && Peek(tempStack) > temp) {
			Push(originalTop, Pop(tempStack));
		}
		Push(tempStack, temp);
	}
	while (!isEmpty(tempStack)) {
		Push(originalTop, Pop(tempStack));
	}
}
void Clear(Stack*& Top) {
	while (!isEmpty(Top)) {
		Pop(Top);
	}
}
int main() {
	Stack* myStack = nullptr;
	Push(myStack, 34);
	Push(myStack, 3);
	Push(myStack, 31);
	Push(myStack, 98);
	Push(myStack, 92);
	Push(myStack, 23);

	cout << "--- Stack before sort ---" << endl;
	Print(myStack);
	SortStack(myStack);

	cout << "\n--- Stack after sort ---" << endl;
	Print(myStack);
	Clear(myStack);

	return 0;
}