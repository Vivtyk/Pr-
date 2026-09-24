#include <iostream>

using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    if (a % b == 0) {
        cout << "Divisible" << endl;
    } else {
        cout << a / b << " " << a % b << endl;
    }

    return 0;
}
