#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;

double** createMatrix(int rows, int cols) {
    double** matrix = new double*[rows];

    for (int i = 0; i < rows; ++i) {
        matrix[i] = new double[cols];
    }

    return matrix;
}

void fillMatrix(double** matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = (rand() % 201 - 100) / 10.0;
        }
    }
}

void printMatrix(double** matrix, int rows, int cols) {
    cout << fixed << setprecision(1) << "Massiv:\n";

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << setw(7) << matrix[i][j];
        }
        cout << '\n';
    }
}

double sumEvenPlaces(const double* row, int cols) {
    double sum = 0.0;

    for (int j = 1; j < cols; j += 2) {
        sum += row[j];
    }

    return sum;
}

int findMinRow(double** matrix, int rows, int cols) {
    int minRow = 0;
    double minSum = sumEvenPlaces(matrix[0], cols);

    cout << "Summy po strokam:\n";
    cout << "Stroka 1: " << minSum << '\n';

    for (int i = 1; i < rows; ++i) {
        double currentSum = sumEvenPlaces(matrix[i], cols);
        cout << "Stroka " << i + 1 << ": " << currentSum << '\n';

        if (currentSum < minSum) {
            minSum = currentSum;
            minRow = i;
        }
    }

    return minRow;
}

void deleteMatrix(double** matrix, int rows) {
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }

    delete[] matrix;
}

int main() {
    int rows, cols;

    cout << "Vvedite kolichestvo strok i stolbtsov (1..100): ";
    cin >> rows >> cols;

    if (rows < 1 || rows > 100 || cols < 1 || cols > 100) {
        cout << "Oshibka: razmery dolzhny byt ot 1 do 100.\n";
        return 1;
    }

    srand(static_cast<unsigned int>(time(nullptr)));

    double** matrix = createMatrix(rows, cols);
    fillMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);

    int minRow = findMinRow(matrix, rows, cols);
    cout << "Nomer stroki s minimalnoy summoy = " << minRow + 1 << '\n';

    deleteMatrix(matrix, rows);
    return 0;
}