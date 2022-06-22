/**
*@Created by gamilian on 2021/6/7.
*/

#include <bits/stdc++.h>

using namespace std;
int m, x, y;

void print(double a) {
    if (m == a) cout << " Ping";
    else if (m < a) cout << " Cong";
    else cout << " Gai";
}

int main() {
    cin >> m >> x >> y;
    for (int i = 9; i > 0; i--) {
        for (int j = 9; j >= 0; j--) {
            if (abs((i - j) * 9) * 1.0 / x * y == (j * 10 + i)) {
                cout << i << j;
                print(10 * i + j);
                print(10 * j + i);
                print((j * 10 + i) / (double) y);
                return 0;
            }
        }
    }
    cout << "No Solution";
    return 0;
}

