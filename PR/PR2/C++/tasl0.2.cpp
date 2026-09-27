#include <iostream>

using namespace std;

int main() {
    int m, n;

    cout << "Vedite m: ";
    cin >> m;
    cout << "Vedite n: ";
    cin >> n;

    int m_do = m;
    int n_do = n;

    int rezultat = m - ++n;

    cout << "\nDo :     m = " << m_do << ", n = " << n_do << endl;
    cout << "Rezultat m - ++n: " << rezultat << endl;
    cout << "Posle :  m = " << m << ", n = " << n << endl;

    return 0;
}