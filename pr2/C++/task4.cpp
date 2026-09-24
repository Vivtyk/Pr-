#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long l, w, h;
        cin >> l >> w >> h;

        long long area = 2 * (l + w) * h;

        long long cans = (area + 15) / 16;

        cout << cans << "\n";
    }

    return 0;
}