#include <iostream>
using namespace std;

int main() {
    int A, B, C;

    cout << " A, B, C: ";
    cin >> A >> B >> C;

    bool result = (A < 0) || (B < 0) || (C < 0);

    cout << boolalpha << result << '\n';
    return 0;
}