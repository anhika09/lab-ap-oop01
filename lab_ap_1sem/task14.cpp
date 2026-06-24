/*Написати програму, що виконує завдання: Створити наступну функцію. 
З бінарного файлу F1.dat прочитати матрицю дійсних чотирибайтових чисел А(7,7).
Знайти суму елементів, розміщених під головною діагоналлю. Результат записати у бінарний файл F2.dat*/
#include <iostream>
#include<fstream>
#include<ctime>
#include <cstdlib>
#define N 7
using namespace std;

void OurMatrix() {
    float matrix[N][N];
    cout << "Random matrix:"<< endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrix[i][j] = rand() % 5 + 1;
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }
    ofstream file("F1.dat");
    file.write((char*)&matrix, sizeof(matrix));
    file.close();
    cout << "Test file F1.dat created!" << endl;
}

void ReadSolve() {
    float matrix[N][N];
    float sum = 0;

    ifstream file("F1.dat", ios::binary);
    if (file.is_open()) {
        file.read((char*)&matrix, sizeof(matrix));
        file.close();
    }
    else {
        cout << "File cant't be opean!" << endl;
        return;
    }
    cout << "Sum of matrix elements belong main diagonaly:";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i > j) {
                sum += matrix[i][j];
                cout << matrix[i][j] << " + ";
            }
        }
    }
    cout << "\nTotal Sum: " << sum << endl;

    ofstream outFile("F2.dat", ios::binary);
    outFile.write((char*)&sum, sizeof(sum));
    outFile.close();
    cout << "Result saved to F2.dat!" << endl;
}
int main(){
    srand(time(NULL));
    OurMatrix();
    ReadSolve();

	return 0;
}


