#include <iostream>
using namespace std;

int main() {
    int n;
    long long sum = 0;

    cout << "Vvedite n: ";
    cin >> n;

    if (n < 1) {
        cout << "Oshibka: n dolzhno byt naturalnym.\n";
        return 1;
    }

    for (int i = 3; i <= n; i += 3) {
        sum += i;
    }

    cout << "Summa = " << sum << '\n';
    return 0;
}