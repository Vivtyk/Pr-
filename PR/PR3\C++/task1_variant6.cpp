#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y, z;

    cout << "Введите три действительных числа: ";
    cin >> x >> y >> z;

    cout << "Начальные значения: x = " << x
         << ", y = " << y << ", z = " << z << '\n';

    if (x * y * z <= 200) {
        if (x >= y && x >= z)
            x = y + z;
        else if (y >= x && y >= z)
            y = x + z;
        else
            z = x + y;

        cout << "Произведение не больше 200: наибольшее число заменено суммой двух других.\n";
    } else {
        if (x <= y && x <= z)
            x = fabs(y - z);
        else if (y <= x && y <= z)
            y = fabs(x - z);
        else
            z = fabs(x - y);

        cout << "Произведение больше 200: наименьшее число заменено разностью двух других.\n";
    }

    cout << "Конечные значения: x = " << x
         << ", y = " << y << ", z = " << z << '\n';
    return 0;
}
