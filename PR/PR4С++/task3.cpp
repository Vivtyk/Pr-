#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double a, b, h;

    cout << "Vvedite nachalo a, konec b i shag h: ";
    cin >> a >> b >> h;

    if (h <= 0 || a > b) {
        cout << "Oshibka: nuzhno h > 0 i a <= b.\n";
        return 1;
    }

    cout << fixed << setprecision(4);
    cout << setw(12) << "x" << setw(16) << "y = sqrt(x)+cos(x)-3" << '\n';

    const double epsilon = 1e-9;

    for (double x = a; x <= b + epsilon; x += h) {
        if (x < 0) {
            cout << setw(12) << x << setw(16) << "ne opredeleno" << '\n';
        } else {
            double y = sqrt(x) + cos(x) - 3;
            cout << setw(12) << x << setw(16) << y << '\n';
        }
    }

    return 0;
}