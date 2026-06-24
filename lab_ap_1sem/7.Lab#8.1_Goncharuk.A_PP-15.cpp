/*Тема - Структури та об'єднання в мові С++. Завдання - Скласти програму що дає змогу - в 
файлі записано прізвище студента і його оцінки за останню сесію. 
Вивести на друк прізвище і середній бал студентів, які мають середній 
бал вищий за середній бал групи. Всі вхідні дані беруться з текстового 
файлу (створити не менше десяти відповідних записів у файлі). Ввід-вивід 
даних та виконання інших окремих логічних дій необхідно реалізувати в 
окремих функціях. У головній функції необхідно виконувати лише їх виклик. 
Використання глобальних змінних не допускається. Інформація повинна 
передаватися у функції лише за допомогою параметрів. */
# include <iostream>
# include <fstream>
# include <vector>
# include <sstream>
# include <iomanip>
# include <string>

using namespace std;

struct Student {
	string surname;
	vector<int> grades;
	double averageGrade;
};
void readListFromFile(const string& filename, vector<Student>& students);
void calculateStudentAverages(vector<Student>& students);
double calculateGroupAverage(const vector<Student>& students);
void printTopStudents(const vector<Student>& students, double groupAvg);
int main(int argc, char* argv[]) {
	string filename = "C:\\Students.grades.txt";
	vector<Student> group;
	
	readListFromFile(filename, group);
	if (group.empty()) {
		cout << "The file is empty" << endl;
		return 1;
	}
	calculateStudentAverages(group);
	double groupAvg = calculateGroupAverage(group);
	cout << "The group avarage grade:" << groupAvg << endl;
	printTopStudents(group, groupAvg);
		return 0;
}
void readListFromFile(const string& filename, vector<Student>& students) {
	ifstream file(filename);
	if (!file.is_open()) {
		cout << "File could not be opened" << filename << endl;
		return;
	}
	cout << "List of grades:" << endl;
	string line;
	int Counter = 1;
	while (getline(file, line)) {
		if (line.empty()) continue;
		stringstream ss(line);
		Student tempStudent;
		ss >> tempStudent.surname;
		int grade;
		while (ss >> grade) {
			tempStudent.grades.push_back(grade);
		}
		cout << setw(12) << left << tempStudent.surname << " Grades: ";
		for (int i = 0; i < tempStudent.grades.size(); i++) {
			cout << tempStudent.grades[i] << " ";
		}
		cout << endl;
		
		students.push_back(tempStudent);
	}
	file.close();
}
void calculateStudentAverages(vector<Student>& students) {
	for (int i = 0; i < students.size(); i++) {
		double sum = 0;
		if (students[i].grades.empty()) {
			students[i].averageGrade = 0;
			continue;
		}
		for (int j = 0; j < students[i].grades.size(); j++) {
			sum += students[i].grades[j];
		}
		students[i].averageGrade = sum / students[i].grades.size();
	}
}
double calculateGroupAverage(const vector<Student>& students) {
	double totalSum = 0;
	for (int i = 0; i < students.size(); i++) {
		totalSum += students[i].averageGrade;
	}
	return totalSum / students.size();
}
void printTopStudents(const vector<Student>& students, double groupAvg) {
	cout << "Students who have grades above average:" << endl;
	cout << "______________________________" << endl;
	for (int i = 0; i < students.size(); i++) {
	if (students[i].averageGrade > groupAvg) {
		cout << setw(5) << left << "Surname:" << students[i].surname 
			<< left << " - " << students[i].averageGrade << endl;
	}
    }
}

