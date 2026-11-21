#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 10;
    double a[MAX_SIZE][MAX_SIZE];
    int rows, cols;
    double sum = 0.0;
    int count = 0;

    cout << "Vvedite kolichestvo strok i stolbtsov (1..10): ";
    cin >> rows >> cols;

    if (rows < 1 || rows > MAX_SIZE || cols < 1 || cols > MAX_SIZE) {
        cout << "Oshibka: razmery dolzhny byt ot 1 do 10.\n";
        return 1;
    }

    srand(static_cast<unsigned int>(time(nullptr)));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            a[i][j] = (rand() % 201 - 100) / 10.0;
        }
    }

    cout << fixed << setprecision(1);
    cout << "Massiv:\n";

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << setw(7) << a[i][j];
            if (a[i][j] > 0) {
                sum += a[i][j];
                ++count;
            }
        }
        cout << '\n';
    }

    if (count > 0) {
        cout << "Srednee polozhitelnyh elementov = "
             << sum / count << '\n';
    } else {
        cout << "Net polozhitelnyh elementov.\n";
    }

    return 0;
}