#include <iostream>

using namespace std;

int main() {
    double x1, y1, z1;
    double x2, y2, z2;

    cout << "Vedite x1 y1 z1 (probel): ";
    cin >> x1 >> y1 >> z1;

    cout << "Vedite x2 y2 z2 (probel): ";
    cin >> x2 >> y2 >> z2;

    double px = x1 * x2;
    double py = y1 * y2;
    double pz = z1 * z2;

    double dobutok = px + py + pz;

    cout << "\n rezultaty 1:" << endl;
    cout << "x1 * x2 = " << px << endl;
    cout << "y1 * y2 = " << py << endl;
    cout << "z1 * z2 = " << pz << endl;

    cout << "Skalyarnoe  = " << dobutok << endl;

    return 0;
}