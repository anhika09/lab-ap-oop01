/*Templates - example with file streams*/
#include <iostream>
#include <vector>
#include <list>
#include <fstream>
using namespace std;

template<typename T>
class NumberProcessor {
private:
	vector<T> data;
public:
	bool writeToFile(const string& filename, const vector<T>& input) {
		ofstream file(filename);
		if (!file) {
			cout << "File was`t created" << endl;
			return false;
		}
		for (const T& x : input) {
			file << x << " ";
		}
		file.close();
		return true;
	}
	bool readFromFile(const string& filename) {
		ifstream file(filename);
		if (!file) {
			cout << "File can`t be opened";
			return false;
		}
		T num;
		while (file >> num) {
			data.push_back(num);
		}
		file.close();
		return true;
	}
	void printVector(const string& label)const {
		cout << label << endl;
		for (const T& x : data) {
			cout << x << " ; ";
		}
		cout << endl;
	}
	void removePositive() {
		for (auto it = data.begin(); it != data.end(); ) {
			if (*it > 0)
				it = data.erase(it);
			else
				++it;
		}
	}
	list <T> toReversedList() const {
		return list<T>(data.rbegin(), data.rend());
	}
	void printList(const list<T>lst, const string& label) {
		cout << label << endl;
		for (const T& x : lst) {
			cout << x << " ; ";
		}
		cout << endl;
	}
};
int main() {
	NumberProcessor<double> pro;
	vector<double> testData = { 3.5, -1.2, 7, -4.8, 0, -9.1 };
	pro.writeToFile("input.txt", testData);
	pro.readFromFile("input.txt");
	pro.printVector("Vector before remove positive numbers :");
	pro.removePositive();
	pro.printVector("Vector after deleting :");
	auto lst = pro.toReversedList();
	pro.printList(lst, "List in reversed form:");
	return 0;
}