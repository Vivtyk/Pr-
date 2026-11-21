#include <iostream>
using namespace std;

int main() {
    int K, N;

    cout << "Vvedite K i N (N > 0): ";
    cin >> K >> N;

    if (N <= 0) {
       cout << "Oshibka: N dolzhno byt polozhitelnym.\n";
        return 1;
    }

    for (int i = 0; i < N; ++i) {
        cout << K << (i + 1 == N ? '\n' : ' ');
    }

    return 0;
}