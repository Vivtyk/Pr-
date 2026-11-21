#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 10;
    int a[MAX_SIZE][MAX_SIZE];
    int rows, cols;

    cout << "Vvedite kolichestvo strok i stolbtsov (1..10): ";
    cin >> rows >> cols;

    if (rows < 1 || rows > MAX_SIZE || cols < 1 || cols > MAX_SIZE) {
        cout << "Oshibka: razmery dolzhny byt ot 1 do 10.\n";
        return 1;
    }

    srand(static_cast<unsigned int>(time(nullptr)));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            a[i][j] = rand() % 11 - 5;
        }
    }

    cout << "Massiv:\n";

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << setw(5) << a[i][j];
        }
        cout << '\n';
    }

    long long sumProducts = 0;

    for (int j = 0; j < cols; ++j) {
        long long product = 1;

        for (int i = 0; i < rows; ++i) {
            product *= a[i][j];
        }

        cout << "Proizvedenie stolbtsa " << j + 1
             << " = " << product << '\n';

        sumProducts += product;
    }

    cout << "Summa proizvedeniy stolbtsov = "
         << sumProducts << '\n';

    return 0;
}