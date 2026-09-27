#include <iostream>
#include <math.h> 

using namespace std;

int main() {
    cout << "Vedite a: ";
    double a;
    cin >> a;

    cout << "Vedite b: ";
    double b;
    cin >> b;


    int a1 = a;
    int b1 = b;


    int p1 = pow(a1 - b1, 3);
    int p2 = pow(a1, 3) - 3 * a1 * pow(b1, 2);
    int chyselnyk1 = p1 - p2;
    int znamennyk1 = pow(b1, 3) - 3 * pow(a1, 2) * b1;
    int res1 = chyselnyk1 / znamennyk1;


    float a2 = a;
    float b2 = b;

    float p3 = pow(a2 - b2, 3);
    float p4 = pow(a2, 3) - 3 * a2 * pow(b2, 2);
    float chyselnyk2 = p3 - p4;
    float znamennyk2 = pow(b2, 3) - 3 * pow(a2, 2) * b2;
    float res2 = chyselnyk2 / znamennyk2;


    double a3 = a;
    double b3 = b;

    double p5 = pow(a3 - b3, 3);
    double p6 = pow(a3, 3) - 3 * a3 * pow(b3, 2);
    double chyselnyk3 = p5 - p6;
    double znamennyk3 = pow(b3, 3) - 3 * pow(a3, 2) * b3;
    double res3 = chyselnyk3 / znamennyk3;

    cout << "\nRezultaty:" << endl;
    cout << "int: " << res1 << endl;
    cout << "float: " << res2 << endl;
    cout << "double: " << res3 << endl;

    return 0;
}