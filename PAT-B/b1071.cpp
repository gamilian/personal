/**
*@Created by gamilian on 2021/5/31.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int T, K;
    cin >> T >> K;
    bool flag = true;
    for (int i = 0; i < K; ++i) {
        int n1, b, t, n2;
        cin >> n1 >> b >> t >> n2;
        if (flag) {
            if (T == 0) {
                cout << "Game Over.";
                flag = false;
            } else if (t > T) {
                cout << "Not enough tokens.  Total = " << T << '.' << endl;
            } else if ((n2 > n1) == b) {
                T += t;
                cout << "Win " << t << "!  Total = " << T << '.' << endl;
            } else if ((n2 > n1) != b) {
                T -= t;
                cout << "Lose " << t << ".  Total = " << T << '.' << endl;
            }
        }
    }
    return 0;
}

