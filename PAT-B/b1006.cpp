#include <iostream>

using namespace std;

int main() {
    int n, l, m, r;
    string s;
    cin >> n;
    l = n / 100;
    m = n / 10 % 10;
    r = n % 10;
    for (int i = 0; i < l; ++i)
        cout << "B";
    for (int i = 0; i < m; ++i)
        cout << "S";
    for (int i = 0; i < r; ++i)
        cout << i + 1;
    return 0;
}