#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double r1, r2, p1, p2, a, b;
    cin >> r1 >> p1 >> r2 >> p2;
    a = r1 * r2 * (cos(p1) * cos(p2) - sin(p1) * sin(p2));
    b = r1 * r2 * (sin(p1) * cos(p2) + sin(p2) * cos(p1));
    cout.setf(ios::fixed);
    if (a + 0.005 >= 0 && a < 0)
        cout << "0.00";
    else
        cout << fixed << setprecision(2) << a;
    if (b >= 0)
        cout << fixed << setprecision(2) << "+" << b << "i";
    else if (b + 0.005 >= 0)
        cout << "+0.00i";
    else
        cout << fixed << setprecision(2) << b << "i";
    return 0;
}