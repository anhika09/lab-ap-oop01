/*Multiple inheritance, Virtual inheritance - OOP*/
#include <iostream>
using namespace std;
class B1 {
	int b1;
public:
	B1(int x) : b1(x) {
		cout << "B1 was created" << endl;
	};
	virtual void show() {
		cout << "Class B1: " << b1 << endl;
	}
};
class B2 {
	int b2;
public:
	B2(int x) : b2(x) {
		cout << "B2 was created" << endl;
	};
	virtual void show() {
		cout << "Class B2: " << b2 << endl;
	}
};
class D1 :virtual public B1 {
	int d1;
public:
	D1(int x, int y) : B1(x), d1(y) {
		cout << "D1 was created" << endl;
	}
	void show() override {
		cout << "Class D1: " << d1 << endl;
	}
};
class D2 : virtual private B1 {
	int d2;
public:
	D2(int x, int y) : B1(x), d2(y) {
		cout << "D2 was created" << endl;
	}
	void show() override {
		cout << "Class D2: " << d2 << endl;
	}
};
class D4 : public D1, public D2, public B2 {
protected:
	int d4;
public:
	D4(int x1, int x2, int x3, int x4, int x5)
		:B1(x1), D1(x1, x2), D2(x1, x3), B2(x4), d4(x5) {
		cout << "D4 was created" << endl;
	}
	void show() override {
	    B1::show();
		D1::show();
		D2::show();
		B2::show();
		cout << "Class D4: " << d4 << endl;
	}
};
int main() {
	cout << "Showing class hierarchy : " << endl;
	D4 d(10, 20, 30, 40, 50);
	B1* ptr = &d;
	ptr->show();
	return 0;
}
