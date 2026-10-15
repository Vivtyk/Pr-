#include <iostream>
using namespace std;

int main() {
    double a, b, c, x, F;
    cout << "Введите значения a, b, c и x: ";
    cin >> a >> b >> c >> x;

    if (c < 0 && b != 0) {
        F = a * x * x + b * b * x;
        cout << "Использована первая ветвь функции.\n";
    } else if (c > 0 && b == 0) {
        if (x + c == 0) {
            cout << "Функция не определена: знаменатель x + c равен нулю.\n";
            return 0;
        }
        F = (x + a) / (x + c);
        cout << "Использована вторая ветвь функции.\n";
    } else {
        if (c == 0) {
            cout << "Функция не определена: c равно нулю.\n";
            return 0;
        }
        F = x / c;
        cout << "Использована третья ветвь функции.\n";
    }

    cout << "F = " << F << '\n';
    return 0;
}
