#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100;
    double a[MAX_SIZE];
    int n;

    cout << "Vvedite kolichestvo elementov (1..100): ";
    cin >> n;

    if (n < 1 || n > MAX_SIZE) {
        cout << "Oshibka: razmer dolzhen byt ot 1 do 100.\n";
        return 1;
    }

    srand(static_cast<unsigned int>(time(nullptr)));

    for (int i = 0; i < n; ++i) {
        a[i] = (rand() % 201 - 100) / 10.0;
    }

    double minimum = a[0];

    for (int i = 1; i < n; ++i) {
        if (a[i] < minimum) {
            minimum = a[i];
        }
    }

    int count = 0;

    for (int i = 0; i < n; ++i) {
        if (a[i] > minimum + 5.0) {
            ++count;
        }
    }

    cout << fixed << setprecision(1);
    cout << "Massiv: ";

    for (int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }

    cout << "\nMinimalny element = " << minimum;
    cout << "\nKolichestvo elementov bolshe minimuma na 5 = "
         << count << '\n';

    return 0;
}