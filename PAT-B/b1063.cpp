#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    double max = 0;
    for (int i = 0; i < n; ++i) {
        double a, b, sum;
        cin >> a >> b;
        sum = a * a + b * b;
        max = sum > max ? sum : max;
    }
    cout << fixed << setprecision(2) << sqrt(max);
    return 0;
}