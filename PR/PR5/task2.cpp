#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Vvedite n: ";
    cin >> n;

    if (n < 1) {
        cout << "Oshibka: n dolzhno byt naturalnym.\n";
        return 1;
    }

    double sumSin = 0.0;
    double sumCos = 0.0;
    double y = 1.0;
    int i = 1;

    while (i <= n) {
        sumSin += sin(i);
        sumCos += cos(i);

        if (fabs(sumSin) < 1e-12) {
            cout << "Oshibka: znamenatel raven nuly.\n";
            return 1;
        }

        y *= sumCos / sumSin;
        ++i;
    }

    cout << fixed << setprecision(6);
    cout << "y = " << y << '\n';

    return 0;
}