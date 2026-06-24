/*Operator overloading - (- * == != << >>) */
#include <iostream>
using namespace std;

class Vector {
private:
	double x;
	double y;
	double z;
public:
	Vector() : x(0), y(0), z(0) {};
	Vector(double xVel, double yVel, double zVel)
		: x(xVel), y(yVel), z(zVel) {
	}
	Vector& operator=(const Vector& other) {
		if (this != &other) {
			x = other.x;
			y = other.y;
			z = other.z;
		}
		return *this;
	}
	Vector operator-(const Vector& other)const {
		return Vector(x - other.x, y - other.y, z - other.z);
	}
	Vector operator*(double k)const {
		return Vector(x * k, y * k, z * k);
	}
	bool  operator==(const Vector& other)const {
		return (x == other.x &&
			y == other.y &&
			z == other.z);
	}
	bool operator !=(const Vector& other)const {
		return !(*this == other);
	}
	friend ostream& operator<<(ostream& out, const Vector& v) {
		out << "( " << v.x << " ; " << v.y << " ; " << v.z << " )";
		return out;
	}
	friend istream& operator>>(istream& in, Vector& v) {
		while (true) {
			cout << "Enter x: ";
			if (in >> v.x) break; 
				cout << "Invalid input for x! Try again: \n";
				in.clear();
				in.ignore(1000, '\n');
		}
		while (true) {
			cout << "Enter y: ";
			if (in >> v.y) break;
				cout << "Invalid input for y! Try again: \n";
				in.clear();
				in.ignore(1000, '\n');
		}
		while (true) {
			cout << "Enter z: ";
			if (in >> v.z) break; 
				cout << "Invalid input for z! Try again: \n";
				in.clear();
				in.ignore(1000, '\n');
		}
		return in;
	}
};
int main() {
	Vector v1, v2, result;
	int choice = -1;
	double number;
	while (choice != 0) {
		cout << "\n====== MENU ======\n";
		cout << "1. Enter vectors\n";
		cout << "2. Subtract vectors (v1 - v2)\n";
		cout << "3. Multiply v1 by number\n";
		cout << "4. Compare vectors\n";
		cout << "5. Assign v2 to v1\n";
		cout << "0. Exit\n";

		while(true){
		cout << "Choose: ";
		if(cin >> choice) break;
		cout << "Incorrect input! Try again:";
		cin.clear();
		cin.ignore(1000, '\n');
		}

		switch (choice) {
		case 1:
			cout << "Enter vector v1:\n";
			cin >> v1;
			cout << "Enter vector v2:\n";
			cin >> v2;
			cout << "Result:" << v1 << " ; " << v2 << endl;
			break;
		case 2:
			result = v1 - v2;
			cout << "Result: " << result << endl;
			break;
		case 3:
			cout << "Enter number: ";
			while (true) {
				if (cin >> number) break;
				cout << "Incorrect input. Try again! "<< endl;
				cin.clear();
				cin.ignore(1000, '\n');
			}
			result = v1 * number;
			cout << "Result: " << result << endl;
			break;
		case 4:
			if (v1 == v2)
				cout << "Vectors are equal\n";
			else
				cout << "Vectors are NOT equal\n";
			break;
		case 5:
			v1 = v2;
			cout << "v1 after assignment: " << v1 << endl;
			break;
		case 0:
			cout << "Exiting...\n";
			break;
		default:
			cout << "Invalid choice!\n";
		}
	} 
	return 0;
}