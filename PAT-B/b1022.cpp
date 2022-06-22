#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    int s[100];
    cin >> a >> b >> d;
    c = a + b;
    if (c == 0) cout << '0';
    else {
        int cnt = 0;
        while (c != 0) {
            s[cnt++] = c % d;
            c /= d;
        }
        for (int i = cnt - 1; i >= 0; i--)
            cout << s[i];
    }
    return 0;
}