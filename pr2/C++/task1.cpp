#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;

    int first_digit = a / 10;
    int second_digit = a % 10;

    cout << first_digit << " " << second_digit << endl;

    return 0;
}