#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y, z;

    cout << "Введіть три дійсних числа: ";
    cin >> x >> y >> z;

    cout << "Початкові значення: x = " << x
         << ", y = " << y << ", z = " << z << '\n';

    if (x * y * z <= 200) {
        if (x >= y && x >= z)
            x = y + z;
        else if (y >= x && y >= z)
            y = x + z;
        else
            z = x + y;

        cout << "Добуток не перевищує 200: найбільше число замінено сумою двох інших.\n";
    } else {
        if (x <= y && x <= z)
            x = abs(y - z);
        else if (y <= x && y <= z)
            y = abs(x - z);
        else
            z = abs(x - y);

        cout << "Добуток більший за 200: найменше число замінено різницею двох інших.\n";
    }

    cout << "Кінцеві значення: x = " << x
         << ", y = " << y << ", z = " << z << '\n';

    return 0;
}
