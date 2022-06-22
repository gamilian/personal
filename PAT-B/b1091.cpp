/**
*@Created by gamilian on 2021/6/7.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int x, n = 1;
        cin >> x;
        string str1 = to_string(x);
        for (; n < 10; ++n) {
            string str2 = to_string(x * x * n);
            int k = str2.length() - 1, l = str1.length() - 1;
            for (; k >= 0 && l >= 0; k--, l--) {
                if (str2[k] != str1[l]) break;
            }
            if (l == -1) {
                cout << n << ' ' << x * x * n << endl;
                break;
            }
        }
        if (n == 10)
            cout << "No" << endl;
    }
    return 0;
}

